import requests
import base64
import json
import time
from threading import Timer

"""
(function () {
  'use strict';

  /**
   * @ngdoc service
   * @name smartapFe.factory:Pairing
   *
   * @description
   *
   */
  angular
    .module('smartapFe')
    .factory('Pairing', Pairing);

  function Pairing($http, $rootScope, consts, UserSvc, Taps) {
    var PairingBase = {};
    PairingBase.wificon = '';
    PairingBase.evalveSerial = '';
    PairingBase.evalve = {};
    PairingBase.wifiSettings = {};

    console.log(UserSvc.getUserData());


    PairingBase.start = function () {
      return $http({
        method: 'GET',
        headers: {
          'Authorization': 'Basic ' + btoa("SmarTap" + ":" + "yeswecan")
        },
        url: "http://192.168.1.1"
      });
    }

    function createDataPairing() {
      var data;

      if (PairingBase.wifiSettings.SecurityType == "WPA2") {
        data = {
          "__SL_P_USD": PairingBase.wifiSettings.NetworkName,
          "__SL_P_ENC": "WPA2",
          "__SL_P_PSD": PairingBase.wifiSettings.Password
        }
      } else {
        data = {
          "__SL_P_USD": PairingBase.wifiSettings.NetworkName,
          "__SL_P_ENC": "OPEN"
        }
      }

      if ($rootScope.pairing_k3) {
        let temp3dOrder = PairingBase.evalve.Types.ThirdOrder;
        if ($rootScope.separated_index == 1) {
          PairingBase.evalve.Types.ThirdOrder = PairingBase.evalve.Types.FirstOrder;
          PairingBase.evalve.Types.FirstOrder = temp3dOrder;
        }
        if ($rootScope.separated_index == 2) {
          PairingBase.evalve.Types.ThirdOrder = PairingBase.evalve.Types.SecondOrder;
          PairingBase.evalve.Types.SecondOrder = temp3dOrder;
        }
      }
      if (!$rootScope.old_fw_ver) {
        data["__SL_P_OU1"] = PairingBase.evalve.Types.FirstOrder;
        data["__SL_P_OU2"] = PairingBase.evalve.Types.SecondOrder;
        data["__SL_P_OU3"] = PairingBase.evalve.Types.ThirdOrder;
        data["__SL_P_K3O"] = $rootScope.pairing_k3 ? 'checked' : 'no';
      }
      return data;
    };

    function reConnect() {
      if (PairingBase.wificon) {
        WifiWizard.connectNetwork(PairingBase.wificon, assignTap(), assignTap());
      } else {
        console.log('reConnect error');
      }
    };

    PairingBase.assignTap = function () {
      $rootScope.tapOnline = false;
      $rootScope.isAuthorized = null;
      var assignInterval = setInterval(function () {
        $http.get("https://www.google.com/blank.html").then(function () {
          var curTime = new Date().getTime();
          var userTapsUrl = consts.serverUrl + '/userTaps?access_token=' + UserSvc.getUserData().id;
          var use_FirstOutlet = PairingBase.evalve.Types && PairingBase.evalve.Types.FirstOutlet && PairingBase.evalve.Types.FirstOutlet != "Not in use",
            use_SecondOutlet = PairingBase.evalve.Types && PairingBase.evalve.Types.SecondOutlet && PairingBase.evalve.Types.SecondOutlet != "Not in use",
            use_ThirdOutlet = PairingBase.evalve.Types && PairingBase.evalve.Types.ThirdOutlet && PairingBase.evalve.Types.ThirdOutlet != "Not in use",
            outlet1_order = PairingBase.evalve.Types && PairingBase.evalve.Types.FirstOrder,
            outlet2_order = PairingBase.evalve.Types && PairingBase.evalve.Types.SecondOrder,
            outlet3_order = PairingBase.evalve.Types && PairingBase.evalve.Types.ThirdOrder;

          let evalveSettins = {
            "userID": UserSvc.getUserData().userId,
            "tapSN": PairingBase.evalveSerial,
            "assignTime": curTime,
            "name": PairingBase.evalve.Name,
            "geoPoint": $rootScope.location,
            "outlet1": use_FirstOutlet ? PairingBase.evalve.Types.FirstOutlet : null,
            "outlet2": use_SecondOutlet ? PairingBase.evalve.Types.SecondOutlet : null,
            "outlet3": use_ThirdOutlet ? PairingBase.evalve.Types.ThirdOutlet : null,
            "outlet1_order": outlet1_order ? PairingBase.evalve.Types.FirstOrder : null,
            "outlet2_order": outlet2_order ? PairingBase.evalve.Types.SecondOrder : null,
            "outlet3_order": outlet3_order ? PairingBase.evalve.Types.ThirdOrder : null,
            "isOnline": false,
            "third_knob_seperation": $rootScope.pairing_k3
          }

          $http({
            url: userTapsUrl,
            method: "POST",
            headers: {
              'content-type': 'application/json'
            },
            data: evalveSettins
          }).then(function success(data) {
            var data = data[0];
            $rootScope.internetAvailable = true;
            $rootScope.$broadcast('changePermission', true);
            $rootScope.isAuthorized = true;
            clearInterval(assignInterval);
          }, function (response) {
            if (response.data && response.data.error) {
              if (response.data.error.code == "ER_DUP_ENTRY") {
                $rootScope.internetAvailable = true;
                $rootScope.isAuthorized = true;
                $rootScope.$broadcast('changePermission', true);
                clearInterval(assignInterval);
              }
              else if (response.data.error.message == "Not Authorized") {
                $rootScope.isAuthorized = false;
                clearInterval(assignInterval);
              }
            }
          });
        });
      }, 2000);

      ///******Tap online interval */
      var tapOnlineInterval = setInterval(function () {
        Taps.getTapBySerialNumber(PairingBase.evalveSerial).then(function (response) {
          if (response && response["isOnline"] == true) {
            $rootScope.tapOnline = true;
            clearInterval(tapOnlineInterval);
          }
        }, function (badResponse) { });
      }, 2000);
      ///

      setTimeout(function () { clearInterval(assignInterval); clearInterval(tapOnlineInterval); }, 2 * 60 * 1000); //clear inteval after 2 min (just in case)
    };


    PairingBase.sendParam = function (curScope) {
      var data = createDataPairing();
      // api.postForm("http://192.168.1.1", data);
      $http({
        method: 'POST',
        url: 'http://192.168.1.1',
        headers: {
          'Content-Type': 'application/x-www-form-urlencoded',
          'Authorization': 'Basic ' + btoa("SmarTap" + ":" + "yeswecan")
        },
        transformRequest: function (obj) {
          var str = [];
          for (var p in obj)
            str.push(encodeURIComponent(p) + "=" + encodeURIComponent(obj[p]));
          return str.join("&");
        },
        data: data
      }).then(function () {
        var data2 = {
          "__SL_P_CON": "connect"
        };
        //Region:Second connection
        $http({
          method: 'POST',
          headers: {
            'Authorization': 'Basic ' + btoa("SmarTap" + ":" + "yeswecan")
          },
          url: 'http://192.168.1.1',
          data: data2
        }).then(function success(data) {
          var userTapsUrl = consts.serverUrl + '/userTaps?access_token=' + UserSvc.getUserData().id;
          var tapFilter = encodeURIComponent('{"where":{"serial":' + PairingBase.evalveSerial + '}}');
          var tapsUrl = consts.serverUrl + '/taps?filter=' + tapFilter + '&access_token=' + UserSvc.getUserData().id;
          //reConnect();
          // assignTap();
        }, function (data, status) {
          var tt = ";";
        });
        //EndRegion
      }, function (data, status) {
        var tt = ";";
      });
    };

    return PairingBase;
  }
}());

//# sourceMappingURL=pairing-factory.js.map



"""



SERVER_URL = "192.168.1.1"

class Pairing:
    def __init__(self, user_data, evalve, wifi_settings, root_scope, evalve_ip="192.168.1.1", evalve_port="80"):
        self.wificon = ''
        self.evalve_serial = ''
        self.evalve = evalve
        self.wifi_settings = wifi_settings
        self.user_data = user_data
        self.root_scope = root_scope
        self.evalve_ip = evalve_ip
        self.evalve_port = evalve_port

    def connect(self):
        data = {}
        response = requests.post(f"http://{self.evalve_ip}:{self.evalve_port}", headers=self.headers(), data=data)
        if response.status_code == 200:
            data2 = {
                "__SL_P_CON": "connect"
            }
            response2 = requests.post(f"http://{self.evalve_ip}:{self.evalve_port}", headers=self.headers, data=data2)

            print(f"Code: {response2.status_code}")
            print(f"Body: {response2.content}")
        else:
            print(f"Problem connecting to {self.evalve_ip}:{self.evalve_port}: {response.status_code}")

    def headers(self, content_type=None):
        headers = {
            'Authorization': 'Basic ' + base64.b64encode(b'SmarTap:yeswecan').decode('utf-8')
        }

        if content_type is not None:
            headers['Content-Type'] = content_type

        return headers

    def start(self):
        response = requests.get(f"http://{self.evalve_ip}:{self.evalve_port}", headers=self.headers())
        return response

    def set_dns(self, ip="lb.smartapp-tech.com", port=80):
        data = {
            "__SL_P_DNS": f"{ip}",
            "__SL_P_PRT": f"{port}",
        }

        response = requests.post(f"http://{self.evalve_ip}:{self.evalve_port}",
                                 headers=self.headers(content_type="application/x-www-form-urlencoded"), data=data)

        from pprint import pprint

        print(f"Status Code: {response.status_code}")
        print(f"Body: {response.content}")

    def set_wifi(self):
        data = {
            "__SL_P_USD": "NETGEAR89",
            "__SL_P_ENC": "WPA2",
            "__SL_P_PSD": "quietbug567",
            "__SL_P_CON": "connect",
            "__SL_P_K3O": "checked,"
        }

        response = requests.post(f"http://{self.evalve_ip}:{self.evalve_port}",
                                 headers=self.headers(content_type="application/x-www-form-urlencoded"), data=data)

        print(f"Status Code: {response.status_code}")
        print(f"Body: {response.content}")


    def create_data_pairing(self):
        data = {
            "__SL_P_USD": self.wifi_settings["NetworkName"],
            "__SL_P_ENC": "WPA2" if self.wifi_settings["SecurityType"] == "WPA2" else "OPEN",
        }
        if self.wifi_settings["SecurityType"] == "WPA2":
            data["__SL_P_PSD"] = self.wifi_settings["Password"]

        if self.root_scope["pairing_k3"]:
            temp3d_order = self.evalve["Types"]["ThirdOrder"]
            if self.root_scope["separated_index"] == 1:
                self.evalve["Types"]["ThirdOrder"] = self.evalve["Types"]["FirstOrder"]
                self.evalve["Types"]["FirstOrder"] = temp3d_order
            if self.root_scope["separated_index"] == 2:
                self.evalve["Types"]["ThirdOrder"] = self.evalve["Types"]["SecondOrder"]
                self.evalve["Types"]["SecondOrder"] = temp3d_order

        if not self.root_scope["old_fw_ver"]:
            data["__SL_P_OU1"] = self.evalve["Types"]["FirstOrder"]
            data["__SL_P_OU2"] = self.evalve["Types"]["SecondOrder"]
            data["__SL_P_OU3"] = self.evalve["Types"]["ThirdOrder"]
            data["__SL_P_K3O"] = 'checked' if self.root_scope["pairing_k3"] else 'no'

        return data

    def re_connect(self):
        if self.wificon:
            # Assuming WifiWizard is replaced by some Python equivalent method
            # wifi_connect(self.wificon, self.assign_tap(), self.assign_tap())
            pass
        else:
            print('reConnect error')

    def assign_tap(self):
        self.root_scope["tapOnline"] = False
        self.root_scope["isAuthorized"] = None

        def check_internet():
            try:
                requests.get("https://www.google.com/blank.html")
                cur_time = int(time.time() * 1000)
                user_taps_url = f'{SERVER_URL}/userTaps?access_token={self.user_data["id"]}'
                evalve_settings = {
                    "userID": self.user_data["userId"],
                    "tapSN": self.evalve_serial,
                    "assignTime": cur_time,
                    "name": self.evalve["Name"],
                    "geoPoint": self.root_scope["location"],
                    "outlet1": self.evalve["Types"]["FirstOutlet"] if self.evalve["Types"]["FirstOutlet"] != "Not in use" else None,
                    "outlet2": self.evalve["Types"]["SecondOutlet"] if self.evalve["Types"]["SecondOutlet"] != "Not in use" else None,
                    "outlet3": self.evalve["Types"]["ThirdOutlet"] if self.evalve["Types"]["ThirdOutlet"] != "Not in use" else None,
                    "outlet1_order": self.evalve["Types"]["FirstOrder"],
                    "outlet2_order": self.evalve["Types"]["SecondOrder"],
                    "outlet3_order": self.evalve["Types"]["ThirdOrder"],
                    "isOnline": False,
                    "third_knob_seperation": self.root_scope["pairing_k3"]
                }
                response = requests.post(user_taps_url, headers={'Content-Type': 'application/json'}, data=json.dumps(evalve_settings))
                if response.status_code == 200:
                    self.root_scope["internetAvailable"] = True
                    self.root_scope["isAuthorized"] = True
                else:
                    self.root_scope["isAuthorized"] = False
            except:
                pass

        def check_tap_online():
            try:
                response = requests.get(f'{SERVER_URL}/taps?filter={{"where":{{"serial":{self.evalve_serial}}}}}&access_token={self.user_data["id"]}')
                if response.status_code == 200 and response.json().get("isOnline"):
                    self.root_scope["tapOnline"] = True
            except:
                pass

        assign_interval = Timer(2.0, check_internet)
        assign_interval.start()

        tap_online_interval = Timer(2.0, check_tap_online)
        tap_online_interval.start()

        Timer(120.0, assign_interval.cancel).start()
        Timer(120.0, tap_online_interval.cancel).start()

    def send_param(self):
        data = self.create_data_pairing()
        headers = {
            'Content-Type': 'application/x-www-form-urlencoded',
            'Authorization': 'Basic ' + base64.b64encode(b'SmarTap:yeswecan').decode('utf-8')
        }
        response = requests.post(f"http://{self.evalve_ip}:{self.evalve_port}", headers=headers, data=data)
        if response.status_code == 200:
            data2 = {
                "__SL_P_CON": "connect"
            }
            response2 = requests.post(f"http://{self.evalve_ip}:{self.evalve_port}", headers=headers, data=data2)
            if response2.status_code == 200:
                user_taps_url = f'{SERVER_URL}/userTaps?access_token={self.user_data["id"]}'
                tap_filter = json.dumps({"where": {"serial": self.evalve_serial}})
                taps_url = f'{SERVER_URL}/taps?filter={tap_filter}&access_token={self.user_data["id"]}'
                self.re_connect()
                self.assign_tap()

# Example usage
user_data = {
    "id": "user_access_token",
    "userId": "user_id"
}

evalve = {
    "Types": {
        "FirstOrder": "FirstOrderValue",
        "SecondOrder": "SecondOrderValue",
        "ThirdOrder": "ThirdOrderValue",
        "FirstOutlet": "FirstOutletValue",
        "SecondOutlet": "SecondOutletValue",
        "ThirdOutlet": "ThirdOutletValue"
    },
    "Name": "EvalveName"
}

wifi_settings = {
    "NetworkName": "YourNetwork",
    "SecurityType": "WPA2",
    "Password": "YourPassword"
}

root_scope = {
    "pairing_k3": True,
    "separated_index": 1,
    "old_fw_ver": False,
    "location": "geo_location"
}

pairing = Pairing(user_data, evalve, wifi_settings, root_scope, evalve_ip="192.168.1.1", evalve_port="80")
# pairing.set_dns("noted-socially-snail.ngrok-free.app", "443")
# pairing.set_dns("mytest.smartap-tech.com.tailorswifts.com", "443")
# pairing.set_dns("0.tcp.eu.ngrok.io", 15979)
# pairing.set_dns("myshower.lan", 8443)
pairing.set_wifi()
# pairing.connect()

# pairing.start()
# pairing.send_param()