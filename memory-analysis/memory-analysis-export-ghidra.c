typedef unsigned char   undefined;

typedef unsigned char    undefined1;
typedef unsigned short    undefined2;
typedef unsigned int    undefined4;



void FUN_0000036a(void)

{
  *DAT_00000648 = 1;
  return;
}



void FUN_00000372(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  
  uVar2 = DAT_00000650;
  puVar1 = DAT_0000064c;
  DAT_0000064c[2] = 1;
  FUN_000164e8(uVar2);
  *puVar1 = 1;
  FUN_000164e8(uVar2);
  puVar3 = DAT_00000654;
  *DAT_00000654 = *DAT_00000654 | 2;
  FUN_000164e8(800);
  puVar3[0x3ae] = puVar3[0x3ae] & 0xf7ffffff;
  FUN_00016134(0,1);
  FUN_00014730(1);
  FUN_00013364(&DAT_00028000,0);
  FUN_00015f1c();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_000003c6(void)

{
  _DAT_4000000c = 1;
  return;
}



bool FUN_00002870(void)

{
  return (*DAT_00002b18 & 0xfe) == 0;
}



void FUN_000037a0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_8;
  
  iVar1 = DAT_000038d0;
  if (param_1 != *(byte *)(DAT_000038d0 + 2)) {
    *(char *)(DAT_000038d0 + 2) = (char)param_1;
    local_8 = CONCAT31((int3)((uint)param_4 >> 8),(char)param_1);
    if (*(int *)(iVar1 + 0x30) != 0) {
      FUN_0000bbc8((int *)(iVar1 + 0x30),&local_8,0);
    }
  }
  return;
}



void FUN_000038d4(int *param_1)

{
  undefined uVar1;
  undefined uVar2;
  char cVar3;
  undefined uVar4;
  undefined uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  char *pcVar9;
  
  puVar7 = DAT_00003a7c;
  iVar6 = DAT_00003a78;
  cVar3 = *(char *)(DAT_00003a78 + 0x2d);
  if (*param_1 == 1) {
    *DAT_00003a7c = *DAT_00003a7c | 2;
    if (cVar3 == '\0') {
      *(undefined *)(iVar6 + 0x2d) = 1;
    }
    FUN_00010ddc(iVar6 + 0x38,(int)param_1 + 6,*(undefined *)((int)param_1 + 5));
    *(undefined2 *)(iVar6 + 0x20) = *(undefined2 *)((int)param_1 + 0x4b);
    *(undefined4 *)(iVar6 + 0x1c) = *(undefined4 *)((int)param_1 + 0x47);
    FUN_00010f2c(s__WLAN_EVENT__STA_Connected_to_th_00003c64,iVar6 + 0x38,
                 *(undefined *)(iVar6 + 0x1c),*(undefined *)(iVar6 + 0x1d),
                 *(undefined *)(iVar6 + 0x1e),*(undefined *)(iVar6 + 0x1f),
                 *(undefined *)(iVar6 + 0x20),*(undefined *)(iVar6 + 0x21));
  }
  else if (*param_1 == 2) {
    *DAT_00003a7c = *DAT_00003a7c & 0xfffffffd;
    uVar8 = *puVar7;
    *(undefined *)(iVar6 + 1) = 0;
    *puVar7 = uVar8 & 0xfffffff7;
    if (*(char *)((int)param_1 + 0x4d) == -0x38) {
      uVar1 = *(undefined *)(iVar6 + 0x1e);
      uVar2 = *(undefined *)(iVar6 + 0x1f);
      uVar4 = *(undefined *)(iVar6 + 0x20);
      uVar5 = *(undefined *)(iVar6 + 0x21);
      pcVar9 = s__WLAN_EVENT_Device_disconnected_f_00003bfc;
    }
    else {
      uVar1 = *(undefined *)(iVar6 + 0x1e);
      uVar2 = *(undefined *)(iVar6 + 0x1f);
      uVar4 = *(undefined *)(iVar6 + 0x20);
      uVar5 = *(undefined *)(iVar6 + 0x21);
      pcVar9 = s_F_WLAN_ERROR_Device_disconnected_00003b9b + 1;
    }
    FUN_00010f2c(pcVar9,iVar6 + 0x38,*(undefined *)(iVar6 + 0x1c),*(undefined *)(iVar6 + 0x1d),uVar1
                 ,uVar2,uVar4,uVar5);
    FUN_00011a94(iVar6 + 0x38,0,0x21);
    FUN_00011a94(iVar6 + 0x1c,0,6);
    FUN_000051d2();
  }
  else {
    FUN_00010f2c(s__WLAN_EVENT__Unexpected_event__0_00003cac);
  }
  return;
}



void FUN_00003ad8(int *param_1)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  puVar3 = DAT_00003b84;
  iVar2 = DAT_00003b80;
  iVar7 = *param_1;
  uVar5 = *(uint *)(DAT_00003b80 + 0x18);
  if (iVar7 == 1) {
    cVar1 = *(char *)(DAT_00003b80 + 0x2d);
    *DAT_00003b84 = *DAT_00003b84 | 8;
    *puVar3 = *puVar3 | 2;
    if (cVar1 == '\x01') {
      *(undefined *)(iVar2 + 0x2d) = 2;
    }
    *(int *)(iVar2 + 0x10) = param_1[2];
    uVar5 = param_1[1];
    pcVar4 = s_F_NETAPP_EVENT__IP_Acquired__IP__00003e0b + 1;
  }
  else {
    if (iVar7 == 3) {
      *(int *)(DAT_00003b80 + 0x18) = param_1[1];
      uVar5 = param_1[1];
      uVar6 = *puVar3 | 4;
      pcVar4 = s__NETAPP_EVENT__IP_Leased_to_Clie_00003eb8;
    }
    else {
      if (iVar7 != 4) {
        FUN_00010f2c(s__NETAPP_EVENT__Unexpected_event___00003e50,iVar7);
        return;
      }
      pcVar4 = s_F_NETAPP_EVENT__IP_Released_for_C_00003e7b + 1;
      uVar6 = *DAT_00003b84 & 0xfffffffb;
    }
    *puVar3 = uVar6;
  }
  FUN_00010f2c(pcVar4,uVar5 >> 0x18,(uVar5 << 8) >> 0x18,(uVar5 << 0x10) >> 0x18,uVar5 & 0xff);
  return;
}



void FUN_00003b88(undefined *param_1)

{
  if (param_1 != (undefined *)0x0) {
    FUN_00010f2c(s_F_GENERAL_EVENT____Event___d__ID_00003eef + 1,*param_1,(int)(char)param_1[4],
                 param_1[5]);
    return;
  }
  return;
}



int FUN_00003f24(int param_1,int param_2,uint param_3,int param_4,char **param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  uint uVar8;
  ulonglong uVar9;
  
  uVar9 = CONCAT44(param_2,param_1);
  if (param_4 == 0x58) {
    pcVar7 = s_0123456789ABCDEF_00004228;
  }
  else {
    pcVar7 = s_0123456789abcdef_0000423c;
  }
  if (param_2 == 0 && param_1 == 0) {
    pcVar7 = *param_5;
    *param_5 = pcVar7 + -1;
    *pcVar7 = '0';
  }
  else {
    do {
      uVar4 = (uint)(uVar9 >> 0x20);
      uVar8 = (uint)uVar9;
      if (param_3 == 8) {
        uVar2 = uVar4 << 0x1d;
        uVar5 = uVar8 >> 3;
        uVar4 = uVar4 >> 3;
LAB_00003f86:
        uVar9 = CONCAT44(uVar4,uVar2 | uVar5);
      }
      else {
        if (param_3 == 0x10) {
          uVar2 = uVar4 << 0x1c;
          uVar5 = uVar8 >> 4;
          uVar4 = uVar4 >> 4;
          goto LAB_00003f86;
        }
        if (uVar4 == 0 && uVar8 != 0xffffffff || uVar4 == 0 && uVar8 == 0xffffffff) {
          uVar9 = (ulonglong)(uVar8 / param_3);
        }
        else {
          uVar9 = FUN_0000ccfc(uVar8,uVar4,param_3,(int)param_3 >> 0x1f,param_4);
        }
      }
      pcVar6 = *param_5;
      cVar1 = pcVar7[uVar8 - (int)uVar9 * param_3];
      *param_5 = pcVar6 + -1;
      *pcVar6 = cVar1;
    } while ((int)(uVar9 >> 0x20) != 0 || (int)uVar9 != 0);
  }
  iVar3 = FUN_00015fa8(*param_5);
  return iVar3 + -1;
}



void FUN_00003fae(int param_1,int param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined uVar3;
  
  iVar1 = param_1;
  if (param_1 < 0) {
    iVar1 = -param_1;
  }
  FUN_00003f24(iVar1,iVar1 >> 0x1f,10,100,param_3,param_4);
  if ((param_2 == 0x70) || (param_2 == 0x50)) {
LAB_00003fe4:
    if (param_1 < 0) {
      uVar3 = 0x2d;
      goto LAB_00003fee;
    }
  }
  else if (param_1 < 10) {
    if (param_1 != -10 && param_1 + 10 < 0 == SCARRY4(param_1,10)) {
      puVar2 = (undefined *)*param_3;
      *param_3 = (int)(puVar2 + -1);
      *puVar2 = 0x30;
    }
    goto LAB_00003fe4;
  }
  uVar3 = 0x2b;
LAB_00003fee:
  puVar2 = (undefined *)*param_3;
  *param_3 = (int)(puVar2 + -1);
  *puVar2 = uVar3;
  puVar2 = (undefined *)*param_3;
  *param_3 = (int)(puVar2 + -1);
  *puVar2 = (char)param_2;
  return;
}



void FUN_00004000(undefined *param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined uVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  
  iVar2 = FUN_00015fa8();
  puVar3 = (undefined *)0x0;
  if ((0 < param_2) && (param_2 <= iVar2)) {
    puVar3 = param_1 + param_2 + -1;
  }
  if (param_3 != 0) {
    puVar5 = (undefined *)*param_4;
    *param_4 = puVar5 + -1;
    *puVar5 = 0x2e;
  }
  if (iVar2 < param_2) {
    iVar6 = param_2 - iVar2;
    do {
      puVar5 = (undefined *)*param_4;
      *param_4 = puVar5 + -1;
      iVar6 = iVar6 + -1;
      *puVar5 = 0x30;
      param_2 = iVar2;
    } while (iVar6 != 0);
  }
  if (param_2 < 1) {
    puVar3 = (undefined *)*param_4;
    *param_4 = puVar3 + -1;
    *puVar3 = 0x30;
  }
  else if (param_1 <= puVar3) {
    puVar5 = puVar3 + (1 - (int)param_1);
    do {
      puVar4 = (undefined *)*param_4;
      uVar1 = *puVar3;
      *param_4 = puVar4 + -1;
      puVar5 = puVar5 + -1;
      *puVar4 = uVar1;
      puVar3 = puVar3 + -1;
    } while (puVar5 != (undefined *)0x0);
    return;
  }
  return;
}



void FUN_0000406a(undefined4 param_1,uint param_2,uint *param_3,char **param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar12;
  byte *pbVar13;
  char cVar14;
  char cVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  byte local_90;
  char acStack_8f [99];
  char **local_2c;
  uint local_28;
  
  pbVar13 = &local_90;
  uVar3 = param_3[2];
  local_28 = 0;
  if (uVar3 == 0) {
    uVar3 = 1;
LAB_0000408a:
    param_3[2] = uVar3;
  }
  else if ((int)uVar3 < 0) {
    uVar3 = 6;
    goto LAB_0000408a;
  }
  local_90 = 0x30;
  cVar15 = 0xfffffffe < uVar3;
  iVar12 = uVar3 + 1;
  cVar14 = iVar12 == 0;
  local_2c = param_4;
  uVar4 = FUN_000116f8(param_1,param_2,DAT_00004398,DAT_0000439c);
  uVar7 = local_28;
  if (cVar15 == '\0') {
    param_2 = param_2 ^ 0x80000000;
  }
  while( true ) {
    FUN_0001177e(uVar4,param_2,DAT_00004400,DAT_00004404);
    uVar16 = CONCAT44(extraout_r1,param_1);
    if (cVar15 != '\0') break;
    uVar16 = FUN_0000e834(param_1,extraout_r1,DAT_000043f8,DAT_000043fc);
    param_2 = (uint)((ulonglong)uVar16 >> 0x20);
    uVar4 = (undefined4)uVar16;
    cVar15 = 0xfffffffe < uVar7;
    cVar14 = uVar7 + 1 == 0;
    uVar7 = uVar7 + 1;
    param_1 = uVar4;
  }
  while( true ) {
    uVar4 = (undefined4)uVar16;
    uVar17 = CONCAT44(param_2,uVar4);
    FUN_000116f8(uVar4,(int)((ulonglong)uVar16 >> 0x20),DAT_00004398,DAT_0000439c);
    uVar9 = local_28;
    if (cVar14 != '\0') break;
    uVar16 = FUN_000116f8(uVar4,extraout_r1_00,DAT_00004408,DAT_0000440c);
    if (cVar15 == '\0') {
      uVar9 = 1;
    }
    if (uVar9 == 0) break;
    uVar16 = FUN_0000f0d8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),DAT_000043f8,DAT_000043fc);
    param_2 = (uint)((ulonglong)uVar16 >> 0x20);
    cVar15 = uVar7 != 0;
    uVar7 = uVar7 - 1;
    cVar14 = uVar7 == 0;
  }
  uVar4 = FUN_00013c34(uVar4);
  iVar5 = FUN_00013668(uVar4,acStack_8f);
  iVar8 = iVar5 + uVar7;
  if (iVar5 < iVar12) {
    iVar12 = iVar12 - iVar5;
    pcVar10 = acStack_8f + iVar5;
    do {
      uVar16 = FUN_00014f76(uVar4);
      uVar16 = FUN_0000d45c((int)uVar17,(int)((ulonglong)uVar17 >> 0x20),(int)uVar16,
                            (int)((ulonglong)uVar16 >> 0x20));
      uVar17 = FUN_0000f0d8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),DAT_000043f8,DAT_000043fc);
      uVar4 = FUN_00013c34();
      iVar12 = iVar12 + -1;
      pcVar11 = pcVar10 + 1;
      *pcVar10 = (char)uVar4 + '0';
      pcVar10 = pcVar11;
    } while (iVar12 != 0);
  }
  else {
    pcVar11 = acStack_8f + uVar3 + 1;
  }
  pbVar1 = (byte *)(pcVar11 + -1);
  pbVar6 = pbVar1;
  if (*pbVar1 < 0x35) {
LAB_0000417e:
    pbVar13 = (byte *)acStack_8f;
    *pbVar1 = (byte)local_28;
  }
  else {
    while( true ) {
      bVar2 = pbVar6[-1];
      pbVar6 = pbVar6 + -1;
      *pbVar6 = bVar2 + 1;
      if ((byte)(bVar2 + 1) < 0x3a) break;
      *pbVar6 = 0x30;
    }
    if (&local_90 != pbVar6) goto LAB_0000417e;
    iVar8 = iVar8 + 1;
    pcVar11[-2] = (char)local_28;
  }
  if (iVar8 + 3 < 0 == SCARRY4(iVar8,3)) {
    if (iVar8 <= (int)param_3[2]) goto LAB_000041c8;
    if (iVar8 < 2) goto LAB_000041aa;
    iVar8 = iVar8 + -1;
LAB_000041b8:
    local_28 = iVar8 + local_28;
    iVar8 = 1;
  }
  else {
LAB_000041aa:
    if (iVar8 < 1) {
      iVar8 = -(1 - iVar8);
      goto LAB_000041b8;
    }
  }
  FUN_00003fae(local_28,*(char *)(param_3 + 3) + -2,local_2c);
LAB_000041c8:
  iVar12 = FUN_00015fa8(pbVar13);
  uVar3 = 0;
  iVar12 = iVar12 + -1;
  if (iVar8 <= iVar12) {
    iVar5 = (iVar12 - iVar8) + 1;
    do {
      if (iVar12 < 0) {
        cVar14 = '0';
LAB_000041e8:
        if ((uVar3 != 0) || ((*param_3 >> 3 & 1) != 0)) goto LAB_000041f0;
      }
      else {
        cVar14 = ((char *)pbVar13)[iVar12];
        if (cVar14 == '0') goto LAB_000041e8;
LAB_000041f0:
        pcVar11 = *local_2c;
        *local_2c = pcVar11 + -1;
        uVar3 = 1;
        *pcVar11 = cVar14;
      }
      iVar5 = iVar5 + -1;
      iVar12 = iVar12 + -1;
    } while (iVar5 != 0);
  }
  FUN_00004000(pbVar13,iVar8,(*param_3 & 8 | uVar3) != 0,local_2c);
  return;
}



undefined8
FUN_0000424e(byte *param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5,
            int *param_6)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  char cVar10;
  char cVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  byte *local_30;
  
  cVar11 = &SUB_fffffffe < param_1;
  local_30 = param_1 + 1;
  *param_1 = 0x30;
  uVar3 = FUN_000116f8(param_3,param_4,DAT_00004398,DAT_0000439c);
  if (cVar11 == '\0') {
    param_4 = param_4 ^ 0x80000000;
  }
  uVar12 = CONCAT44(param_4,uVar3);
  uVar7 = 0;
  while( true ) {
    uVar3 = (undefined4)((ulonglong)uVar12 >> 0x20);
    FUN_0001177e((int)uVar12,uVar3,DAT_00004400,DAT_00004404);
    uVar12 = CONCAT44(extraout_r1,param_3);
    if (cVar11 != '\0') break;
    uVar12 = FUN_0000e834(param_3,extraout_r1,DAT_000043f8,DAT_000043fc);
    param_3 = (undefined4)uVar12;
    cVar11 = 0xfffffffe < uVar7;
    uVar7 = uVar7 + 1;
  }
  cVar11 = 0xfffffffe < param_5;
  uVar2 = param_5 + 1;
  while( true ) {
    uVar9 = (undefined4)uVar12;
    uVar13 = CONCAT44(uVar3,uVar9);
    cVar10 = uVar2 == 0;
    FUN_000116f8(uVar9,(int)((ulonglong)uVar12 >> 0x20),DAT_00004398,DAT_0000439c);
    if (cVar10 != '\0') break;
    uVar12 = FUN_000116f8(uVar9,extraout_r1_00,DAT_00004408,DAT_0000440c);
    if (cVar11 != '\0') break;
    uVar12 = FUN_0000f0d8((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),DAT_000043f8,DAT_000043fc);
    uVar3 = (undefined4)((ulonglong)uVar12 >> 0x20);
    cVar11 = uVar7 != 0;
    uVar7 = uVar7 - 1;
    uVar2 = uVar7;
  }
  uVar3 = FUN_00013c34(uVar9);
  iVar4 = FUN_00013668(uVar3,local_30);
  pbVar6 = local_30 + iVar4;
  iVar8 = uVar7 + param_5 + 1;
  *param_6 = iVar4 + uVar7;
  pbVar5 = pbVar6;
  if (0 < iVar8) {
    do {
      uVar12 = FUN_00014f76(uVar3);
      uVar12 = FUN_0000d45c((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar12,
                            (int)((ulonglong)uVar12 >> 0x20));
      uVar13 = FUN_0000f0d8((int)uVar12,(int)((ulonglong)uVar12 >> 0x20),DAT_000043f8,DAT_000043fc);
      uVar3 = FUN_00013c34();
      iVar8 = iVar8 + -1;
      pbVar6 = pbVar5 + 1;
      *pbVar5 = (char)uVar3 + 0x30;
      pbVar5 = pbVar6;
    } while (iVar8 != 0);
  }
  pbVar6 = pbVar6 + -1;
  pbVar5 = pbVar6;
  if (0x34 < *pbVar6) {
    while( true ) {
      bVar1 = pbVar5[-1];
      pbVar5 = pbVar5 + -1;
      *pbVar5 = bVar1 + 1;
      if ((byte)(bVar1 + 1) < 0x3a) break;
      *pbVar5 = 0x30;
    }
    if (param_1 == pbVar5) {
      *param_6 = *param_6 + 1;
      local_30 = param_1;
    }
  }
  *pbVar6 = 0;
  return CONCAT44(local_30,local_30);
}



void FUN_0000435c(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined uVar3;
  
  iVar1 = FUN_00015fa8();
  param_2 = param_3 + param_2;
  if (-1 < param_3 + -1) {
    do {
      param_2 = param_2 + -1;
      if ((param_2 < 0) || (iVar1 <= param_2)) {
        uVar3 = 0x30;
      }
      else {
        uVar3 = *(undefined *)(param_1 + param_2);
      }
      puVar2 = (undefined *)*param_4;
      param_3 = param_3 + -1;
      *param_4 = (int)(puVar2 + -1);
      *puVar2 = uVar3;
    } while (param_3 != 0);
  }
  return;
}



void FUN_000043a0(undefined4 param_1,undefined4 param_2,uint *param_3,int *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined4 local_218;
  undefined auStack_214 [512];
  
  uVar4 = param_3[2];
  bVar5 = (int)uVar4 < 0;
  if (bVar5) {
    uVar4 = 6;
  }
  if (bVar5) {
    param_3[2] = uVar4;
  }
  iVar3 = *param_4;
  uVar1 = FUN_0000424e(auStack_214,param_2,param_1,param_2,uVar4,&local_218);
  FUN_0000435c(uVar1,local_218,param_3[2],param_4);
  uVar2 = 1;
  if ((*param_4 == iVar3) && ((*param_3 >> 3 & 1) == 0)) {
    uVar2 = 0;
  }
  FUN_00004000(uVar1,local_218,uVar2,param_4);
  return;
}



void FUN_00004410(undefined4 param_1,undefined4 param_2,uint *param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  char cVar7;
  bool bVar8;
  char cVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int local_88;
  undefined auStack_84 [100];
  
  uVar11 = CONCAT44(param_2,param_1);
  uVar4 = param_3[2];
  bVar8 = (int)uVar4 < 0;
  cVar9 = uVar4 == 0;
  cVar7 = true;
  if (bVar8) {
    uVar4 = 6;
  }
  if (bVar8) {
    param_3[2] = uVar4;
  }
  puVar6 = (undefined8 *)&DAT_00004714;
  FUN_0001177e(param_1,param_2,DAT_00004714,DAT_00004718);
  uVar5 = 0;
  if (!(bool)cVar7 || (bool)cVar9) {
LAB_00004458:
    uVar11 = *puVar6;
  }
  else {
    puVar6 = (undefined8 *)&DAT_0000471c;
    uVar10 = FUN_000116f8(param_1,extraout_r1,DAT_0000471c,DAT_00004720);
    if (!(bool)cVar7 || (bool)cVar9) goto LAB_00004458;
    FUN_000116f8((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_00004724,DAT_00004728);
    uVar3 = extraout_r1_00;
    if (cVar9 != '\0') goto LAB_00004498;
  }
  while( true ) {
    param_1 = (undefined4)uVar11;
    uVar11 = FUN_000116f8(param_1,(int)((ulonglong)uVar11 >> 0x20),DAT_0000472c,DAT_00004730);
    if (cVar7 != '\0') break;
    uVar11 = FUN_0000f0d8((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),DAT_00004734,DAT_00004738);
    cVar7 = uVar5 != 0;
    uVar5 = uVar5 - 1;
    cVar9 = uVar5 == 0;
  }
  while (FUN_0001177e((int)uVar11,(int)((ulonglong)uVar11 >> 0x20),DAT_00004734,DAT_00004738),
        uVar3 = extraout_r1_01, !(bool)cVar7 || (bool)cVar9) {
    uVar11 = FUN_0000e834(param_1,extraout_r1_01,DAT_00004734,DAT_00004738);
    param_1 = (undefined4)uVar11;
    cVar7 = 0xfffffffe < uVar5;
    uVar5 = uVar5 + 1;
    cVar9 = uVar5 == 0;
  }
LAB_00004498:
  iVar1 = FUN_0000424e(auStack_84,uVar3,param_1,uVar3,uVar4,&local_88);
  if (local_88 == 2) {
    local_88 = 1;
    iVar2 = FUN_00015fa8(iVar1);
    uVar5 = uVar5 + 1;
    *(undefined *)(iVar1 + iVar2 + -1) = 0;
  }
  FUN_00003fae(uVar5,*(undefined *)(param_3 + 3),param_4);
  FUN_0000435c(iVar1,local_88,param_3[2],param_4);
  iVar2 = FUN_00015fa8(iVar1);
  uVar3 = 1;
  if ((iVar2 == local_88) && ((*param_3 >> 3 & 1) == 0)) {
    uVar3 = 0;
  }
  FUN_00004000(iVar1,local_88,uVar3,param_4);
  return;
}



void FUN_000044fc(undefined4 param_1,undefined4 param_2,uint *param_3,undefined4 *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined extraout_r1;
  undefined uVar5;
  uint extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  undefined *puVar11;
  uint uVar12;
  undefined in_CY;
  char cVar13;
  char cVar14;
  char cVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  int local_a0;
  int local_9c;
  undefined local_98;
  undefined auStack_97 [99];
  undefined4 *local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  cVar13 = true;
  puVar6 = &DAT_00004714;
  local_a0 = 0;
  local_34 = param_4;
  FUN_0001177e(param_1,param_2,DAT_00004714,DAT_00004718);
  if (!(bool)in_CY || (bool)cVar13) {
LAB_0000453c:
    param_1 = *puVar6;
    uVar12 = puVar6[1];
  }
  else {
    puVar6 = &DAT_0000471c;
    uVar16 = FUN_000116f8(param_1,extraout_r1_00,DAT_0000471c,DAT_00004720);
    if (!(bool)in_CY || (bool)cVar13) goto LAB_0000453c;
    FUN_000116f8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),DAT_00004724,DAT_00004728);
    uVar12 = extraout_r1_00;
    if (cVar13 != '\0') goto LAB_00004550;
  }
  FUN_00013020(param_1,uVar12,&local_a0);
  local_a0 = local_a0 + -1;
LAB_00004550:
  uVar1 = (uint)*(byte *)(param_3 + 3);
  uVar8 = param_3[2];
  local_2c = uVar1 - 0x41;
  cVar13 = uVar8 != 0xffffffff;
  cVar15 = 0x40 < uVar1;
  local_28 = DAT_00004744;
  if (uVar1 != 0x41) {
    local_28 = DAT_00004748;
  }
  cVar14 = '\0';
  local_98 = 0x30;
  uVar2 = FUN_000116f8(param_1,uVar12,DAT_00004724,DAT_00004728);
  if (cVar15 == '\0') {
    uVar12 = uVar12 ^ 0x80000000;
  }
  uVar16 = CONCAT44(uVar12,param_1);
  FUN_000116f8(uVar2,uVar12,DAT_00004724,DAT_00004728);
  if (cVar14 == '\0') {
    FUN_00013020(param_1,extraout_r1_01,&local_9c);
    uVar16 = FUN_0000fd00(param_1,uVar12,1 - local_9c);
  }
  uVar2 = FUN_00013c34((int)uVar16);
  iVar3 = FUN_00013668(uVar2,auStack_97);
  uVar2 = FUN_00014f76(uVar2);
  uVar16 = FUN_0000d45c((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),uVar2);
  local_30 = iVar3;
  puVar7 = auStack_97 + iVar3;
  if ((bool)cVar13) {
    iVar9 = uVar8 + 1;
    puVar10 = auStack_97 + iVar3;
    while( true ) {
      if (iVar9 == 0) break;
      uVar16 = FUN_0000f0d8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),DAT_0000473c,DAT_00004740);
      iVar3 = FUN_00013c34();
      *puVar10 = *(undefined *)(local_28 + iVar3);
      uVar2 = FUN_00014f76();
      uVar16 = FUN_0000d45c((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),uVar2);
      iVar9 = iVar9 + -1;
      puVar10 = puVar10 + 1;
    }
    puVar7 = puVar10 + -1;
    iVar3 = DAT_00004748;
    if (local_2c == 0) {
      iVar3 = DAT_00004744;
    }
    iVar9 = FUN_00015ec4(iVar3,*puVar7);
    if (7 < iVar9 - iVar3) {
      puVar10 = puVar10 + -2;
      puVar11 = puVar7;
      while( true ) {
        iVar3 = DAT_00004748;
        if (local_2c == 0) {
          iVar3 = DAT_00004744;
        }
        iVar9 = FUN_00015ec4(iVar3,*puVar10);
        iVar4 = (iVar9 - iVar3) + 1;
        uVar5 = extraout_r1;
        if (iVar4 < 0x10) {
          uVar5 = *(undefined *)(iVar3 + iVar4);
        }
        if ((iVar9 - iVar3) + -0xf < 0 == SBORROW4(iVar4,0x10)) {
          uVar5 = 0x30;
        }
        *puVar10 = uVar5;
        if (iVar4 < 0x10) break;
        puVar10 = puVar10 + -1;
        puVar11 = puVar11 + -1;
        *puVar11 = 0;
      }
    }
  }
  else {
    while( true ) {
      FUN_000116f8((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),DAT_00004724,DAT_00004728);
      if (cVar13 != '\0') break;
      uVar16 = FUN_0000f0d8((int)uVar16,extraout_r1_02,DAT_0000473c,DAT_00004740);
      iVar3 = FUN_00013c34();
      *puVar7 = *(undefined *)(local_28 + iVar3);
      uVar17 = FUN_00014f76();
      uVar16 = FUN_0000d45c((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),(int)uVar17,
                            (int)((ulonglong)uVar17 >> 0x20));
      puVar7 = puVar7 + 1;
    }
  }
  cVar13 = *(char *)(param_3 + 3);
  *puVar7 = 0;
  if (cVar13 == 'A') {
    uVar2 = 0x50;
  }
  else {
    uVar2 = 0x70;
  }
  FUN_00003fae(local_a0,uVar2,local_34);
  uVar12 = param_3[2];
  if (uVar12 == 0xffffffff) {
    iVar3 = FUN_00015fa8(auStack_97);
    uVar12 = iVar3 - 1;
    param_3[2] = uVar12;
  }
  FUN_0000435c(auStack_97,local_30,uVar12,local_34);
  FUN_00004000(auStack_97,local_30,(param_3[2] | *param_3 & 8) != 0,local_34);
  if (*(char *)(param_3 + 3) == 'A') {
    uVar5 = 0x58;
  }
  else {
    uVar5 = 0x78;
  }
  puVar7 = (undefined *)*local_34;
  *local_34 = puVar7 + -1;
  *puVar7 = uVar5;
  puVar7 = (undefined *)*local_34;
  *local_34 = puVar7 + -1;
  *puVar7 = 0x30;
  return;
}



// WARNING: Type propagation algorithm not settling

int FUN_0000474c(byte **param_1,int **param_2,undefined4 param_3,code *param_4,code *param_5)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  char *pcVar6;
  byte *pbVar7;
  uint uVar8;
  uint *puVar9;
  int *piVar10;
  undefined2 *puVar11;
  undefined4 *puVar12;
  int **ppiVar13;
  byte *pbVar14;
  uint uVar15;
  byte bVar16;
  uint uVar17;
  undefined *puVar18;
  int iVar19;
  uint uVar20;
  bool bVar21;
  char cVar22;
  undefined8 uVar23;
  uint local_27c;
  uint local_278;
  uint local_274;
  byte local_270;
  undefined2 *local_26c;
  undefined2 local_268;
  undefined local_6e;
  undefined local_6d;
  char local_6c;
  undefined2 local_6b;
  byte local_68 [12];
  uint local_5c;
  uint local_58;
  undefined4 local_54;
  code *local_50;
  code *local_4c;
  byte *local_48;
  undefined2 *local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  int **local_34;
  uint local_30;
  uint local_2c;
  undefined2 *local_28;
  
  pbVar14 = *param_1;
  local_4c = param_5;
  iVar1 = FUN_00015fa8(pbVar14);
  iVar19 = 0;
  local_48 = pbVar14 + iVar1;
  if (local_48 <= pbVar14) {
    return 0;
  }
  local_5c = 0;
  local_28 = (undefined2 *)0x0;
  local_58 = 0;
  local_30 = DAT_00004a58;
  local_2c = DAT_00004a58;
  local_54 = param_3;
  local_50 = param_4;
  local_34 = param_2;
LAB_00004792:
  local_274 = 0xffffffff;
  local_270 = (byte)local_5c;
  bVar16 = *pbVar14;
  local_27c = local_5c;
  local_278 = local_5c;
  ppiVar13 = local_34;
  while (local_34 = ppiVar13, bVar16 != 0x25) {
    if (bVar16 == 0) {
      return iVar19;
    }
    *param_1 = *param_1 + 1;
    (*local_50)(*pbVar14,local_54);
    pbVar14 = *param_1;
    iVar19 = iVar19 + 1;
    ppiVar13 = local_34;
    bVar16 = *pbVar14;
  }
  *param_1 = *param_1 + 1;
  do {
    bVar16 = **param_1;
    if (bVar16 == 0x20) {
      local_27c = local_27c | 4;
    }
    else if (bVar16 == 0x23) {
      local_27c = local_27c | 8;
    }
    else if (bVar16 == 0x2b) {
      local_27c = local_27c | 2;
    }
    else if (bVar16 == 0x2d) {
      local_27c = local_27c | 1;
    }
    else {
      if (bVar16 != 0x30) break;
      local_27c = local_27c | 0x10;
    }
    *param_1 = *param_1 + 1;
  } while( true );
  if (bVar16 == 0x2a) {
    puVar9 = (uint *)((uint)((int)ppiVar13 + 3) & 0xfffffffc);
    ppiVar13 = (int **)(puVar9 + 1);
    local_278 = *puVar9;
    if ((int)local_278 < 0) {
      local_27c = local_27c | 1;
      local_278 = -local_278;
    }
    pbVar14 = *param_1 + 1;
    *param_1 = pbVar14;
    local_34 = ppiVar13;
  }
  else {
    FUN_00011a94((int)&local_6b + 3,local_28);
    bVar16 = **param_1;
    if (0x2f < bVar16) {
      pbVar14 = *param_1;
      pbVar7 = (byte *)((int)&local_6b + 3);
      do {
        if (0x39 < bVar16) break;
        pbVar2 = pbVar14 + 1;
        *param_1 = pbVar2;
        *pbVar7 = *pbVar14;
        bVar16 = *pbVar2;
        pbVar14 = pbVar2;
        pbVar7 = pbVar7 + 1;
      } while (0x2f < bVar16);
    }
    pbVar14 = *param_1;
    if (local_68[0] != '\0') {
      local_278 = FUN_000138a4((int)&local_6b + 3);
    }
  }
  bVar16 = *pbVar14;
  if (bVar16 == 0x2e) {
    pbVar14 = *param_1;
    *param_1 = pbVar14 + 1;
    if (pbVar14[1] == 0x2a) {
      puVar9 = (uint *)((uint)((int)ppiVar13 + 3) & 0xfffffffc);
      ppiVar13 = (int **)(puVar9 + 1);
      pbVar14 = *param_1 + 1;
      uVar3 = *puVar9;
      *param_1 = pbVar14;
      local_34 = ppiVar13;
    }
    else {
      FUN_00011a94((int)&local_6b + 3,local_28);
      bVar16 = **param_1;
      if (0x2f < bVar16) {
        pbVar14 = *param_1;
        pbVar7 = (byte *)((int)&local_6b + 3);
        do {
          if (0x39 < bVar16) break;
          pbVar2 = pbVar14 + 1;
          *param_1 = pbVar2;
          *pbVar7 = *pbVar14;
          bVar16 = *pbVar2;
          pbVar14 = pbVar2;
          pbVar7 = pbVar7 + 1;
        } while (0x2f < bVar16);
      }
      pbVar14 = *param_1;
      uVar3 = local_58;
      if (local_68[0] != '\0') {
        uVar3 = FUN_000138a4((int)&local_6b + 3);
      }
    }
    bVar16 = *pbVar14;
    local_274 = uVar3;
  }
  uVar3 = local_278;
  if (bVar16 == 0x4c) {
    uVar20 = local_27c | 0x80;
LAB_00004944:
    pbVar14 = *param_1 + 1;
    *param_1 = pbVar14;
    uVar17 = local_27c;
    local_27c = uVar20;
  }
  else if (bVar16 == 0x68) {
    pbVar14 = *param_1 + 1;
    *param_1 = pbVar14;
    if (*pbVar14 == 0x68) {
      uVar20 = local_27c | 0x200;
      local_27c = local_27c | 0x200;
      goto LAB_00004944;
    }
    uVar17 = local_27c | 0x20;
    local_27c = local_27c | 0x20;
  }
  else {
    uVar17 = local_27c;
    if (bVar16 == 0x6c) {
      pbVar14 = *param_1 + 1;
      *param_1 = pbVar14;
      if (*pbVar14 == 0x6c) {
        uVar17 = local_27c | 0x100;
        pbVar14 = *param_1 + 1;
        *param_1 = pbVar14;
        local_27c = local_27c | 0x100;
      }
      else {
        uVar17 = local_27c | 0x40;
        local_27c = local_27c | 0x40;
      }
    }
  }
  *param_1 = *param_1 + 1;
  local_270 = *pbVar14;
  if (local_270 == 0x6e) {
    uVar17 = uVar17 & 0x760;
    if (uVar17 == 0x20) {
      puVar12 = (undefined4 *)((uint)((int)ppiVar13 + 3) & 0xfffffffc);
      local_34 = (int **)(puVar12 + 1);
      *(short *)*puVar12 = (short)iVar19;
    }
    else if (uVar17 == 0x100) {
      ppiVar13 = (int **)((uint)((int)ppiVar13 + 3) & 0xfffffffc);
      local_34 = ppiVar13 + 1;
      piVar10 = *ppiVar13;
      *piVar10 = iVar19;
      piVar10[1] = iVar19 >> 0x1f;
    }
    else if (uVar17 == 0x200) {
      puVar12 = (undefined4 *)((uint)((int)ppiVar13 + 3) & 0xfffffffc);
      local_34 = (int **)(puVar12 + 1);
      *(char *)*puVar12 = (char)iVar19;
    }
    else {
      ppiVar13 = (int **)((uint)((int)ppiVar13 + 3) & 0xfffffffc);
      local_34 = ppiVar13 + 1;
      **ppiVar13 = iVar19;
    }
    goto LAB_0000500e;
  }
  if (local_270 == 0x73) {
    puVar12 = (undefined4 *)((uint)((int)ppiVar13 + 3) & 0xfffffffc);
    local_34 = (int **)(puVar12 + 1);
    puVar18 = (undefined *)*puVar12;
    if (puVar18 == (undefined *)0x0) {
      (*local_50)(local_28,local_54);
    }
    else {
      if (((int)local_274 < 0) ||
         (uVar20 = local_274, uVar15 = FUN_00015fa8(puVar18), uVar15 <= uVar20)) {
        uVar20 = FUN_00015fa8(puVar18);
      }
      if ((int)uVar3 <= (int)uVar20) {
        uVar3 = uVar20;
      }
      iVar19 = iVar19 + uVar3;
      if ((((int)uVar20 < (int)uVar3) && ((uVar17 & 1) == 0)) && (iVar1 = uVar3 - uVar20, 0 < iVar1)
         ) {
        do {
          (*local_50)(0x20,local_54);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
      uVar17 = uVar20;
      if (0 < (int)uVar20) {
        do {
          (*local_50)(*puVar18,local_54);
          uVar17 = uVar17 - 1;
          puVar18 = puVar18 + 1;
        } while (uVar17 != 0);
      }
      if ((((int)uVar20 < (int)uVar3) && ((local_27c & 1) != 0)) &&
         (iVar1 = uVar3 - uVar20, 0 < iVar1)) {
        do {
          (*local_50)(0x20,local_54);
          iVar1 = iVar1 + -1;
        } while (iVar1 != 0);
      }
    }
    goto LAB_0000500e;
  }
  local_26c = &local_6b;
  FUN_00011a94(&local_268,0x20,0x1fe);
  uVar20 = local_58;
  local_44 = (undefined2 *)((int)&local_268 + uVar3);
  *(char *)local_26c = (char)local_58;
  local_40 = uVar20;
  local_26c = (undefined2 *)&local_6c;
  local_3c = uVar20;
  local_38 = uVar20;
  uVar3 = (uint)local_270;
  if (uVar3 < 0x65) {
    if (uVar3 == 100) {
LAB_000049e8:
      if ((int)local_274 < 0) {
        local_274 = 1;
      }
      else {
        local_27c = local_27c & 0xffffffef;
      }
      if (uVar3 == 0x70) {
LAB_00004b10:
        puVar9 = (uint *)((uint)((int)ppiVar13 + 3) & 0xfffffffc);
        uVar15 = *puVar9;
LAB_00004b1c:
        uVar17 = 0;
LAB_00004b20:
        local_34 = (int **)(puVar9 + 1);
      }
      else {
        uVar8 = local_27c & 0x760;
        uVar15 = uVar20;
        uVar17 = uVar20;
        if (uVar8 == 0x20) {
          if (uVar3 != 0x58) {
            if ((uVar3 == 100) || (uVar3 == 0x69)) goto LAB_00004afe;
            if ((uVar3 != 0x6f) && (uVar3 != 0x75 && uVar3 != 0x78)) goto LAB_00004b24;
          }
          puVar9 = (uint *)((uint)((int)ppiVar13 + 3) & 0xfffffffc);
          uVar15 = (uint)*(ushort *)puVar9;
          goto LAB_00004b1c;
        }
        if (uVar8 == 0x40) {
          if (uVar3 != 0x58) {
            if ((uVar3 == 100) || (uVar3 == 0x69)) goto LAB_00004afe;
joined_r0x00004ac8:
            if ((uVar3 != 0x6f) && ((uVar3 != 0x75 && (uVar3 != 0x78)))) goto LAB_00004b24;
          }
          goto LAB_00004b10;
        }
        if (uVar8 != 0x100) {
          if (uVar8 == 0x200) {
            if (uVar3 != 0x58) {
              if ((uVar3 == 100) || (uVar3 == 0x69)) goto LAB_00004afe;
              if ((uVar3 != 0x6f) && (uVar3 != 0x75 && uVar3 != 0x78)) goto LAB_00004b24;
            }
            pbVar14 = (byte *)((uint)((int)ppiVar13 + 3) & 0xfffffffc);
            local_34 = (int **)(pbVar14 + 4);
            uVar15 = (uint)*pbVar14;
            uVar17 = 0;
            goto LAB_00004b24;
          }
          if (uVar3 == 0x58) goto LAB_00004b10;
          if ((uVar3 != 100) && (uVar3 != 0x69)) goto joined_r0x00004ac8;
LAB_00004afe:
          puVar9 = (uint *)((uint)((int)ppiVar13 + 3) & 0xfffffffc);
          uVar15 = *puVar9;
          uVar17 = (int)uVar15 >> 0x1f;
          goto LAB_00004b20;
        }
        if ((((uVar3 == 0x58) || (uVar3 == 100)) || (uVar3 == 0x69)) ||
           ((uVar3 == 0x6f || (uVar3 == 0x75 || uVar3 == 0x78)))) {
          puVar9 = (uint *)((uint)((int)ppiVar13 + 7) & 0xfffffff8);
          local_34 = (int **)(puVar9 + 2);
          uVar15 = *puVar9;
          uVar17 = puVar9[1];
        }
      }
LAB_00004b24:
      if (((uVar17 | (int)local_274 >> 0x1f) != 0 || (local_274 | uVar15) != 0) ||
         ((local_27c >> 3 & 1) != 0)) {
        if ((uVar3 == 100 || uVar3 == 0x69) && ((int)uVar17 < 0)) {
          bVar21 = uVar15 != 0;
          uVar15 = -uVar15;
          local_3c = 1;
          uVar17 = -(uint)bVar21 - uVar17;
        }
        iVar1 = FUN_00003f24(uVar15,uVar17);
        while (iVar1 = iVar1 + 1, iVar1 <= (int)local_274) {
          *(char *)local_26c = '0';
          local_26c = (undefined2 *)((int)local_26c + -1);
        }
        if (((local_270 == 0x78) || (local_270 == 0x58 || local_270 == 0x70)) &&
           ((local_27c >> 3 & 1) != 0)) {
          bVar16 = local_270;
          if (local_270 == 0x70) {
            bVar16 = 0x78;
          }
          *(byte *)local_26c = bVar16;
          *(char *)((int)local_26c + -1) = '0';
          local_26c = local_26c + -1;
        }
        uVar3 = (uint)local_270;
        if (((uVar3 == 0x6f) && ((local_27c >> 3 & 1) != 0)) &&
           (*(char *)((int)local_26c + 1) != '0')) {
          *(char *)local_26c = '0';
LAB_00004bbe:
          local_26c = (undefined2 *)((int)local_26c + -1);
          goto LAB_00004d30;
        }
      }
      goto LAB_00004dbc;
    }
    if (uVar3 != 0x25) {
      if ((uVar3 != 0x41) && (2 < uVar3 - 0x45)) {
        if (uVar3 == 0x58) goto LAB_000049e8;
        if (uVar3 == 0x61) goto LAB_00004bd4;
        if (uVar3 != 99) goto LAB_00004dbc;
        pcVar6 = (char *)((uint)((int)ppiVar13 + 3) & 0xfffffffc);
        local_34 = (int **)(pcVar6 + 4);
        local_6c = *pcVar6;
        if (local_6c == '\0') {
          local_38 = 1;
        }
        local_27c = local_27c & 0xfffffffd;
LAB_00004db2:
        local_26c = (undefined2 *)((int)local_26c + -1);
        goto LAB_00004db8;
      }
LAB_00004bd4:
      uVar17 = uVar3;
      if (uVar3 - 0x61 < 0x1a) {
        uVar17 = uVar3 - 0x20;
      }
      uVar15 = uVar20;
      if (uVar17 == uVar3) {
        uVar15 = 1;
      }
      piVar10 = (int *)((uint)((int)ppiVar13 + 7) & 0xfffffff8);
      local_34 = (int **)(piVar10 + 2);
      iVar1 = *piVar10;
      uVar17 = piVar10[1];
      if (((uVar17 >> 0x10 & 0x7ff0) == 0x7ff0) && ((local_30 & uVar17) != 0 || iVar1 != 0)) {
        if (uVar15 != 0) {
          iVar1 = 0x4e;
        }
        local_6c = (char)iVar1;
        if (uVar15 != 0) {
          local_6d = 0x41;
        }
        else {
          local_6c = 'n';
          local_6d = 0x61;
        }
        local_26c = (undefined2 *)&local_6e;
        puVar5 = local_26c;
        if (uVar15 != 0) {
          puVar5 = (undefined2 *)0x4e;
        }
        local_6e = SUB41(puVar5,0);
        if (uVar15 == 0) {
          local_6e = 0x6e;
        }
        uVar20 = 2;
        goto LAB_00004bbe;
      }
      uVar8 = uVar17 >> 0x10 & 0x7ff0;
      cVar22 = uVar8 < 0x7ff1;
      if ((uVar8 == 0x7ff0) &&
         (bVar21 = (local_2c & uVar17) == 0, cVar22 = bVar21 || (bool)cVar22, bVar21 && iVar1 == 0))
      {
        FUN_000116f8(iVar1,uVar17,DAT_00004efc,DAT_00004f00);
        puVar5 = local_26c;
        if (cVar22 == '\0') {
          if (uVar15 == 0) {
            local_6c = 'f';
          }
          else {
            local_6c = 'F';
          }
          local_26c = (undefined2 *)((int)local_26c + -1);
          if (uVar15 == 0) {
            cVar22 = 'n';
          }
          else {
            cVar22 = 'N';
          }
          *(char *)local_26c = cVar22;
          local_26c = (undefined2 *)((int)local_26c + -1);
          puVar11 = local_26c;
          if (uVar15 != 0) {
            puVar11 = (undefined2 *)0x49;
          }
          cVar22 = (char)puVar11;
          if (uVar15 == 0) {
            cVar22 = 'i';
          }
          *(char *)(puVar5 + -1) = cVar22;
          local_26c = (undefined2 *)((int)local_26c + -1);
          *(char *)((int)puVar5 + -3) = '-';
          uVar20 = 4;
          goto LAB_00004db2;
        }
        if (uVar15 == 0) {
          local_6c = 'f';
        }
        else {
          local_6c = 'F';
        }
        local_26c = (undefined2 *)((int)local_26c + -1);
        if (uVar15 == 0) {
          cVar22 = 'n';
        }
        else {
          cVar22 = 'N';
        }
        *(char *)local_26c = cVar22;
        local_26c = (undefined2 *)((int)local_26c + -1);
        puVar11 = local_26c;
        if (uVar15 != 0) {
          puVar11 = (undefined2 *)0x49;
        }
        cVar22 = (char)puVar11;
        if (uVar15 == 0) {
          cVar22 = 'i';
        }
        *(char *)(puVar5 + -1) = cVar22;
        local_26c = (undefined2 *)((int)local_26c + -1);
        uVar20 = 3;
        *(char *)((int)puVar5 + -3) = '+';
        goto LAB_00004bbe;
      }
      uVar23 = FUN_000116f8(iVar1,uVar17,DAT_00004efc,DAT_00004f00);
      uVar17 = (uint)((ulonglong)uVar23 >> 0x20);
      uVar4 = (undefined4)uVar23;
      if (cVar22 == '\0') {
        uVar17 = uVar17 ^ 0x80000000;
        uVar20 = 1;
      }
      if (uVar3 != 0x41) {
        if (uVar3 == 0x45) {
LAB_00004d42:
          FUN_00004410(uVar4,uVar17,&local_27c,&local_26c);
        }
        else {
          if (uVar3 != 0x46) {
            if (uVar3 != 0x47) {
              if (uVar3 == 0x61) goto LAB_00004d4e;
              if (uVar3 == 0x65) goto LAB_00004d42;
              if (uVar3 == 0x66) goto LAB_00004d38;
              if (uVar3 != 0x67) goto LAB_00004dbc;
            }
            FUN_0000406a(uVar4,uVar17,&local_27c,&local_26c);
            goto LAB_00004d30;
          }
LAB_00004d38:
          FUN_000043a0(uVar4,uVar17,&local_27c,&local_26c);
        }
LAB_00004db8:
        uVar3 = (uint)local_270;
        goto LAB_00004dbc;
      }
LAB_00004d4e:
      FUN_000044fc(uVar4,uVar17,&local_27c,&local_26c);
LAB_00004d30:
      uVar3 = (uint)local_270;
      goto LAB_00004dbc;
    }
    local_268 = DAT_00005024;
  }
  else {
    if (uVar3 - 0x65 < 3) goto LAB_00004bd4;
    if (((uVar3 == 0x69) || (uVar3 - 0x6f < 2)) || (uVar3 == 0x75 || uVar3 - 0x6f == 9))
    goto LAB_000049e8;
LAB_00004dbc:
    puVar5 = (undefined2 *)((int)local_26c + 1);
    if ((((uVar3 != 0x75) && (uVar3 != 0x6f)) && (uVar3 != 0x78)) &&
       ((uVar3 != 0x58 && (uVar3 != 0x70)))) {
      if (uVar20 != 0) {
        if (uVar20 != 1) goto LAB_00004e1e;
        local_3c = 1;
      }
      uVar3 = local_3c;
      local_40 = local_27c & 2;
      if (local_3c == 0) {
        if ((local_27c >> 1 & 1) != 0) {
          cVar22 = '+';
          goto LAB_00004df8;
        }
      }
      else {
        cVar22 = '-';
LAB_00004df8:
        *(char *)local_26c = cVar22;
        puVar5 = local_26c;
        local_26c = (undefined2 *)((int)local_26c + -1);
      }
      if (((uVar3 | local_40) == 0) && ((local_27c >> 2 & 1) != 0)) {
        *(char *)local_26c = ' ';
        puVar5 = (undefined2 *)((int)puVar5 + -1);
        local_26c = (undefined2 *)((int)local_26c + -1);
      }
    }
LAB_00004e1e:
    if (((local_27c & 1) == 0) && ((int)&local_6b - (int)local_26c <= (int)local_278)) {
      puVar11 = (undefined2 *)((int)local_44 + (int)((int)local_26c + (-0x1fc - (int)&local_268)));
    }
    else {
      puVar11 = &local_268;
    }
    pcVar6 = (char *)((int)puVar5 + -1);
    iVar1 = 0x1fe;
    puVar5 = puVar11;
    do {
      pcVar6 = pcVar6 + 1;
      cVar22 = *pcVar6;
      *(char *)puVar5 = cVar22;
      local_26c = (undefined2 *)((int)puVar5 + 1);
      if (cVar22 == '\0') break;
      iVar1 = iVar1 + -1;
      local_26c = local_28;
      puVar5 = (undefined2 *)((int)puVar5 + 1);
    } while (iVar1 != 0);
    if (local_38 != 0) {
      *(char *)local_26c = (char)local_58;
      local_26c = (undefined2 *)((int)local_26c + 1);
    }
    puVar5 = local_44;
    if (local_26c <= local_44) {
      FUN_00011a94((char *)((int)local_26c + -1),0x20,(char *)((int)local_44 + (1 - (int)local_26c))
                  );
      *(char *)puVar5 = (char)local_58;
    }
    if ((local_27c >> 4 & 1) == 0) {
      FUN_00011a94(&local_268,0x20,(int)puVar11 - (int)&local_268);
    }
    else if (&local_268 != puVar11) {
      FUN_00011a94(&local_268,0x30,(int)puVar11 - (int)&local_268);
      if (((local_270 == 0x78) || (local_270 == 0x58)) || (local_270 == 0x70)) {
        if ((local_27c >> 3 & 1) != 0) {
          local_268 = CONCAT11(*(char *)((int)puVar11 + 1),(undefined)local_268);
          *(char *)((int)puVar11 + 1) = '0';
        }
      }
      else if (((local_40 | local_3c) != 0) || ((local_27c >> 2 & 1) != 0)) {
        local_268 = CONCAT11(local_268._1_1_,*(char *)puVar11);
        *(char *)puVar11 = '0';
      }
    }
    FUN_00015fa8(&local_268);
  }
  iVar1 = (*local_4c)(&local_268,local_54);
  iVar19 = iVar1 + iVar19;
LAB_0000500e:
  pbVar14 = *param_1;
  if (local_48 <= pbVar14) {
    return iVar19;
  }
  goto LAB_00004792;
}



void FUN_00005026(void)

{
  return;
}



undefined FUN_00005028(void)

{
  return *DAT_000051f4;
}



void FUN_000051c6(void)

{
  FUN_00011a94(DAT_00005494 + 0x30,0,0x14);
  return;
}



void FUN_000051d2(void)

{
  int iVar1;
  int *piVar2;
  
  FUN_000051c6();
  iVar1 = DAT_00005494;
  piVar2 = (int *)(DAT_00005494 + 0x5c);
  *(undefined *)(DAT_00005494 + 0x7c) = 0;
  *piVar2 = *piVar2 + 1;
  FUN_00010f2c(s_FSwitchToWifiIdle_000053db + 1);
  *(undefined4 *)(iVar1 + 0x60) = 0;
  return;
}



void FUN_0000529a(void)

{
  int iVar1;
  
  iVar1 = DAT_00005494;
  if (*(int *)(DAT_00005494 + 0x88) != 0) {
    FUN_00014580((int)(short)*(int *)(DAT_00005494 + 0x88));
    FUN_00010f2c(s_CW_CloseSocket__tpsWI_>iSocket___0000544c,*(undefined4 *)(iVar1 + 0x88));
    *(undefined4 *)(iVar1 + 0x88) = 0;
  }
  return;
}



int FUN_00005478(undefined2 param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined auStack_d4 [28];
  undefined2 local_b8;
  undefined2 local_b6;
  undefined4 local_b4;
  undefined auStack_a8 [128];
  undefined local_28 [4];
  
  iVar6 = DAT_00005494;
  uVar8 = *(undefined4 *)(DAT_00005494 + 0x80);
  *(undefined4 *)(DAT_00005494 + 0x88) = 0xffffffff;
  FUN_00010f2c(&DAT_000057a0);
  uVar2 = FUN_000139d4(2,1,100);
  *(undefined4 *)(iVar6 + 0x88) = uVar2;
  local_b8 = 2;
  local_b6 = FUN_00014a64(param_1);
  local_b4 = FUN_00014810(uVar8);
  if (*(int *)(iVar6 + 0x88) < 0) {
    FUN_00010f2c(s_Error__sl_Socket_error_number_____000057a8,*(undefined4 *)(iVar6 + 0x88));
    return *(int *)(iVar6 + 0x88);
  }
  FUN_00010f2c(s_Open_SSL_Socket__socketID____d_000057d0,*(undefined4 *)(iVar6 + 0x88));
  FUN_00010f2c(&DAT_000057f4);
  iVar3 = FUN_0001190c(s__cert_129_der_000057fc,0,auStack_d4);
  if (iVar3 < 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 100;
  }
  iVar4 = FUN_0001190c(s_F_cert_130_der_0000580b + 1,0,auStack_d4);
  if (iVar4 < 0) {
    iVar3 = 0;
  }
  iVar4 = FUN_0001190c(s_F_cert_131_der_0000581b + 1,0,auStack_d4);
  if (iVar4 < 0) {
    iVar3 = 0;
  }
  FUN_00010f2c(&DAT_0000582c);
  local_28[0] = 3;
  iVar4 = FUN_00012800((int)*(short *)(iVar6 + 0x88),1,0x19,local_28,1);
  if (-1 < iVar4) {
    if (iVar3 != 0) {
      FUN_00010f2c(&DAT_00005834);
      iVar4 = FUN_00012800((int)*(short *)(iVar6 + 0x88),1,0x20,s__cert_129_der_000057fc,0xd);
      if (((iVar4 < 0) ||
          (iVar4 = FUN_00012800((int)*(short *)(iVar6 + 0x88),1,0x1f,s_F_cert_130_der_0000580b + 1,
                                0xd), iVar4 < 0)) ||
         (iVar4 = FUN_00012800((int)*(short *)(iVar6 + 0x88),1,0x1e,s_F_cert_131_der_0000581b + 1,
                               0xd), iVar4 < 0)) goto LAB_00005686;
      uVar2 = FUN_0000b354();
      iVar3 = FUN_00014a30(uVar2,s_smartap_tech_com_0000583c);
      if (iVar3 != 0) {
        local_b6 = FUN_00014a64(0x50);
        FUN_0000b47a(0x50);
        if ((5 < *DAT_00005698) && (4 < DAT_00005698[2])) {
          FUN_0000b354();
          FUN_0000b354();
          FUN_00015fa8();
          iVar4 = FUN_00012800((int)*(short *)(iVar6 + 0x88),1,0x23);
          if (iVar4 < 0) goto LAB_00005686;
        }
      }
    }
    FUN_00010f2c(&DAT_00005850);
    FUN_000003c6();
    iVar4 = FUN_0000edcc((int)*(short *)(iVar6 + 0x88),&local_b8,0x10);
    FUN_00010f2c(s_20__iLenorError____d_00005858,iVar4);
    if (iVar4 < 0) {
      pcVar5 = s_sl_Connect_iLenorError____d_00005870;
    }
    else {
      uVar9 = FUN_0000df3c();
      FUN_0000b358((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),(int)uVar9);
      iVar3 = iVar6 + 0x6fe;
      FUN_00012e6a(iVar3,s_FGET___s_HTTP_1_1_Host__eValve_s_0000588f + 1);
      FUN_00010f2c(&DAT_0000596c);
      sVar1 = FUN_00015fa8(iVar3);
      iVar4 = FUN_00010298((int)*(short *)(iVar6 + 0x88),iVar3,(int)sVar1,0);
      if (iVar4 < 0) {
        pcVar5 = s_sl_Send_iLenorError____d_00005974;
      }
      else {
        FUN_00010f2c(&DAT_00005990);
        iVar4 = FUN_00012b90((int)*(short *)(iVar6 + 0x88),auStack_a8,0x80,0);
        if (-1 < iVar4) {
          FUN_00010f2c(&DAT_000059b4);
          iVar7 = *DAT_0000569c;
          iVar3 = FUN_00014a30(auStack_a8,s_HTTP_1_1_101_Switching_Protocols_000059bc);
          iVar4 = -1;
          if (iVar3 != 0) {
            iVar6 = *(int *)(iVar6 + 0x88);
            *(short *)(*(int *)(iVar7 + 0x34) + 0x14) = (short)iVar6;
            return iVar6;
          }
          goto LAB_00005686;
        }
        pcVar5 = s_sl_Recv_iLenorError____d_00005998;
      }
    }
    FUN_00010f2c(pcVar5,iVar4);
  }
LAB_00005686:
  FUN_00014580((int)*(short *)(iVar6 + 0x88));
  return iVar4;
}



void FUN_000056a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 local_1c;
  undefined4 uStack_18;
  
  iVar2 = DAT_0000579c;
  *(int *)(DAT_0000579c + 0x68) = *(int *)(DAT_0000579c + 0x68) + 1;
  local_1c = param_3;
  uStack_18 = param_4;
  FUN_000051c6();
  FUN_0000529a();
  FUN_0000b482();
  iVar4 = FUN_00005478();
  uVar5 = FUN_000163e0();
  *(undefined4 *)(iVar2 + 0x90) = uVar5;
  iVar1 = DAT_00005798;
  if ((iVar4 == -100) || (iVar4 == -0x9f)) {
    uVar8 = FUN_0001531c();
  }
  else {
    if (0 < iVar4) {
      *(undefined4 *)(iVar2 + 0x8c) = 0;
      *(undefined *)(iVar1 + 0x2d) = 4;
      local_1c = 1;
      if (0 < *(int *)(iVar2 + 0x88)) {
        FUN_00012800((int)(short)*(int *)(iVar2 + 0x88),1,0x18,&local_1c,4);
      }
      *(undefined4 *)(iVar2 + 0x6f0) = 0;
      *(undefined *)(iVar2 + 0x7c) = 4;
      FUN_00006772();
      FUN_0000d9d2();
      FUN_000067ba();
      FUN_00010f2c(s_Fsignaling_OTA_Obj__d__g_OTAStat_00005a07 + 1,iVar1 + 8,iVar1 + 4);
      FUN_0000bb2a(iVar1 + 0xc);
      FUN_0000bb2a(iVar1 + 8);
      FUN_00010f2c(s_Connected_to_Server_on_Socket__d_00005a34,*(undefined4 *)(iVar2 + 0x88));
      return;
    }
    if (iVar4 == -0x6f) {
      FUN_00010f2c(s_FSwitchToSocketOpened_ERROR__Con_00005a9f + 1);
      uVar5 = FUN_000163e0();
      *(undefined4 *)(iVar2 + 0xc) = uVar5;
      *(undefined *)(iVar2 + 0x7c) = 2;
    }
    else if (iVar4 == -0xd0) {
      FUN_00010f2c(s_SwitchToSocketOpened__SL_SOCKET__00005a74);
      FUN_0001531c();
    }
    else {
      FUN_00010f2c(s_SwitchToSocketOpened___d_00005a58,iVar4);
    }
    puVar3 = DAT_00005afc;
    uVar7 = *DAT_00005afc;
    uVar6 = *(int *)(iVar2 + 0x8c) + 1;
    uVar8 = CONCAT44(DAT_00005afc,uVar6);
    *(uint *)(iVar2 + 0x8c) = uVar6;
    if ((uVar7 >> 1 & 1) != 0) {
      uVar7 = *puVar3 >> 4;
      uVar8 = CONCAT44(uVar7,uVar6);
      if (((*puVar3 >> 3 & 1) != 0) && (uVar8 = CONCAT44(uVar7,uVar6), uVar6 < 0x15)) {
        return;
      }
    }
  }
  FUN_000051d2((int)uVar8,(int)((ulonglong)uVar8 >> 0x20));
  return;
}



void FUN_00005ad2(void)

{
  char cVar1;
  undefined uVar2;
  byte bVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  byte bVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  
  iVar7 = DAT_00005e0c;
  iVar6 = DAT_00005e08;
  puVar17 = (undefined4 *)(&stack0xffffffdc + DAT_00005e08);
  iVar4 = DAT_00005e08 + -0x24;
  puVar18 = (undefined4 *)(&stack0xffffffdc + DAT_00005e08);
  *(undefined4 *)(&stack0xffffffe0 + DAT_00005e08) = 0;
  do {
    puVar5 = DAT_00005afc;
    cVar1 = *(char *)(iVar7 + 0x6d8);
    if (cVar1 == '\0') {
      *(undefined4 *)(iVar7 + 0x6e0) = 0;
      *(undefined4 *)(iVar7 + 0x6e4) = 0;
      *(undefined4 *)(iVar7 + 0x6e8) = 0;
      *(undefined *)(iVar7 + 0x6d8) = 1;
      *(undefined4 *)(iVar7 + 0x6e0) = 0;
LAB_00005b1e:
      do {
        iVar13 = FUN_000062c4(1,&stack0x00000626 + iVar6);
        if (iVar13 == 0) goto LAB_00005bf6;
        iVar10 = *(int *)(iVar7 + 0x6e0);
        uVar2 = (&stack0x00000626)[iVar6];
        *(int *)(iVar7 + 0x6e0) = iVar10 + 1;
        *(undefined *)(iVar7 + iVar10 + 0x6fe) = uVar2;
        *(int *)(iVar7 + 0x6e8) = *(int *)(iVar7 + 0x6e8) + 1;
      } while (iVar13 != 2);
LAB_00005b50:
      *(undefined *)(iVar7 + 0x6d8) = 3;
LAB_00005b56:
      FUN_00010ddc(&stack0xffffffe6 + iVar6,iVar7 + 0x6fe,*(undefined4 *)(iVar7 + 0x6e0));
      iVar13 = *(int *)(iVar7 + 0x6e0);
      (&stack0xffffffe6)[iVar13 + iVar6] = 0;
      *puVar17 = 2;
      FUN_0000d2a0(iVar7 + 0x6fe,iVar13,&stack0xffffffe6 + iVar6,&stack0xffffffe0 + iVar6);
      iVar13 = FUN_00010298((int)*(short *)(iVar7 + 0x88),&stack0xffffffe6 + iVar6,
                            (int)*(short *)(&stack0xffffffe0 + iVar6),0);
      *(undefined4 *)(&stack0x00000628 + iVar6) = 1;
      if (iVar13 < 0) {
        *(int *)(iVar7 + 0x48) = *(int *)(iVar7 + 0x48) + 1;
        FUN_00010f2c(s_MaintainSocket_sl_Send_failed_iR_00005eb0,iVar13);
        if (*(uint *)(iVar7 + 0x48) == (*(uint *)(iVar7 + 0x48) / 3) * 3) {
          if (((*puVar5 >> 1 & 1) != 0) && ((*puVar5 >> 3 & 1) != 0)) {
            uVar12 = FUN_000163e0(*puVar5 >> 4,*puVar5 >> 2);
            *(undefined4 *)(iVar7 + 0xc) = uVar12;
            *(undefined *)(iVar7 + 0x7c) = 2;
            return;
          }
          goto LAB_00005ea2;
        }
      }
      else {
        *(undefined *)(iVar7 + 0x6d8) = 0;
        *(int *)(iVar7 + 0x44) = *(int *)(iVar7 + 0x44) + 1;
        *(int *)(iVar7 + 0x6f0) = *(int *)(iVar7 + 0x6f0) + 1;
      }
    }
    else {
      if (cVar1 == '\x01') goto LAB_00005b1e;
      if (cVar1 == '\x02') goto LAB_00005b50;
      if (cVar1 == '\x03') goto LAB_00005b56;
LAB_00005bf6:
      *(undefined4 *)(&stack0x00000628 + iVar6) = 0;
    }
    uVar8 = FUN_00012b90((int)*(short *)(iVar7 + 0x88),&stack0xffffffe6 + iVar6,0x63c,0);
    *(undefined4 *)(&stack0x0000062c + iVar6) = 0;
    if ((int)uVar8 < 0) {
      if (uVar8 != 0xfffffff5) {
        *(int *)(iVar7 + 0x50) = *(int *)(iVar7 + 0x50) + 1;
        if (((*puVar5 >> 1 & 1) != 0) && ((*puVar5 >> 3 & 1) != 0)) {
          uVar12 = FUN_000163e0(*puVar5 >> 4);
          *(undefined4 *)(iVar7 + 0xc) = uVar12;
          *(undefined *)(iVar7 + 0x7c) = 2;
          FUN_00010f2c(s_MaintainSocket___uReceiveFail_wi_00006010);
          return;
        }
        FUN_00010f2c(s_FMaintainSocket___uReceiveFail_w_00006037 + 1,*puVar5 >> 2);
LAB_00005ea2:
        FUN_000051d2();
        return;
      }
      iVar13 = FUN_000163e0();
      if (DAT_0000607c < (uint)(iVar13 - *(int *)(iVar7 + 0x10))) {
        FUN_00010f2c(s_MaintainSocket___SW_WATCHDOG_TIM_00005fe8);
        do {
                    // WARNING: Do nothing block with infinite loop
        } while( true );
      }
    }
    else if (2 < (int)uVar8) {
      if ((((&stack0xffffffe6)[iVar6] & 0x70) == 0) && (((&stack0xffffffe6)[iVar6] & 0x80) == 0x80))
      {
        bVar3 = (&stack0xffffffe7)[iVar6];
        bVar16 = (&stack0xffffffe6)[iVar6] & 0xf;
        if ((bVar16 != 1) && (((bVar16 != 2 && (bVar16 != 8)) && (bVar16 != 9 && bVar16 != 10))))
        goto LAB_00005d3a;
        iVar13 = 0;
        uVar9 = (byte)(&stack0xffffffe7)[iVar6] & 0x7f;
        if ((uVar9 == 0x7e) && (uVar8 < 4)) {
LAB_00005d32:
          bVar16 = 0xf2;
        }
        else if (uVar9 == 0x7f) {
          if (uVar8 < 10) goto LAB_00005d32;
          if (((&stack0xffffffe9)[iVar6] & 0x80) == 0) goto LAB_00005c9a;
LAB_00005d2c:
          bVar16 = 0xf1;
        }
        else {
LAB_00005c9a:
          if (uVar9 == 0x7e) {
            *(undefined2 *)(&stack0xffffffe4 + iVar6) = 0;
            *(undefined2 *)(&stack0xffffffe4 + iVar6) = *(undefined2 *)(&stack0xffffffe8 + iVar6);
            uVar9 = FUN_00014a64(*(undefined2 *)(&stack0xffffffe4 + iVar6));
            iVar13 = 2;
          }
          else if (uVar9 == 0x7f) goto LAB_00005d2c;
          if (uVar9 != 0) {
            if ((bVar3 & 0x80) == 0x80) {
              if (uVar8 < iVar13 + uVar9 + 6) goto LAB_00005d28;
              iVar10 = iVar13 + iVar4;
              if (iVar13 + (uVar9 - uVar8) != -6) {
                FUN_000152a4(s_Assertion_failed___payloadLength_00005f4c);
              }
              *(uint *)(iVar7 + 0x94) = uVar9;
              if (uVar9 != 0) {
                uVar8 = 0;
                pbVar15 = &stack0xffffffec + iVar10 + 0x24;
                do {
                  uVar14 = uVar8 & 3;
                  uVar9 = uVar9 - 1;
                  uVar8 = uVar8 + 1;
                  *pbVar15 = (&stack0xffffffe8)[uVar14 + iVar10 + 0x24] ^ *pbVar15;
                  pbVar15 = pbVar15 + 1;
                } while (uVar9 != 0);
              }
            }
            else if (uVar8 < iVar13 + uVar9) {
LAB_00005d28:
              bVar16 = 0xf2;
            }
            else {
              *(uint *)(iVar7 + 0x94) = uVar9;
              FUN_00010ddc(iVar7 + 0x98,&stack0xffffffe8 + iVar13 + iVar6,uVar9);
            }
          }
        }
      }
      else {
LAB_00005d3a:
        bVar16 = 0xf1;
      }
      iVar13 = *(int *)(iVar7 + 0x94);
      *(undefined4 *)(iVar7 + 0x6f0) = 0;
      *(int *)(iVar7 + 0x94) = iVar13 + 1;
      *(int *)(iVar7 + 0x4c) = *(int *)(iVar7 + 0x4c) + 1;
      *(undefined *)(iVar7 + iVar13 + 0x98) = 0;
      if (bVar16 == 1) {
        FUN_00010f2c(&DAT_00005fe0,iVar7 + 0x98);
        iVar13 = *(int *)(iVar7 + 0x94);
        pbVar15 = (byte *)(iVar7 + 0x98);
        *(int *)(iVar7 + 0x38) = iVar13;
        while (iVar13 != 0) {
          iVar10 = *(int *)(iVar7 + 0x38) + -1;
          *(int *)(iVar7 + 0x38) = iVar10;
          iVar13 = iVar13 + -1;
          if (*(char *)(iVar7 + 0x40) == '\0') {
            uVar8 = (uint)*pbVar15;
            if ((uVar8 < 0x61) || (0x66 < uVar8)) {
              if ((uVar8 < 0x41) || (0x46 < uVar8)) {
                if ((uVar8 < 0x30) || (0x39 < uVar8)) {
                  iVar11 = 0;
                }
                else {
                  iVar11 = uVar8 - 0x30;
                }
              }
              else {
                iVar11 = uVar8 - 0x37;
              }
            }
            else {
              iVar11 = uVar8 - 0x57;
            }
            *(int *)(iVar7 + 0x3c) = iVar11 << 4;
            *(undefined *)(iVar7 + 0x40) = 1;
          }
          else {
            uVar8 = (uint)*pbVar15;
            if ((uVar8 < 0x61) || (0x66 < uVar8)) {
              if ((uVar8 < 0x41) || (0x46 < uVar8)) {
                if ((uVar8 < 0x30) || (0x39 < uVar8)) {
                  iVar10 = 0;
                }
                else {
                  iVar10 = uVar8 - 0x30;
                }
              }
              else {
                iVar10 = uVar8 - 0x37;
              }
            }
            else {
              iVar10 = uVar8 - 0x57;
            }
            uVar8 = iVar10 + *(int *)(iVar7 + 0x3c);
            *(uint *)(iVar7 + 0x3c) = uVar8;
            *(undefined *)(iVar7 + 0x40) = 0;
            FUN_00006088(1,uVar8 & 0xff);
            iVar10 = *(int *)(iVar7 + 0x38);
          }
          if (iVar10 == 0) {
            FUN_000051c6();
          }
          pbVar15 = pbVar15 + 1;
        }
        *(undefined4 *)(&stack0x0000062c + iVar6) = 1;
      }
      else if (bVar16 == 9) {
        *(undefined4 *)(&stack0xffffffe0 + iVar6) = 0;
        *puVar18 = 10;
        FUN_0000d2a0(0,0,&stack0xffffffe6 + iVar6,&stack0xffffffe0 + iVar6);
        FUN_00010298((int)*(short *)(iVar7 + 0x88),&stack0xffffffe6 + iVar6,
                     (int)*(short *)(&stack0xffffffe0 + iVar6),0);
      }
      uVar12 = FUN_000163e0();
      *(undefined4 *)(iVar7 + 0x10) = uVar12;
    }
    if ((*(uint *)(&stack0x0000062c + iVar6) | *(uint *)(&stack0x00000628 + iVar6)) == 0) {
      return;
    }
  } while( true );
}



void FUN_00005ede(void)

{
  undefined *puVar1;
  int iVar2;
  undefined uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined auStack_30 [32];
  
  iVar2 = DAT_00006084;
  puVar5 = (undefined4 *)(DAT_00006084 + 0x80);
  *(int *)(DAT_00006084 + 100) = *(int *)(DAT_00006084 + 100) + 1;
  *puVar5 = 0;
  FUN_0000b354();
  uVar3 = FUN_00015fa8();
  uVar4 = FUN_0000b354();
  FUN_00015f94(auStack_30,uVar4);
  FUN_00010f2c(s_Server_DNS_is__s_00006064,auStack_30);
  FUN_0000f72c(auStack_30,uVar3,puVar5,2);
  uVar4 = FUN_000163e0();
  puVar1 = DAT_00006078;
  *(undefined4 *)(iVar2 + 0x84) = uVar4;
  *puVar1 = 3;
  if (*(int *)(iVar2 + 0x80) == 0) {
    FUN_000051d2();
  }
  else {
    uVar4 = FUN_000163e0();
    *(undefined4 *)(iVar2 + 0xc) = uVar4;
    *(undefined *)(iVar2 + 0x7c) = 2;
  }
  return;
}



uint FUN_00006088(int param_1,byte param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  int iVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  byte local_20;
  undefined3 uStack_1f;
  
  iVar11 = DAT_000062bc;
  uStack_1f = (undefined3)((uint)param_4 >> 8);
  iVar8 = DAT_000062bc + 0x1f8;
  sVar2 = (short)param_1;
  iVar12 = sVar2 * 0x88 + iVar8;
  *(int *)(iVar12 + 4) = *(int *)(iVar12 + 4) + 1;
  iVar10 = DAT_000062c0;
  iVar6 = sVar2 * 0x18 + iVar11;
  pbVar7 = (byte *)(iVar6 + 0x54);
  local_20 = param_2;
  if (param_2 == 0x7e) {
    iVar8 = iVar8 + param_1 * 0x88;
    *(int *)(iVar8 + 8) = *(int *)(iVar8 + 8) + 1;
    if (*pbVar7 != 0) {
      *(int *)(iVar12 + 0xc) = *(int *)(iVar12 + 0xc) + 1;
    }
    iVar10 = iVar11 + param_1 * 0x10 + 0x34;
    iVar11 = FUN_0000d166(iVar10);
    if (iVar11 != 0) {
      *(int *)(iVar12 + 0x10) = *(int *)(iVar12 + 0x10) + 1;
    }
    *(byte *)(iVar6 + 100) = local_20;
    *(undefined4 *)(iVar6 + 0x58) = 1;
    *pbVar7 = 1;
    *(undefined4 *)(iVar6 + 0x60) = 0;
    *(undefined4 *)(iVar6 + 0x5c) = 9;
    uVar4 = FUN_0000d148(iVar10);
    return uVar4;
  }
  if ((*pbVar7 & 1) == 0) {
    uVar4 = *(int *)(iVar12 + 0x14) + 1;
    *(uint *)(iVar12 + 0x14) = uVar4;
    return uVar4;
  }
  if (((*pbVar7 >> 3 & 1) != 0) &&
     (iVar3 = FUN_0000d0cc(*(undefined4 *)(DAT_000062c0 + 0xc + sVar2 * 0x14),&local_20), iVar3 != 0
     )) {
    *(int *)(iVar12 + 0x1c) = *(int *)(iVar12 + 0x1c) + 1;
  }
  bVar1 = *pbVar7;
  uVar4 = (uint)bVar1;
  if ((bVar1 >> 1 & 1) != 0) {
    if ((bVar1 >> 2 & 1) == 0) {
      if (local_20 == 0x7d) {
        uVar4 = uVar4 | 4;
        goto LAB_000061f6;
      }
    }
    else {
      local_20 = local_20 ^ 0x10;
    }
    uVar4 = *pbVar7 & 0xfb;
    *pbVar7 = (byte)uVar4;
  }
  if (((uVar4 >> 4 & 1) != 0) &&
     (iVar3 = FUN_0000d10c(iVar11 + param_1 * 0x10 + 0x34,local_20), iVar3 != 0)) {
    *pbVar7 = *pbVar7 | 0x40;
  }
  if (*(uint *)(iVar6 + 0x58) < 8) {
    pbVar7[*(uint *)(iVar6 + 0x58) + 0x10] = local_20;
  }
  iVar3 = *(int *)(iVar6 + 0x58) + 1;
  *(int *)(iVar6 + 0x58) = iVar3;
  bVar1 = *pbVar7;
  if (((bVar1 >> 5 & 1) != 0) && (iVar3 == *(int *)(iVar6 + 0x5c))) {
    if ((uint)local_20 == ((*(uint *)(iVar6 + 0x60) ^ 0xff) + 1 & 0xff)) {
      if ((bVar1 >> 4 & 1) == 0) {
        *(int *)(iVar12 + 0x20) = *(int *)(iVar12 + 0x20) + 1;
      }
      else {
        if ((bVar1 >> 6 & 1) == 0) {
          FUN_0000d160();
          FUN_0000036a();
        }
        else {
          FUN_0000d148(iVar11 + param_1 * 0x10 + 0x34,bVar1 >> 7);
          *(int *)(iVar12 + 0x30) = *(int *)(iVar12 + 0x30) + 1;
        }
        *(int *)(iVar12 + 0x28) = *(int *)(iVar12 + 0x28) + 1;
      }
    }
    else if ((bVar1 >> 4 & 1) == 0) {
      *(int *)(iVar12 + 0x24) = *(int *)(iVar12 + 0x24) + 1;
    }
    else {
      FUN_0000d148(iVar11 + param_1 * 0x10 + 0x34);
      *(int *)(iVar12 + 0x2c) = *(int *)(iVar12 + 0x2c) + 1;
    }
    *pbVar7 = 0;
  }
  *(uint *)(iVar6 + 0x60) = (uint)local_20 + *(int *)(iVar6 + 0x60);
  if (*(int *)(iVar6 + 0x58) == 2) {
    pbVar9 = (byte *)(iVar6 + 0x65);
    if (*pbVar9 != 3) {
      iVar10 = iVar10 + param_1 * 0x14;
      FUN_0000d0cc(*(undefined4 *)(iVar10 + 0xc),iVar6 + 100);
      FUN_0000d0cc(*(undefined4 *)(iVar10 + 0xc),iVar6 + 0x65);
      *pbVar7 = *pbVar7 | 0x2a;
      if ((*pbVar9 >> 3 & 1) == 0) {
        uVar4 = 7;
      }
      else {
        uVar4 = 0x27;
      }
      *(uint *)(iVar6 + 0x5c) = uVar4;
      return uVar4;
    }
    iVar11 = iVar11 + param_1 * 0x10 + 0x34;
    uVar4 = FUN_0000d10c(iVar11,*(undefined *)(iVar6 + 100));
    uVar5 = FUN_0000d10c(iVar11,*pbVar9);
    if ((uVar5 | uVar4) != 0) {
      *pbVar7 = *pbVar7 | 0x40;
    }
    uVar4 = *pbVar7 | 0x12;
  }
  else {
    uVar4 = *(int *)(iVar6 + 0x58) - 8;
    if (uVar4 != 0) {
      return uVar4;
    }
    if ((*pbVar7 >> 4 & 1) == 0) {
      return (uint)(*pbVar7 >> 5);
    }
    uVar4 = (uint)*(byte *)(iVar6 + 0x6a) + (uint)*(byte *)(iVar6 + 0x6b) * 0x100 + 9;
    *(uint *)(iVar6 + 0x5c) = uVar4;
    if (uVar4 < 0x109) {
      uVar4 = *pbVar7 | 0x20;
    }
    else {
      iVar8 = iVar8 + param_1 * 0x88;
      *(int *)(iVar8 + 0x18) = *(int *)(iVar8 + 0x18) + 1;
      uVar4 = 0;
    }
  }
LAB_000061f6:
  *pbVar7 = (byte)uVar4;
  return uVar4;
}



undefined4 FUN_000062c4(short param_1,byte *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  int iVar6;
  byte *pbVar7;
  uint local_10;
  
  pbVar5 = (byte *)(param_1 * 0x38 + DAT_00006624);
  if (param_2 == (byte *)0x0) {
    return 0;
  }
  if ((*pbVar5 >> 4 & 1) == 0) {
    bVar3 = *pbVar5;
    if ((bVar3 >> 6 & 1) != 0) {
      iVar6 = *(int *)(pbVar5 + 0x18);
      bVar3 = 0;
      *param_2 = (byte)*(undefined4 *)(pbVar5 + 0x10) ^ 0x10;
      *(int *)(pbVar5 + 0x18) = iVar6 + 1;
      uVar2 = 2;
      param_2 = pbVar5;
      goto LAB_00006456;
    }
    if ((bVar3 >> 5 & 1) == 0) {
      local_10 = param_4;
      iVar6 = FUN_0000d180(*(undefined4 *)(DAT_00006620 + param_1 * 0x14),&local_10,bVar3 >> 7);
      if (iVar6 != 0) {
        return 0;
      }
      bVar4 = *pbVar5;
      uVar1 = (uint)bVar4;
      bVar3 = (byte)local_10;
      if ((bVar4 & 1) == 0) {
        if ((byte)local_10 == 0x7e) {
          *pbVar5 = 1;
          *(undefined4 *)(pbVar5 + 0xc) = 0;
          *(undefined4 *)(pbVar5 + 4) = 1;
          *(int *)(pbVar5 + 0x14) = *(int *)(pbVar5 + 0x14) + 1;
        }
        else {
          *(int *)(pbVar5 + 0x24) = *(int *)(pbVar5 + 0x24) + 1;
        }
      }
      else {
        iVar6 = *(int *)(pbVar5 + 4);
        if (iVar6 == 1) {
          if ((byte)local_10 == 3) {
            *pbVar5 = *pbVar5 | 4;
            *(int *)(pbVar5 + 0x20) = *(int *)(pbVar5 + 0x20) + 1;
          }
          else {
            *pbVar5 = *pbVar5 | 10;
            if (((byte)local_10 >> 3 & 1) == 0) {
              uVar2 = 6;
            }
            else {
              uVar2 = 0x26;
            }
            *(undefined4 *)(pbVar5 + 8) = uVar2;
            *(int *)(pbVar5 + 0x1c) = *(int *)(pbVar5 + 0x1c) + 1;
          }
          uVar1 = (uint)*pbVar5;
        }
        else if ((bVar4 >> 2 & 1) == 0) {
          if (((bVar4 >> 3 & 1) != 0) && (*(int *)(pbVar5 + 8) == iVar6)) {
LAB_00006366:
            uVar1 = 0;
LAB_00006368:
            *pbVar5 = (byte)uVar1;
          }
        }
        else {
          if (((byte)local_10 == 0x7e) || ((byte)local_10 == 0x7d)) {
            *pbVar5 = *pbVar5 | 0x10;
          }
          if (iVar6 == 7) {
            uVar1 = *(int *)(pbVar5 + 0x10) + (local_10 & 0xff) * 0x100;
            if (0xff < uVar1) {
              *(int *)(pbVar5 + 0x28) = *(int *)(pbVar5 + 0x28) + 1;
              goto LAB_00006366;
            }
            *(uint *)(pbVar5 + 8) = uVar1 + 7;
            *pbVar5 = *pbVar5 | 2;
          }
          uVar1 = (uint)*pbVar5;
          if (((*pbVar5 >> 1 & 1) != 0) && (*(int *)(pbVar5 + 8) == iVar6)) {
            uVar1 = uVar1 | 0x20;
            goto LAB_00006368;
          }
        }
        *(int *)(pbVar5 + 4) = *(int *)(pbVar5 + 4) + 1;
        *(uint *)(pbVar5 + 0x10) = local_10 & 0xff;
        *(uint *)(pbVar5 + 0xc) = (local_10 & 0xff) + *(int *)(pbVar5 + 0xc);
        if ((uVar1 >> 4 & 1) != 0) {
          bVar3 = 0x7d;
        }
      }
      uVar2 = 1;
      goto LAB_00006456;
    }
    uVar1 = (*(uint *)(pbVar5 + 0xc) ^ 0xff) + 1;
    bVar3 = (byte)uVar1;
    local_10 = uVar1 & 0xff;
    if (((uVar1 & 0xff) == 0x7e) || (bVar3 == 0x7d)) {
      bVar4 = *pbVar5;
      *(uint *)(pbVar5 + 0x10) = local_10;
      bVar3 = 0x7d;
      *pbVar5 = bVar4 & 0xdf;
      bVar4 = bVar4 & 0xdf | 0x40;
      pbVar7 = pbVar5;
      goto LAB_00006452;
    }
    bVar4 = 0;
    *(int *)(pbVar5 + 0x18) = *(int *)(pbVar5 + 0x18) + 1;
    uVar2 = 2;
  }
  else {
    bVar3 = *pbVar5 & 0xef;
    bVar4 = (byte)*(undefined4 *)(pbVar5 + 0x10) ^ 0x10;
    pbVar7 = param_2;
    param_2 = pbVar5;
LAB_00006452:
    uVar2 = 1;
    pbVar5 = pbVar7;
  }
  *pbVar5 = bVar4;
LAB_00006456:
  *param_2 = bVar3;
  return uVar2;
}



int FUN_0000645a(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 10;
  iVar1 = DAT_000067dc;
  do {
    if (param_1 == *(ushort *)(iVar1 + 6)) {
      return iVar1;
    }
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 0x24;
  } while (iVar2 != 0);
  return 0;
}



uint FUN_00006472(undefined4 param_1,uint param_2,uint param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (param_3 < 0x1e) {
    param_3 = 0x1e;
  }
  uVar1 = FUN_0000d10c(param_1,0x7e);
  uVar2 = FUN_0000d10c(param_1,3);
  uVar3 = FUN_0000d10c(param_1,param_2 & 0xff);
  uVar9 = param_2 >> 8 & 0xff;
  uVar4 = FUN_0000d10c(param_1,uVar9);
  uVar10 = param_2 >> 0x10 & 0xff;
  uVar5 = FUN_0000d10c(param_1,uVar10);
  uVar6 = FUN_0000d10c(param_1,param_2 >> 0x18);
  uVar7 = FUN_0000d10c(param_1,param_3 & 0xff);
  uVar11 = param_3 >> 8 & 0xff;
  uVar8 = FUN_0000d10c(param_1,uVar11);
  if (param_4 != (int *)0x0) {
    *param_4 = uVar11 + (param_3 & 0xff) + (param_2 >> 0x18) + uVar10 + uVar9 + (param_2 & 0xff) + 3
    ;
  }
  return uVar8 | uVar7 | uVar6 | uVar3 | uVar1 | uVar2 | uVar4 | uVar5;
}



uint FUN_0000650e(undefined4 param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0000d166();
  if (uVar1 < 0x26) {
    iVar2 = 0x26 - uVar1;
    do {
      uVar1 = FUN_0000d10c(param_1,0);
      iVar2 = iVar2 + -1;
      param_3 = param_3 | uVar1;
    } while (iVar2 != 0);
  }
  if (param_3 == 0) {
    FUN_0000d160(param_1);
  }
  else {
    FUN_0000d148(param_1);
  }
  return param_3;
}



void FUN_00006546(uint param_1,undefined *param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined8 uVar13;
  
  puVar1 = (undefined4 *)FUN_0000645a(10);
  if (puVar1 != (undefined4 *)0x0) {
    if (0xf7 < param_3) {
      param_3 = 0xf8;
    }
    uVar12 = (uint)*(byte *)(puVar1 + 1);
    uVar2 = *(undefined4 *)(DAT_00006620 + uVar12 * 0x14);
    uVar3 = FUN_00006472(uVar2,*puVar1,param_3 + 7,0,param_4);
    uVar4 = FUN_0000d10c(uVar2,0x42);
    uVar5 = FUN_0000d10c(uVar2,param_3 + 5 & 0xff);
    uVar6 = FUN_0000d10c(uVar2,1);
    uVar7 = FUN_0000d10c(uVar2,param_1 & 0xff);
    uVar8 = FUN_0000d10c(uVar2,param_1 >> 8 & 0xff);
    uVar9 = FUN_0000d10c(uVar2,param_1 >> 0x10 & 0xff);
    uVar13 = FUN_0000d10c(uVar2,param_1 >> 0x18);
    uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
    uVar3 = (uint)uVar13 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9;
    for (; param_3 != 0; param_3 = param_3 - 1) {
      uVar13 = FUN_0000d10c(uVar2,*param_2);
      uVar11 = (undefined4)((ulonglong)uVar13 >> 0x20);
      uVar3 = uVar3 | (uint)uVar13;
      param_2 = param_2 + 1;
    }
    uVar4 = FUN_0000650e(uVar2,uVar11,uVar3);
    if ((uVar4 | uVar3) == 0) {
      iVar10 = DAT_00006924 + uVar12 * 0x38;
      *(int *)(iVar10 + 0xb0) = *(int *)(iVar10 + 0xb0) + 1;
      FUN_0000db3a(uVar12);
      return;
    }
    iVar10 = DAT_00006924 + uVar12 * 0x38;
    *(int *)(iVar10 + 0xb4) = *(int *)(iVar10 + 0xb4) + 1;
  }
  return;
}



void FUN_00006628(undefined param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 local_20;
  undefined uStack_1c;
  undefined local_1b;
  undefined2 local_1a;
  undefined2 uStack_18;
  undefined2 uStack_16;
  
  uStack_18 = (undefined2)param_4;
  uVar1 = uStack_18;
  uStack_16 = (undefined2)((uint)param_4 >> 0x10);
  uVar2 = uStack_16;
  uStack_1c = (undefined)param_3;
  local_1b = (undefined)((uint)param_3 >> 8);
  local_1a = (undefined2)((uint)param_3 >> 0x10);
  local_20 = param_2;
  iVar3 = FUN_0000645a(10);
  if (iVar3 != 0) {
    local_20._1_3_ = (undefined3)param_3;
    local_20 = CONCAT31(local_20._1_3_,(char)param_2);
    uStack_1c = (undefined)((uint)param_3 >> 0x18);
    local_1b = param_1;
    local_1a = uVar1;
    uStack_18 = uVar2;
    FUN_00006546(4,&local_20,10);
  }
  return;
}



uint FUN_00006656(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = (param_1 << 1) >> 0x1d;
  if (uVar7 < 7) {
    uVar4 = 0xf << (uVar7 << 2);
  }
  else {
    uVar4 = 0;
  }
  if (uVar7 != 0) {
    uVar6 = 0;
    uVar5 = (uVar7 + 0x3fffffff) * 4;
    do {
      uVar1 = uVar5 & 0xff;
      uVar7 = uVar7 - 1;
      uVar3 = uVar6 & 0x3f;
      uVar6 = uVar6 + 1;
      uVar2 = uVar5 & 0xff;
      uVar5 = uVar5 - 4;
      uVar4 = (param_1 >> (uVar3 << 2) & 0xf) << uVar2 | uVar4 & ~(0xf << uVar1);
    } while (uVar7 != 0);
  }
  return uVar4;
}



void FUN_000066a2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_0000645a(10);
  if (puVar1 != (undefined4 *)0x0) {
    iVar2 = FUN_00006656(*puVar1);
    FUN_00006628(param_1,8,(uint)*(byte *)(puVar1 + 1) + iVar2 * 0x10,DAT_000069a4,param_4);
  }
  return;
}



uint FUN_000066c8(undefined4 param_1,undefined4 param_2,byte *param_3,uint param_4)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  byte *local_28;
  uint uStack_24;
  
  uVar6 = param_4;
  if (param_4 < 0x1e) {
    uVar6 = 0x1e;
  }
  sVar1 = (short)param_1;
  uVar2 = *(undefined4 *)(DAT_000069b0 + sVar1 * 0x14);
  local_28 = param_3;
  uStack_24 = param_4;
  uVar3 = FUN_00006472(uVar2,param_2,uVar6,&local_28);
  do {
    if (param_4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (uint)*param_3;
      param_4 = param_4 - 1;
      param_3 = param_3 + 1;
    }
    uVar7 = FUN_0000d10c(uVar2,uVar5);
    uVar3 = uVar3 | (uint)uVar7;
    uVar6 = uVar6 - 1;
    local_28 = local_28 + uVar5;
  } while (uVar6 != 0);
  uVar6 = FUN_0000650e(uVar2,(int)((ulonglong)uVar7 >> 0x20),uVar3);
  if ((uVar3 | uVar6) == 0) {
    piVar4 = (int *)(sVar1 * 0x38 + DAT_000069a8);
    *piVar4 = *piVar4 + 1;
    FUN_0000db3a(param_1);
  }
  else {
    piVar4 = (int *)(sVar1 * 0x38 + DAT_000069a8 + 4);
    *piVar4 = *piVar4 + 1;
  }
  return uVar3 | uVar6;
}



void FUN_00006746(undefined2 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = param_3;
  uStack_c = param_4;
  puVar1 = (undefined4 *)FUN_0000645a(0);
  if (puVar1 != (undefined4 *)0x0) {
    local_10 = CONCAT22(param_1,0x443);
    FUN_000066c8(*(undefined *)(puVar1 + 1),*puVar1,&local_10,6);
  }
  return;
}



void FUN_00006772(void)

{
  int iVar1;
  
  iVar1 = DAT_00006924;
  FUN_00011a94(DAT_00006924 + 0x18,0,8);
  FUN_00011a94(iVar1 + 0x308,0,0x16c);
  return;
}



undefined4 FUN_00006792(void)

{
  return *(undefined4 *)(DAT_00006924 + 0xc);
}



void FUN_0000679a(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00006792();
  if (uVar1 < 3) {
    uVar2 = 0x13;
  }
  else {
    uVar2 = 0x15;
  }
  FUN_00006746(uVar2);
  return;
}



void FUN_000067ae(undefined4 param_1)

{
  FUN_000066c8(param_1,0xfffffff,DAT_000069b4,0x13);
  return;
}



void FUN_000067ba(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = DAT_000069b4;
  iVar1 = 10;
  *(undefined4 *)(DAT_000069b4 + -0x1c) = 0;
  iVar2 = iVar2 + 0x2e8;
  do {
    *(undefined *)(iVar2 + 0x20) = 0;
    iVar1 = iVar1 + -1;
    iVar2 = iVar2 + 0x24;
  } while (iVar1 != 0);
  FUN_000067ae(1);
  return;
}



int * FUN_000067e0(uint param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = 10;
  piVar2 = DAT_000069b8;
  while ((piVar1 = piVar2 + 9, param_2 != *piVar1 || (param_1 != *(byte *)(piVar2 + 10)))) {
    iVar3 = iVar3 + -1;
    piVar2 = piVar1;
    if (iVar3 == 0) {
      return (int *)0x0;
    }
  }
  return piVar1;
}



void FUN_00006800(undefined4 param_1)

{
  int iVar1;
  undefined local_78;
  undefined4 local_77;
  undefined local_73;
  undefined auStack_72 [106];
  
  local_78 = 8;
  local_73 = 0xb;
  local_77 = param_1;
  FUN_00010ddc(auStack_72,s_uPktProcUnknownCmd_00006990,0x14);
  iVar1 = FUN_00015fa8(auStack_72);
  FUN_00006546(8,&local_78,iVar1 + 7);
  return;
}



void FUN_00006838(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined *param_5,uint param_6)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  
  sVar1 = (short)param_1;
  uVar9 = *(undefined4 *)(DAT_000069bc + sVar1 * 0x14);
  if (0xfb < param_6) {
    param_6 = 0xfb;
  }
  uVar2 = FUN_00006472(uVar9,param_2,param_6 + 5,0);
  uVar3 = FUN_0000d10c(uVar9,0x44);
  uVar4 = FUN_0000d10c(uVar9,param_6 + 3 & 0xff);
  uVar5 = FUN_0000d10c(uVar9,param_3);
  uVar6 = FUN_0000d10c(uVar9,0);
  uVar10 = FUN_0000d10c(uVar9,param_4);
  uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
  uVar2 = (uint)uVar10 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6;
  for (; param_6 != 0; param_6 = param_6 - 1) {
    uVar10 = FUN_0000d10c(uVar9,*param_5);
    uVar7 = (undefined4)((ulonglong)uVar10 >> 0x20);
    uVar2 = uVar2 | (uint)uVar10;
    param_5 = param_5 + 1;
  }
  uVar3 = FUN_0000650e(uVar9,uVar7,uVar2);
  if ((uVar3 | uVar2) != 0) {
    piVar8 = (int *)(sVar1 * 0x38 + DAT_000069ac);
    *piVar8 = *piVar8 + 1;
    return;
  }
  piVar8 = (int *)(sVar1 * 0x38 + DAT_000069a8);
  *piVar8 = *piVar8 + 1;
  FUN_0000db3a(param_1);
  return;
}



void FUN_000068e6(int param_1,undefined *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_2 + 0xc);
  uVar4 = *(uint *)(iVar5 + 6);
  uVar2 = FUN_00006656(*(undefined4 *)(param_2 + 3));
  iVar3 = FUN_000067e0(*param_2,uVar2);
  if (iVar3 != 0) {
    cVar1 = *(char *)(iVar5 + 2);
    iVar3 = iVar3 + param_1 * 4;
    if (cVar1 == '\0') {
      *(uint *)(iVar3 + 0x14) = *(uint *)(iVar3 + 0x14) & ~uVar4;
    }
    else if (cVar1 == '\x01') {
      *(uint *)(iVar3 + 0x14) = uVar4 | *(uint *)(iVar3 + 0x14);
      return;
    }
  }
  return;
}



void FUN_00006928(undefined *param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined local_28;
  undefined local_27;
  undefined local_26;
  uint local_25;
  
  iVar3 = *(int *)(param_1 + 0xc);
  uVar2 = FUN_00006656(*(undefined4 *)(param_1 + 3));
  cVar1 = *(char *)(iVar3 + 3);
  if (cVar1 == '\x01') {
    uVar4 = (uint)**(byte **)(iVar3 + 7);
  }
  else if (cVar1 == '\x02') {
    uVar4 = (uint)**(ushort **)(iVar3 + 7);
  }
  else if (cVar1 == '\x04') {
    uVar4 = **(uint **)(iVar3 + 7);
  }
  else {
    uVar4 = 0;
  }
  FUN_00011a94(&local_28,0,0x13);
  local_28 = 0x29;
  local_26 = 0x80;
  local_27 = 0x11;
  local_25 = uVar4;
  FUN_000066c8(*param_1,uVar2,&local_28,0x13);
  return;
}



void FUN_000069c0(byte *param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  char *pcVar9;
  undefined *puVar10;
  int iVar11;
  ushort *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined local_1d8;
  undefined local_1d7;
  undefined4 local_1d6;
  undefined4 local_1d2;
  undefined local_1cc;
  int local_1cb;
  char local_1c7;
  undefined auStack_1c6 [102];
  undefined auStack_160 [4];
  uint local_15c;
  undefined local_144;
  undefined local_143;
  undefined4 local_142;
  undefined4 local_13e;
  undefined4 local_13a;
  uint local_136;
  undefined auStack_132 [232];
  char acStack_4a [5];
  undefined4 local_45;
  undefined4 local_41;
  undefined2 local_3d;
  
  iVar11 = *(int *)(param_1 + 0xc);
  FUN_00011a94(&local_45,0,0x1e);
  puVar12 = (ushort *)(iVar11 + 2);
  uVar2 = (uint)*puVar12;
  if (uVar2 == 0) {
    pcVar9 = s_main0_bin_00006d6c;
LAB_000069fe:
    local_45 = *(undefined4 *)pcVar9;
    local_41 = *(undefined4 *)((int)pcVar9 + 4);
    local_3d = *(undefined2 *)((int)pcVar9 + 8);
  }
  else {
    if (uVar2 != 1) {
      if (2 < uVar2 - 5) {
        return;
      }
      pcVar9 = (char *)&DAT_00006d54;
      goto LAB_000069fe;
    }
    FUN_00010ddc(&local_45,s_Fsensor0_bin_00006d5f + 1,0xc);
  }
  iVar3 = FUN_00013fec(DAT_00006d48);
  if (iVar3 == 1) {
    *DAT_00007024 = 0;
    FUN_00010f2c(s_exit__paing_mode_00006ff0,&local_45);
    return;
  }
  if ((*DAT_00006d4c == '\0') && (*(int *)(iVar11 + 6) != 0)) {
    if (*(char *)(iVar11 + 0x12) == '\x01') {
      iVar3 = FUN_00015fa8(&local_45);
      acStack_4a[iVar3] = acStack_4a[iVar3] + '\x01';
    }
    iVar3 = DAT_00006d44;
    iVar4 = *(int *)(iVar11 + 0x13);
    if (iVar4 == *(int *)(iVar11 + 0x17)) {
      if (*puVar12 == 7) {
        *(int *)(DAT_00006d44 + 0x10) = *(int *)(DAT_00006d44 + 0x10) + 1;
      }
      FUN_00010f2c(s_CCP_ExecuteReqImageCmd__image__s_00006f98,&local_45);
      uVar1 = *puVar12;
      if (((uVar1 == 7) || (uVar1 == 6 || uVar1 == 5)) && (*(int *)(iVar3 + 0x10) < 0xf)) {
        return;
      }
      FUN_00012ea8(&local_45,0);
      FUN_00010f2c(s_Fdeleting_file__s_00006fdb + 1,&local_45);
      *(undefined4 *)(iVar3 + 0x10) = 0;
      return;
    }
    uVar2 = *(int *)(iVar11 + 0x17) - iVar4;
    if (0x80 < uVar2) {
      iVar4 = iVar4 + 0x80;
    }
    if (0x80 < uVar2) {
      *(int *)(iVar11 + 0x17) = iVar4;
    }
    iVar5 = FUN_00011c64(&local_45,0,0,iVar3 + 8);
    iVar4 = DAT_00006d50;
    if (iVar5 < 0) {
      FUN_00010f2c(s_Cannot_Open__s_00006f84,&local_45);
      FUN_00010f2c(s_Upgrading_from_0x_x_to_0x_x_00006de0,*(undefined4 *)(iVar11 + 6),
                   *(undefined4 *)(iVar11 + 0xe));
      local_1cc = *(undefined *)puVar12;
      local_1cb = FUN_00006656(*(undefined4 *)(param_1 + 3));
      local_1cb = local_1cb << (*param_1 + 4 & 0xff);
      local_1c7 = *(char *)(iVar11 + 0x12);
      FUN_00015f94(auStack_1c6,&local_45);
      iVar11 = FUN_00015fa8(auStack_1c6);
      FUN_00006546(8,&local_1cc,iVar11 + 7);
      local_1d8 = 5;
      local_1d7 = 8;
      local_1d6 = 0;
      local_1d2 = 0;
      FUN_000066c8(*param_1,*(undefined4 *)(param_1 + 3),&local_1d8,10);
      iVar11 = *(int *)(iVar3 + 0x14) + 1;
      *(int *)(iVar3 + 0x14) = iVar11;
    }
    else {
      iVar5 = FUN_0001190c(&local_45,0,auStack_160);
      if (-1 < iVar5) {
        *(undefined4 *)(iVar3 + 0x14) = 0;
        uVar2 = *(uint *)(iVar11 + 0x13);
        if (local_15c < uVar2) {
          *(uint *)(iVar11 + 0x13) = local_15c - 1;
          uVar2 = *(uint *)(iVar11 + 0x13);
        }
        uVar6 = *(uint *)(iVar11 + 0x17);
        if (local_15c < uVar6) {
          *(uint *)(iVar11 + 0x17) = local_15c - 1;
          uVar6 = *(uint *)(iVar11 + 0x17);
        }
        if (uVar6 - local_15c == -1) {
          FUN_00010f2c(s_Device__d_File__s_Complete_00006da4,*puVar12,&local_45);
          iVar4 = FUN_00006656(*(undefined4 *)(param_1 + 3));
          uVar8 = 3;
          uVar7 = DAT_00006e00;
        }
        else {
          FUN_00015430();
          uVar13 = FUN_000147a0();
          uVar13 = FUN_0000f0d8((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),DAT_00006d3c,
                                DAT_00006d40);
          uVar14 = FUN_00015798(local_15c);
          FUN_0000e834((int)uVar13,(int)((ulonglong)uVar13 >> 0x20),(int)uVar14,
                       (int)((ulonglong)uVar14 >> 0x20));
          uVar7 = FUN_00012070();
          FUN_000147a0();
          FUN_00010f2c(s_FDevice__d_File__s_Percentage__4_00006d77 + 1,*puVar12,&local_45);
          iVar4 = FUN_00006656(*(undefined4 *)(param_1 + 3));
          uVar8 = 8;
        }
        FUN_00006628(uVar8,*(undefined *)puVar12,iVar4 << (*param_1 + 4 & 0xff),uVar7);
        local_142 = *(undefined4 *)(iVar11 + 0x1b);
        local_13e = *(undefined4 *)(iVar11 + 0x13);
        local_13a = *(undefined4 *)(iVar11 + 0x17);
        local_136 = local_15c;
        FUN_00010b54(*(undefined4 *)(iVar3 + 8),local_13e,auStack_132,(uVar6 - uVar2) + 1);
        FUN_0001155c(*(undefined4 *)(iVar3 + 8),0,0,0);
        uVar2 = (uVar6 - uVar2) + 0x11;
        local_144 = 7;
        local_143 = (undefined)uVar2;
        uVar7 = FUN_00006656(*(undefined4 *)(param_1 + 3));
        puVar10 = &local_144;
        iVar11 = (uVar2 & 0xff) + 2;
        goto LAB_00006b94;
      }
      *(undefined4 *)(iVar3 + 0x10) = 0;
      FUN_00010f2c(s_Fail_on_sl_FsGetInfo__s__00006dc4,&local_45);
      FUN_00010f2c(s_Upgrading_from_0x_x_to_0x_x_00006de0,*(undefined4 *)(iVar11 + 6),
                   *(undefined4 *)(iVar11 + 0xe));
      local_1cc = *(undefined *)puVar12;
      local_1cb = FUN_00006656(*(undefined4 *)(param_1 + 3));
      local_1cb = local_1cb << (*param_1 + 4 & 0xff);
      local_1c7 = *(char *)(iVar11 + 0x12) + '\x02';
      FUN_00015f94(auStack_1c6,&local_45);
      iVar11 = FUN_00015fa8(auStack_1c6);
      FUN_00006546(8,&local_1cc,iVar11 + 7);
      local_1d8 = 5;
      local_1d6 = 0;
      local_1d7 = 8;
      local_1d2 = 0;
      FUN_000066c8(*param_1,*(undefined4 *)(param_1 + 3),&local_1d8,10);
      iVar11 = *(int *)(iVar3 + 0x14) + 1;
      *(int *)(iVar3 + 0x14) = iVar11;
    }
    if (iVar11 < 3) {
      iVar11 = iVar4 + 8;
      FUN_00010f2c(s_Fsignaling_OTA_Obj__d__g_OTAStat_00006f57 + 1,iVar11,iVar4 + 4);
      FUN_0000bb2a(iVar11);
    }
  }
  else {
    local_1d8 = 5;
    puVar10 = &local_1d8;
    local_1d7 = 8;
    iVar11 = 10;
    local_1d6 = 0;
    uVar7 = *(undefined4 *)(param_1 + 3);
    local_1d2 = 0;
LAB_00006b94:
    FUN_000066c8(*param_1,uVar7,puVar10,iVar11);
  }
  return;
}



void FUN_00006e04(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined local_90;
  int local_8f;
  undefined local_8b;
  undefined auStack_8a [106];
  
  iVar3 = DAT_00007028;
  uVar5 = 9;
  uVar1 = 0;
  iVar7 = DAT_00007028 + 0x308;
  piVar6 = (int *)(DAT_00007028 + 0x2e4);
  uVar8 = 10;
  do {
    iVar4 = piVar6[9];
    if ((((param_2 != iVar4) || (uVar9 = uVar1, param_1 != *(byte *)(piVar6 + 10))) &&
        (uVar9 = uVar8, iVar4 == 0)) && (uVar1 <= uVar5)) {
      uVar5 = uVar1;
    }
    uVar1 = uVar1 + 1;
    piVar6 = piVar6 + 9;
    uVar8 = uVar9;
  } while (uVar1 < 10);
  bVar10 = uVar9 == 10;
  local_90 = *(undefined *)(param_3 + 4);
  local_8f = param_2;
  if (uVar9 == 10) {
    local_8b = 0xf;
    FUN_00010ddc(auStack_8a,s_New_neighbor_00007004,0xd);
    iVar4 = FUN_00015fa8(auStack_8a);
    FUN_00006546(8,&local_90,iVar4 + 7);
    uVar9 = uVar5;
  }
  piVar6 = (int *)(uVar9 * 0x24 + iVar7);
  *(char *)(piVar6 + 1) = (char)param_1;
  iVar7 = *(int *)(uVar9 * 0x24 + iVar7);
  if ((param_2 != iVar7) && (iVar7 != 0)) {
    local_8b = 0x10;
    FUN_00010ddc(auStack_8a,s_Neighbor_Err_00007014,0xd);
    iVar7 = FUN_00015fa8(auStack_8a);
    FUN_00006546(8,&local_90,iVar7 + 7);
  }
  *piVar6 = param_2;
  *(undefined2 *)((int)piVar6 + 6) = *(undefined2 *)(param_3 + 4);
  *(undefined2 *)(piVar6 + 2) = *(undefined2 *)(param_3 + 6);
  piVar6[3] = *(int *)(param_3 + 8);
  piVar6[4] = *(int *)(param_3 + 0xc);
  FUN_00011a94(piVar6 + 5,0,8);
  if (*(short *)(param_3 + 4) == 0) {
    uVar5 = *(uint *)(param_3 + 8);
    if (uVar5 < 0x24e) {
      uVar2 = 0;
    }
    else if (uVar5 < 0x255) {
      uVar2 = 1;
    }
    else {
      uVar5 = uVar5 & 0xfff;
      if (((uVar5 < 0x340) && (uVar5 != 0x301)) && (uVar5 != 0x302)) {
        uVar2 = 2;
      }
      else {
        uVar2 = 3;
      }
    }
    *(undefined4 *)(iVar3 + 0xc) = uVar2;
  }
  if (bVar10) {
    piVar6 = (int *)((short)param_1 * 0x88 + iVar3 + 0x27c);
    *piVar6 = *piVar6 + 1;
    *(int *)(iVar3 + 0x470) = *(int *)(iVar3 + 0x470) + 1;
    iVar3 = FUN_00015fa8(auStack_8a);
    FUN_00006546(8,&local_90,iVar3 + 7);
  }
  return;
}



undefined4 FUN_0000702c(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined auStack_140 [4];
  int local_13c;
  undefined4 local_124;
  undefined4 local_120;
  undefined auStack_11c [256];
  
  local_124 = 0;
  local_120 = 0;
  if (param_1 == 0) {
    return 0;
  }
  FUN_00010f2c(s_SWUGV3_WifiFileCopy_Start_0000734c);
  iVar2 = FUN_00011c64(param_1,0,0,&local_124);
  if (iVar2 == 0) {
    iVar2 = FUN_0001190c(param_1,0,auStack_140);
    if (iVar2 != 0) {
      FUN_0001155c(local_124,0,0,0);
      pcVar3 = s_SWUGV3_WifiFileCopy_fileGetInfo___00007368;
      goto LAB_0000707a;
    }
    uVar4 = FUN_000125f8(local_13c,0);
    iVar2 = FUN_00011c64(param_2,uVar4,0,&local_120);
    uVar4 = local_124;
    if (iVar2 == 0) {
      iVar2 = FUN_00010b54(local_124,0,auStack_11c,0x100);
      uVar1 = local_120;
      iVar6 = 0;
      do {
        iVar5 = FUN_00010bf8(uVar1,iVar6,auStack_11c,iVar2);
        if (iVar5 != iVar2) {
          FUN_0001155c(uVar4,0,0,0);
          FUN_0001155c(uVar1,0,0,0);
          FUN_00010f2c(s_SWUGV3_WifiFileCopy_copying__0x__0000740c,iVar6,iVar6 + iVar2,iVar5);
          return 0;
        }
        iVar6 = iVar2 + iVar6;
        iVar2 = FUN_00010b54(uVar4,iVar6,auStack_11c,0x100);
      } while ((iVar2 != -0xf) && (iVar6 != local_13c));
      FUN_00010f2c(s_SWUGV3_WifiFileCopy_End_00007448);
      FUN_0001155c(uVar4,0,0,0);
      FUN_0001155c(uVar1,0,0,0);
      return 1;
    }
    FUN_0001155c(local_120,0,0,0);
    FUN_0001155c(local_124,0,0,0);
    param_1 = param_2;
  }
  pcVar3 = s_FSWUGV3_WifiFileCopy_fileopen__s_000073db + 1;
LAB_0000707a:
  FUN_00010f2c(pcVar3,param_1,iVar2);
  return 0;
}



undefined4 FUN_00007150(void)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined auStack_58 [4];
  int local_54;
  undefined4 local_3c;
  uint local_38;
  byte local_34 [20];
  
  FUN_00010f2c(s_FSWUGV3_WifiFileValidate_Start_00007463 + 1);
  iVar2 = FUN_00011c64(s__sys_mcuimg1_bin_00007484,0,0,&local_3c);
  uVar6 = *DAT_00007318;
  if (iVar2 == 0) {
    iVar2 = FUN_0001190c(s__sys_mcuimg1_bin_00007484,0,auStack_58);
    uVar1 = local_3c;
    if (iVar2 == 0) {
      iVar2 = FUN_00010b54(local_3c,local_54 + -0x14,local_34,0x14);
      if (iVar2 == 0x14) {
        uVar7 = 0;
        uVar5 = 0;
        do {
          if (uVar5 < 9) {
LAB_0000721e:
            if (uVar5 < 8) {
              uVar4 = (uint)local_34[uVar5];
              if ((uVar4 < 0x61) || (0x66 < uVar4)) {
                if ((uVar4 < 0x41) || (0x46 < uVar4)) {
                  if ((uVar4 < 0x30) || (0x39 < uVar4)) {
                    iVar2 = 0;
                  }
                  else {
                    iVar2 = uVar4 - 0x30;
                  }
                }
                else {
                  iVar2 = uVar4 - 0x37;
                }
              }
              else {
                iVar2 = uVar4 - 0x57;
              }
              uVar7 = uVar7 | iVar2 << ((7 - uVar5) * 4 & 0xff);
            }
          }
          else if (uVar5 < 0x11) {
            uVar4 = (uint)local_34[uVar5];
            if ((uVar4 < 0x61) || (0x66 < uVar4)) {
              if ((uVar4 < 0x41) || (0x46 < uVar4)) {
                if ((uVar4 < 0x30) || (0x39 < uVar4)) {
                  iVar2 = 0;
                }
                else {
                  iVar2 = uVar4 - 0x30;
                }
              }
              else {
                iVar2 = uVar4 - 0x37;
              }
            }
            else {
              iVar2 = uVar4 - 0x57;
            }
            uVar6 = uVar6 | iVar2 << ((0x10 - uVar5) * 4 & 0xff);
            goto LAB_0000721e;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < 0x14);
        if ((uVar7 < 0x3c001) && (uVar7 != 0)) {
          uVar5 = 0xffffffff;
          if (uVar7 != 0) {
            iVar8 = 0;
            uVar7 = uVar7 + 3 >> 2;
            do {
              local_38 = 0;
              iVar2 = FUN_00010b54(uVar1,iVar8,&local_38,4);
              if (iVar2 == 1) {
                local_38 = local_38 & 0xff;
              }
              else if (iVar2 == 2) {
                local_38 = local_38 & 0xffff;
              }
              else if (iVar2 == 3) {
                local_38 = local_38 & 0xffffff;
              }
              else if (iVar2 != 4) {
                FUN_0001155c(uVar1,0,0,0);
                pcVar3 = s_SWUGV3_WifiFileValidate_invalid_i_0000756c;
                goto LAB_000071d2;
              }
              uVar5 = FUN_0000b360(uVar5,local_38);
              iVar8 = iVar8 + 4;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
          }
          FUN_0001155c(uVar1,0,0,0);
          if (uVar5 == uVar6) {
            FUN_00010f2c(s_SWUGV3_WifiFileValidate_End_000075cc);
            return 1;
          }
          FUN_00010f2c(s_SWUGV3_WifiFileValidate_Bad_CRC_0_0000759c,uVar6,uVar5);
        }
        else {
          FUN_0001155c(uVar1,0,0,0);
          FUN_00010f2c(s_FSWUGV3_WifiFileValidate_Erroneo_0000753b + 1,uVar7);
        }
        return 0;
      }
      FUN_0001155c(local_3c,0,0,0);
      pcVar3 = s_SWUGV3_WifiFileValidate___uCantR_00007500;
    }
    else {
      FUN_0001155c(local_3c,0,0,0);
      pcVar3 = s_SWUGV3_WifiFileValidate___uCantR_000074c8;
    }
  }
  else {
    FUN_0001155c(local_3c,0,0,0);
    pcVar3 = s_SWUGV3_WifiFileValidate___uCantO_00007498;
  }
LAB_000071d2:
  FUN_00010f2c(pcVar3,iVar2);
  return 0;
}



void FUN_00007e4c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar3 = FUN_0000912c(2,0);
  iVar2 = DAT_00007f5c;
  *(undefined4 *)(DAT_00007f5c + 8) = uVar3;
  iVar1 = DAT_00007f58;
  if (param_1 != 1) {
    FUN_000089d0(*(undefined4 *)(iVar2 + 8));
    return;
  }
  FUN_0000bb54(DAT_00007f58 + 8);
  FUN_0000bb54(iVar1 + 0xc);
  return;
}



void FUN_00007f60(undefined4 param_1,undefined4 param_2,short param_3,short param_4,int param_5)

{
  int iVar1;
  
  do {
    iVar1 = FUN_00012b90(param_1,param_2,(int)param_3,(int)param_4);
    if (iVar1 != -0xb) {
      return;
    }
    param_5 = param_5 + -1;
  } while (param_5 != 0);
  return;
}



int FUN_00007f88(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined auStackY_193 [3];
  undefined auStack_18c [58];
  undefined auStack_152 [6];
  undefined4 local_14c;
  undefined auStack_148 [254];
  undefined auStack_4a [2];
  undefined4 local_48;
  undefined auStack_44 [7];
  undefined auStack_3d [5];
  undefined auStack_38 [12];
  undefined4 local_2c;
  int local_28;
  
  local_2c = param_1;
  local_28 = param_2;
  pcVar1 = (char *)FUN_00014a30(param_3,&DAT_00008220);
  if (pcVar1 == (char *)0x0) {
LAB_000080c6:
    iVar8 = -1;
  }
  else {
    pcVar2 = (char *)FUN_00014a30(pcVar1,&DAT_00008224);
    if (pcVar2 == pcVar1 + 1) {
LAB_0000800c:
      iVar8 = 0;
    }
    else {
      iVar8 = 0;
      do {
        uVar3 = FUN_00014a30(pcVar1,&DAT_00008228);
        if (uVar3 == 0) goto LAB_000080c6;
        uVar4 = FUN_00014a30(uVar3,&DAT_0000822c);
        if (uVar4 <= uVar3) {
          FUN_00014928(param_3,uVar3,param_4 + (param_3 - uVar3));
          param_4 = param_4 + (param_3 - uVar3);
          param_4 = FUN_00007f60(local_2c,param_4 + param_3,0x5a0 - param_4,0,0xf);
          uVar4 = FUN_00014a30(param_3,&DAT_0000822c);
          uVar3 = param_3;
          if (uVar4 <= param_3) goto LAB_0000800c;
        }
        iVar5 = FUN_00014a30(uVar3,s_Fsize_0000822f + 1);
        if (iVar5 == 0) goto LAB_000080c6;
        iVar5 = iVar5 + 6;
        iVar6 = FUN_00014a30(iVar5,&DAT_00008238);
        iVar6 = iVar6 - iVar5;
        if (iVar5 == 0) goto LAB_000080c6;
        FUN_00014928(auStack_44,iVar5,iVar6);
        auStack_44[iVar6] = 0;
        iVar5 = FUN_00014a30(iVar6 + iVar5,s_Fname_0000823b + 1);
        if (iVar5 == 0) goto LAB_000080c6;
        iVar5 = iVar5 + 7;
        iVar6 = FUN_00014a30(iVar5,&DAT_00008244);
        iVar6 = iVar6 - iVar5;
        if (iVar6 < 1) goto LAB_000080c6;
        FUN_00014928(auStack_18c,iVar5,iVar6);
        auStack_18c[iVar6] = 0;
        iVar5 = FUN_00014a30(iVar6 + iVar5,&DAT_00008248);
        if (iVar5 == 0) goto LAB_000080c6;
        iVar5 = iVar5 + 5;
        iVar6 = FUN_00014a30(iVar5,&DAT_00008238);
        iVar6 = iVar6 - iVar5;
        if (iVar6 < 1) goto LAB_000080c6;
        FUN_00014928(auStack_38,iVar5,iVar6);
        auStack_38[iVar6] = 0;
        iVar5 = FUN_00014a30(iVar6 + iVar5,s_CDN_url_0000824c);
        if (iVar5 == 0) goto LAB_000080c6;
        iVar5 = iVar5 + 10;
        iVar6 = FUN_00014a30(iVar5,&DAT_00008254);
        iVar6 = iVar6 - iVar5;
        if (iVar6 < 1) goto LAB_000080c6;
        FUN_00014928(auStack_148,iVar5,iVar6);
        auStack_148[iVar6] = 0;
        iVar5 = FUN_00014a30(iVar5,&DAT_0000822c);
        pcVar1 = (char *)(iVar5 + 1);
        local_14c = FUN_000138f0(auStack_44);
        uVar7 = FUN_000138f0(auStack_38);
        local_48 = uVar7;
        FUN_00010ddc(param_5 * 0x148 + local_28,auStack_18c,0x148);
        param_5 = param_5 + 1;
        FUN_00010f2c(s_resource_file__s__size__ld__ver__00008258,auStack_18c,local_14c,uVar7,param_5
                    );
        iVar8 = iVar8 + 1;
      } while (*pcVar1 == ',');
    }
  }
  return iVar8;
}



undefined4 FUN_00008132(undefined4 param_1)

{
  undefined **ppuVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined *apuStack_34 [3];
  undefined local_28;
  
  ppuVar1 = (undefined **)FUN_00007f60(param_1,apuStack_34,0xc,0,0xf);
  if (-1 < (int)ppuVar1) {
    if (ppuVar1 != &HardFault) {
      iVar2 = FUN_00007f60(param_1,(int)apuStack_34 + (int)ppuVar1,0xc - (int)ppuVar1,0,0xf);
      ppuVar1 = (undefined **)((int)ppuVar1 + iVar2);
      if ((int)ppuVar1 < 0) goto LAB_000081a6;
      if (ppuVar1 != &HardFault) {
        pcVar3 = s_Fhttp_skip_headers__fail_on_retr_000082c7 + 1;
        goto LAB_000081a8;
      }
    }
    iVar2 = FUN_00014a30(&DAT_000082f8,apuStack_34);
    if (iVar2 != 0) {
      local_28 = 0;
      ppuVar1 = apuStack_34;
      pcVar3 = s_http_skip_headers__http_error_co_000082fc;
      goto LAB_000081a8;
    }
    iVar2 = 0xfa2;
    while (ppuVar1 = (undefined **)FUN_00007f60(param_1,apuStack_34,2,0,0xf), -1 < (int)ppuVar1) {
      iVar4 = FUN_00015054(apuStack_34,&DAT_00008324,2);
      if (iVar4 == 0) {
        FUN_00007f60(param_1,apuStack_34,2,0,0xf);
        iVar4 = FUN_00015054(apuStack_34,&DAT_00008324,2);
joined_r0x000081fe:
        if (iVar4 == 0) {
          return 0;
        }
      }
      else {
        iVar4 = FUN_00015054(apuStack_34,&DAT_00008328,2);
        if (iVar4 == 0) {
          FUN_00007f60(param_1,apuStack_34,1,0,0xf);
          iVar4 = FUN_00015054(apuStack_34,&DAT_0000832c,1);
          goto joined_r0x000081fe;
        }
      }
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) {
        FUN_00010f2c(s_http_skip_headers__search_end_of_00008558);
        return 0xffffffff;
      }
    }
  }
LAB_000081a6:
  pcVar3 = s_http_skip_headers__ERROR_sl_Recv_00008290;
LAB_000081a8:
  FUN_00010f2c(pcVar3,ppuVar1);
  return 0xffffffff;
}



undefined4 FUN_00008218(void)

{
  return DAT_00008330;
}



undefined4 FUN_0000821c(void)

{
  return DAT_00008334;
}



int FUN_00008338(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  uint local_4c;
  undefined4 local_48;
  uint local_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined4 local_38;
  int local_2c;
  int local_28;
  undefined local_24;
  undefined local_23;
  undefined local_22 [2];
  
  iVar6 = *param_1;
  iVar5 = param_1[1];
  local_68 = *DAT_0000854c;
  uStack_64 = DAT_0000854c[1];
  uStack_60 = DAT_0000854c[2];
  uStack_5c = DAT_0000854c[3];
  local_58 = DAT_0000854c[4];
  uStack_54 = DAT_0000854c[5];
  uStack_50 = DAT_0000854c[6];
  local_4c = DAT_0000854c[7];
  local_48 = DAT_0000854c[8];
  local_44 = DAT_0000854c[9];
  uStack_40 = DAT_0000854c[10];
  local_24 = 0xc;
  local_23 = 0x2c;
  local_2c = param_3;
  iVar3 = FUN_000112a4(1,&local_24,&local_23,&local_68);
  piVar1 = DAT_00008550;
  piVar7 = param_1 + 2;
  if (iVar3 < 0) {
    pcVar4 = s_http_connect_server__Get_NWP_Ver_00008590;
  }
  else {
    if (iVar6 == 0) {
      uVar2 = FUN_00015fa8(piVar7);
      iVar3 = FUN_0000f72c(piVar7,uVar2,&local_28,2);
      iVar6 = local_28;
      if (iVar3 < 0) {
        FUN_00010f2c(s_Fhttp_connect_server__ERROR_sl_N_000085c3 + 1);
        iVar3 = *piVar1 + 1;
        if (*piVar1 < 10) {
          iVar6 = -1;
        }
        else {
          iVar3 = 0;
          iVar6 = DAT_00008554;
        }
        *piVar1 = iVar3;
        return iVar6;
      }
    }
    local_28 = iVar6;
    *piVar1 = 0;
    if (param_2 == 0) {
      if (iVar5 == 0) {
        param_2 = 0x50;
      }
      else {
        param_2 = 0x1bb;
      }
    }
    local_3c = 2;
    local_3a = FUN_00014a64(param_2 & 0xffff);
    local_38 = FUN_00014810(local_28);
    iVar6 = FUN_000139d4(2,1);
    FUN_00010f2c(s_http_connect_server__Socket_Open_00008608,iVar6);
    if (iVar6 < 0) {
      pcVar4 = s_http_connect_server__ERROR_Socke_00008638;
      iVar3 = iVar6;
    }
    else {
      local_70 = 2;
      local_6c = 0;
      iVar3 = FUN_00012800(iVar6,1,0x14,&local_70,8);
      if (iVar3 < 0) {
        FUN_00014580(iVar6);
        pcVar4 = s_http_connect_server__ERROR_SL_SO_0000866c;
      }
      else {
        local_22[0] = 3;
        iVar3 = FUN_00012800(iVar6,1,0x19,local_22,1);
        if (iVar3 < 0) {
          FUN_00014580(iVar6);
          pcVar4 = s_http_connect_server__ERROR_SL_SO_000086a4;
        }
        else {
          if (iVar5 == 0) goto LAB_00008508;
          uVar2 = FUN_00015fa8((int)param_1 + 0x2c2);
          iVar3 = FUN_00012800(iVar6,1,0x1f,(int)param_1 + 0x2c2,uVar2);
          if (iVar3 < 0) {
            FUN_00014580(iVar6);
            pcVar4 = s_http_connect_server__ERROR_SL_SO_000086dc;
          }
          else {
            uVar2 = FUN_00015fa8((int)param_1 + 0x2e2);
            iVar3 = FUN_00012800(iVar6,1,0x1e,(int)param_1 + 0x2e2,uVar2);
            if (-1 < iVar3) {
              if (((5 < local_4c) && (4 < local_44)) &&
                 (iVar3 = FUN_00014a30(piVar7,s_smartap_tech_com_00008784), iVar3 == 0)) {
                uVar2 = FUN_00015fa8(piVar7);
                iVar3 = FUN_00012800(iVar6,1,0x23,piVar7,uVar2);
                if (iVar3 < 0) {
                  FUN_00014580(iVar6);
                  pcVar4 = s_http_connect_server__ERROR_SO_SE_00008798;
                  goto LAB_000084fc;
                }
              }
LAB_00008508:
              iVar3 = FUN_0000edcc(iVar6,&local_3c,0x10);
              FUN_00010f2c(s_http_connect_server__ERROR_Socke_000087e4,iVar3);
              if ((iVar3 < 0) && (iVar3 != -0x1c5)) {
                FUN_00014580(iVar6);
                return -1;
              }
              if (local_2c != 0) {
                FUN_00012800(iVar6,1,0x18,&local_2c,4);
                return iVar6;
              }
              return iVar6;
            }
            FUN_00014580(iVar6);
            pcVar4 = s_http_connect_server__ERROR_SL_SO_00008730;
          }
        }
      }
    }
  }
LAB_000084fc:
  FUN_00010f2c(pcVar4,iVar3);
  return -1;
}



int FUN_0000881c(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5)

{
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_38;
  undefined4 local_34;
  undefined2 local_30;
  undefined2 local_2e;
  undefined4 local_2c;
  int local_20 [2];
  
  piVar1 = DAT_000089b0;
  iVar4 = param_2;
  if (param_2 == 0) {
    uVar2 = FUN_00015fa8(param_1);
    iVar3 = FUN_0000f72c(param_1,uVar2,local_20,2);
    iVar4 = local_20[0];
    if (iVar3 < 0) {
      FUN_00010f2c(DAT_000089b8,iVar3);
      if (*piVar1 < 10) {
        *piVar1 = *piVar1 + 1;
        return -1;
      }
      *piVar1 = 0;
      return DAT_000089b4;
    }
  }
  local_20[0] = iVar4;
  *piVar1 = 0;
  if (param_3 == 0) {
    if (param_4 == 0) {
      param_3 = 0x50;
    }
    else {
      param_3 = 0x1bb;
    }
  }
  local_30 = 2;
  local_2e = FUN_00014a64(param_3 & 0xffff);
  local_2c = FUN_00014810(local_20[0]);
  iVar4 = FUN_000139d4(2,1);
  FUN_00010f2c(DAT_000089bc,iVar4);
  uVar5 = DAT_000089c0;
  if (-1 < iVar4) {
    local_38 = 2;
    local_34 = 0;
    iVar3 = FUN_00012800(iVar4,1,0x14,&local_38,8);
    if (iVar3 < 0) {
      FUN_00014580(iVar4);
      uVar5 = DAT_000089c4;
    }
    else {
      iVar3 = FUN_0000edcc(iVar4,&local_30,0x10);
      if ((-1 < iVar3) || (iVar3 == -0x1c5)) {
        if (param_5 != 0) {
          FUN_00012800(iVar4,1,0x18,&param_5,4);
          return iVar4;
        }
        return iVar4;
      }
      FUN_00014580(iVar4);
      uVar5 = DAT_000089c8;
      iVar4 = iVar3;
    }
  }
  FUN_00010f2c(uVar5,iVar4);
  return -1;
}



undefined4
FUN_00008924(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
            int param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_00015f94();
  if ((param_4 != 0) && (iVar2 = FUN_00015fa8(param_4), iVar2 != 0)) {
    FUN_00015998(param_1,param_4);
  }
  if ((param_5 != 0) && (iVar2 = FUN_00015fa8(param_5), iVar2 != 0)) {
    FUN_00015998(param_1,param_5);
  }
  if ((param_6 != 0) && (iVar2 = FUN_00015fa8(param_6), iVar2 != 0)) {
    FUN_00015998(param_1,param_6);
    FUN_00015998(param_1,param_7);
  }
  FUN_00015998(param_1,s__HTTP_1_1_host__0000899c);
  FUN_00015998(param_1,param_3);
  uVar1 = DAT_000089cc;
  FUN_00015998(param_1,DAT_000089cc);
  FUN_00015998(param_1,uVar1);
  return 0;
}



void FUN_000089d0(undefined *param_1)

{
  FUN_00010f2c(s__OtaCleanToIdle__close_OTA_clien_00008a80);
  FUN_0000a362(*(undefined4 *)(param_1 + 0x34));
  FUN_00009a84(*(undefined4 *)(param_1 + 0x38));
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  param_1[0x30] = 0;
  return;
}



byte FUN_000089f4(int param_1,int param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  
  bVar3 = 0;
  if (param_2 == 0) {
    *(int **)(param_1 + 0x1c) = param_4;
  }
  else if (param_2 == 1) {
    FUN_00015f94(param_1 + 8);
  }
  else {
    if (param_2 == 2) {
      bVar3 = *(int *)(param_1 + 0x2c) != 0;
      if (*(char *)(param_1 + 0x30) == '\x01') {
        bVar3 = bVar3 | 4;
      }
      if (*(int *)(param_1 + 0x28) != 0) {
        bVar3 = bVar3 | 2;
      }
      uVar1 = FUN_0000c1c6(bVar3);
      bVar3 = (uVar1 & 1) != 0;
      uVar2 = uVar1 >> 1;
      if ((uVar1 >> 1 & 1) != 0) {
        bVar3 = bVar3 | 2;
      }
    }
    else {
      if (param_2 != 3) {
        FUN_00010f2c(s_sl_extLib_OtaSet__option__ld_is_n_00008d84,param_2,param_2,param_4,param_4);
        return 0;
      }
      uVar1 = FUN_0000c288(*param_4 == 1);
      bVar3 = (uVar1 & 1) != 0;
      uVar2 = uVar1 >> 1;
      if ((uVar1 >> 1 & 1) != 0) {
        bVar3 = bVar3 | 2;
      }
      if (param_1 == 0) {
        return bVar3;
      }
    }
    FUN_000089d0(param_1,uVar2);
  }
  return bVar3;
}



undefined *
FUN_0000912c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = DAT_00009374;
  FUN_00011a94(DAT_00009374,0,0x4c,param_4,param_4);
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 4) = param_1;
  FUN_00010f2c(s_Fsl_extLib_OtaInit__OTA_lib_vers_000091f3 + 1,&LAB_00009220);
  puVar2 = DAT_00009378;
  *DAT_00009378 = DAT_0000937c;
  puVar2[2] = DAT_00009380;
  puVar2[1] = DAT_00009384;
  puVar2[3] = DAT_00009388;
  puVar2[4] = DAT_0000938c;
  uVar3 = FUN_0000a0a6(puVar2,param_2);
  *(undefined4 *)(puVar1 + 0x34) = uVar3;
  uVar3 = FUN_00009a56(puVar2,param_2);
  *(undefined4 *)(puVar1 + 0x38) = uVar3;
  uVar3 = DAT_00009390;
  *(undefined4 *)(puVar1 + 0x24) = DAT_00009390;
  FUN_00011a94(uVar3,0,0x4c);
  return puVar1;
}



undefined4 FUN_00009186(char *param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x24);
  if (param_2 == 0) {
    uVar1 = 0;
    if (*param_1 != '\0') {
      uVar1 = 1;
    }
  }
  else {
    if (param_2 != 1) {
      if (param_2 != 2) {
        FUN_00010f2c(&LAB_00009228);
        return 0;
      }
      FUN_00010f2c(s_FOtaApp_stat__start_counter__ld__0000925b + 1,*(undefined4 *)(iVar2 + 0x14),
                   *(undefined4 *)(iVar2 + 0x18),param_4,param_3,param_4);
      FUN_00010f2c(s_OtaApp_stat__connect_server_done_000092a0,*(undefined4 *)(iVar2 + 0x1c),
                   *(undefined4 *)(iVar2 + 0x20),*(undefined4 *)(iVar2 + 0x24),
                   *(undefined4 *)(iVar2 + 0x28));
      FUN_00010f2c(s_OtaApp_stat__connect_cdn_done__l_000092ec,*(undefined4 *)(iVar2 + 0x30),
                   *(undefined4 *)(iVar2 + 0x2c));
      FUN_00010f2c(s_FOtaApp_stat__download_file_done_0000931f + 1,*(undefined4 *)(iVar2 + 0x48),
                   *(undefined4 *)(iVar2 + 0x34),*(undefined4 *)(iVar2 + 0x40),
                   *(undefined4 *)(iVar2 + 0x44));
      return 0;
    }
    uVar1 = FUN_0000c270();
  }
  *param_4 = uVar1;
  *param_3 = 4;
  return 0;
}



undefined4 FUN_00009394(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  code **ppcVar3;
  undefined4 local_1c;
  
  ppcVar3 = *(code ***)(param_1 + 0x70);
  local_1c = param_4;
  iVar1 = (**ppcVar3)(param_2,0,0,&local_1c,0);
  if (iVar1 < 0) {
    pcVar2 = s_F_readSignature__Error_pOpenFile_0000966f + 1;
  }
  else {
    iVar1 = (*ppcVar3[2])(local_1c,0,param_3 + 0x2d8,0x100);
    if (iVar1 < 0) {
      pcVar2 = s_F_readSignature__Error_pReadFile_00009693 + 1;
    }
    else {
      *(int *)(param_3 + 0x3d8) = iVar1;
      *(int *)(param_3 + 0x2d4) = param_3 + 0x2d8;
      iVar1 = (*ppcVar3[3])(local_1c,0,0,0);
      if (-1 < iVar1) {
        return 0;
      }
      pcVar2 = s_F_readSignature__Error_pCloseFil_000096b7 + 1;
    }
  }
  FUN_00010f2c(pcVar2);
  return 0xffffffff;
}



void FUN_000093fc(void)

{
  FUN_00007f60();
  return;
}



longlong FUN_00009408(undefined4 param_1,undefined4 param_2,uint param_3)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  char *pcVar4;
  
  uVar2 = FUN_00008218();
  FUN_00010f2c(s__ReadFileHeaders__domain__s__fil_000096dc,param_2,param_3);
  FUN_00008924(uVar2,&DAT_00009704,param_2,0,param_3,0,0);
  sVar1 = FUN_00015fa8(uVar2);
  iVar3 = FUN_00010298(param_1,uVar2,(int)sVar1,0);
  if (iVar3 < 1) {
    pcVar4 = s__ReadFileHeaders__ERROR__sl_Send_0000970c;
  }
  else {
    FUN_00010f2c(s__ReadFileHeaders__skip_http_head_0000973c);
    iVar3 = FUN_00008132(param_1);
    if (-1 < iVar3) {
      return (ulonglong)param_3 << 0x20;
    }
    pcVar4 = s_F_ReadFileHeaders__ERROR__http_s_00009763 + 1;
  }
  FUN_00010f2c(pcVar4);
  return CONCAT44(param_3,0xffffffff);
}



undefined4
FUN_00009470(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  code **ppcVar4;
  
  ppcVar4 = *(code ***)(param_1 + 0x70);
  iVar3 = *(int *)(param_1 + 100);
  if (ppcVar4 == (code **)0x0) {
    *(undefined *)(param_1 + 0x5c) = 0;
    FUN_00010f2c(s__OpenStorageFile__pCdnClient_>pF_000097a0);
    return 0xffffffff;
  }
  if ((*(uint *)(iVar3 + 0x104) & 1) == 0) {
    uVar2 = 1;
  }
  else if ((*(uint *)(iVar3 + 0x104) >> 1 & 1) == 0) {
    uVar2 = 0x27;
  }
  else {
    iVar3 = FUN_00009394(param_1,iVar3 + 0x294,iVar3,param_4,param_3,param_4);
    if (iVar3 < 0) {
      pcVar1 = s__OpenStorageFile__error_in__read_000097d4;
      goto LAB_000094ac;
    }
    ppcVar4 = *(code ***)(param_1 + 0x70);
    uVar2 = 0x23;
  }
  iVar3 = (**ppcVar4)(param_2,param_3,param_4,param_5,uVar2);
  if (-1 < iVar3) {
    return 0;
  }
  pcVar1 = s__OpenStorageFile__error_in_pOpen_0000980c;
LAB_000094ac:
  FUN_00010f2c(pcVar1);
  return 0xffffffff;
}



undefined4 FUN_000094e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x5c);
  iVar7 = *(int *)(param_1 + 0x70);
  if (uVar1 == 1) {
    FUN_00010f2c(s_FCdnClient_Run__Create_Open_for_w_000099cf + 1,*(undefined4 *)(param_1 + 0x44),
                 param_3,param_4,param_3,param_4);
    iVar7 = FUN_00009470(param_1,*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(param_1 + 0x48),
                         param_1 + 0x4c,param_1 + 0x50);
    if (iVar7 < 0) {
      *(undefined *)(param_1 + 0x5c) = 0;
      FUN_00010f2c(s_CdnClient_Run_ERROR__pCdnClient__00009a00,*(undefined4 *)(param_1 + 0x50));
      return 0xfffffffe;
    }
    *(undefined *)(param_1 + 0x5c) = 2;
    FUN_00010f2c(s_FCdnClient_Run__file_opened_00009a37 + 1);
    uVar6 = FUN_0000821c();
    *(undefined4 *)(param_1 + 0x58) = uVar6;
    FUN_00011a94(*(undefined4 *)(param_1 + 0x58),0,4);
LAB_00009666:
    uVar6 = 0;
  }
  else {
    if (uVar1 == 2) {
      uVar1 = FUN_000093fc((int)*(short *)(param_1 + 0x54),*(undefined4 *)(param_1 + 0x58),0x5a0,0);
      if ((int)uVar1 < 1) {
        FUN_00010f2c(s_CdnClient_Run__ERROR_sl_Recv_sta_000099a4,uVar1);
        (**(code **)(iVar7 + 0x10))(*(undefined4 *)(param_1 + 0x50));
        *(undefined *)(param_1 + 0x5c) = 0;
        uVar3 = uVar1;
joined_r0x00009608:
        if (uVar3 == 0xfffffff5) {
          return 0xfffffffb;
        }
        return 0xfffffffd;
      }
      uVar5 = *(uint *)(param_1 + 0x58);
      if ((int)(uVar1 + *(int *)(param_1 + 0x60)) < *(int *)(param_1 + 0x48)) {
        if ((uVar1 & 0xf) != 0) {
          uVar3 = FUN_000093fc((int)*(short *)(param_1 + 0x54),uVar1 + uVar5,0x10 - (uVar1 & 0xf),0)
          ;
          if ((int)uVar3 < 1) {
            FUN_00010f2c(s_CdnClient_Run__ERROR_sl_Recv_on_f_0000986c,uVar3);
            (**(code **)(iVar7 + 0x10))(*(undefined4 *)(param_1 + 0x50));
            *(undefined *)(param_1 + 0x5c) = 0;
            goto joined_r0x00009608;
          }
          uVar1 = uVar3 + uVar1;
        }
      }
      else {
        uVar1 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x60);
        uVar5 = uVar5 + 1;
      }
      FUN_00010f2c(s_FCdnClient_Run__Write_size__ld_000098ab + 1,uVar1);
      FUN_00010f2c(s_to_file__s_000098cc,*(undefined4 *)(param_1 + 0x44));
      FUN_00010f2c(s_total__ld__000098d8,*(undefined4 *)(param_1 + 0x60));
      iVar4 = (**(code **)(iVar7 + 4))
                        (*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x60),
                         *(undefined4 *)(param_1 + 0x58),uVar1);
      if (iVar4 < 0) {
        pcVar2 = s_CdnClient_Run__Error___SaveFileC_000098e8;
        uVar6 = 0xfffffffc;
      }
      else {
        *(uint *)(param_1 + 0x60) = uVar1 + *(int *)(param_1 + 0x60);
        if (uVar5 <= *(uint *)(param_1 + 0x58)) goto LAB_00009666;
        FUN_00010f2c(s_CdnClient_Run__End_of_file_00009918);
        iVar4 = *(int *)(param_1 + 100);
        iVar4 = (**(code **)(iVar7 + 0xc))
                          (*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(iVar4 + 0x290),
                           *(undefined4 *)(iVar4 + 0x2d4),*(undefined4 *)(iVar4 + 0x3d8));
        if (-1 < iVar4) {
          uVar1 = *(uint *)(param_1 + 0x60);
          pcVar2 = s_CdnClient_Run__Downloading_File_C_00009938;
          uVar6 = 1;
          goto LAB_000095d2;
        }
        pcVar2 = s_CdnClient_Run__error_on_pCloseFi_00009970;
        uVar6 = 0xffffffff;
      }
      FUN_00010f2c(pcVar2);
      (**(code **)(iVar7 + 0x10))(*(undefined4 *)(param_1 + 0x50));
    }
    else {
      uVar6 = 0xffffffff;
      pcVar2 = s_CdnClient_Run_ERROR__unexpected_s_00009840;
LAB_000095d2:
      FUN_00010f2c(pcVar2,uVar1);
    }
    *(undefined *)(param_1 + 0x5c) = 0;
  }
  return uVar6;
}



int FUN_00009a56(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_00009c10;
  FUN_00011a94(DAT_00009c10,0,0x74);
  *(undefined2 *)(iVar1 + 0x54) = 0xffff;
  *(undefined4 *)(iVar1 + 0x68) = param_1;
  *(undefined4 *)(iVar1 + 0x6c) = param_2;
  *(undefined4 *)(iVar1 + 0x70) = param_1;
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x60) = 0;
  *(undefined *)(iVar1 + 0x5c) = 0;
  return iVar1;
}



void FUN_00009a84(undefined *param_1)

{
  *param_1 = 0;
  if (-1 < *(short *)(param_1 + 0x54)) {
    FUN_00014580();
    FUN_00010f2c(s_CdnClient_CloseServer__closing_s_00009b58,(int)*(short *)(param_1 + 0x54));
    *(undefined2 *)(param_1 + 0x54) = 0xffff;
  }
  return;
}



undefined4 FUN_00009aac(int param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined auStack_54 [68];
  
  FUN_00010ddc(auStack_54,DAT_00009c14,0x40);
  iVar2 = FUN_00015d18(param_1,auStack_54);
  if (iVar2 != 0) {
    FUN_00009a84(param_1);
    FUN_00015f94(param_1,auStack_54);
    *(undefined4 *)(param_1 + 0x40) = 0;
    uVar1 = FUN_0000881c(param_1,0,0,param_3,0);
    *(undefined2 *)(param_1 + 0x54) = uVar1;
    if (*(short *)(param_1 + 0x54) < 0) {
      FUN_00010f2c(s_CdnClient_ConnectByUrl__ERROR_on_00009b88,(int)*(short *)(param_1 + 0x54));
      FUN_00009a84(param_1);
      if (*(short *)(param_1 + 0x54) == -1000) {
        return DAT_00009c18;
      }
      return 0xfffffffa;
    }
  }
  iVar2 = FUN_00009408((int)*(short *)(param_1 + 0x54),param_1,param_2);
  if (iVar2 < 0) {
    FUN_00010f2c(s_FCdnClient_ConnectByUrl__ERROR____00009bcf + 1);
    FUN_00009a84(param_1);
    uVar3 = 0xfffffff9;
  }
  else {
    uVar3 = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined *)(param_1 + 0x5c) = 1;
    if ((*(uint *)(param_2 + 0x104) >> 4 & 1) == 0) {
      uVar4 = *(undefined4 *)(param_1 + 0x68);
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x6c);
    }
    *(undefined4 *)(param_1 + 0x70) = uVar4;
    *(int *)(param_1 + 100) = param_2;
  }
  return uVar3;
}



undefined8 FUN_00009c1c(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar5 = *param_1;
  uVar2 = FUN_00008218();
  uVar3 = FUN_0000821c();
  param_1[8] = param_2;
  if (param_3 == 0) {
    FUN_00010f2c(s_FOtaClient_UpdateCheck__call_htt_00009f6b + 1,iVar5 + 0x28);
    uVar6 = 0;
    FUN_00008924(uVar2,&LAB_00009f20,iVar5 + 8,iVar5 + 0x28,0,0,0,param_4);
    param_1[7] = 0;
  }
  else {
    FUN_00010f2c(s_FOtaClient_UpdateCheck__call_htt_00009f6b + 1,iVar5 + 0xf0);
    uVar6 = 0;
    FUN_00008924(uVar2,&LAB_00009f20,iVar5 + 8,iVar5 + 0xf0,0,0,0,param_4);
  }
  sVar1 = FUN_00015fa8(uVar2);
  iVar5 = FUN_00010298((int)*(short *)(param_1 + 5),uVar2,(int)sVar1,0);
  if (iVar5 < 1) {
    pcVar4 = s_OtaClient_UpdateCheck__ERROR_met_00009fa0;
LAB_00009cc6:
    FUN_00010f2c(pcVar4,iVar5);
  }
  else {
    iVar5 = FUN_00008132((int)*(short *)(param_1 + 5));
    if (-1 < iVar5) {
      iVar5 = FUN_00007f60((int)*(short *)(param_1 + 5),uVar3,0x5a0,0,0xf);
      if (0 < iVar5) {
        FUN_00010f2c(s_OtaClient_UpdateCheck_before_JSO_0000a018,param_1[7]);
        iVar5 = FUN_00007f88((int)*(short *)(param_1 + 5),param_1[1] + 0xc,uVar3,iVar5,param_1[7]);
        param_1[6] = 0;
        if (iVar5 < 1) {
          if (iVar5 < 0) goto LAB_00009ccc;
        }
        else {
          param_1[7] = iVar5 + param_1[7];
        }
        FUN_00010f2c(s_FOtaClient_UpdateCheck_after_JSO_0000a05f + 1,param_1[7]);
        iVar5 = param_1[7];
        goto LAB_00009d0a;
      }
      pcVar4 = s_OtaClient_UpdateCheck__ERROR_met_00009fdc;
      goto LAB_00009cc6;
    }
  }
LAB_00009ccc:
  iVar5 = -1;
LAB_00009d0a:
  return CONCAT44(uVar6,iVar5);
}



undefined4 FUN_00009d10(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  
  *(int *)(param_3 + 0x208) = param_3 + 0x112;
  FUN_00015f94(param_3 + 0x112);
  *(undefined4 *)(param_3 + 0x290) = 0;
  *(undefined4 *)(param_3 + 0x2d4) = 0;
  *(undefined4 *)(param_3 + 0x104) = 0;
  if (*(int *)(param_1 + 0x20) != 0) {
    iVar1 = FUN_00015fa8();
    *(int *)(param_3 + 0x208) = *(int *)(param_3 + 0x208) + iVar1 + 1;
  }
  pcVar3 = *(char **)(param_3 + 0x208);
  if (*pcVar3 == 'f') {
    uVar5 = (uint)(byte)pcVar3[1];
    uVar4 = 0;
    if ((0x60 < uVar5) && (uVar5 < 0x67)) {
      uVar4 = uVar5 * 0x10 - 0x570;
    }
    if ((0x2f < uVar5) && (uVar5 < 0x3a)) {
      uVar4 = uVar4 | uVar5 * 0x10 - 0x300;
    }
    uVar5 = (uint)(byte)pcVar3[2];
    if ((0x60 < uVar5) && (uVar5 < 0x67)) {
      uVar4 = uVar4 | uVar5 - 0x57;
    }
    if ((0x2f < uVar5) && (uVar5 < 0x3a)) {
      uVar4 = uVar4 | uVar5 - 0x30;
    }
    if ((uVar4 & 1) != 0) {
      *(uint *)(param_3 + 0x104) = *(uint *)(param_3 + 0x104) | 1;
    }
    if ((uVar4 >> 1 & 1) != 0) {
      *(uint *)(param_3 + 0x104) = *(uint *)(param_3 + 0x104) | 2;
    }
    if ((uVar4 >> 2 & 1) != 0) {
      *(uint *)(param_3 + 0x104) = *(uint *)(param_3 + 0x104) | 4;
    }
    if ((uVar4 >> 3 & 1) != 0) {
      *(uint *)(param_3 + 0x104) = *(uint *)(param_3 + 0x104) | 8;
    }
    if ((uVar4 >> 4 & 1) != 0) {
      *(uint *)(param_3 + 0x104) = *(uint *)(param_3 + 0x104) | 0x10;
    }
    if ((uVar4 >> 5 & 1) != 0) {
      *(uint *)(param_3 + 0x104) = *(uint *)(param_3 + 0x104) | 0x20;
    }
    if ((uVar4 >> 6 & 1) != 0) {
      *(uint *)(param_3 + 0x104) = *(uint *)(param_3 + 0x104) | 0x40;
    }
    if ((uVar4 >> 7 & 1) != 0) {
      *(uint *)(param_3 + 0x104) = *(uint *)(param_3 + 0x104) | 0x80;
    }
    FUN_00010f2c(s_FOtaClient_ResourceMetadata__fil_0000a143 + 1);
    FUN_00010f2c(s_metadata_flags__x_0000a170,*(undefined4 *)(param_3 + 0x104));
    *(int *)(param_3 + 0x208) = *(int *)(param_3 + 0x208) + 3;
    **(undefined **)(param_3 + 0x208) = 0x2f;
    uVar4 = *(uint *)(param_3 + 0x104);
    if ((uVar4 >> 3 & 1) == 0) {
      *(int *)(param_3 + 0x208) = *(int *)(param_3 + 0x208) + 1;
    }
    else {
      puVar2 = (undefined *)FUN_00014a30(*(int *)(param_3 + 0x208) + 1,&DAT_0000a184);
      *puVar2 = 0x2f;
      uVar4 = *(uint *)(param_3 + 0x104);
    }
    if (((uVar4 >> 4 & 1) == 0) || (*(int *)(param_1 + 0x10) != 0)) {
      if ((uVar4 >> 1 & 1) != 0) {
        FUN_00010f2c(s_FOtaClient_ResourceMetadata__fil_0000a1fb + 1,
                     *(undefined4 *)(param_3 + 0x208));
        *(uint *)(param_3 + 0x104) = *(uint *)(param_3 + 0x104) | 2;
        FUN_00015f94(param_3 + 0x294,*(undefined4 *)(param_3 + 0x208));
        iVar1 = FUN_00015fa8(param_3 + 0x294);
        *(undefined4 *)(param_3 + iVar1 + 0x290) = DAT_0000a23c;
        *(undefined *)(param_3 + iVar1 + 0x294) = DAT_0000a240;
        uVar4 = *(uint *)(param_3 + 0x104);
      }
      if ((uVar4 >> 2 & 1) != 0) {
        FUN_00010f2c(s_OtaClient_ResourceMetadata__file_0000a244,*(undefined4 *)(param_3 + 0x208));
        FUN_00015f94(param_3 + 0x250,*(undefined4 *)(param_3 + 0x208));
        iVar1 = FUN_00015fa8(param_3 + 0x294);
        *(undefined4 *)(param_3 + iVar1 + 0x24c) = DAT_0000a288;
        *(undefined *)(param_3 + iVar1 + 0x250) = DAT_0000a28c;
        *(int *)(param_3 + 0x290) = param_3 + 0x250;
      }
      iVar1 = FUN_00014a30(*(undefined4 *)(param_3 + 0x208),&DAT_0000a23c);
      if (iVar1 != 0) {
        FUN_00010f2c(s_OtaClient_ResourceMetadata__remo_0000a290,*(undefined4 *)(param_3 + 0x208));
        FUN_00012ea8(*(undefined4 *)(param_3 + 0x208),0);
      }
      return 0;
    }
    FUN_00010f2c(s_FOtaClient_ResourceMetadata__MET_0000a187 + 1);
  }
  else {
    FUN_00010f2c(s_FOtaClient_ResourceMetadata__ign_0000a0cf + 1);
  }
  return 0xffffffff;
}



undefined4 FUN_00009f26(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8);
  *param_3 = iVar2;
  iVar1 = FUN_00009d10(param_1,param_2,iVar2);
  if (iVar1 < 0) {
    FUN_00010f2c(s_OtaClient_ResourceMetadata__Erro_0000a2cc);
    return 0xffffffff;
  }
  FUN_00015f94(iVar2,*(int *)(param_1 + 0x18) * 0x148 + *(int *)(param_1 + 4) + -0xf8);
  *(undefined4 *)(iVar2 + 0x100) =
       *(undefined4 *)(*(int *)(param_1 + 0x18) * 0x148 + *(int *)(param_1 + 4) + 8);
  return 0;
}



int FUN_0000a0a6(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DAT_0000a420;
  FUN_00011a94(DAT_0000a420,0,0x24);
  *(undefined2 *)(iVar1 + 0x14) = 0xffff;
  *(undefined4 *)(iVar1 + 0xc) = param_1;
  *(undefined4 *)(iVar1 + 0x10) = param_2;
  *(undefined4 *)(iVar1 + 8) = DAT_0000a424;
  *(undefined4 *)(iVar1 + 4) = DAT_0000a428;
  return iVar1;
}



void FUN_0000a362(int param_1)

{
  FUN_00010f2c(s_OtaClient_CloseServer__socketID___0000a3f8,(int)*(short *)(param_1 + 0x14));
  if (-1 < *(short *)(param_1 + 0x14)) {
    FUN_00014580();
    *(undefined2 *)(param_1 + 0x14) = 0xffff;
  }
  return;
}



void FUN_0000a430(int *param_1,int param_2)

{
  uint *puVar1;
  char *pcVar2;
  undefined uVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  undefined uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  undefined8 uVar15;
  undefined auStack_4c [36];
  undefined local_28;
  undefined local_27;
  undefined local_26;
  
  puVar1 = DAT_0000a778;
  if (param_1 == (int *)0x0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  FUN_0000b6ae((int)DAT_0000a778 + 0xe,(int)DAT_0000a778 + 0xf,DAT_0000a778 + 4,
               (int)DAT_0000a778 + 0x11);
  FUN_00010f2c(s_FEvent___d___s_0000a767 + 1,*param_1,param_1[2]);
  pcVar2 = DAT_0000a77c;
  iVar10 = *param_1;
  uVar5 = puVar1[2];
  if (iVar10 != 1) {
    if (iVar10 != 2) {
      FUN_00010f2c(s_____unsupported_SlHttpServerEven_0000ab18,iVar10);
      return;
    }
    iVar10 = param_1[6];
    puVar1[1] = puVar1[1] + 1;
    iVar12 = param_1[4];
    *(undefined *)(iVar10 + (uint)*(byte *)(param_1 + 5)) = 0;
    FUN_00010f2c(s_FEvent___s_0000a7af + 1,iVar12);
    uVar6 = FUN_00015fa8((int)puVar1 + 0x12);
    iVar10 = FUN_0001540c(iVar12,(int)puVar1 + 0x12,uVar6);
    bVar13 = false;
    uVar3 = 0;
    if (iVar10 == 0) {
      FUN_0000b4c6(param_1[6],*(undefined *)(param_1 + 5));
    }
    else {
      uVar6 = FUN_00015fa8((int)puVar1 + 0x3e);
      iVar10 = FUN_0001540c(iVar12,(int)puVar1 + 0x3e,uVar6);
      if (iVar10 == 0) {
        FUN_0000b4ec(param_1[6],*(undefined *)(param_1 + 5));
      }
      else {
        uVar6 = FUN_00015fa8((int)puVar1 + 0x49);
        iVar10 = FUN_0001540c(iVar12,(int)puVar1 + 0x49,uVar6);
        if (iVar10 == 0) {
          iVar10 = FUN_0001540c(&DAT_0000a808,param_1[6],4);
          if (iVar10 == 0) {
            FUN_0000b512(1);
            return;
          }
          FUN_0000b512(0);
        }
        else {
          uVar6 = FUN_00015fa8(puVar1 + 0x15);
          iVar10 = FUN_0001540c(iVar12,puVar1 + 0x15,uVar6);
          if (iVar10 == 0) {
            FUN_00010f2c(s_CON_ExitPairingMode_0000aa20);
            FUN_00013fdc(DAT_0000aa0c,0);
          }
          else {
            uVar6 = FUN_00015fa8((int)puVar1 + 0x75);
            iVar10 = FUN_0001540c(iVar12,(int)puVar1 + 0x75,uVar6);
            if (iVar10 == 0) {
              FUN_0000b450(param_1[6],*(undefined *)(param_1 + 5));
            }
            else {
              uVar6 = FUN_00015fa8((int)puVar1 + 0x8b);
              iVar10 = FUN_0001540c(iVar12,(int)puVar1 + 0x8b,uVar6);
              if (iVar10 != 0) {
                uVar6 = FUN_00015fa8((int)puVar1 + 0xa1);
                iVar10 = FUN_0001540c(iVar12,(int)puVar1 + 0xa1,uVar6);
                if (iVar10 == 0) {
                  iVar12 = param_1[6];
                  uVar5 = *puVar1;
                  iVar10 = FUN_00014a30(iVar12,s_checked_0000a83c);
                  if (iVar10 == 0) {
                    iVar10 = FUN_00014a30(iVar12,&DAT_0000a844);
                    if (iVar10 == 0) {
                      uVar3 = FUN_000138f0(iVar12);
                      *(undefined *)((int)puVar1 + 0xe) = uVar3;
                      goto LAB_0000a790;
                    }
                    uVar5 = uVar5 & 0xfffffffe;
                  }
                  else {
                    uVar5 = uVar5 | 1;
                  }
                }
                else {
                  uVar6 = FUN_00015fa8((int)puVar1 + 0xb7);
                  iVar10 = FUN_0001540c(iVar12,(int)puVar1 + 0xb7,uVar6);
                  if (iVar10 == 0) {
                    iVar12 = param_1[6];
                    uVar5 = *puVar1;
                    iVar10 = FUN_00014a30(iVar12,s_checked_0000a83c);
                    if (iVar10 == 0) {
                      iVar10 = FUN_00014a30(iVar12,&DAT_0000a844);
                      if (iVar10 == 0) {
                        uVar3 = FUN_000138f0(iVar12);
                        *(undefined *)((int)puVar1 + 0xf) = uVar3;
                        goto LAB_0000a790;
                      }
                      uVar5 = uVar5 & 0xfffffffd;
                    }
                    else {
                      uVar5 = uVar5 | 2;
                    }
                  }
                  else {
                    uVar6 = FUN_00015fa8((int)puVar1 + 0xcd);
                    iVar10 = FUN_0001540c(iVar12,(int)puVar1 + 0xcd,uVar6);
                    if (iVar10 != 0) {
                      uVar6 = FUN_00015fa8((int)puVar1 + 0xe3);
                      iVar10 = FUN_0001540c(iVar12,(int)puVar1 + 0xe3,uVar6);
                      if (iVar10 == 0) {
                        iVar12 = param_1[6];
                        iVar10 = FUN_00014a30(iVar12,s_checked_0000a83c);
                        if (iVar10 == 0) {
                          uVar15 = FUN_00014a30(iVar12,&DAT_0000a844);
                          uVar5 = (uint)((ulonglong)uVar15 >> 0x20);
                          bVar13 = (int)uVar15 == 0;
                          if (bVar13) {
                            uVar5 = (uint)*(byte *)((int)puVar1 + 0x11);
                          }
                          if (!bVar13) {
                            *(undefined *)((int)puVar1 + 0x11) = 0;
                            uVar5 = 0;
                          }
                        }
                        else {
                          uVar5 = 1;
                          *(undefined *)((int)puVar1 + 0x11) = 1;
                        }
                        bVar13 = true;
                        FUN_00010f2c(s_POST_K3_OUT____d_0000a998,uVar5);
                      }
                      else {
                        uVar6 = FUN_00015fa8((int)puVar1 + 0x33);
                        iVar10 = FUN_0001540c(iVar12,(int)puVar1 + 0x33,uVar6);
                        if (iVar10 == 0) {
                          iVar10 = FUN_00014a30(param_1[6],s_checked_0000a83c);
                          bVar14 = iVar10 != 0;
                          FUN_00010f2c(s_POST_LOW_PRS_MODE____d_0000a9c8,bVar14);
                          *pcVar2 = bVar14;
                          FUN_0000b428();
                          puVar7 = (undefined4 *)FUN_0000645a(0);
                          if (puVar7 != (undefined4 *)0x0) {
                            local_28 = 0x55;
                            local_27 = 4;
                            local_26 = bVar14;
                            FUN_000066c8(*(undefined *)(puVar7 + 1),*puVar7,&local_28,3);
                          }
                        }
                      }
                      goto LAB_0000a70c;
                    }
                    iVar12 = param_1[6];
                    uVar5 = *puVar1;
                    iVar10 = FUN_00014a30(iVar12,s_checked_0000a83c);
                    if (iVar10 == 0) {
                      iVar10 = FUN_00014a30(iVar12,&DAT_0000a844);
                      if (iVar10 == 0) {
                        uVar3 = FUN_000138f0(iVar12);
                        *(undefined *)(puVar1 + 4) = uVar3;
                        goto LAB_0000a790;
                      }
                      uVar5 = uVar5 & 0xfffffffb;
                    }
                    else {
                      uVar5 = uVar5 | 4;
                    }
                  }
                }
                *puVar1 = uVar5;
                uVar5 = *puVar1;
                if (uVar5 == 1) {
                  *(undefined *)((int)puVar1 + 0xf) = 0;
                  *(undefined *)(puVar1 + 4) = 0;
LAB_0000a784:
                  uVar3 = 1;
LAB_0000a786:
                  *(undefined *)((int)puVar1 + 0xe) = uVar3;
                }
                else {
                  if (uVar5 == 2) {
LAB_0000a746:
                    uVar9 = 2;
                  }
                  else {
                    if (uVar5 == 3) {
                      uVar3 = 2;
                    }
                    else {
                      if (uVar5 == 4) {
                        *(undefined *)((int)puVar1 + 0xf) = 0;
                        uVar3 = 4;
                        *(undefined *)(puVar1 + 4) = 0;
                        goto LAB_0000a786;
                      }
                      if (uVar5 != 5) {
                        if (uVar5 != 6) {
                          if (uVar5 != 7) {
                            return;
                          }
                          *(undefined *)((int)puVar1 + 0xf) = 2;
                          *(undefined *)(puVar1 + 4) = 4;
                          goto LAB_0000a784;
                        }
                        uVar3 = 4;
                        goto LAB_0000a746;
                      }
                      uVar3 = 4;
                    }
                    uVar9 = 1;
                  }
                  *(undefined *)((int)puVar1 + 0xe) = uVar9;
                  *(undefined *)((int)puVar1 + 0xf) = uVar3;
                  *(undefined *)(puVar1 + 4) = 0;
                }
                *(undefined *)((int)puVar1 + 0x11) = 0;
                FUN_00010f2c(s_LEGACY_0000aa44);
                goto LAB_0000a790;
              }
              uVar6 = FUN_000138a4(param_1[6]);
              FUN_00010f2c(s_FuPort____d__0000a9fb + 1,uVar6);
              FUN_0000b47a(uVar6);
            }
          }
        }
      }
    }
LAB_0000a70c:
    if (!bVar13) {
      return;
    }
LAB_0000a790:
    FUN_0000b488(*(undefined *)((int)puVar1 + 0xe),*(undefined *)((int)puVar1 + 0xf),
                 *(undefined *)(puVar1 + 4),*(undefined *)((int)puVar1 + 0x11));
    FUN_00010f2c(s_MemNVRam_SetEnabledOutletModel___0000aa4c,*(undefined *)((int)puVar1 + 0xe),
                 *(undefined *)((int)puVar1 + 0xf),*(undefined *)(puVar1 + 4),
                 *(undefined *)((int)puVar1 + 0x11));
    return;
  }
  puVar7 = *(undefined4 **)(param_2 + 8);
  *(undefined *)(param_2 + 4) = 0;
  if (uVar5 < 4) {
    puVar11 = (undefined4 *)param_1[2];
    *(undefined4 *)((int)puVar1 + uVar5 * 10 + 0x104) = *puVar11;
    *(undefined4 *)((int)puVar1 + uVar5 * 10 + 0x108) = puVar11[1];
    *(undefined2 *)((int)puVar1 + uVar5 * 10 + 0x10c) = *(undefined2 *)(puVar11 + 2);
  }
  iVar12 = param_1[2];
  puVar1[2] = uVar5 + 1;
  uVar6 = FUN_00015fa8(puVar1 + 10);
  iVar10 = FUN_0001540c(iVar12,puVar1 + 10,uVar6);
  if (iVar10 == 0) {
    cVar4 = *pcVar2;
joined_r0x0000a826:
    if (cVar4 == '\0') {
      *puVar7 = s_false_0000aa88._0_4_;
      *(undefined2 *)(puVar7 + 1) = s_false_0000aa88._4_2_;
      cVar4 = *(char *)(param_2 + 4) + '\x05';
      goto LAB_0000a994;
    }
    puVar11 = &DAT_0000aa90;
  }
  else {
    cVar4 = *(char *)((int)puVar1 + 0x11);
    uVar6 = FUN_00015fa8((int)puVar1 + 0xee);
    iVar10 = FUN_0001540c(iVar12,(int)puVar1 + 0xee,uVar6);
    if (iVar10 == 0) goto joined_r0x0000a826;
    uVar6 = FUN_00015fa8((int)puVar1 + 0x5f);
    iVar10 = FUN_0001540c(iVar12,(int)puVar1 + 0x5f,uVar6);
    if (iVar10 != 0) {
      uVar6 = FUN_00015fa8((int)puVar1 + 0x6a);
      iVar10 = FUN_0001540c(iVar12,(int)puVar1 + 0x6a,uVar6);
      if (iVar10 == 0) {
        uVar6 = FUN_0000b358();
        puVar8 = &DAT_0000aa9c;
LAB_0000a9e8:
        cVar4 = FUN_00012e6a(puVar7,puVar8,uVar6);
      }
      else {
        uVar6 = FUN_00015fa8((int)puVar1 + 0xf9);
        iVar10 = FUN_0001540c(iVar12,(int)puVar1 + 0xf9,uVar6);
        if (iVar10 == 0) {
          puVar8 = &DAT_0000ab08;
          uVar6 = 0x355;
          goto LAB_0000a9e8;
        }
        uVar6 = FUN_00015fa8((int)puVar1 + 0x96);
        iVar10 = FUN_0001540c(iVar12,(int)puVar1 + 0x96,uVar6);
        if (iVar10 == 0) {
          uVar6 = FUN_0000b482();
          puVar8 = &DAT_0000ab04;
          goto LAB_0000a9e8;
        }
        uVar6 = FUN_00015fa8(puVar1 + 0x20);
        iVar10 = FUN_0001540c(iVar12,puVar1 + 0x20,uVar6);
        if (iVar10 == 0) {
          puVar8 = (undefined *)FUN_0000b354();
          if (puVar8 == (undefined *)0x0) {
            return;
          }
LAB_0000a960:
          FUN_00015f94(puVar7,puVar8);
        }
        else {
          uVar6 = FUN_00015fa8(puVar1 + 0x2b);
          iVar10 = FUN_0001540c(iVar12,puVar1 + 0x2b,uVar6);
          if (iVar10 == 0) {
            iVar10 = FUN_0000b4b4();
            if (iVar10 != 0) {
              uVar3 = *(undefined *)((int)puVar1 + 0xe);
              goto LAB_0000a9b6;
            }
            FUN_00012e6a(auStack_4c,&DAT_0000aa98);
          }
          else {
            uVar3 = *(undefined *)((int)puVar1 + 0xf);
            uVar6 = FUN_00015fa8((int)puVar1 + 0xc2);
            iVar10 = FUN_0001540c(iVar12,(int)puVar1 + 0xc2,uVar6);
            if (iVar10 != 0) {
              uVar3 = *(undefined *)(puVar1 + 4);
              uVar6 = FUN_00015fa8(puVar1 + 0x36);
              iVar10 = FUN_0001540c(iVar12,puVar1 + 0x36,uVar6);
              if (iVar10 != 0) {
                uVar6 = FUN_00015fa8((int)puVar1 + 0x1d);
                iVar10 = FUN_0001540c(iVar12,(int)puVar1 + 0x1d,uVar6);
                puVar8 = DAT_0000ab4c;
                if (iVar10 != 0) {
                  FUN_00010f2c(s_____Unhandled_get_____0000aaec);
                  return;
                }
                FUN_00010f2c(s_Event__ssidList__s__0000aaa0,DAT_0000ab4c);
                uVar5 = FUN_00015fa8(puVar8);
                if (uVar5 < 4) {
                  uVar6 = FUN_0000b476();
                  FUN_00012e6a(auStack_4c,&DAT_0000aab8,uVar6);
                  FUN_00010f2c(s_Event__no_ssidList__using_instea_0000aac0,auStack_4c);
                  goto LAB_0000a982;
                }
                goto LAB_0000a960;
              }
            }
LAB_0000a9b6:
            FUN_00012e6a(auStack_4c,&DAT_0000aa9c,uVar3);
          }
LAB_0000a982:
          FUN_00015f94(puVar7,auStack_4c);
          puVar8 = auStack_4c;
        }
        cVar4 = FUN_00015fa8(puVar8);
      }
      cVar4 = cVar4 + *(char *)(param_2 + 4);
      goto LAB_0000a994;
    }
    puVar11 = &DAT_0000ab10;
  }
  *puVar7 = *puVar11;
  *(undefined *)(puVar7 + 1) = *(undefined *)(puVar11 + 1);
  cVar4 = *(char *)(param_2 + 4) + '\x04';
LAB_0000a994:
  *(char *)(param_2 + 4) = cVar4;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0000ab50(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined *unaff_r5;
  char *unaff_r7;
  undefined auStack_40 [16];
  undefined auStack_30 [16];
  undefined auStack_20 [16];
  
  pcVar4 = **(char ***)(_DAT_0000acac + 8);
  if (param_1 == -0xf) {
    pcVar2 = s_Exception_occurred_in_ISR_thread_0000ad14;
LAB_0000ab7a:
    param_1 = *(int *)(pcVar4 + 0x4c);
  }
  else {
    if ((param_1 == -7) || (param_1 == -3)) {
      pcVar2 = s_Exception_occurred_in_background_0000acd8;
      goto LAB_0000ab7a;
    }
    pcVar2 = s__Bogus_Exception_return_value____0000acaf + 1;
  }
  FUN_00015c84(pcVar2,param_1);
  cVar1 = *pcVar4;
  if (cVar1 == '\0') {
    iVar3 = FUN_00015d48(*(undefined4 *)(pcVar4 + 4),auStack_20);
    unaff_r5 = (undefined *)0xad64;
LAB_0000abc2:
    unaff_r7 = *(char **)(iVar3 + 8);
  }
  else {
    if (cVar1 == '\x01') {
      iVar3 = FUN_00015df0(*(undefined4 *)(pcVar4 + 4),auStack_30);
      unaff_r5 = (undefined *)0xad60;
      goto LAB_0000abc2;
    }
    if (cVar1 == '\x02') {
      iVar3 = FUN_00015e08(*(undefined4 *)(pcVar4 + 4),auStack_40);
      unaff_r5 = (undefined *)0xad58;
      goto LAB_0000abc2;
    }
    if (cVar1 == '\x03') {
      unaff_r5 = &DAT_0000ad48;
      unaff_r7 = s_main___0000ad50;
      goto LAB_0000abc8;
    }
  }
  if (unaff_r7 == (char *)0x0) {
    unaff_r7 = s__unnamed__0000ad68;
  }
LAB_0000abc8:
  FUN_00015c84(s_FCore__d__Exception_occurred_in_T_0000ad73 + 1,0,unaff_r5);
  FUN_00015c84(s__s_name___s__handle__0x_x__0000ada4,unaff_r5,unaff_r7,*(undefined4 *)(pcVar4 + 4));
  FUN_00015c84(s__s_stack_base__0x_x__0000adc0,unaff_r5,*(undefined4 *)(pcVar4 + 8));
  FUN_00015c84(s_F_s_stack_size__0x_x__0000add7 + 1,unaff_r5,*(undefined4 *)(pcVar4 + 0xc));
  FUN_00015c84(s_FR0___0x_08x_R8___0x_08x_0000adef + 1,*(undefined4 *)(pcVar4 + 0x10),
               *(undefined4 *)(pcVar4 + 0x30));
  FUN_00015c84(s_R1___0x_08x_R9___0x_08x_0000ae0c,*(undefined4 *)(pcVar4 + 0x14),
               *(undefined4 *)(pcVar4 + 0x34));
  FUN_00015c84(s_R2___0x_08x_R10___0x_08x_0000ae28,*(undefined4 *)(pcVar4 + 0x18),
               *(undefined4 *)(pcVar4 + 0x38));
  FUN_00015c84(s_R3___0x_08x_R11___0x_08x_0000ae44,*(undefined4 *)(pcVar4 + 0x1c),
               *(undefined4 *)(pcVar4 + 0x3c));
  FUN_00015c84(s_R4___0x_08x_R12___0x_08x_0000ae60,*(undefined4 *)(pcVar4 + 0x20),
               *(undefined4 *)(pcVar4 + 0x40));
  FUN_00015c84(s_R5___0x_08x_SP_R13____0x_08x_0000ae7c,*(undefined4 *)(pcVar4 + 0x24),
               *(undefined4 *)(pcVar4 + 0x44));
  FUN_00015c84(s_R6___0x_08x_LR_R14____0x_08x_0000ae9c,*(undefined4 *)(pcVar4 + 0x28),
               *(undefined4 *)(pcVar4 + 0x48));
  FUN_00015c84(s_R7___0x_08x_PC_R15____0x_08x_0000aebc,*(undefined4 *)(pcVar4 + 0x2c),
               *(undefined4 *)(pcVar4 + 0x4c));
  FUN_00015c84(s_PSR___0x_08x_0000aedc,*(undefined4 *)(pcVar4 + 0x50));
  iVar3 = DAT_0000af7c;
  FUN_00015c84(s_FICSR___0x_08x_0000aeeb + 1,*(undefined4 *)(DAT_0000af7c + 0xd04));
  FUN_00015c84(s_MMFSR___0x_02x_0000aefc,*(undefined *)(iVar3 + 0xd28));
  FUN_00015c84(s_BFSR___0x_02x_0000af0c,*(undefined *)(iVar3 + 0xd29));
  FUN_00015c84(s_UFSR___0x_04x_0000af1c,*(undefined2 *)(iVar3 + 0xd2a));
  FUN_00015c84(s_HFSR___0x_08x_0000af2c,*(undefined4 *)(iVar3 + 0xd2c));
  FUN_00015c84(s_DFSR___0x_08x_0000af3c,*(undefined4 *)(iVar3 + 0xd30));
  FUN_00015c84(s_MMAR___0x_08x_0000af4c,*(undefined4 *)(iVar3 + 0xd34));
  FUN_00015c84(s_BFAR___0x_08x_0000af5c,*(undefined4 *)(iVar3 + 0xd38));
  FUN_00015c84(s_AFSR___0x_08x_0000af6c,*(undefined4 *)(iVar3 + 0xd3c));
  return;
}



int * FUN_0000af80(uint *param_1)

{
  short *psVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  longlong lVar15;
  
  piVar2 = DAT_0000b334;
  uVar4 = *(uint *)(DAT_0000b2c8 + 2);
  uVar3 = param_1[1];
  iVar13 = (int)uVar4 >> 0x1f;
  iVar5 = DAT_0000b2c4 - iVar13;
  bVar14 = -uVar4 - 1 < *param_1;
  if ((int)((iVar5 - uVar3) - (uint)bVar14) < 0 !=
      (SBORROW4(iVar5,uVar3) != SBORROW4(iVar5 - uVar3,(uint)bVar14))) {
    return (int *)0x0;
  }
  uVar3 = uVar4;
  if (param_1 != (uint *)0x0) {
    uVar3 = uVar4 + *param_1;
    iVar13 = iVar13 + param_1[1] + (uint)CARRY4(uVar4,*param_1);
  }
  DAT_0000b334[2] = 0;
  piVar2[5] = 0x46;
  piVar2[4] = 0;
  piVar2[3] = 1;
  piVar2 = DAT_0000b350;
  if (iVar13 == -1 && uVar3 == 0xffffffff) {
    DAT_0000b350[1] = -(uVar4 / 0x3c);
    *piVar2 = -(uVar4 % 0x3c);
    return DAT_0000b350;
  }
  iVar5 = 0x3c;
  FUN_0000c8e0(uVar3,iVar13,0x3c,0);
  FUN_0000c8e0(uVar3,iVar13,0x3c,0);
  iVar6 = 0x3c;
  FUN_0000c8e0();
  FUN_0000c8e0(uVar3,iVar13,0xe10,0);
  iVar7 = 0x18;
  FUN_0000c8e0();
  lVar15 = FUN_0000c8e0(uVar3,iVar13,DAT_0000b348,0);
  piVar2 = DAT_0000b334;
  uVar8 = 0x7b2;
  uVar3 = 0;
  uVar10 = iVar5 + -(uVar4 % 0x3c);
  while( true ) {
    iVar13 = (int)((ulonglong)lVar15 >> 0x20);
    uVar12 = (uint)lVar15;
    uVar9 = 0x16d;
    if (((uVar8 & 3) == 0) && ((uVar8 != (uVar8 / 100) * 100 || (uVar8 == (uVar8 / 400) * 400)))) {
      uVar9 = 0x16e;
    }
    if ((int)(iVar13 - (uint)(uVar12 < uVar9)) < 0 !=
        (SBORROW4(iVar13,(uint)(uVar12 < uVar9)) != false)) break;
    uVar9 = 0x16d;
    if (((uVar8 - 0x7b0 & 3) == 0) &&
       ((uVar8 != (uVar8 / 100) * 100 || (uVar8 == (uVar8 / 400) * 400)))) {
      uVar9 = 0x16e;
    }
    uVar8 = uVar8 + 1;
    lVar15 = CONCAT44(iVar13 - (uint)(uVar12 < uVar9),uVar12 - uVar9);
  }
  if ((int)(-(uint)(uVar12 != 0) - iVar13) < 0 == (SBORROW4(-iVar13,(uint)(uVar12 != 0)) != false))
  {
    do {
      uVar8 = uVar8 - 1;
      uVar9 = 0x16d;
      if (((uVar8 & 3) == 0) && ((uVar8 != (uVar8 / 100) * 100 || (uVar8 == (uVar8 / 400) * 400))))
      {
        uVar9 = 0x16e;
      }
      uVar12 = (uint)(lVar15 + (ulonglong)uVar9);
      iVar13 = (int)(lVar15 + (ulonglong)uVar9 >> 0x20);
      lVar15 = lVar15 + (ulonglong)uVar9;
    } while ((int)(-(uint)(uVar12 != 0) - iVar13) < 0 ==
             (SBORROW4(-iVar13,(uint)(uVar12 != 0)) != false));
  }
  uVar8 = uVar8 - 0x76c;
  DAT_0000b334[5] = uVar8;
  iVar13 = uVar12 + 1;
  piVar2[3] = iVar13;
  piVar2 = DAT_0000b334;
  if ((int)uVar10 < 0) {
    uVar9 = -((0x3b - uVar10) / 0x3c);
  }
  else {
    uVar9 = uVar10 / 0x3c;
  }
  uVar4 = uVar9 + -(uVar4 / 0x3c) + iVar6;
  *DAT_0000b334 = uVar10 + uVar9 * -0x3c;
  if ((int)uVar4 < 0) {
    uVar10 = -((0x3b - uVar4) / 0x3c);
  }
  else {
    uVar10 = uVar4 / 0x3c;
  }
  uVar9 = uVar10 + iVar7;
  piVar2[2] = uVar9;
  piVar2[1] = uVar4 + uVar10 * -0x3c;
  iVar5 = DAT_0000b34c;
  if ((int)uVar9 < 0) {
    uVar4 = -((0x17 - uVar9) / 0x18);
  }
  else {
    uVar4 = uVar9 / 0x18;
    if (0x17 < (int)uVar9) {
      if ((int)(0x7fffffff - uVar4) < iVar13) {
        return DAT_0000b350;
      }
      goto LAB_0000b1ae;
    }
  }
  if (iVar13 < (int)(-0x80000000 - uVar4)) {
    return DAT_0000b350;
  }
LAB_0000b1ae:
  iVar13 = uVar4 + iVar13;
  piVar2[3] = iVar13;
  piVar2[2] = uVar9 + uVar4 * -0x18;
  do {
    piVar2 = DAT_0000b334;
    if ((int)uVar3 < 0) {
      uVar4 = -((0xb - uVar3) / 0xc);
LAB_0000b2d6:
      if ((int)uVar8 < (int)(-0x80000000 - uVar4)) {
        return DAT_0000b350;
      }
    }
    else {
      uVar4 = uVar3 / 0xc;
      if ((int)uVar3 < 0xc) goto LAB_0000b2d6;
      if ((int)(0x7fffffff - uVar4) < (int)uVar8) {
        return DAT_0000b350;
      }
    }
    uVar8 = uVar4 + uVar8;
    iVar6 = uVar3 + uVar4 * -0xc;
    DAT_0000b334[5] = uVar8;
    piVar2[4] = iVar6;
    if (iVar13 < 1) {
      uVar3 = iVar6 - 1;
      iVar6 = 0;
      piVar2[4] = uVar3;
      if (((uVar3 == 1) && ((uVar8 & 3) == 0)) &&
         ((uVar4 = uVar8 + 0x76c, uVar4 % 100 != 0 || (uVar4 == (uVar4 / 400) * 400)))) {
        iVar6 = 1;
      }
      uVar4 = uVar3;
      if ((int)uVar3 < 0) {
        uVar4 = 0xb;
      }
      iVar13 = iVar6 + *(int *)(iVar5 + uVar4 * 4) + iVar13;
    }
    else {
      iVar7 = 0;
      if (((iVar6 == 1) && ((uVar8 & 3) == 0)) &&
         ((uVar3 = uVar8 + 0x76c, uVar3 != (uVar3 / 100) * 100 || (uVar3 == (uVar3 / 400) * 400))))
      {
        iVar7 = 1;
      }
      iVar11 = iVar6 * 4;
      if (iVar13 <= iVar7 + *(int *)(iVar5 + iVar11)) {
        uVar3 = uVar8 + 0x76c;
        iVar7 = 0;
        if (((1 < iVar6) && ((uVar8 & 3) == 0)) &&
           ((uVar3 != (uVar3 / 100) * 100 || (uVar3 == (uVar3 / 400) * 400)))) {
          iVar7 = 1;
        }
        uVar3 = uVar8 + 0x76b;
        iVar5 = iVar13 + *(int *)(iVar5 + iVar11 + 0x30) + iVar7 + -1;
        iVar13 = iVar5 + uVar3 / 400 +
                         (((uVar8 - 0x46) * 0x16d +
                          ((int)(uVar3 + ((uint)((int)uVar3 >> 1) >> 0x1e)) >> 2)) - uVar3 / 100);
        DAT_0000b334[7] = iVar5;
        uVar3 = iVar13 - 0x1dd;
        iVar5 = 7;
        iVar6 = 0;
        FUN_0000c8e0(iVar13 + -0x1d9,((int)uVar3 >> 0x1f) + (uint)(0xfffffffb < uVar3));
        piVar2 = DAT_0000b334;
        psVar1 = DAT_0000b2c8;
        if (iVar6 < 0) {
          iVar5 = iVar5 + 7;
        }
        DAT_0000b334[6] = iVar5;
        piVar2[8] = (int)*psVar1;
        return DAT_0000b350;
      }
      uVar3 = iVar6 + 1;
      iVar13 = iVar13 - (iVar7 + *(int *)(iVar5 + iVar11));
      DAT_0000b334[4] = uVar3;
    }
    DAT_0000b334[3] = iVar13;
  } while( true );
}



undefined4 FUN_0000b354(void)

{
  return DAT_0000b61c;
}



undefined4 FUN_0000b358(void)

{
  return *(undefined4 *)(DAT_0000b61c + -0x84);
}



void FUN_0000b360(uint param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  
  param_1 = param_1 ^ param_2;
  iVar2 = 0x20;
  do {
    bVar1 = -1 < (int)param_1;
    if (bVar1) {
      param_1 = param_1 << 1;
    }
    if (!bVar1) {
      param_1 = DAT_0000b620 ^ param_1 << 1;
    }
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}



void FUN_0000b376(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_28;
  undefined auStack_24 [6];
  char local_1e;
  
  local_28 = 0;
  uVar3 = DAT_0000b624;
  if (param_1 != 1) {
    uVar3 = DAT_0000b628;
  }
  FUN_00011a94(uVar3,0,0xdc);
  FUN_00010ddc(auStack_24,s_NvRam_x_NVR_0000b610,0xc);
  local_1e = (char)param_1 + '0';
  iVar2 = FUN_00011c64(auStack_24,0,0,&local_28);
  uVar1 = local_28;
  if ((iVar2 == 0) &&
     ((iVar2 = FUN_00010b54(local_28,0,uVar3,0xdc), uVar3 = local_28, iVar2 < 0 ||
      (iVar2 = FUN_0001155c(uVar1,0,0,0), uVar3 = uVar1, iVar2 < 0)))) {
    FUN_0001155c(uVar3,0,0,0);
  }
  return;
}



void FUN_0000b3e8(undefined *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = 0xffffffff;
  if (param_2 != 0) {
    uVar2 = param_2 + 3U >> 2;
    do {
      uVar1 = FUN_0000b360(uVar1,*param_1);
      uVar2 = uVar2 - 1;
      param_1 = param_1 + 1;
    } while (uVar2 != 0);
  }
  return;
}



undefined4 FUN_0000b404(int *param_1)

{
  int iVar1;
  
  if (((0xf < (uint)param_1[1]) && ((uint)param_1[1] < 0x801)) &&
     (iVar1 = FUN_0000b3e8(), *param_1 == iVar1)) {
    return 1;
  }
  return 0;
}



void FUN_0000b428(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = DAT_0000b6cc;
  iVar2 = DAT_0000b6cc + 0x44;
  iVar3 = FUN_0000b3e8(iVar2,0xd8,param_3,param_4,param_4);
  if (*(int *)(iVar1 + 0x40) != iVar3) {
    *(int *)(iVar1 + 0x4c) = *(int *)(iVar1 + 0x4c) + 1;
    uVar4 = FUN_0000b3e8(iVar2,0xd8);
    *(undefined4 *)(iVar1 + 0x40) = uVar4;
  }
  return;
}



void FUN_0000b450(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = DAT_0000b6cc;
  FUN_00014928(DAT_0000b6cc + 0x9c,param_1,0x50);
  if (param_2 < 0x4f) {
    puVar2 = (undefined *)(DAT_0000b61c + param_2);
  }
  else {
    puVar2 = (undefined *)(iVar1 + 0xeb);
  }
  *puVar2 = 0;
  FUN_0000b428();
  return;
}



undefined4 FUN_0000b476(void)

{
  return DAT_0000b6d0;
}



void FUN_0000b47a(undefined4 param_1)

{
  *DAT_0000b6d4 = param_1;
  FUN_0000b428();
  return;
}



undefined4 FUN_0000b482(void)

{
  return *DAT_0000b6d4;
}



void FUN_0000b488(int param_1,byte param_2,byte param_3,byte param_4)

{
  int iVar1;
  
  iVar1 = DAT_0000b6d8;
  if (param_1 != 0) {
    *(byte *)(DAT_0000b6d8 + 0x114) = (byte)param_1 & 7;
    *(byte *)(iVar1 + 0x115) = param_2 & 7;
    *(byte *)(iVar1 + 0x116) = param_3 & 7;
    *(byte *)(iVar1 + 0x117) = param_4 & 1;
    FUN_0000b428();
  }
  return;
}



byte FUN_0000b4b4(void)

{
  return (*(byte *)(DAT_0000b6dc + 0x10) |
         *(byte *)(DAT_0000b6dc + 0xf) | *(byte *)(DAT_0000b6dc + 0xe)) & 7;
}



void FUN_0000b4c6(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = DAT_0000b6d8;
  FUN_00014928(DAT_0000b6d8 + 0x7c,param_1,0x20);
  if (param_2 < 0x1f) {
    puVar2 = (undefined *)(DAT_0000b6d0 + param_2);
  }
  else {
    puVar2 = (undefined *)(iVar1 + 0x9b);
  }
  *puVar2 = 0;
  FUN_0000b428();
  return;
}



void FUN_0000b4ec(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = DAT_0000b6d8;
  FUN_00014928(DAT_0000b6d8 + 0x5c,param_1,0x20);
  if (param_2 < 0x1f) {
    puVar2 = (undefined *)(iVar1 + 0x5c + param_2);
  }
  else {
    puVar2 = (undefined *)(iVar1 + 0x7b);
  }
  *puVar2 = 0;
  FUN_0000b428();
  return;
}



void FUN_0000b512(undefined4 param_1)

{
  *(undefined4 *)(DAT_0000b6d8 + 0x58) = param_1;
  FUN_0000b428();
  return;
}



void FUN_0000b51c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_28;
  undefined auStack_24 [6];
  char local_1e;
  
  local_28 = 0;
  if (param_1 - 1U < 2) {
    FUN_00010ddc(auStack_24,s_NvRam_x_NVR_0000b610,0xc);
    local_1e = (char)param_1 + '0';
    iVar1 = FUN_00011c64(auStack_24,0x1000,0,&local_28);
    if (iVar1 != 0) {
      uVar2 = FUN_000125f8(0x800,0x21);
      iVar1 = FUN_00011c64(auStack_24,uVar2,0,&local_28);
      if (iVar1 != 0) {
        return;
      }
    }
    if (local_28 != 0) {
      uVar2 = DAT_0000b6e0;
      if (param_1 != 1) {
        uVar2 = DAT_0000b6e4;
      }
      FUN_00010ddc(uVar2,DAT_0000b6d8 + 0x40,0xdc);
      FUN_00010bf8(local_28,0,uVar2,0xdc);
      FUN_0001155c(local_28,0,0,0);
    }
  }
  return;
}



void FUN_0000b59c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  
  iVar4 = DAT_0000b6e0;
  iVar3 = FUN_0000b404(DAT_0000b6e0);
  iVar2 = DAT_0000b6e4;
  iVar1 = DAT_0000b6d8;
  if (iVar3 == 0) {
LAB_0000b5f8:
    uVar5 = 1;
  }
  else {
    iVar3 = FUN_0000b404(DAT_0000b6e4);
    if (iVar3 != 0) {
      if (*(int *)(iVar4 + 8) != 2) goto LAB_0000b5f8;
      if (*(int *)(iVar2 + 8) == 2) {
        if (*(uint *)(iVar4 + 0xc) < *(uint *)(iVar2 + 0xc)) goto LAB_0000b5f8;
        if (*(uint *)(iVar4 + 0xc) <= *(uint *)(iVar2 + 0xc)) {
          iVar3 = FUN_0000b404();
          if (iVar3 != 0) {
            iVar4 = FUN_0001540c(iVar4,iVar1 + 0x40,0xdc);
            if (iVar4 != 0) goto LAB_0000b5f8;
            iVar4 = FUN_0001540c(iVar2,iVar1 + 0x40,0xdc);
            if (iVar4 != 0) goto LAB_0000b5f4;
          }
          uVar5 = 0;
          goto LAB_0000b5fa;
        }
      }
    }
LAB_0000b5f4:
    uVar5 = 2;
  }
LAB_0000b5fa:
  uVar6 = *(int *)(iVar1 + 8) + 1;
  if (uVar6 < 10) {
    *(uint *)(iVar1 + 8) = uVar6;
  }
  else {
    *(undefined4 *)(iVar1 + 8) = 0;
    FUN_0000b51c(uVar5);
  }
  return;
}



void FUN_0000b62c(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined uVar4;
  undefined4 uVar5;
  undefined4 in_r3;
  undefined uVar6;
  
  piVar1 = DAT_0000b6dc;
  iVar2 = *DAT_0000b6dc;
  if (iVar2 == 1) {
    *(undefined *)((int)DAT_0000b6dc + 0xf) = 0;
    *(undefined *)(piVar1 + 4) = 0;
    uVar4 = 0;
    uVar5 = 0;
LAB_0000b69e:
    uVar3 = 1;
    *(undefined *)((int)piVar1 + 0xe) = 1;
    goto LAB_0000b6a2;
  }
  if (iVar2 == 2) {
    uVar4 = 0;
    uVar6 = 0;
LAB_0000b662:
    uVar3 = 2;
    *(undefined *)((int)DAT_0000b6dc + 0xe) = 2;
    *(undefined *)((int)piVar1 + 0xf) = uVar6;
  }
  else {
    if (iVar2 == 3) {
      uVar4 = 2;
    }
    else {
      if (iVar2 == 4) {
        uVar3 = 4;
        *(undefined *)((int)DAT_0000b6dc + 0xe) = 4;
        *(undefined *)((int)piVar1 + 0xf) = 0;
        uVar4 = 0;
        goto LAB_0000b686;
      }
      if (iVar2 != 5) {
        if (iVar2 != 6) {
          if (iVar2 != 7) {
            return;
          }
          uVar4 = 2;
          uVar5 = 4;
          *(undefined *)((int)DAT_0000b6dc + 0xf) = 2;
          *(undefined *)(piVar1 + 4) = 4;
          goto LAB_0000b69e;
        }
        uVar6 = 4;
        uVar4 = 4;
        goto LAB_0000b662;
      }
      uVar4 = 4;
    }
    uVar3 = 1;
    *(undefined *)((int)DAT_0000b6dc + 0xe) = 1;
    *(undefined *)((int)piVar1 + 0xf) = uVar4;
  }
LAB_0000b686:
  uVar5 = 0;
  *(undefined *)(piVar1 + 4) = 0;
LAB_0000b6a2:
  *(undefined *)((int)piVar1 + 0x11) = 0;
  FUN_0000b488(uVar3,uVar4,uVar5,0,in_r3);
  FUN_0000b428();
  return;
}



void FUN_0000b6ae(undefined *param_1,undefined *param_2,undefined *param_3,undefined *param_4)

{
  int iVar1;
  
  iVar1 = DAT_0000b6d8;
  *param_1 = *(undefined *)(DAT_0000b6d8 + 0x114);
  *param_2 = *(undefined *)(iVar1 + 0x115);
  *param_3 = *(undefined *)(iVar1 + 0x116);
  *param_4 = *(undefined *)(iVar1 + 0x117);
  return;
}



int FUN_0000b6e8(void)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  char *pcVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 local_38;
  undefined4 local_34;
  undefined auStack_30 [4];
  byte local_2c [4];
  uint local_28;
  
  piVar4 = DAT_0000ba48;
  iVar5 = *DAT_0000ba48;
  *(undefined4 *)(iVar5 + 0xb8) = 0;
  *(undefined4 *)(iVar5 + 0xc0) = 0;
  iVar5 = FUN_0000d614(&local_38,local_2c);
  if (iVar5 == -100) {
    iVar5 = FUN_00015a2c();
    if (iVar5 == 0) {
      FUN_000133bc(5,0,0);
      return -100;
    }
    return iVar5;
  }
  pcVar8 = (char *)(local_38 & 0xffff);
  iVar5 = *piVar4;
  local_28 = 8;
  uVar11 = (local_38 >> 0x10) - 4 & 0xffff;
  if (pcVar8 != (char *)0x8) {
    *(undefined *)(iVar5 + 0x9c) = (undefined)local_34;
    *(undefined *)(iVar5 + 0xaa) = local_34._3_1_;
    *(byte *)(iVar5 + 0xab) = local_34._2_1_;
    if (1 < *(byte *)(iVar5 + 0x9c)) {
      FUN_00016154(*piVar4 + 0xa4);
    }
  }
  FUN_00011bf0(pcVar8);
  puVar9 = (undefined4 *)*piVar4;
  cVar1 = *(char *)(puVar9 + 0x31);
  if (cVar1 == '\0') {
    if (pcVar8 == s_Main_0x_08X___version_0x_04X_nee_00000fe8 + 0x23) {
      uVar11 = 0xc;
    }
    else if (pcVar8 == (char *)0x120b) {
      uVar11 = 0x18;
    }
    else {
      uVar11 = 4;
    }
    iVar5 = FUN_00010aa4(*puVar9,&local_34,4);
    if (iVar5 != 4) {
      return -4;
    }
    if (7 < (local_34._2_1_ & 8)) {
      return -7;
    }
    FUN_00015738(local_34._2_1_ & 8);
    iVar5 = FUN_000110e8(pcVar8,local_34._2_1_ & 0xf);
    if (iVar5 != 0) {
      return iVar5;
    }
    ***(uint ***)((short)(ushort)*(byte *)(*piVar4 + 0xbc) * 0xc + *piVar4 + 0x14) = local_34;
    if ((4 < uVar11) &&
       (iVar5 = FUN_00010aa4(*(undefined4 *)*piVar4,
                             **(int **)((short)(ushort)*(byte *)((undefined4 *)*piVar4 + 0x2f) * 0xc
                                        + *piVar4 + 0x14) + 4,uVar11 - 4), iVar5 != uVar11 - 4)) {
      return -4;
    }
    if ((short)(ushort)local_34 < 1) {
LAB_0000ba12:
      puVar9 = (undefined4 *)*piVar4;
    }
    else {
      puVar9 = (undefined4 *)*piVar4;
      if (3 < (ushort)local_34) {
        uVar11 = FUN_00010aa4(*puVar9,*(undefined4 *)
                                       (*(int *)((short)(ushort)*(byte *)(puVar9 + 0x2f) * 0xc +
                                                 *piVar4 + 0x14) + 4));
        if (uVar11 != ((int)(short)(ushort)local_34 & 0xfffcU)) {
          return -4;
        }
        puVar9 = (undefined4 *)*piVar4;
      }
      if ((local_34 & 3) != 0) {
        iVar5 = FUN_00010aa4(*puVar9,auStack_30,4);
        if (iVar5 != 4) {
          return -4;
        }
        FUN_00010ddc(((int)(short)(ushort)local_34 & 0xfffcU) +
                     *(int *)(*(int *)((short)(ushort)*(byte *)(*piVar4 + 0xbc) * 0xc + *piVar4 +
                                      0x14) + 4),auStack_30,(ushort)local_34 & 3);
        goto LAB_0000ba12;
      }
    }
    FUN_00016154(puVar9 + (short)(ushort)*(byte *)(puVar9 + 0x2f) * 3 + 4);
LAB_0000ba22:
    FUN_00015a80();
  }
  else {
    if (cVar1 != '\x01') {
      if (cVar1 != '\x02') goto LAB_0000ba28;
      puVar9[0x2e] = DAT_0000ba74;
      puVar6 = (uint *)puVar9[0x2e];
      FUN_000164be(puVar6,0xa8);
      if (puVar6 == (uint *)0x0) {
        return -5;
      }
      uVar10 = uVar11 + 3;
      *puVar6 = local_38;
      puVar6[1] = local_34;
      if ((uVar10 & 0xfffffffc) < 0xa1) {
        uVar12 = uVar10 & 0xfffc;
      }
      else {
        uVar12 = 0xa0;
      }
      if ((uVar11 != 0) &&
         (uVar11 = FUN_00010aa4(*(undefined4 *)*piVar4,puVar6 + 2,uVar12), uVar11 != uVar12)) {
        return -4;
      }
      if (0xa0 < (uVar10 & 0xfffffffc)) {
        for (uVar11 = (uVar10 & 0xfffc) - 0xa0; (uVar11 & 0xffff) != 0;
            uVar11 = (uVar11 & 0xffff) - 4) {
          iVar5 = FUN_00010aa4(*(undefined4 *)*piVar4,auStack_30,4);
          if (iVar5 != 4) {
            return -4;
          }
        }
      }
      FUN_00015738();
      if (((pcVar8 == s_Main_0x_08X___version_0x_04X_nee_00000fe8 + 0x1b) ||
          (pcVar8 == (char *)0x1203)) ||
         (pcVar8 == s_Main_0x_08X___version_0x_04X_nee_00000fe8 + 0x1e)) {
        local_28 = *(byte *)((int)puVar6 + 10) & 0xf;
      }
      FUN_000110e8(pcVar8,local_28);
      goto LAB_0000ba22;
    }
    uVar11 = FUN_00010aa4(*puVar9,puVar9[0x2c],*(byte *)(puVar9[0x2b] + 3) + 3 & 0xfffffffc);
    if (uVar11 != (*(byte *)(puVar9[0x2b] + 3) + 3 & 0xfffffffc)) {
      return -4;
    }
    puVar9 = (undefined4 *)*piVar4;
    iVar5 = puVar9[0x2d];
    if ((iVar5 == 0) || (*(short *)(iVar5 + 2) == 0)) goto LAB_0000ba28;
    sVar3 = local_38._2_2_ - (ushort)*(byte *)(puVar9[0x2b] + 3);
    sVar2 = sVar3 + -4;
    uVar11 = (uint)sVar2;
    *(short *)(iVar5 + 4) = sVar2;
    if ((int)uVar11 < 1) {
      *(undefined2 *)(puVar9[0x2d] + 2) = 0;
      goto LAB_0000ba28;
    }
    uVar10 = (uint)*(short *)(puVar9[0x2d] + 2);
    if ((int)uVar11 <= (int)uVar10) {
      uVar10 = uVar11;
    }
    uVar12 = uVar10 & 0xfffc;
    if (3 < uVar12) {
      uVar7 = FUN_00010aa4(*puVar9,*(undefined4 *)(puVar9[0x2d] + 0xc),uVar12);
      if (uVar7 != uVar12) {
        return -4;
      }
      puVar9 = (undefined4 *)*piVar4;
    }
    if ((uVar10 & 3) != 0) {
      iVar5 = FUN_00010aa4(*puVar9,auStack_30,4);
      if (iVar5 != 4) {
        return -4;
      }
      FUN_00010ddc(uVar12 + *(int *)(*(int *)(*piVar4 + 0xb4) + 0xc),auStack_30,uVar10 & 3);
      puVar9 = (undefined4 *)*piVar4;
      uVar11 = (uint)(short)(sVar3 + -8);
    }
    if (((int)uVar11 <= (int)*(short *)(puVar9[0x2d] + 2)) ||
       (uVar11 = (uVar11 - (int)*(short *)(puVar9[0x2d] + 2)) + 3 & 0xfffc, uVar11 == 0))
    goto LAB_0000ba28;
    do {
      iVar5 = FUN_00010aa4(*(undefined4 *)*piVar4,auStack_30,4);
      if (iVar5 != 4) {
        return -4;
      }
      uVar11 = uVar11 - 4 & 0xffff;
    } while (uVar11 != 0);
  }
  puVar9 = (undefined4 *)*piVar4;
LAB_0000ba28:
  if ((local_2c[0] != 0) &&
     (uVar11 = FUN_00010aa4(*puVar9,&local_38,local_2c[0]), uVar11 != local_2c[0])) {
    return -4;
  }
  FUN_00016340();
  return 0;
}



void thunk_FUN_000158f8(undefined4 *param_1)

{
  FUN_000128d0(DAT_00015914,*param_1,DAT_00015910,0,0);
  *param_1 = 0;
  return;
}



undefined4
FUN_0000ba98(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int *param_6)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_88 [12];
  int local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined auStack_4c [52];
  
  FUN_00016410(auStack_4c);
  FUN_00016404(auStack_88,0,0x3c,8);
  local_70 = param_5;
  *(undefined4 *)(local_7c + 4) = param_2;
  local_78 = param_4;
  local_68 = param_3;
  iVar1 = FUN_000131f4(param_1,auStack_88,auStack_4c);
  if (param_6 != (int *)0x0) {
    *param_6 = iVar1;
  }
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_0000bae6(undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0xffffffff) {
    param_2 = 0xffffffff;
  }
  else if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 / (*DAT_0000bdf0 / 1000);
  }
  iVar1 = FUN_0000e098(*param_1,param_2);
  if (iVar1 == 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



undefined4 FUN_0000bb1e(undefined4 *param_1)

{
  FUN_00011f90(*param_1);
  return 0;
}



undefined4 FUN_0000bb2a(undefined4 *param_1)

{
  FUN_00011f90(*param_1);
  return 0;
}



undefined4 FUN_0000bb36(void)

{
  thunk_FUN_000155a4();
  return 0;
}



undefined4 FUN_0000bb40(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0000bae6(param_1,0,param_3,param_4,param_4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



undefined4 FUN_0000bb54(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_60 [48];
  undefined auStack_30 [24];
  undefined local_18;
  
  FUN_00016410(auStack_60);
  FUN_000163f8(auStack_30,0,0x24,8);
  local_18 = 1;
  iVar1 = FUN_00014b74(1,auStack_30,auStack_60);
  if (iVar1 == 0) {
    *param_1 = 0;
    uVar2 = 0xffffffff;
  }
  else {
    *param_1 = iVar1;
    FUN_0000bb40(param_1);
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_0000bb96(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_10 = param_1;
  local_c = param_2;
  uStack_8 = param_4;
  iVar1 = FUN_00011670(*DAT_0000bd78,&local_10,0);
  if (iVar1 == 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



void FUN_0000bbb4(uint param_1)

{
  FUN_000101d0(param_1 / (*DAT_0000bdf0 / 1000));
  return;
}



undefined4 FUN_0000bbc8(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = param_4;
  if (param_3 == 0xffffffff) {
    param_3 = 0xffffffff;
  }
  else if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    param_3 = param_3 / (*DAT_0000bdf0 / 1000);
    uVar3 = *DAT_0000bdf0 / 1000;
  }
  iVar1 = FUN_00011670(*param_1,param_2,param_3,uVar3,param_4);
  FUN_00014488();
  if (iVar1 == 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}



undefined4 FUN_0000bc06(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = param_4;
  if (param_3 == 0xffffffff) {
    param_3 = 0xffffffff;
  }
  else if (param_3 == 0) {
    param_3 = 0;
  }
  else {
    param_3 = param_3 / (*DAT_0000bdf0 / 1000);
    uVar3 = *DAT_0000bdf0 / 1000;
  }
  iVar1 = FUN_00011dc8(*param_1,param_2,param_3,uVar3,param_4);
  if (iVar1 == 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffffe;
  }
  return uVar2;
}



undefined4 FUN_0000bc3e(void)

{
  thunk_FUN_000158b8();
  return 0;
}



undefined4 FUN_0000bc48(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_40 [48];
  
  FUN_00016410(auStack_40);
  iVar1 = FUN_00012d24(param_3,param_4,0,auStack_40);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    uVar2 = 0xfffffffe;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_0000bc76(undefined4 *param_1)

{
  FUN_00011f90(*param_1);
  return 0;
}



undefined4 FUN_0000bc82(undefined4 *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0xffffffff) {
    param_2 = 0xffffffff;
  }
  else if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = param_2 / (*DAT_0000bdf0 / 1000);
  }
  iVar1 = FUN_0000e098(*param_1,param_2);
  if (iVar1 == 1) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



undefined4 FUN_0000bcba(void)

{
  thunk_FUN_000155a4();
  return 0;
}



undefined4 FUN_0000bcc4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_60 [48];
  undefined auStack_30 [24];
  undefined local_18;
  
  FUN_00016410(auStack_60);
  FUN_000163f8(auStack_30,0,0x24,8);
  local_18 = 1;
  iVar1 = FUN_00014b74(1,auStack_30,auStack_60);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  *param_1 = iVar1;
  return uVar2;
}



void FUN_0000bcfe(void)

{
  int in_r3;
  int local_8 [2];
  
  local_8[0] = in_r3;
  local_8[0] = FUN_00016198();
  if (local_8[0] != 0) {
    thunk_FUN_000157d8(local_8);
  }
  return;
}



undefined4 FUN_0000bd10(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_70 [48];
  undefined auStack_40 [32];
  undefined4 local_20;
  undefined2 local_1c;
  
  FUN_00016410(auStack_70);
  FUN_00016394(auStack_40,0,0x30,8);
  local_1c = 1;
  local_20 = param_3;
  FUN_0000bcfe(param_1);
  iVar1 = FUN_00012c58(param_1,param_2,auStack_40,auStack_70);
  FUN_00015ad8(param_1,param_3);
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_0000bd7c(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined auStack_78 [12];
  int local_6c;
  undefined4 local_60;
  undefined4 local_58;
  undefined auStack_3c [48];
  
  FUN_00016410(auStack_3c);
  uVar2 = FUN_00012d24(8,3,0,auStack_3c);
  puVar1 = DAT_0000bdfc;
  *DAT_0000bdfc = uVar2;
  FUN_00016404(auStack_78,0,0x3c,8);
  local_58 = 0x800;
  *(char **)(local_6c + 4) = s_SimpleLinkTask_0000bde0;
  local_60 = param_1;
  iVar3 = FUN_000131f4(DAT_0000bdf4,auStack_78,auStack_3c);
  *DAT_0000bdf8 = iVar3;
  if (iVar3 == 0) {
    thunk_FUN_000158b8(puVar1);
  }
  return 0;
}



int FUN_0000be00(undefined *param_1,uint param_2,byte *param_3,uint **param_4,undefined2 param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char **ppcVar6;
  char *pcVar7;
  undefined4 *puVar8;
  uint *puVar9;
  undefined4 uVar10;
  uint uVar11;
  byte *pbVar12;
  bool bVar13;
  undefined *local_60;
  uint local_5c;
  byte *local_58;
  char local_54 [16];
  uint local_44;
  undefined2 local_40;
  ushort local_3e;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint *local_30;
  undefined2 local_2c;
  char *local_28;
  
  local_2c = param_5;
  if (param_3 == (byte *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0;
    pbVar12 = param_3 + 1;
    local_60 = param_1;
    local_5c = param_2;
    local_58 = param_3;
    while( true ) {
      local_58 = local_58 + 1;
      if (pbVar12[-1] == 0) break;
      if (pbVar12[-1] == 0x25) {
        uVar4 = (uint)*pbVar12;
        local_58 = pbVar12 + 1;
        bVar13 = uVar4 == 0x2d;
        if (bVar13) {
          uVar4 = (uint)*local_58;
          local_58 = pbVar12 + 2;
        }
        local_3e = (ushort)bVar13;
        bVar13 = uVar4 == 0x30;
        if (bVar13) {
          uVar4 = (uint)*local_58;
          local_58 = local_58 + 1;
        }
        if (uVar4 == 0x2a) {
          pbVar12 = local_58 + 1;
          puVar9 = (uint *)((int)*param_4 + 3U & 0xfffffffc);
          *param_4 = puVar9 + 1;
          uVar11 = *puVar9;
          uVar4 = (uint)*local_58;
          local_58 = pbVar12;
          if ((int)uVar11 < 0) {
            uVar11 = -uVar11;
            local_3e = 1;
          }
        }
        else {
          uVar11 = 0;
          while ((0x2f < uVar4 && (uVar4 < 0x3a))) {
            uVar11 = (uVar4 + uVar11 * 10) - 0x30;
            uVar4 = (uint)*local_58;
            local_58 = local_58 + 1;
          }
        }
        local_3c = 0xffffffff;
        if (uVar4 == 0x2e) {
          uVar4 = (uint)*local_58;
          pbVar12 = local_58 + 1;
          if (uVar4 == 0x2a) {
            puVar9 = (uint *)((int)*param_4 + 3U & 0xfffffffc);
            *param_4 = puVar9 + 1;
            local_3c = *puVar9;
            if ((int)local_3c < 0) {
              local_3c = 0;
            }
            local_58 = local_58 + 2;
            uVar4 = (uint)*pbVar12;
          }
          else {
            local_3c = 0;
            local_58 = pbVar12;
            while ((0x2f < uVar4 && (uVar4 < 0x3a))) {
              local_3c = (uVar4 + local_3c * 10) - 0x30;
              uVar4 = (uint)*local_58;
              local_58 = local_58 + 1;
            }
          }
        }
        uVar2 = local_3c;
        local_34 = (uint)bVar13;
        if (bVar13) {
          local_34 = uVar11;
        }
        if ((uVar4 == 0x6c) || (uVar4 == 0x4c)) {
          local_40 = 1;
          uVar4 = (uint)*local_58;
          local_58 = local_58 + 1;
        }
        else {
          local_40 = 0;
        }
        pbVar12 = local_58;
        local_28 = local_54;
        local_38 = 0;
        local_30 = &local_44;
        local_44 = uVar11;
        if ((uVar4 == 100) || (uVar4 == 0x69)) {
          puVar8 = (undefined4 *)((int)*param_4 + 3U & 0xfffffffc);
          *param_4 = puVar8 + 1;
          uVar10 = *puVar8;
          if ((int)local_34 < (int)local_3c) {
            local_34 = local_3c;
          }
LAB_0000c098:
          local_28 = (char *)FUN_000120e0(&local_44,uVar10);
LAB_0000c0a0:
          local_38 = (int)local_30 - (int)local_28;
LAB_0000c0a6:
          pbVar12 = pbVar12 + 1;
          uVar4 = local_38;
          uVar11 = local_44;
        }
        else {
          if (((uVar4 == 0x75) || (uVar4 == 0x78)) || (uVar4 == 0x6f)) {
            puVar8 = (undefined4 *)((int)*param_4 + 3U & 0xfffffffc);
            *param_4 = puVar8 + 1;
            uVar10 = *puVar8;
            if ((int)local_34 < (int)local_3c) {
              local_34 = local_3c;
            }
            goto LAB_0000c098;
          }
          if (uVar4 == 0x70) {
            local_34 = 8;
            puVar8 = (undefined4 *)((int)*param_4 + 3U & 0xfffffffc);
            *param_4 = puVar8 + 1;
            iVar5 = FUN_000120e0(&local_44,*puVar8,8,0x10);
            local_28 = (char *)(iVar5 + -1);
            *(undefined *)(iVar5 + -1) = 0x40;
            pbVar12 = local_58;
            goto LAB_0000c0a0;
          }
          if (uVar4 != 99) {
            if (uVar4 == 0x73) {
              ppcVar6 = (char **)((int)*param_4 + 3U & 0xfffffffc);
              *param_4 = (uint *)(ppcVar6 + 1);
              local_28 = *ppcVar6;
              pbVar12 = local_58 + 1;
              if (local_28 == (char *)0x0) {
                local_28 = s__null__0000c140;
              }
              uVar4 = FUN_00015fa8();
              local_38 = uVar4;
              if ((uVar2 != 0xffffffff) && ((int)uVar2 < (int)uVar4)) {
                uVar4 = uVar2;
                local_38 = uVar2;
              }
              goto LAB_0000c0a8;
            }
            local_58 = local_58 + -1;
            if (local_5c < 2) {
              uVar4 = 0;
              goto LAB_0000c018;
            }
            uVar4 = local_5c;
            if ((local_3c != 0xffffffff) && (local_3c < local_5c)) {
              uVar4 = local_3c + 1;
            }
            local_3c = uVar4;
            iVar5 = (**DAT_0000c148)(&local_60,&local_58,param_4,&local_44);
            iVar3 = iVar5 + iVar3;
            pbVar12 = local_58;
            goto LAB_0000c0a6;
          }
          uVar4 = 1;
          pcVar7 = (char *)((int)*param_4 + 3U & 0xfffffffc);
          *param_4 = (uint *)(pcVar7 + 4);
          local_54[0] = *pcVar7;
          local_38 = 1;
LAB_0000c018:
          pbVar12 = local_58 + 1;
        }
LAB_0000c0a8:
        local_44 = uVar11 - uVar4;
        uVar11 = uVar11 - uVar4;
        if (local_3e == 0) {
          while (local_44 = local_44 - 1, uVar4 = local_38, uVar11 = local_44, -1 < (int)local_44) {
            FUN_000151b0(&local_60,0x20);
            iVar3 = iVar3 + 1;
          }
        }
        while (local_44 = uVar11, local_38 = uVar4 - 1, uVar4 != 0) {
          cVar1 = *local_28;
          local_28 = local_28 + 1;
          FUN_000151b0(&local_60,cVar1);
          iVar3 = iVar3 + 1;
          uVar4 = local_38;
          uVar11 = local_44;
        }
        if (local_3e != 0) {
          while (local_44 = local_44 - 1, -1 < (int)local_44) {
            FUN_000151b0(&local_60,0x20);
            iVar3 = iVar3 + 1;
          }
        }
      }
      else {
        FUN_000151b0(&local_60);
        iVar3 = iVar3 + 1;
        pbVar12 = pbVar12 + 1;
      }
    }
    if (local_60 != (undefined *)0x0) {
      *local_60 = 0;
    }
  }
  return iVar3;
}



void FUN_0000c150(undefined *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = param_3;
  uStack_c = param_4;
  iVar1 = FUN_00011c64(s_F_sys_mcubootinfo_bin_0000c2e3 + 1,0,&uStack_c,&local_10);
  if (iVar1 == 0) {
    iVar1 = FUN_00010b54(local_10,0,param_1,8);
    if (0 < iVar1) {
      FUN_00010f2c(s_ReadBootInfo__ucActiveImg__d__ul_0000c2fc,*param_1,*(undefined4 *)(param_1 + 4)
                  );
    }
    FUN_0001155c(local_10,0,0,0);
  }
  return;
}



void FUN_0000c18a(undefined *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = param_3;
  uStack_c = param_4;
  iVar1 = FUN_00011c64(s_F_sys_mcubootinfo_bin_0000c2e3 + 1,0x1000,&uStack_c,&local_10);
  if (iVar1 == 0) {
    iVar1 = FUN_00010bf8(local_10,0,param_1,8);
    if (0 < iVar1) {
      FUN_00010f2c(s_WriteBootInfo__ucActiveImg__d__u_0000c330,*param_1,*(undefined4 *)(param_1 + 4)
                  );
    }
    FUN_0001155c(local_10,0,0,0);
  }
  return;
}



undefined8 FUN_0000c1c6(uint param_1)

{
  int iVar1;
  uint uVar2;
  
  if ((param_1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    if ((param_1 >> 2 & 1) != 0) {
      FUN_00010f2c(s_Fsl_extlib_FlcTest__change_image_0000c363 + 1);
      iVar1 = DAT_0000c474;
      FUN_0000c150(DAT_0000c474);
      *(undefined4 *)(iVar1 + 4) = DAT_0000c478;
      FUN_0000c18a(iVar1);
    }
    uVar2 = 1;
  }
  if ((param_1 >> 1 & 1) != 0) {
    uVar2 = uVar2 | 2;
  }
  return CONCAT44(param_1 >> 2,uVar2);
}



bool FUN_0000c270(void)

{
  int iVar1;
  
  iVar1 = DAT_0000c474;
  FUN_0000c150(DAT_0000c474);
  return DAT_0000c47c == *(int *)(iVar1 + 4);
}



undefined4 FUN_0000c288(int param_1)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  
  pcVar1 = DAT_0000c474;
  FUN_0000c150(DAT_0000c474);
  uVar3 = 0;
  if (DAT_0000c47c == *(int *)(pcVar1 + 4)) {
    if (param_1 == 1) {
      FUN_00010f2c(s_sl_extlib_FlcCommit__Booted_in_t_0000c444);
      *(undefined4 *)(pcVar1 + 4) = DAT_0000c480;
      if (*pcVar1 == '\x01') {
        cVar2 = '\x02';
      }
      else {
        cVar2 = '\x01';
      }
      *pcVar1 = cVar2;
      FUN_0000c18a();
    }
    else {
      uVar3 = 1;
    }
  }
  return uVar3;
}



undefined FUN_0000c484(int param_1)

{
  undefined uVar1;
  
  if (param_1 < 2) {
    uVar1 = *(undefined *)(DAT_0000c6b4 + param_1);
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}



void FUN_0000c490(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0000c6b8;
  *(undefined *)(DAT_0000c6b8 + param_1 * 0x10) = 0;
  iVar1 = param_1 * 0x10 + iVar1;
  *(undefined *)(iVar1 + 2) = 0;
  *(undefined *)(iVar1 + 8) = 0;
  *(undefined *)(iVar1 + 9) = 0;
  *(undefined *)(iVar1 + 0xb) = 0;
  *(undefined *)(iVar1 + 0xc) = 0;
  *(undefined *)(iVar1 + 0xd) = 0;
  *(undefined *)(iVar1 + 1) = 0;
  return;
}



undefined FUN_0000c4aa(int param_1)

{
  return *(undefined *)(DAT_0000c6b8 + -0x43 + param_1);
}



void FUN_0000c4b2(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined uVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = DAT_0000c6bc;
  iVar7 = param_1 * 0x10 + DAT_0000c6bc;
  *(undefined *)(iVar7 + 0x54) = 0;
  *(undefined *)(iVar7 + 0x55) = 0;
  bVar1 = *(byte *)(param_1 * 0x10 + iVar2 + 0x2e);
  *(undefined *)(iVar7 + 0x57) = 0;
  iVar6 = iVar7 + 0x4c;
  *(byte *)(iVar7 + 0x4e) = bVar1;
  if ((*(int *)(iVar7 + 0x30) == 0x160000) && (param_1 == 0)) {
    *(undefined4 *)(iVar7 + 0x30) = 0x160000;
  }
  if ((bVar1 >> 3 & 1) == 0) {
    sVar4 = 4;
  }
  else {
    sVar4 = *(byte *)(iVar2 + param_1 + 7) + 4;
  }
  *(short *)(iVar7 + 0x34) = sVar4;
  while (uVar5 = (uint)*(byte *)(iVar6 + 0xb), uVar5 < *(ushort *)(iVar7 + 0x34)) {
    if (uVar5 < 4) {
      uVar3 = (undefined)
              ((*(uint *)(param_1 * 0x10 + iVar2 + 0x30) & 0xff << (uVar5 << 3 & 0xff)) >>
              (uVar5 << 3 & 0xff));
    }
    else {
      uVar3 = FUN_00013fec(uVar5 + *(int *)(iVar7 + 0x30) + -4);
      iVar6 = param_1 * 0x10 + iVar2 + 0x4c;
    }
    *(undefined *)(*(int *)(iVar6 + 4) + (uint)*(byte *)(iVar6 + 0xb)) = uVar3;
    *(char *)(iVar6 + 0xb) = *(char *)(iVar6 + 0xb) + '\x01';
  }
  return;
}



void FUN_0000c542(int param_1)

{
  char cVar1;
  undefined uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  uint *puVar10;
  
  iVar9 = DAT_0000c6bc;
  iVar4 = DAT_0000c6bc + param_1 * 0x10;
  cVar1 = *(char *)(iVar4 + 0x4d);
  if (cVar1 == '\0') {
    iVar7 = DAT_0000c6bc + 3;
    do {
      iVar5 = FUN_0000dc18(param_1,iVar7);
      if (iVar5 == 2) {
        return;
      }
    } while (*(char *)(iVar9 + 3) != '~');
    *(undefined *)(iVar4 + 0x4d) = 1;
  }
  else if (cVar1 != '\x01') {
    if (cVar1 != '\x02') {
      return;
    }
    goto LAB_0000c5ea;
  }
  iVar7 = FUN_0000dc18(param_1,iVar9 + 3);
  while( true ) {
    if (iVar7 == 2) {
      return;
    }
    bVar3 = *(byte *)(iVar9 + 3);
    if (bVar3 != 0x7e) break;
    *(undefined *)(iVar4 + 0x4d) = 0;
    iVar7 = FUN_0000dc18(param_1,iVar9 + 3);
  }
  if ((bVar3 & 3) == 0) {
    *(undefined *)(iVar4 + 0x56) = 0;
    uVar2 = 0x10;
    *(undefined *)(iVar4 + 0x4e) = 0x10;
    *(undefined *)(iVar4 + 0x57) = 0;
  }
  else {
    uVar6 = *(byte *)(iVar4 + 0x56) + 1 & 7;
    if (uVar6 != (int)(uint)bVar3 >> 5) {
      *(undefined *)(iVar4 + 0x4d) = 4;
      return;
    }
    *(char *)(iVar4 + 0x56) = (char)uVar6;
    bVar3 = *(byte *)(iVar9 + 3);
    *(undefined *)(iVar4 + 0x57) = 0;
    *(byte *)(iVar4 + 0x4e) = bVar3 & 0x1f;
    uVar2 = *(undefined *)(iVar9 + 3);
  }
  *(undefined *)(iVar4 + 0x54) = uVar2;
  *(undefined *)(iVar4 + 0x4d) = 2;
  if ((*(byte *)(iVar4 + 0x4e) >> 3 & 1) == 0) {
    iVar7 = 4;
  }
  else {
    iVar7 = *(byte *)(iVar9 + param_1 + 7) + 4;
  }
  *(int *)(iVar9 + param_1 * 4 + 0xc) = iVar7;
LAB_0000c5ea:
  puVar10 = (uint *)(iVar9 + param_1 * 4 + 0xc);
  while( true ) {
    if (*puVar10 < (uint)*(byte *)(iVar4 + 0x57)) {
      return;
    }
    iVar7 = FUN_0000dc18(param_1,iVar9 + 3);
    if (iVar7 == 2) break;
    bVar3 = *(byte *)(iVar9 + 3);
    if (bVar3 == 0x7e) {
      *(undefined *)(iVar4 + 0x4d) = 4;
      iVar9 = iVar9 + param_1 * 0xc;
      *(int *)(iVar9 + 0x1c) = *(int *)(iVar9 + 0x1c) + 1;
      return;
    }
    if (bVar3 == 0x7d) {
      *(undefined *)(iVar4 + 0x55) = 1;
    }
    else {
      if (*(char *)(iVar4 + 0x55) == '\x01') {
        *(undefined *)(iVar4 + 0x55) = 0;
        bVar3 = bVar3 ^ 0x10;
        *(byte *)(iVar9 + 3) = bVar3;
      }
      if (*puVar10 == (uint)*(byte *)(iVar4 + 0x57)) {
        bVar8 = (*(byte *)(iVar4 + 0x54) ^ 0xff) + 1;
        *(byte *)(iVar4 + 0x54) = bVar8;
        if (bVar3 != bVar8) {
          *(undefined *)(iVar4 + 0x4d) = 4;
          iVar9 = iVar9 + param_1 * 0xc;
          *(int *)(iVar9 + 0x18) = *(int *)(iVar9 + 0x18) + 1;
          return;
        }
        *(undefined *)(iVar4 + 0x4d) = 3;
        iVar9 = iVar9 + param_1 * 0xc;
        *(int *)(iVar9 + 0x14) = *(int *)(iVar9 + 0x14) + 1;
        return;
      }
      *(byte *)(*(int *)(iVar4 + 0x50) + (uint)*(byte *)(iVar4 + 0x57)) = bVar3;
      *(char *)(iVar4 + 0x54) = *(char *)(iVar9 + 3) + *(char *)(iVar4 + 0x54);
      *(char *)(iVar4 + 0x57) = *(char *)(iVar4 + 0x57) + '\x01';
    }
  }
  return;
}



undefined4 FUN_0000c6c0(undefined4 param_1,int param_2,int param_3)

{
  int *piVar1;
  char *pcVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_0000ecde(param_1,param_1);
  piVar1 = (int *)FUN_0000ecd8((int)((ulonglong)uVar7 >> 0x20));
  if (param_2 != 0) {
    pcVar2 = (char *)(param_3 + -1);
    iVar5 = 0;
    do {
      pcVar2 = pcVar2 + 1;
      cVar4 = *pcVar2;
      iVar6 = (int)uVar7 + iVar5;
      pcVar3 = (char *)(iVar6 + *piVar1);
      if (cVar4 != *pcVar3) {
        *(byte *)(piVar1 + 3) = *(byte *)(piVar1 + 3) | 2;
        cVar4 = *pcVar2;
        pcVar3 = (char *)(iVar6 + *piVar1);
      }
      param_2 = param_2 + -1;
      *pcVar3 = cVar4;
      iVar5 = iVar5 + 1;
    } while (param_2 != 0);
  }
  return 1;
}



undefined4 FUN_0000c70c(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_0000c6c0();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (((param_2 == 1) && (iVar1 = FUN_0000ecde(param_1), iVar1 != 0)) &&
       (iVar3 = FUN_00013fec(DAT_0000c8d0), iVar3 + 1 == iVar1)) {
      iVar1 = FUN_0000ecd8(param_1);
      *(byte *)(iVar1 + 0xc) = *(byte *)(iVar1 + 0xc) | 2;
    }
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 FUN_0000c74c(undefined4 param_1,int param_2,undefined *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_0000ecde(param_1,param_1,param_3,param_4,param_4);
  piVar1 = (int *)FUN_0000ecd8((int)((ulonglong)uVar4 >> 0x20));
  if (param_2 != 0) {
    iVar2 = 0;
    do {
      iVar3 = (int)uVar4 + iVar2;
      iVar2 = iVar2 + 1;
      param_2 = param_2 + -1;
      *param_3 = *(undefined *)(*piVar1 + iVar3);
      param_3 = param_3 + 1;
    } while (param_2 != 0);
  }
  return 1;
}



undefined4 FUN_0000c778(undefined4 param_1,undefined4 param_2,char *param_3)

{
  char *pcVar1;
  char cVar2;
  uint **ppuVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  
  uVar9 = FUN_0000ecde();
  iVar5 = (int)((ulonglong)uVar9 >> 0x20);
  uVar8 = (uint)uVar9;
  ppuVar3 = (uint **)FUN_0000ecd8(param_1);
  uVar7 = **ppuVar3;
  iVar4 = FUN_0000ece2(param_1);
  pcVar1 = DAT_0000c8d4;
  if (iVar4 == 3) {
    if (((int)uVar8 < 4) && (iVar5 == 1)) {
      DAT_0000c8d4[(uVar8 & 3) + 4] = *param_3;
      if ((uVar8 & 3) != 3) {
        return 1;
      }
      *pcVar1 = '\x01';
      return 1;
    }
  }
  else {
    uVar8 = uVar8 + 4 & 0xffff;
  }
  if (iVar5 == 0) {
    cVar2 = *DAT_0000c8d4;
  }
  else {
    cVar2 = *DAT_0000c8d4;
    param_3 = param_3 + -1;
    uVar6 = uVar8;
    iVar4 = iVar5;
    do {
      param_3 = param_3 + 1;
      if (*param_3 != *(char *)(uVar6 + (int)*ppuVar3)) {
        if ((cVar2 == '\0') || (uVar7 < *(uint *)(pcVar1 + 4))) {
          *(byte *)(ppuVar3 + 3) = *(byte *)(ppuVar3 + 3) | 2;
          *(char *)(uVar6 + (int)*ppuVar3) = *param_3;
          if (cVar2 == '\0') {
            **ppuVar3 = uVar7 + 1;
          }
        }
        else if (*(uint *)(pcVar1 + 4) < uVar7) {
          *(byte *)(ppuVar3 + 3) = *(byte *)(ppuVar3 + 3) | 2;
        }
      }
      iVar4 = iVar4 + -1;
      uVar6 = uVar6 + 1;
    } while (iVar4 != 0);
  }
  if ((cVar2 != '\0') && ((uint)*(ushort *)((int)ppuVar3 + 10) == iVar5 + uVar8)) {
    *pcVar1 = '\0';
    if (uVar7 < *(uint *)(pcVar1 + 4)) {
      **ppuVar3 = *(uint *)(pcVar1 + 4);
    }
    *(undefined4 *)(pcVar1 + 4) = 0;
  }
  return 1;
}



undefined4 FUN_0000c840(undefined4 param_1,undefined4 param_2,undefined *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  
  uVar6 = FUN_0000ecde();
  iVar3 = (int)((ulonglong)uVar6 >> 0x20);
  uVar4 = (uint)uVar6;
  piVar1 = (int *)FUN_0000ecd8(param_1);
  iVar2 = FUN_0000ece2(param_1);
  if (iVar2 != 3) {
    uVar4 = uVar4 + 4 & 0xffff;
  }
  if (iVar3 != 0) {
    iVar2 = 0;
    do {
      iVar5 = uVar4 + iVar2;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + -1;
      *param_3 = *(undefined *)(*piVar1 + iVar5);
      param_3 = param_3 + 1;
    } while (iVar3 != 0);
  }
  return 1;
}



int FUN_0000c8e0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  
  if (param_4 != 0 || param_3 != 0) {
    uVar7 = param_4 >> 1 ^ (int)param_2 >> 1;
    if ((int)uVar7 < 0) {
      bVar9 = param_1 != 0;
      param_1 = -param_1;
      param_2 = -(uint)bVar9 - param_2;
    }
    iVar2 = 0;
    if ((param_4 & 0x80000000) != 0) {
      bVar9 = param_3 != 0;
      param_3 = -param_3;
      param_4 = -(uint)bVar9 - param_4;
    }
    bVar9 = param_4 == 0;
    uVar3 = param_4;
    if (bVar9 && param_3 < param_2 || bVar9 && param_3 == param_2) {
      uVar3 = param_3;
    }
    uVar4 = param_3;
    if (bVar9 && param_3 < param_2 || bVar9 && param_3 == param_2) {
      uVar4 = 0;
    }
    uVar5 = param_1 >> 0x10 | param_2 << 0x10;
    bVar9 = param_2 >> 0x10 <= uVar3;
    bVar8 = uVar3 == param_2 >> 0x10;
    if (bVar8) {
      bVar9 = uVar5 <= uVar4;
    }
    bVar1 = uVar4 == uVar5;
    if (!bVar9 || bVar8 && bVar1) {
      uVar3 = uVar3 << 0x10;
    }
    if (!bVar9 || bVar8 && bVar1) {
      uVar3 = uVar3 | uVar4 >> 0x10;
    }
    if (!bVar9 || bVar8 && bVar1) {
      uVar4 = uVar4 << 0x10;
    }
    uVar5 = param_1 >> 8 | param_2 << 0x18;
    bVar9 = param_2 >> 8 <= uVar3;
    bVar8 = uVar3 == param_2 >> 8;
    if (bVar8) {
      bVar9 = uVar5 <= uVar4;
    }
    bVar1 = uVar4 == uVar5;
    if (!bVar9 || bVar8 && bVar1) {
      uVar3 = uVar3 << 8;
    }
    if (!bVar9 || bVar8 && bVar1) {
      uVar3 = uVar3 | uVar4 >> 0x18;
    }
    if (!bVar9 || bVar8 && bVar1) {
      uVar4 = uVar4 << 8;
    }
    uVar6 = param_1 >> 1 | param_2 << 0x1f;
    uVar5 = param_2 >> 1;
    bVar9 = uVar5 <= uVar3;
    if (uVar3 == uVar5) {
      bVar9 = uVar6 <= uVar4;
    }
    if (bVar9 && (uVar3 != uVar5 || uVar4 != uVar6)) goto LAB_0000caa8;
    uVar6 = param_1 >> 2 | param_2 << 0x1e;
    uVar5 = param_2 >> 2;
    bVar9 = uVar5 <= uVar3;
    if (uVar3 == uVar5) {
      bVar9 = uVar6 <= uVar4;
    }
    if (bVar9 && (uVar3 != uVar5 || uVar4 != uVar6)) goto LAB_0000ca8c;
    uVar6 = param_1 >> 3 | param_2 << 0x1d;
    uVar5 = param_2 >> 3;
    bVar9 = uVar5 <= uVar3;
    if (uVar3 == uVar5) {
      bVar9 = uVar6 <= uVar4;
    }
    if (bVar9 && (uVar3 != uVar5 || uVar4 != uVar6)) goto LAB_0000ca70;
    uVar6 = param_1 >> 4 | param_2 << 0x1c;
    uVar5 = param_2 >> 4;
    bVar9 = uVar5 <= uVar3;
    if (uVar3 == uVar5) {
      bVar9 = uVar6 <= uVar4;
    }
    if (bVar9 && (uVar3 != uVar5 || uVar4 != uVar6)) goto LAB_0000ca54;
    uVar6 = param_1 >> 5 | param_2 << 0x1b;
    uVar5 = param_2 >> 5;
    bVar9 = uVar5 <= uVar3;
    if (uVar3 == uVar5) {
      bVar9 = uVar6 <= uVar4;
    }
    if (bVar9 && (uVar3 != uVar5 || uVar4 != uVar6)) goto LAB_0000ca38;
    uVar6 = param_1 >> 6 | param_2 << 0x1a;
    uVar5 = param_2 >> 6;
    bVar9 = uVar5 <= uVar3;
    if (uVar3 == uVar5) {
      bVar9 = uVar6 <= uVar4;
    }
    if (bVar9 && (uVar3 != uVar5 || uVar4 != uVar6)) goto LAB_0000ca1c;
    uVar6 = param_1 >> 7 | param_2 << 0x19;
    uVar5 = param_2 >> 7;
    bVar9 = uVar5 <= uVar3;
    if (uVar3 == uVar5) {
      bVar9 = uVar6 <= uVar4;
    }
    if (bVar9 && (uVar3 != uVar5 || uVar4 != uVar6)) goto LAB_0000ca00;
    while( true ) {
      uVar5 = uVar3 << 7 | uVar4 >> 0x19;
      uVar6 = uVar4 * 0x80;
      bVar9 = uVar5 <= param_2;
      if (param_2 == uVar5) {
        bVar9 = uVar6 <= param_1;
      }
      if (bVar9 != false) {
        bVar8 = uVar6 <= param_1;
        param_1 = param_1 + uVar4 * -0x80;
        bVar9 = uVar5 < param_2 || param_2 - uVar5 < (uint)bVar8;
        param_2 = (param_2 - uVar5) - (uint)!bVar8;
      }
      iVar2 = iVar2 * 2 + (uint)bVar9;
LAB_0000ca00:
      uVar5 = uVar3 << 6 | uVar4 >> 0x1a;
      uVar6 = uVar4 * 0x40;
      bVar9 = uVar5 <= param_2;
      if (param_2 == uVar5) {
        bVar9 = uVar6 <= param_1;
      }
      if (bVar9 != false) {
        bVar8 = uVar6 <= param_1;
        param_1 = param_1 + uVar4 * -0x40;
        bVar9 = uVar5 < param_2 || param_2 - uVar5 < (uint)bVar8;
        param_2 = (param_2 - uVar5) - (uint)!bVar8;
      }
      iVar2 = iVar2 * 2 + (uint)bVar9;
LAB_0000ca1c:
      uVar5 = uVar3 << 5 | uVar4 >> 0x1b;
      uVar6 = uVar4 * 0x20;
      bVar9 = uVar5 <= param_2;
      if (param_2 == uVar5) {
        bVar9 = uVar6 <= param_1;
      }
      if (bVar9 != false) {
        bVar8 = uVar6 <= param_1;
        param_1 = param_1 + uVar4 * -0x20;
        bVar9 = uVar5 < param_2 || param_2 - uVar5 < (uint)bVar8;
        param_2 = (param_2 - uVar5) - (uint)!bVar8;
      }
      iVar2 = iVar2 * 2 + (uint)bVar9;
LAB_0000ca38:
      uVar5 = uVar3 << 4 | uVar4 >> 0x1c;
      uVar6 = uVar4 * 0x10;
      bVar9 = uVar5 <= param_2;
      if (param_2 == uVar5) {
        bVar9 = uVar6 <= param_1;
      }
      if (bVar9 != false) {
        bVar8 = uVar6 <= param_1;
        param_1 = param_1 + uVar4 * -0x10;
        bVar9 = uVar5 < param_2 || param_2 - uVar5 < (uint)bVar8;
        param_2 = (param_2 - uVar5) - (uint)!bVar8;
      }
      iVar2 = iVar2 * 2 + (uint)bVar9;
LAB_0000ca54:
      uVar5 = uVar3 << 3 | uVar4 >> 0x1d;
      uVar6 = uVar4 * 8;
      bVar9 = uVar5 <= param_2;
      if (param_2 == uVar5) {
        bVar9 = uVar6 <= param_1;
      }
      if (bVar9 != false) {
        bVar8 = uVar6 <= param_1;
        param_1 = param_1 + uVar4 * -8;
        bVar9 = uVar5 < param_2 || param_2 - uVar5 < (uint)bVar8;
        param_2 = (param_2 - uVar5) - (uint)!bVar8;
      }
      iVar2 = iVar2 * 2 + (uint)bVar9;
LAB_0000ca70:
      uVar5 = uVar3 << 2 | uVar4 >> 0x1e;
      uVar6 = uVar4 * 4;
      bVar9 = uVar5 <= param_2;
      if (param_2 == uVar5) {
        bVar9 = uVar6 <= param_1;
      }
      if (bVar9 != false) {
        bVar8 = uVar6 <= param_1;
        param_1 = param_1 + uVar4 * -4;
        bVar9 = uVar5 < param_2 || param_2 - uVar5 < (uint)bVar8;
        param_2 = (param_2 - uVar5) - (uint)!bVar8;
      }
      iVar2 = iVar2 * 2 + (uint)bVar9;
LAB_0000ca8c:
      uVar5 = uVar3 << 1 | uVar4 >> 0x1f;
      uVar6 = uVar4 * 2;
      bVar9 = uVar5 <= param_2;
      if (param_2 == uVar5) {
        bVar9 = uVar6 <= param_1;
      }
      if (bVar9 != false) {
        bVar8 = uVar6 <= param_1;
        param_1 = param_1 + uVar4 * -2;
        bVar9 = uVar5 < param_2 || param_2 - uVar5 < (uint)bVar8;
        param_2 = (param_2 - uVar5) - (uint)!bVar8;
      }
      iVar2 = iVar2 * 2 + (uint)bVar9;
LAB_0000caa8:
      bVar9 = uVar3 <= param_2;
      if (param_2 == uVar3) {
        bVar9 = uVar4 <= param_1;
      }
      if (bVar9 != false) {
        bVar8 = uVar4 <= param_1;
        param_1 = param_1 - uVar4;
        bVar9 = uVar3 < param_2 || param_2 - uVar3 < (uint)bVar8;
        param_2 = (param_2 - uVar3) - (uint)!bVar8;
      }
      iVar2 = iVar2 * 2 + (uint)bVar9;
      bVar9 = uVar3 <= param_4;
      if (param_4 == uVar3) {
        bVar9 = uVar4 <= param_3;
      }
      if (!bVar9) {
        uVar4 = uVar4 >> 8;
      }
      if (bVar9) break;
      uVar4 = uVar4 | uVar3 << 0x18;
      uVar3 = uVar3 >> 8;
    }
    if ((int)(uVar7 << 1) < 0) {
      iVar2 = -iVar2;
    }
    return iVar2;
  }
  if ((int)param_2 < 0) {
    param_1 = 0;
    param_2 = 0x80000000;
  }
  else if ((param_1 | param_2) != 0) {
    param_1 = 0xffffffff;
    param_2 = 0x7fffffff;
  }
  iVar2 = FUN_0000cafe(param_1,param_2);
  return iVar2;
}



void FUN_0000cafe(void)

{
  return;
}



void FUN_0000cb00(undefined4 *param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  char *pcVar11;
  uint uVar12;
  char acStack_90 [120];
  
  iVar3 = DAT_0000cce4;
  **(undefined2 **)(DAT_0000cce4 + 4) = 1;
  pcVar11 = **(char ***)(iVar3 + 8);
  if (pcVar11 == (char *)0x0) {
    **(char ***)(iVar3 + 8) = acStack_90;
    pcVar11 = **(char ***)(iVar3 + 8);
  }
  iVar4 = DAT_0000cce8;
  *pcVar11 = *(char *)(DAT_0000cce8 + 0x14);
  *(undefined4 *)(pcVar11 + 0x10) = param_1[8];
  *(undefined4 *)(pcVar11 + 0x14) = param_1[9];
  *(undefined4 *)(pcVar11 + 0x18) = param_1[10];
  *(undefined4 *)(pcVar11 + 0x1c) = param_1[0xb];
  *(undefined4 *)(pcVar11 + 0x20) = *param_1;
  *(undefined4 *)(pcVar11 + 0x24) = param_1[1];
  *(undefined4 *)(pcVar11 + 0x28) = param_1[2];
  *(undefined4 *)(pcVar11 + 0x2c) = param_1[3];
  *(undefined4 *)(pcVar11 + 0x30) = param_1[4];
  *(undefined4 *)(pcVar11 + 0x34) = param_1[5];
  *(undefined4 *)(pcVar11 + 0x38) = param_1[6];
  *(undefined4 *)(pcVar11 + 0x3c) = param_1[7];
  uVar6 = param_1[0xc];
  *(undefined4 **)(pcVar11 + 0x44) = param_1 + 0x10;
  *(undefined4 *)(pcVar11 + 0x40) = uVar6;
  *(undefined4 *)(pcVar11 + 0x48) = param_1[0xd];
  *(undefined4 *)(pcVar11 + 0x4c) = param_1[0xe];
  cVar1 = *pcVar11;
  *(undefined4 *)(pcVar11 + 0x50) = param_1[0xf];
  if (cVar1 == '\0') {
    uVar6 = *(undefined4 *)(*(int *)(iVar3 + 0x24) + (*(uint *)(pcVar11 + 0x50) & 0xff) * 4);
LAB_0000cbac:
    *(undefined4 *)(pcVar11 + 4) = uVar6;
    puVar10 = *(undefined **)(iVar3 + 0x18);
    puVar5 = *(undefined **)(iVar3 + 0x14);
  }
  else {
    if (cVar1 == '\x01') {
      uVar6 = *(undefined4 *)(DAT_0000ccf0 + 0xc);
      goto LAB_0000cbac;
    }
    if (cVar1 == '\x02') {
      iVar7 = *(int *)(DAT_0000ccec + 0x10);
      *(undefined4 *)(pcVar11 + 4) = *(undefined4 *)(DAT_0000ccec + 0x10);
      puVar10 = *(undefined **)(iVar7 + 0x1c);
      puVar5 = *(undefined **)(iVar7 + 0x20);
    }
    else {
      if (cVar1 == '\x03') {
        uVar6 = 0;
        goto LAB_0000cbac;
      }
      puVar5 = (undefined *)0x0;
      puVar10 = puVar5;
    }
  }
  *(undefined **)(pcVar11 + 0xc) = puVar10;
  puVar8 = *(undefined4 **)(iVar3 + 0xc);
  *(undefined **)(pcVar11 + 8) = puVar5;
  puVar9 = (undefined *)*puVar8;
  if (puVar9 != (undefined *)0x0) {
    for (; puVar10 != (undefined *)0x0; puVar10 = puVar10 + -1) {
      *puVar9 = *puVar5;
      puVar9 = puVar9 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  iVar7 = DAT_0000ccf4;
  *(undefined *)(iVar4 + 0x14) = 3;
  *(undefined4 *)(pcVar11 + 0x54) = *(undefined4 *)(iVar7 + 0xd04);
  *(uint *)(pcVar11 + 0x58) = (uint)*(byte *)(iVar7 + 0xd28);
  *(uint *)(pcVar11 + 0x5c) = (uint)*(byte *)(iVar7 + 0xd29);
  *(uint *)(pcVar11 + 0x60) = (uint)*(ushort *)(iVar7 + 0xd2a);
  *(undefined4 *)(pcVar11 + 100) = *(undefined4 *)(iVar7 + 0xd2c);
  *(undefined4 *)(pcVar11 + 0x68) = *(undefined4 *)(iVar7 + 0xd30);
  *(undefined4 *)(pcVar11 + 0x6c) = *(undefined4 *)(iVar7 + 0xd34);
  uVar6 = *(undefined4 *)(iVar7 + 0xd3c);
  *(undefined4 *)(pcVar11 + 0x70) = *(undefined4 *)(iVar7 + 0xd38);
  *(undefined4 *)(pcVar11 + 0x74) = uVar6;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x20);
  }
  uVar12 = *(uint *)(iVar7 + 0xd04) & 0xff;
  if (uVar12 < 7) {
    if (uVar12 == 6) {
      FUN_0000ddd8();
      goto LAB_0000cc9a;
    }
    if (uVar12 == 2) {
      FUN_00014ad0();
      goto LAB_0000cc9a;
    }
    if (uVar12 == 3) {
      FUN_00010598();
      goto LAB_0000cc9a;
    }
    if (uVar12 == 4) {
      FUN_0000e340();
      goto LAB_0000cc9a;
    }
    if (uVar12 == 5) {
      FUN_0000dc60();
      goto LAB_0000cc9a;
    }
LAB_0000cc52:
    FUN_00014848(param_1,uVar12);
  }
  else {
    if (3 < uVar12 - 7) {
      if (uVar12 == 0xb) {
        FUN_00014638();
        goto LAB_0000cc9a;
      }
      if (uVar12 == 0xc) {
        FUN_000104d8();
        goto LAB_0000cc9a;
      }
      if (uVar12 != 0xd) goto LAB_0000cc52;
    }
    FUN_00013d58(param_1,uVar12);
  }
LAB_0000cc9a:
  FUN_0000ab50(param_2);
  if (*(code **)*DAT_0000ccf8 != (code *)0x0) {
    (**(code **)*DAT_0000ccf8)(**(undefined4 **)(iVar3 + 8));
  }
  FUN_00015c84(s_FTerminating_execution____0000ccc7 + 1);
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0);
  }
  (**(code **)(iVar4 + 0x20))(0);
  return;
}



undefined8 FUN_0000ccfc(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined8 uVar10;
  
  bVar9 = param_2 <= param_4;
  bVar7 = param_4 == param_2;
  if (bVar7) {
    bVar9 = param_1 <= param_3;
  }
  bVar8 = param_3 == param_1;
  uVar2 = param_4;
  if (bVar9 && (!bVar7 || !bVar8)) {
    uVar2 = 0;
  }
  uVar1 = param_3;
  if (bVar9 && (!bVar7 || !bVar8)) {
    uVar1 = 0;
  }
  uVar5 = uVar1;
  uVar6 = uVar2;
  if (!bVar9 || bVar7 && bVar8) {
    if (param_4 == 0 && param_3 == 0) {
      if (param_2 != 0 || param_1 != 0) {
        param_1 = 0xffffffff;
        param_2 = 0xffffffff;
      }
      uVar10 = FUN_0000ceee(param_1,param_2);
      return uVar10;
    }
    uVar5 = 0;
    uVar6 = 0;
    bVar9 = param_4 == 0;
    if (bVar9 && param_3 < param_2 || bVar9 && param_3 == param_2) {
      param_4 = param_3;
    }
    if (bVar9 && param_3 < param_2 || bVar9 && param_3 == param_2) {
      param_3 = 0;
    }
    uVar3 = param_1 >> 0x10 | param_2 << 0x10;
    bVar9 = param_2 >> 0x10 <= param_4;
    bVar7 = param_4 == param_2 >> 0x10;
    if (bVar7) {
      bVar9 = uVar3 <= param_3;
    }
    bVar8 = bVar7 && param_3 == uVar3;
    if (!bVar9 || bVar7 && param_3 == uVar3) {
      bVar9 = (param_4 & 0x10000) != 0;
      param_4 = param_4 << 0x10;
      bVar8 = param_4 == 0;
    }
    if (!bVar9 || bVar8) {
      param_4 = param_4 | param_3 >> 0x10;
    }
    if (!bVar9 || bVar8) {
      param_3 = param_3 << 0x10;
    }
    uVar3 = param_1 >> 8 | param_2 << 0x18;
    bVar9 = param_2 >> 8 <= param_4;
    bVar7 = param_4 == param_2 >> 8;
    if (bVar7) {
      bVar9 = uVar3 <= param_3;
    }
    bVar8 = bVar7 && param_3 == uVar3;
    if (!bVar9 || bVar7 && param_3 == uVar3) {
      bVar9 = (param_4 & 0x1000000) != 0;
      param_4 = param_4 << 8;
      bVar8 = param_4 == 0;
    }
    if (!bVar9 || bVar8) {
      param_4 = param_4 | param_3 >> 0x18;
    }
    if (!bVar9 || bVar8) {
      param_3 = param_3 << 8;
    }
    uVar4 = param_1 >> 1 | param_2 << 0x1f;
    uVar3 = param_2 >> 1;
    bVar9 = uVar3 <= param_4;
    if (param_4 == uVar3) {
      bVar9 = uVar4 <= param_3;
    }
    if (bVar9 && (param_4 != uVar3 || param_3 != uVar4)) goto LAB_0000ceb4;
    uVar4 = param_1 >> 2 | param_2 << 0x1e;
    uVar3 = param_2 >> 2;
    bVar9 = uVar3 <= param_4;
    if (param_4 == uVar3) {
      bVar9 = uVar4 <= param_3;
    }
    if (bVar9 && (param_4 != uVar3 || param_3 != uVar4)) goto LAB_0000ce98;
    uVar4 = param_1 >> 3 | param_2 << 0x1d;
    uVar3 = param_2 >> 3;
    bVar9 = uVar3 <= param_4;
    if (param_4 == uVar3) {
      bVar9 = uVar4 <= param_3;
    }
    if (bVar9 && (param_4 != uVar3 || param_3 != uVar4)) goto LAB_0000ce7c;
    uVar4 = param_1 >> 4 | param_2 << 0x1c;
    uVar3 = param_2 >> 4;
    bVar9 = uVar3 <= param_4;
    if (param_4 == uVar3) {
      bVar9 = uVar4 <= param_3;
    }
    if (bVar9 && (param_4 != uVar3 || param_3 != uVar4)) goto LAB_0000ce60;
    uVar4 = param_1 >> 5 | param_2 << 0x1b;
    uVar3 = param_2 >> 5;
    bVar9 = uVar3 <= param_4;
    if (param_4 == uVar3) {
      bVar9 = uVar4 <= param_3;
    }
    if (bVar9 && (param_4 != uVar3 || param_3 != uVar4)) goto LAB_0000ce44;
    uVar4 = param_1 >> 6 | param_2 << 0x1a;
    uVar3 = param_2 >> 6;
    bVar9 = uVar3 <= param_4;
    if (param_4 == uVar3) {
      bVar9 = uVar4 <= param_3;
    }
    if (bVar9 && (param_4 != uVar3 || param_3 != uVar4)) goto LAB_0000ce28;
    uVar4 = param_1 >> 7 | param_2 << 0x19;
    uVar3 = param_2 >> 7;
    bVar9 = uVar3 <= param_4;
    if (param_4 == uVar3) {
      bVar9 = uVar4 <= param_3;
    }
    if (bVar9 && (param_4 != uVar3 || param_3 != uVar4)) goto LAB_0000ce0a;
    while( true ) {
      uVar3 = param_4 << 7 | param_3 >> 0x19;
      uVar4 = param_3 * 0x80;
      bVar9 = uVar3 <= param_2;
      if (param_2 == uVar3) {
        bVar9 = uVar4 <= param_1;
      }
      if (bVar9 != false) {
        bVar7 = uVar4 <= param_1;
        param_1 = param_1 + param_3 * -0x80;
        bVar9 = uVar3 < param_2 || param_2 - uVar3 < (uint)bVar7;
        param_2 = (param_2 - uVar3) - (uint)!bVar7;
      }
      uVar3 = uVar5 * 2;
      bVar7 = CARRY4(uVar5,uVar5);
      uVar5 = uVar5 * 2 + (uint)bVar9;
      uVar6 = uVar6 * 2 + (uint)(bVar7 || CARRY4(uVar3,(uint)bVar9));
LAB_0000ce0a:
      uVar3 = param_4 << 6 | param_3 >> 0x1a;
      uVar4 = param_3 * 0x40;
      bVar9 = uVar3 <= param_2;
      if (param_2 == uVar3) {
        bVar9 = uVar4 <= param_1;
      }
      if (bVar9 != false) {
        bVar7 = uVar4 <= param_1;
        param_1 = param_1 + param_3 * -0x40;
        bVar9 = uVar3 < param_2 || param_2 - uVar3 < (uint)bVar7;
        param_2 = (param_2 - uVar3) - (uint)!bVar7;
      }
      uVar3 = uVar5 * 2;
      bVar7 = CARRY4(uVar5,uVar5);
      uVar5 = uVar5 * 2 + (uint)bVar9;
      uVar6 = uVar6 * 2 + (uint)(bVar7 || CARRY4(uVar3,(uint)bVar9));
LAB_0000ce28:
      uVar3 = param_4 << 5 | param_3 >> 0x1b;
      uVar4 = param_3 * 0x20;
      bVar9 = uVar3 <= param_2;
      if (param_2 == uVar3) {
        bVar9 = uVar4 <= param_1;
      }
      if (bVar9 != false) {
        bVar7 = uVar4 <= param_1;
        param_1 = param_1 + param_3 * -0x20;
        bVar9 = uVar3 < param_2 || param_2 - uVar3 < (uint)bVar7;
        param_2 = (param_2 - uVar3) - (uint)!bVar7;
      }
      uVar3 = uVar5 * 2;
      bVar7 = CARRY4(uVar5,uVar5);
      uVar5 = uVar5 * 2 + (uint)bVar9;
      uVar6 = uVar6 * 2 + (uint)(bVar7 || CARRY4(uVar3,(uint)bVar9));
LAB_0000ce44:
      uVar3 = param_4 << 4 | param_3 >> 0x1c;
      uVar4 = param_3 * 0x10;
      bVar9 = uVar3 <= param_2;
      if (param_2 == uVar3) {
        bVar9 = uVar4 <= param_1;
      }
      if (bVar9 != false) {
        bVar7 = uVar4 <= param_1;
        param_1 = param_1 + param_3 * -0x10;
        bVar9 = uVar3 < param_2 || param_2 - uVar3 < (uint)bVar7;
        param_2 = (param_2 - uVar3) - (uint)!bVar7;
      }
      uVar3 = uVar5 * 2;
      bVar7 = CARRY4(uVar5,uVar5);
      uVar5 = uVar5 * 2 + (uint)bVar9;
      uVar6 = uVar6 * 2 + (uint)(bVar7 || CARRY4(uVar3,(uint)bVar9));
LAB_0000ce60:
      uVar3 = param_4 << 3 | param_3 >> 0x1d;
      uVar4 = param_3 * 8;
      bVar9 = uVar3 <= param_2;
      if (param_2 == uVar3) {
        bVar9 = uVar4 <= param_1;
      }
      if (bVar9 != false) {
        bVar7 = uVar4 <= param_1;
        param_1 = param_1 + param_3 * -8;
        bVar9 = uVar3 < param_2 || param_2 - uVar3 < (uint)bVar7;
        param_2 = (param_2 - uVar3) - (uint)!bVar7;
      }
      uVar3 = uVar5 * 2;
      bVar7 = CARRY4(uVar5,uVar5);
      uVar5 = uVar5 * 2 + (uint)bVar9;
      uVar6 = uVar6 * 2 + (uint)(bVar7 || CARRY4(uVar3,(uint)bVar9));
LAB_0000ce7c:
      uVar3 = param_4 << 2 | param_3 >> 0x1e;
      uVar4 = param_3 * 4;
      bVar9 = uVar3 <= param_2;
      if (param_2 == uVar3) {
        bVar9 = uVar4 <= param_1;
      }
      if (bVar9 != false) {
        bVar7 = uVar4 <= param_1;
        param_1 = param_1 + param_3 * -4;
        bVar9 = uVar3 < param_2 || param_2 - uVar3 < (uint)bVar7;
        param_2 = (param_2 - uVar3) - (uint)!bVar7;
      }
      uVar3 = uVar5 * 2;
      bVar7 = CARRY4(uVar5,uVar5);
      uVar5 = uVar5 * 2 + (uint)bVar9;
      uVar6 = uVar6 * 2 + (uint)(bVar7 || CARRY4(uVar3,(uint)bVar9));
LAB_0000ce98:
      uVar3 = param_4 << 1 | param_3 >> 0x1f;
      uVar4 = param_3 * 2;
      bVar9 = uVar3 <= param_2;
      if (param_2 == uVar3) {
        bVar9 = uVar4 <= param_1;
      }
      if (bVar9 != false) {
        bVar7 = uVar4 <= param_1;
        param_1 = param_1 + param_3 * -2;
        bVar9 = uVar3 < param_2 || param_2 - uVar3 < (uint)bVar7;
        param_2 = (param_2 - uVar3) - (uint)!bVar7;
      }
      uVar3 = uVar5 * 2;
      bVar7 = CARRY4(uVar5,uVar5);
      uVar5 = uVar5 * 2 + (uint)bVar9;
      uVar6 = uVar6 * 2 + (uint)(bVar7 || CARRY4(uVar3,(uint)bVar9));
LAB_0000ceb4:
      bVar9 = param_4 <= param_2;
      if (param_2 == param_4) {
        bVar9 = param_3 <= param_1;
      }
      if (bVar9 != false) {
        bVar7 = param_3 <= param_1;
        param_1 = param_1 - param_3;
        bVar9 = param_4 < param_2 || param_2 - param_4 < (uint)bVar7;
        param_2 = (param_2 - param_4) - (uint)!bVar7;
      }
      uVar3 = uVar5 * 2;
      bVar7 = CARRY4(uVar5,uVar5);
      uVar5 = uVar5 * 2 + (uint)bVar9;
      uVar6 = uVar6 * 2 + (uint)(bVar7 || CARRY4(uVar3,(uint)bVar9));
      bVar9 = param_4 <= uVar2;
      if (uVar2 == param_4) {
        bVar9 = param_3 <= uVar1;
      }
      if (!bVar9) {
        param_3 = param_3 >> 8;
      }
      if (bVar9) break;
      param_3 = param_3 | param_4 << 0x18;
      param_4 = param_4 >> 8;
    }
  }
  return CONCAT44(uVar6,uVar5);
}



void FUN_0000ceee(void)

{
  return;
}



int FUN_0000cef0(int param_1,int param_2,undefined4 *param_3,char *param_4,undefined4 *param_5,
                undefined param_6)

{
  char cVar1;
  int iVar2;
  undefined2 local_d0;
  undefined local_ce;
  undefined4 local_cd;
  undefined2 local_c9;
  byte local_c7;
  undefined uStack_c6;
  byte local_c5 [5];
  undefined4 local_c0;
  undefined auStack_bc [160];
  undefined2 local_1c;
  char local_1a;
  undefined local_19;
  
  local_19 = 4;
  if ((*DAT_0000d0c4 == '\x01') || ((*DAT_0000d0c8 >> 9 & 1) == 0)) {
    iVar2 = -100;
  }
  else {
    local_ce = param_6;
    iVar2 = DAT_0000d0c0;
    if (param_1 != 0) {
      if (param_2 < 0x21) {
        cVar1 = (char)param_2;
        local_d0 = CONCAT11(cVar1,(undefined)local_d0);
        if (param_5 == (undefined4 *)0x0) {
          local_1c = 0x8c83;
          local_1a = '\v';
          FUN_00010ddc(local_c5,param_1,param_2);
          local_1a = cVar1 + local_1a;
          if (param_4 == (char *)0x0) {
            local_d0 = (ushort)local_d0._1_1_ << 8;
            local_c7 = 0;
          }
          else {
            local_d0 = CONCAT11(local_d0._1_1_,*param_4);
            if (*param_4 == '\x01') {
              uStack_c6 = 0;
            }
            local_c7 = param_4[8];
            if (0x3f < local_c7) {
              return DAT_0000d0c0;
            }
            local_1a = local_c7 + local_1a;
            if (*(int *)(param_4 + 4) != 0) {
              FUN_00010ddc(local_c5 + local_d0._1_1_);
            }
          }
        }
        else {
          local_1c = 0x8c67;
          local_1a = '\x14';
          FUN_00010ddc(auStack_bc,param_1,param_2);
          local_1a = cVar1 + local_1a;
          if ((param_4 == (char *)0x0) || (local_c7 = param_4[8], local_c7 == 0)) {
            local_c7 = 0;
          }
          else {
            local_d0 = CONCAT11(local_d0._1_1_,*param_4);
            if (*param_4 == '\x01') {
              uStack_c6 = 0;
            }
            if (0x3f < local_c7) {
              return DAT_0000d0c0;
            }
            local_1a = local_c7 + local_1a;
            if (*(int *)(param_4 + 4) == 0) {
              return -2;
            }
            FUN_00010ddc(auStack_bc + local_d0._1_1_,*(int *)(param_4 + 4),local_c7);
          }
          local_c0 = param_5[4];
          local_c5[0] = *(byte *)(param_5 + 1);
          local_c5[2] = *(undefined *)((int)param_5 + 0xd);
          if (0x20 < local_c5[0]) {
            return DAT_0000d0c0;
          }
          if (local_c5[0] != 0) {
            FUN_00010ddc(auStack_bc + (byte)(local_d0._1_1_ + local_c7),*param_5);
            local_1a = *(char *)(param_5 + 1) + local_1a;
          }
          local_c5[1] = *(byte *)(param_5 + 3);
          if (0x20 < local_c5[1]) {
            return DAT_0000d0c0;
          }
          if (local_c5[1] != 0) {
            FUN_00010ddc(auStack_bc + (byte)(local_c5[0] + local_d0._1_1_ + local_c7),param_5[2]);
            local_1a = *(char *)(param_5 + 3) + local_1a;
          }
        }
        if (param_3 == (undefined4 *)0x0) {
          FUN_000164be(&local_cd,6);
        }
        else {
          local_cd = *param_3;
          local_c9 = *(undefined2 *)(param_3 + 1);
        }
        iVar2 = FUN_0001144c(&local_1c,&local_d0,0);
        if (iVar2 == 0) {
          iVar2 = (int)local_d0;
        }
      }
      else {
        iVar2 = -7;
      }
    }
  }
  return iVar2;
}



undefined4 FUN_0000d0cc(ushort *param_1,undefined *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  if (*(char *)(param_1 + 4) == '\x01') {
    uVar2 = 1;
  }
  else {
    *(undefined *)(*(int *)(param_1 + 6) + (uint)param_1[1]) = *param_2;
    uVar5 = (uint)*param_1;
    uVar4 = (param_1[1] + 1) - uVar5 * ((param_1[1] + 1) / uVar5);
    uVar1 = (ushort)uVar4;
    param_1[2] = uVar1;
    param_1[1] = uVar1;
    uVar4 = (uVar4 & 0xffff) + 1;
    uVar4 = uVar4 - uVar5 * (uVar4 / uVar5);
    bVar6 = param_1[3] != uVar4;
    if (bVar6) {
      uVar4 = 0;
    }
    uVar3 = (undefined)uVar4;
    if (!bVar6) {
      uVar3 = 1;
    }
    *(undefined *)(param_1 + 4) = uVar3;
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 FUN_0000d10c(ushort *param_1,undefined param_2)

{
  undefined4 uVar1;
  undefined uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  if (*(char *)(param_1 + 4) == '\x01') {
    uVar1 = 1;
  }
  else {
    *(undefined *)(*(int *)(param_1 + 6) + (uint)param_1[2]) = param_2;
    uVar4 = (uint)*param_1;
    uVar3 = (param_1[2] + 1) - uVar4 * ((param_1[2] + 1) / uVar4);
    param_1[2] = (ushort)uVar3;
    uVar3 = (uVar3 & 0xffff) + 1;
    uVar3 = uVar3 - uVar4 * (uVar3 / uVar4);
    bVar5 = param_1[3] != uVar3;
    if (bVar5) {
      uVar3 = 0;
    }
    uVar2 = (undefined)uVar3;
    if (!bVar5) {
      uVar2 = 1;
    }
    *(undefined *)(param_1 + 4) = uVar2;
    uVar1 = 0;
  }
  return uVar1;
}



void FUN_0000d148(int param_1)

{
  undefined uVar1;
  bool bVar3;
  short sVar2;
  
  sVar2 = *(short *)(param_1 + 2);
  if (sVar2 != *(short *)(param_1 + 4)) {
    *(short *)(param_1 + 4) = sVar2;
    bVar3 = sVar2 != *(short *)(param_1 + 6);
    if (bVar3) {
      sVar2 = 0;
    }
    uVar1 = (undefined)sVar2;
    if (!bVar3) {
      uVar1 = 2;
    }
    *(undefined *)(param_1 + 8) = uVar1;
  }
  return;
}



void FUN_0000d160(int param_1)

{
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_1 + 4);
  return;
}



int FUN_0000d166(ushort *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 == (ushort *)0x0) {
    iVar1 = 0;
  }
  else {
    uVar3 = (uint)param_1[1];
    uVar2 = (uint)param_1[2];
    if (uVar2 < uVar3) {
      return uVar2 + (*param_1 - uVar3);
    }
    iVar1 = uVar2 - uVar3;
  }
  return iVar1;
}



undefined4 FUN_0000d180(ushort *param_1,undefined *param_2)

{
  undefined4 uVar1;
  undefined uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  
  if (*(char *)(param_1 + 4) == '\x02') {
    uVar1 = 2;
  }
  else {
    *param_2 = *(undefined *)(*(int *)(param_1 + 6) + (uint)param_1[3]);
    uVar3 = (param_1[3] + 1) - (uint)*param_1 * ((param_1[3] + 1) / (uint)*param_1);
    uVar4 = uVar3 & 0xffff;
    bVar5 = param_1[1] != uVar4;
    param_1[3] = (ushort)uVar3;
    if (bVar5) {
      uVar4 = 0;
    }
    uVar2 = (undefined)uVar4;
    if (!bVar5) {
      uVar2 = 2;
    }
    *(undefined *)(param_1 + 4) = uVar2;
    uVar1 = 0;
  }
  return uVar1;
}



void FUN_0000d1b4(undefined2 *param_1,undefined2 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[3] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 6) = param_3;
  *(undefined *)(param_1 + 4) = 2;
  return;
}



undefined FUN_0000d1c6(int param_1)

{
  return *(undefined *)(param_1 + 8);
}



undefined4 FUN_0000d1ca(ushort *param_1,undefined *param_2,uint param_3)

{
  undefined uVar1;
  uint uVar2;
  bool bVar3;
  
  if (*(char *)(param_1 + 4) != '\x02') {
    if ((*param_1 < param_3) || (param_2 == (undefined *)0x0 || param_3 == 0)) {
      return 3;
    }
    uVar2 = (uint)param_1[3];
    while (param_1[1] != uVar2) {
      *param_2 = *(undefined *)(uVar2 + *(int *)(param_1 + 6));
      param_3 = param_3 - 1;
      uVar2 = (uVar2 + 1) - ((uVar2 + 1) / (uint)*param_1) * (uint)*param_1;
      param_2 = param_2 + 1;
      if (param_3 == 0) {
        param_1[3] = (ushort)uVar2;
        uVar2 = uVar2 & 0xffff;
        bVar3 = param_1[1] != uVar2;
        if (bVar3) {
          uVar2 = 0;
        }
        uVar1 = (undefined)uVar2;
        if (!bVar3) {
          uVar1 = 2;
        }
        *(undefined *)(param_1 + 4) = uVar1;
        return 0;
      }
    }
  }
  return 2;
}



void FUN_0000d224(ushort *param_1,int param_2,undefined *param_3)

{
  if (*(char *)(param_1 + 4) != '\x02') {
    *param_3 = *(undefined *)
                (*(int *)(param_1 + 6) +
                ((param_2 + (uint)param_1[3]) -
                 (uint)*param_1 * ((param_2 + (uint)param_1[3]) / (uint)*param_1) & 0xffff));
  }
  return;
}



undefined4 FUN_0000d244(ushort *param_1,int param_2,uint param_3,int *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  undefined uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  
  if (*(char *)(param_1 + 4) == '\x01') {
    return 1;
  }
  if (*param_1 < param_3) {
    uVar2 = 3;
  }
  else {
    uVar6 = (uint)param_1[2];
    if (param_4 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *param_4;
    }
    pbVar4 = (byte *)(param_2 + -1);
    do {
      pbVar4 = pbVar4 + 1;
      bVar1 = *pbVar4;
      *(byte *)(uVar6 + *(int *)(param_1 + 6)) = bVar1;
      iVar8 = (uint)bVar1 + iVar8;
      uVar6 = (uVar6 + 1) - (uint)*param_1 * ((uVar6 + 1) / (uint)*param_1);
      uVar7 = (uint)param_1[3];
      if (uVar7 == uVar6) {
        return 1;
      }
      param_3 = param_3 - 1;
    } while (param_3 != 0);
    uVar5 = uVar6 & 0xffff;
    param_1[2] = (ushort)uVar6;
    bVar9 = uVar5 != uVar7;
    if (bVar9) {
      uVar5 = 0;
    }
    uVar3 = (undefined)uVar5;
    if (!bVar9) {
      uVar3 = 1;
    }
    *(undefined *)(param_1 + 4) = uVar3;
    if (param_4 != (int *)0x0) {
      *param_4 = iVar8;
    }
    uVar2 = 0;
  }
  return uVar2;
}



void FUN_0000d2a0(int param_1,uint param_2,byte *param_3,int *param_4,byte param_5)

{
  undefined2 uVar1;
  int iVar2;
  
  if (param_3 == (byte *)0x0) {
    FUN_000152a4(s_FAssertion_failed___outFrame____o_0000d323 + 1);
  }
  if (param_4 == (int *)0x0) {
    FUN_000152a4(s_FAssertion_failed___outFrame____o_0000d323 + 1);
  }
  if ((param_2 != 0) && (param_1 == 0)) {
    FUN_000152a4(s_Assertion_failed___data___file_C_0000d394);
  }
  *param_3 = param_5 | 0x80;
  if (param_2 < 0x7e) {
    param_3[1] = (byte)param_2;
    iVar2 = 2;
  }
  else {
    if (0xffff < param_2) {
      FUN_000152a4(s_Assertion_failed___dataLength_<__0000d3f0);
      iVar2 = *param_4;
      goto LAB_0000d30e;
    }
    param_3[1] = 0x7e;
    uVar1 = FUN_00014a64(param_2 & 0xffff);
    *(undefined2 *)(param_3 + 2) = uVar1;
    iVar2 = 4;
  }
  *param_4 = iVar2;
LAB_0000d30e:
  FUN_00010ddc(param_3 + iVar2,param_1,param_2);
  *param_4 = param_2 + *param_4;
  return;
}



longlong FUN_0000d45c(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  
  uVar1 = param_4 ^ 0x80000000;
  uVar8 = param_3 * 0x200;
  uVar9 = (param_4 << 1) >> 0x15;
  if (uVar9 == 0) {
    if (uVar9 != 0) {
      param_2 = 0;
      param_1 = 0;
    }
    return CONCAT44(param_2,param_1);
  }
  uVar7 = (param_4 << 0xc) >> 3 | param_3 >> 0x17 | 0x20000000;
  if (uVar9 == 0x7ff) {
    return (ulonglong)(uVar1 & 0xfff00000) << 0x20;
  }
  if ((int)uVar1 < 0) {
    bVar12 = uVar8 != 0;
    uVar8 = param_3 * -0x200;
    uVar7 = -(uint)bVar12 - uVar7;
  }
  uVar4 = param_1 * 0x200;
  uVar6 = (param_2 << 1) >> 0x15;
  if (uVar6 == 0) {
    if (uVar6 != 0) {
      uVar1 = 0;
      param_3 = 0;
    }
    return CONCAT44(uVar1,param_3);
  }
  uVar2 = (param_2 << 0xc) >> 3 | param_1 >> 0x17 | 0x20000000;
  if (uVar6 == 0x7ff) {
    return (ulonglong)(param_2 & 0xfff00000) << 0x20;
  }
  if ((int)param_2 < 0) {
    bVar12 = uVar4 != 0;
    uVar4 = param_1 * -0x200;
    uVar2 = -(uint)bVar12 - uVar2;
  }
  uVar11 = uVar6 - uVar9;
  uVar3 = uVar2;
  uVar5 = uVar4;
  if ((int)uVar11 < 0) {
    uVar11 = -uVar11;
    uVar3 = uVar7;
    uVar5 = uVar8;
    uVar6 = uVar9;
    uVar7 = uVar2;
    uVar8 = uVar4;
  }
  if ((int)(uVar11 - 0x36) < 0) {
    if (uVar11 == 0) {
      uVar9 = 0;
    }
    else {
      uVar9 = -uVar11 + 0x39;
      if (uVar9 < 0x20) {
        uVar9 = uVar7 << (uVar9 & 0xff) | uVar8;
      }
      else {
        uVar9 = uVar8 << (-uVar11 + 0x19 & 0xff);
      }
      uVar4 = uVar7 << (0x20 - uVar11 & 0xff);
      if (0x20 < uVar11) {
        uVar4 = uVar7;
      }
      uVar7 = (int)uVar7 >> (uVar11 & 0xff);
      if (0x20 < uVar11) {
        uVar8 = (int)uVar4 >> (uVar11 - 0x20 & 0xff);
      }
      else {
        uVar8 = (uVar8 >> (uVar11 & 0xff)) + uVar4;
      }
    }
    bVar12 = CARRY4(uVar5,uVar8);
    uVar5 = uVar5 + uVar8;
    uVar3 = uVar3 + uVar7 + (uint)bVar12;
  }
  else {
    uVar9 = 0;
  }
  if ((uVar3 | uVar5) == 0) {
    return 0;
  }
  if ((int)uVar3 < 0) {
    iVar10 = 1;
    bVar12 = uVar5 != 0;
    uVar5 = -uVar5;
    uVar3 = -(uint)bVar12 - uVar3;
  }
  else {
    iVar10 = 0;
  }
  do {
    uVar7 = uVar6;
    uVar8 = uVar5 & 0x80000000;
    uVar5 = uVar5 * 2;
    uVar3 = uVar3 * 2 + (uint)(uVar8 != 0);
    uVar6 = uVar7 - 1;
  } while (-1 < (int)uVar3);
  if ((uVar5 & 0x400) != 0) {
    uVar8 = uVar5 & 0x100;
    bVar13 = 0xfffffbff < uVar5;
    uVar5 = uVar5 + 0x400;
    bVar12 = CARRY4(uVar3,(uint)bVar13);
    uVar3 = uVar3 + bVar13;
    if (bVar12) goto LAB_0000d5d0;
    if ((uVar9 | uVar8 | uVar5 & 0x200) == 0) {
      uVar5 = uVar5 & 0xfffff7ff;
    }
  }
  uVar8 = uVar5 & 0x80000000;
  uVar5 = (uVar5 & 0xfffff8ff) << 1;
  uVar3 = uVar3 * 2 + (uint)(uVar8 != 0);
  uVar7 = uVar7 - 1;
LAB_0000d5d0:
  bVar14 = SCARRY4(uVar7,2);
  uVar7 = uVar7 + 2;
  bVar12 = (int)uVar7 < 0;
  bVar13 = uVar7 == 0;
  if (bVar13 || bVar12 != bVar14) {
    param_2 = 0;
  }
  if (bVar13 || bVar12 != bVar14) {
    param_1 = 0;
  }
  if (bVar13 || bVar12 != bVar14) {
    return CONCAT44(param_2,param_1);
  }
  if (0x7fe < uVar7) {
    return (ulonglong)(uVar1 & 0x80000000 | 0x7ff00000) << 0x20;
  }
  return CONCAT44(uVar3 >> 0xc | uVar7 * 0x100000 | iVar10 << 0x1f,uVar3 << 0x14 | uVar5 >> 0xc);
}



longlong FUN_0000d466(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  
  uVar7 = param_3 * 0x200;
  uVar8 = (param_4 << 1) >> 0x15;
  if (uVar8 == 0) {
    if (uVar8 != 0) {
      param_2 = 0;
      param_1 = 0;
    }
    return CONCAT44(param_2,param_1);
  }
  uVar6 = (param_4 << 0xc) >> 3 | param_3 >> 0x17 | 0x20000000;
  if (uVar8 == 0x7ff) {
    return (ulonglong)(param_4 & 0xfff00000) << 0x20;
  }
  if ((int)param_4 < 0) {
    bVar11 = uVar7 != 0;
    uVar7 = param_3 * -0x200;
    uVar6 = -(uint)bVar11 - uVar6;
  }
  uVar3 = param_1 * 0x200;
  uVar5 = (param_2 << 1) >> 0x15;
  if (uVar5 == 0) {
    if (uVar5 != 0) {
      param_4 = 0;
      param_3 = 0;
    }
    return CONCAT44(param_4,param_3);
  }
  uVar1 = (param_2 << 0xc) >> 3 | param_1 >> 0x17 | 0x20000000;
  if (uVar5 == 0x7ff) {
    return (ulonglong)(param_2 & 0xfff00000) << 0x20;
  }
  if ((int)param_2 < 0) {
    bVar11 = uVar3 != 0;
    uVar3 = param_1 * -0x200;
    uVar1 = -(uint)bVar11 - uVar1;
  }
  uVar10 = uVar5 - uVar8;
  uVar2 = uVar1;
  uVar4 = uVar3;
  if ((int)uVar10 < 0) {
    uVar10 = -uVar10;
    uVar2 = uVar6;
    uVar4 = uVar7;
    uVar5 = uVar8;
    uVar6 = uVar1;
    uVar7 = uVar3;
  }
  if ((int)(uVar10 - 0x36) < 0) {
    if (uVar10 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = -uVar10 + 0x39;
      if (uVar8 < 0x20) {
        uVar8 = uVar6 << (uVar8 & 0xff) | uVar7;
      }
      else {
        uVar8 = uVar7 << (-uVar10 + 0x19 & 0xff);
      }
      uVar3 = uVar6 << (0x20 - uVar10 & 0xff);
      if (0x20 < uVar10) {
        uVar3 = uVar6;
      }
      uVar6 = (int)uVar6 >> (uVar10 & 0xff);
      if (0x20 < uVar10) {
        uVar7 = (int)uVar3 >> (uVar10 - 0x20 & 0xff);
      }
      else {
        uVar7 = (uVar7 >> (uVar10 & 0xff)) + uVar3;
      }
    }
    bVar11 = CARRY4(uVar4,uVar7);
    uVar4 = uVar4 + uVar7;
    uVar2 = uVar2 + uVar6 + (uint)bVar11;
  }
  else {
    uVar8 = 0;
  }
  if ((uVar2 | uVar4) == 0) {
    return 0;
  }
  if ((int)uVar2 < 0) {
    iVar9 = 1;
    bVar11 = uVar4 != 0;
    uVar4 = -uVar4;
    uVar2 = -(uint)bVar11 - uVar2;
  }
  else {
    iVar9 = 0;
  }
  do {
    uVar6 = uVar5;
    uVar7 = uVar4 & 0x80000000;
    uVar4 = uVar4 * 2;
    uVar2 = uVar2 * 2 + (uint)(uVar7 != 0);
    uVar5 = uVar6 - 1;
  } while (-1 < (int)uVar2);
  if ((uVar4 & 0x400) != 0) {
    uVar7 = uVar4 & 0x100;
    bVar12 = 0xfffffbff < uVar4;
    uVar4 = uVar4 + 0x400;
    bVar11 = CARRY4(uVar2,(uint)bVar12);
    uVar2 = uVar2 + bVar12;
    if (bVar11) goto LAB_0000d5d0;
    if ((uVar8 | uVar7 | uVar4 & 0x200) == 0) {
      uVar4 = uVar4 & 0xfffff7ff;
    }
  }
  uVar7 = uVar4 & 0x80000000;
  uVar4 = (uVar4 & 0xfffff8ff) << 1;
  uVar2 = uVar2 * 2 + (uint)(uVar7 != 0);
  uVar6 = uVar6 - 1;
LAB_0000d5d0:
  bVar13 = SCARRY4(uVar6,2);
  uVar6 = uVar6 + 2;
  bVar11 = (int)uVar6 < 0;
  bVar12 = uVar6 == 0;
  if (bVar12 || bVar11 != bVar13) {
    param_2 = 0;
  }
  if (bVar12 || bVar11 != bVar13) {
    param_1 = 0;
  }
  if (bVar12 || bVar11 != bVar13) {
    return CONCAT44(param_2,param_1);
  }
  if (0x7fe < uVar6) {
    return (ulonglong)(param_4 & 0x80000000 | 0x7ff00000) << 0x20;
  }
  return CONCAT44(uVar2 >> 0xc | uVar6 * 0x100000 | iVar9 << 0x1f,uVar2 << 0x14 | uVar4 >> 0xc);
}



undefined4 FUN_0000d614(uint *param_1,undefined *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  uint local_34;
  uint *local_30;
  undefined *local_2c;
  
  piVar4 = DAT_0000d7ac;
  local_48 = *DAT_0000d798;
  uStack_44 = DAT_0000d798[1];
  uStack_40 = DAT_0000d798[2];
  local_3c = DAT_0000d798[3];
  uStack_38 = DAT_0000d798[4];
  local_2c = param_2;
  iVar5 = FUN_00012300(*(undefined4 *)*DAT_0000d7ac,DAT_0000d79c,4);
  if (iVar5 != 4) {
    return 0xfffffffc;
  }
  FUN_00015f6c(&local_48,0x32);
  iVar5 = FUN_00010aa4(*(undefined4 *)*piVar4,param_1,8);
  if (iVar5 != 8) {
    return 0xfffffffc;
  }
  iVar5 = 2;
  bVar1 = true;
  while (uVar3 = DAT_0000d7a4, uVar2 = DAT_0000d7a0, local_30 = param_1 + 1, param_1[1] == *param_1)
  {
    iVar6 = FUN_00010aa4(*(undefined4 *)*piVar4,local_30,4);
    if (iVar6 != 4) {
      return 0xfffffffc;
    }
    iVar6 = FUN_00013858(&local_48);
    if (iVar6 != 0) {
      return 0xffffff9c;
    }
  }
  while (uVar10 = DAT_0000d7a8, bVar1) {
    puVar7 = (undefined4 *)*piVar4;
    iVar6 = 5;
    iVar11 = 0;
    puVar9 = param_1;
    do {
      local_34 = *puVar9;
      uVar10 = local_34 >> 3;
      if ((local_34 >> 2 & 1) == 0) {
        if (uVar3 == (uVar2 & local_34)) {
LAB_0000d764:
          *param_1 = puVar9[1];
          if ((iVar11 != 0) &&
             (iVar6 = FUN_00010aa4(*(undefined4 *)*piVar4,(int)param_1 + (4 - iVar11),iVar11,uVar10)
             , iVar6 != iVar11)) {
            return 0xfffffffc;
          }
          bVar1 = false;
          goto LAB_0000d788;
        }
      }
      else {
        uVar10 = DAT_0000d7a8 | *(byte *)(puVar7 + 0x2a) & 3;
        if (uVar10 == (uVar2 & local_34)) goto LAB_0000d764;
      }
      iVar6 = iVar6 + -1;
      puVar9 = (uint *)((int)puVar9 + 1);
      iVar11 = iVar11 + 1;
    } while (iVar6 != 0);
    if (bVar1) {
      *param_1 = *local_30;
      iVar6 = FUN_00010aa4(*puVar7,local_30,4,uVar10);
      if (iVar6 != 4) {
        return 0xfffffffc;
      }
    }
LAB_0000d788:
    if (iVar5 == 1) {
      return 0xffffff9c;
    }
    iVar6 = FUN_00013858(&local_48);
    if (iVar6 != 0) {
      iVar5 = 1;
    }
  }
  if (iVar5 == 0) {
    return 0xffffff9c;
  }
  do {
    uVar8 = *param_1;
    puVar7 = (undefined4 *)*piVar4;
    if ((uVar8 >> 2 & 1) == 0) {
      if (uVar3 != (uVar2 & uVar8)) {
LAB_0000d6e8:
        *(char *)(puVar7 + 0x2a) = *(char *)(puVar7 + 0x2a) + '\x01';
        iVar5 = FUN_00010aa4(*puVar7,local_30,4);
        if (iVar5 != 4) {
          return 0xfffffffc;
        }
        *local_2c = 0;
        return 0;
      }
    }
    else if ((*(byte *)(puVar7 + 0x2a) & 3 | uVar10) != (uVar8 & uVar2)) goto LAB_0000d6e8;
    iVar5 = FUN_00010aa4(*puVar7,param_1,4);
    if (iVar5 != 4) {
      return 0xfffffffc;
    }
  } while( true );
}



uint FUN_0000d7b0(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  code **ppcVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  
  ppcVar3 = DAT_0000d944;
  (**DAT_0000d944)();
  bVar2 = false;
  if (*param_2 != -1) {
    uVar8 = param_2[5];
    if ((uVar8 >> 4 & 1) == 0) {
      iVar9 = 0;
      if ((uVar8 >> 7 & 1) != 0) {
        (**ppcVar3)();
        pcVar4 = ppcVar3[1];
        if (*param_2 != -1) {
          FUN_00013988(param_2);
          iVar7 = *param_2;
          param_2[5] = param_2[5] & 0xfffff5ff;
          if ((-1 < iVar7) && (iVar7 < 10)) {
            iVar11 = *(int *)(DAT_0000d948 + iVar7 * 8);
            if (iVar11 != 0) {
              pcVar4 = *(code **)(iVar11 + 0x1c);
              (*pcVar4)(*(undefined4 *)(DAT_0000d948 + iVar7 * 8 + 4),0,2,pcVar4,param_4);
            }
          }
          pcVar4 = ppcVar3[1];
        }
        (*pcVar4)();
        uVar8 = param_2[5];
      }
      if ((uVar8 >> 5 & 1) == 0) {
        bVar1 = (uVar8 >> 6 & 1) != 0;
        if (bVar1) {
          uVar8 = uVar8 | 0x20;
        }
        if (bVar1) {
          param_2[5] = uVar8;
        }
      }
      if ((param_2[1] == 0) && ((uVar8 >> 2 & 1) == 0)) {
        iVar9 = FUN_0000f654(param_2,0,uVar8 & 7,0x100);
      }
      param_2[4] = param_2[3];
      bVar1 = iVar9 == 0;
      goto LAB_0000d85c;
    }
    param_2[5] = uVar8 | 0x400;
  }
  bVar1 = false;
LAB_0000d85c:
  pcVar4 = ppcVar3[1];
  if (!bVar1) {
LAB_0000d862:
    (*pcVar4)();
    return 0xffffffff;
  }
  iVar9 = param_2[2];
  iVar7 = param_2[3];
  uVar5 = FUN_00015fa8(param_1);
  uVar10 = iVar7 - iVar9;
  uVar8 = uVar5;
  if ((param_2[5] & 7U) == 4) {
    if (uVar5 != 0) {
      iVar9 = 0;
      do {
        iVar7 = FUN_000152f4(*param_2,iVar9 + param_1,uVar5);
        pcVar4 = ppcVar3[1];
        if (iVar7 < 0) {
          param_2[5] = param_2[5] | 0x400;
          goto LAB_0000d862;
        }
        uVar5 = uVar5 - iVar7;
        iVar9 = iVar9 + iVar7;
      } while (uVar5 != 0);
    }
  }
  else if (uVar5 != 0) {
    do {
      iVar9 = param_2[2];
      uVar6 = uVar5;
      if (uVar10 < uVar5) {
        uVar6 = uVar10;
      }
      if (((param_2[5] & 7U) == 2) && (iVar7 = FUN_00015778(param_1,10,uVar6), iVar7 != 0)) {
        iVar7 = FUN_00015778(param_1,10,uVar6);
        bVar2 = true;
        uVar6 = (iVar7 - param_1) + 1;
      }
      FUN_00010ddc(iVar9,param_1,uVar6);
      uVar5 = uVar5 - uVar6;
      param_1 = param_1 + uVar6;
      uVar10 = uVar10 - uVar6;
      param_2[2] = param_2[2] + uVar6;
      if ((uVar10 == 0) || (bVar2)) {
        iVar9 = FUN_00013988(param_2);
        if (iVar9 != 0) {
          pcVar4 = ppcVar3[1];
          param_2[5] = param_2[5] | 0x400;
          (*pcVar4)();
          return 0xffffffff;
        }
        bVar2 = false;
        uVar10 = param_2[3] - param_2[2];
        param_2[5] = param_2[5] | 0x20;
      }
    } while (uVar5 != 0);
    pcVar4 = ppcVar3[1];
  }
  (*pcVar4)();
  return uVar8;
}



undefined FUN_0000d94c(int param_1)

{
  undefined uVar1;
  
  if (param_1 < 0xb) {
    uVar1 = *(undefined *)(DAT_0000dac4 + param_1);
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}



void FUN_0000d958(void)

{
  return;
}



undefined4 FUN_0000d95a(short param_1,undefined4 param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  short *psVar5;
  undefined8 uVar6;
  
  iVar2 = FUN_0000c484();
  if (iVar2 == 0) {
    iVar2 = DAT_0000dac4;
    iVar4 = FUN_0000d958(param_2);
    bVar1 = *(byte *)(iVar2 + param_1 * 0x4c + iVar4 + 0xe);
    uVar6 = FUN_0000d958(param_2);
    iVar4 = iVar2 + 0xc;
    if ((uint)bVar1 !=
        (*(byte *)(iVar2 + (int)((ulonglong)uVar6 >> 0x20) + (int)uVar6 + 0xe) | param_3)) {
      uVar6 = FUN_0000d958(param_2);
      iVar2 = (int)((ulonglong)uVar6 >> 0x20) + (int)uVar6 + 2;
      psVar5 = (short *)(param_1 * 0x4c + iVar4 + 0x34);
      *(byte *)(iVar4 + iVar2) = (byte)param_3 | *(byte *)(iVar4 + iVar2);
      *psVar5 = *psVar5 + 1;
      return 1;
    }
    uVar3 = 2;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



void FUN_0000d9c2(undefined4 param_1,undefined4 param_2)

{
  FUN_0000d95a(param_1,param_2,2);
  return;
}



void FUN_0000d9c8(undefined4 param_1,undefined4 param_2)

{
  FUN_0000d95a(param_1,param_2,1);
  return;
}



undefined4 FUN_0000d9ce(void)

{
  return 8;
}



void FUN_0000d9d2(void)

{
  undefined uVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  undefined4 *puVar15;
  undefined *local_28;
  
  uVar4 = FUN_0000d9ce();
  FUN_00013fdc(DAT_0000dacc,uVar4);
  uVar10 = 0;
  iVar5 = DAT_0000dad0 + 9;
  iVar13 = DAT_0000dad0 + 0x2c;
  local_28 = (undefined *)(DAT_0000dad0 + 4);
  iVar14 = DAT_0000dad0 + 0x6c;
  puVar15 = (undefined4 *)(DAT_0000dad0 + 0xc);
  do {
    local_28 = local_28 + 1;
    iVar6 = (uVar10 & 0xff) * 0x10;
    *(undefined *)(iVar13 + iVar6) = *local_28;
    iVar8 = iVar6 + iVar13;
    *(undefined *)(iVar8 + 2) = 0;
    *(undefined4 *)(iVar8 + 4) = 0;
    *(undefined2 *)(iVar8 + 8) = 0;
    iVar7 = DAT_0000dad4;
    *(undefined *)(iVar8 + 10) = 0;
    *(undefined *)(iVar8 + 0xb) = 3;
    *(undefined *)(iVar8 + 0xc) = 0x1e;
    *(int *)(iVar6 + iVar7 + 4) = iVar14;
    *(undefined *)(iVar6 + iVar7 + 10) = 0;
    FUN_0000c490(uVar10 & 0xff);
    iVar7 = FUN_0000db8a(uVar10 & 0xff);
    uVar11 = uVar10 & 0xff;
    if (iVar7 == 1) {
      if (*(char *)(iVar13 + uVar11 * 0x10) == '\0') {
        *(undefined *)(iVar5 + uVar11) = 2;
        *(undefined *)(uVar11 * 0x10 + iVar13 + 1) = 1;
      }
      else {
        *(undefined *)(iVar8 + 1) = 2;
        *(undefined *)(iVar5 + uVar11) = 1;
      }
    }
    else {
      *(undefined *)(iVar8 + 1) = 0;
      *(undefined *)(iVar5 + uVar11) = 0;
    }
    uVar10 = uVar10 + 1;
    *puVar15 = 0;
    puVar3 = DAT_0000dac8;
    iVar14 = iVar14 + 0x194;
    puVar15 = puVar15 + 1;
  } while (uVar10 < 2);
  uVar10 = 0;
  puVar9 = (undefined *)(DAT_0000dad0 + 7);
  puVar12 = DAT_0000dac8;
  do {
    iVar5 = FUN_0000c4aa(uVar10 & 0xff);
    uVar2 = (ushort)uVar10 & 0xff;
    if (iVar5 - 1U < 3) {
      *puVar12 = 1;
    }
    else {
      *puVar12 = 0;
    }
    puVar3[(short)uVar2 * 0x4c + 0x32] = 0;
    uVar1 = *puVar9;
    *(undefined2 *)(puVar3 + (short)uVar2 * 0x4c + 0x34) = 0;
    puVar12[0x48] = uVar1;
    FUN_00011a94(puVar3 + (short)uVar2 * 0x4c + 2,0,0x30);
    uVar10 = uVar10 + 1;
    puVar12 = puVar12 + 0x4c;
    puVar9 = puVar9 + 1;
  } while (uVar10 < 2);
  return;
}



void FUN_0000db3a(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint local_18;
  undefined4 uStack_14;
  
  iVar2 = DAT_0000dc44;
  sVar1 = (short)param_1;
  puVar5 = (undefined4 *)(sVar1 * 0x14 + DAT_0000dc44);
  local_18 = param_3;
  uStack_14 = param_4;
  if (**(char **)(sVar1 * 0x14 + DAT_0000dc44) == '\x02') {
    piVar4 = (int *)(sVar1 * 0x38 + DAT_0000dc4c);
    *piVar4 = *piVar4 + 1;
    if (param_1 == 0) {
      return;
    }
  }
  else {
    iVar3 = FUN_000062c4(param_1,&local_18);
    if (iVar3 == 0) {
      return;
    }
    *(undefined *)*puVar5 = 2;
    if (param_1 == 0) {
      FUN_00016468(*(undefined4 *)(sVar1 * 0x18 + iVar2 + 0x28),local_18 & 0xff);
      return;
    }
  }
  FUN_0000036a();
  return;
}



void FUN_0000db8a(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar1 = DAT_0000dc48;
  if (param_1 == 0) {
    iVar3 = (short)param_1 * 0x18;
    iVar5 = iVar3 + DAT_0000dc48;
    FUN_00014c74(*(undefined4 *)(iVar5 + 8),1,param_3,param_4,param_4);
    FUN_00015f30(*(undefined4 *)(iVar5 + 0x10),3);
    FUN_00015f30(*(undefined4 *)(iVar5 + 0x14),3);
    uVar2 = FUN_00012938(*(undefined4 *)(iVar5 + 8));
    puVar4 = (undefined4 *)(iVar3 + iVar1);
    FUN_00014246(*puVar4,uVar2,*(undefined4 *)(iVar5 + 0xc),0x60);
    FUN_00016364(*puVar4,0x10);
    FUN_0000ddd4(*puVar4,0x30);
    FUN_00015cd0(*puVar4,DAT_0000dc50);
    FUN_0000ddd4(*puVar4,0x30);
    FUN_000164b6(*puVar4,0x30);
  }
  iVar1 = DAT_0000dc44;
  iVar5 = (short)param_1 * 0x14;
  iVar3 = iVar5 + DAT_0000dc44;
  FUN_0000d1b4(*(undefined4 *)(iVar3 + 4),0x840,*(undefined4 *)(iVar3 + 8));
  FUN_0000d1b4(*(undefined4 *)(iVar3 + 0xc),0x100,*(undefined4 *)(iVar3 + 0x10));
  **(undefined **)(iVar5 + iVar1) = 1;
  return;
}



void FUN_0000dc18(short param_1)

{
  FUN_0000d180(*(undefined4 *)(DAT_0000dc54 + param_1 * 0x14));
  return;
}



void FUN_0000dc26(short param_1)

{
  FUN_0000d0cc(*(undefined4 *)(DAT_0000dc58 + param_1 * 0x14));
  return;
}



undefined FUN_0000dc34(short param_1)

{
  return **(undefined **)(DAT_0000dc44 + param_1 * 0x14);
}



void FUN_0000dc60(void)

{
  char *pcVar1;
  undefined auStack_34 [52];
  
  FUN_00016410(auStack_34);
  if (*(char *)(DAT_0000ddcc + 0xd29) != '\0') {
    if ((*(byte *)(DAT_0000ddcc + 0xd29) >> 4 & 1) == 0) {
      if ((*(byte *)(DAT_0000ddcc + 0xd29) >> 3 & 1) == 0) {
        if ((*(byte *)(DAT_0000ddcc + 0xd29) >> 2 & 1) == 0) {
          if ((*(byte *)(DAT_0000ddcc + 0xd29) >> 1 & 1) == 0) {
            if ((*(byte *)(DAT_0000ddcc + 0xd29) & 1) == 0) {
              pcVar1 = s_Unknown_0000dce0;
            }
            else {
              pcVar1 = s_IBUSERR__Instruction_Access_Viol_0000dce8;
            }
          }
          else {
            pcVar1 = s_FPRECISERR__Immediate_Bus_Fault__0000dd0f + 1;
          }
        }
        else {
          pcVar1 = s_IMPRECISERR__Delayed_Bus_Fault__e_0000dd44;
        }
      }
      else {
        pcVar1 = s_UNSTKERR__Bus_Fault_caused_by_St_0000dd78;
      }
    }
    else {
      pcVar1 = s_STKERR__Bus_Fault_caused_by_Stac_0000dda0;
    }
    FUN_00015bac(auStack_34,*DAT_0000ddd0,0,0x494,*DAT_0000ddc8,pcVar1,
                 *(undefined4 *)(DAT_0000ddcc + 0xd38));
  }
  return;
}



void FUN_0000ddd4(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x44) = param_2;
  return;
}



void FUN_0000ddd8(void)

{
  char *pcVar1;
  undefined auStack_34 [52];
  
  FUN_00016410(auStack_34);
  if (*(short *)(DAT_0000df30 + 0xd2a) != 0) {
    if ((*(ushort *)(DAT_0000df30 + 0xd2a) & 1) == 0) {
      if ((*(ushort *)(DAT_0000df30 + 0xd2a) >> 1 & 1) == 0) {
        if ((*(ushort *)(DAT_0000df30 + 0xd2a) >> 2 & 1) == 0) {
          if ((*(ushort *)(DAT_0000df30 + 0xd2a) >> 3 & 1) == 0) {
            if ((*(ushort *)(DAT_0000df30 + 0xd2a) >> 8 & 1) == 0) {
              if ((*(ushort *)(DAT_0000df30 + 0xd2a) >> 9 & 1) == 0) {
                pcVar1 = s_Unknown_0000de64;
              }
              else {
                pcVar1 = s_DIVBYZERO_0000de6c;
              }
            }
            else {
              pcVar1 = s_FUNALIGNED__Unaligned_memory_acc_0000de77 + 1;
            }
          }
          else {
            pcVar1 = s_NOCP__Attempting_to_use_co_proce_0000de9c;
          }
        }
        else {
          pcVar1 = s_INVPC__Invalid_PC_0000dec4;
        }
      }
      else {
        pcVar1 = s_FINVSTATE__Invalid_EPSR_and_inst_0000ded7 + 1;
      }
    }
    else {
      pcVar1 = s_UNDEFINSTR__Undefined_instructio_0000df0c;
    }
    FUN_00015bac(auStack_34,*DAT_0000df34,0,0x4b7,*DAT_0000df38,pcVar1,0);
  }
  return;
}



uint * FUN_0000df3c(void)

{
  byte bVar1;
  uint *puVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  char cVar7;
  uint *puVar8;
  int iVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  byte abStack_48 [36];
  
  local_58 = *DAT_0000e074;
  uStack_54 = DAT_0000e074[1];
  uStack_50 = DAT_0000e074[2];
  uStack_4c = DAT_0000e074[3];
  uVar6 = FUN_00015fa8(DAT_0000e078);
  uVar5 = DAT_0000e090;
  puVar4 = DAT_0000e084;
  pcVar3 = DAT_0000e080;
  puVar2 = DAT_0000e07c;
  iVar11 = (0x10 - uVar6 * (0x10 / uVar6)) + uVar6;
  *DAT_0000e080 = '\0';
  *puVar4 = 0;
  uVar6 = *puVar2;
  *DAT_0000e088 = 0;
  uVar12 = puVar2[1];
  *DAT_0000e08c = 0;
  FUN_00014fa4(uVar5,0xf);
  do {
  } while (*pcVar3 == '\0');
  FUN_00016278(uVar5,uVar12 | uVar6);
  uVar6 = DAT_0000e094 & uVar6;
  if (((uVar6 == 0x20) || (uVar6 == 0x400)) || (uVar6 == 0x40 || uVar6 == 0x200)) {
    FUN_00016048(uVar5,&local_58);
  }
  FUN_0001515c(uVar5,puVar2[3],uVar12);
  FUN_00012150(uVar5,DAT_0000e078,abStack_48,iVar11);
  if (iVar11 != 0) {
    puVar8 = puVar2 + 4;
    iVar9 = iVar11;
    pbVar10 = abStack_48;
    do {
      bVar1 = *pbVar10;
      uVar6 = (uint)bVar1;
      cVar7 = (char)((int)uVar6 >> 4);
      if (uVar6 < 0xa0) {
        cVar7 = cVar7 + '0';
      }
      else {
        cVar7 = cVar7 + '7';
      }
      *(char *)puVar8 = cVar7;
      if ((uVar6 & 0xe) < 10) {
        cVar7 = (bVar1 & 0xf) + 0x30;
      }
      else {
        cVar7 = (bVar1 & 0xf) + 0x37;
      }
      iVar9 = iVar9 + -1;
      *(char *)((int)puVar8 + 1) = cVar7;
      puVar8 = (uint *)((int)puVar8 + 2);
      pbVar10 = pbVar10 + 1;
    } while (iVar9 != 0);
  }
  *(undefined *)((int)puVar2 + iVar11 * 2 + 0x11) = 0;
  return puVar2 + 4;
}



uint FUN_0000e01c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = DAT_0000e090;
  uVar2 = FUN_000151dc(DAT_0000e090,1,param_3,param_4,param_4);
  if ((uVar2 & 1) != 0) {
    FUN_00014c44(uVar1,1);
    *DAT_0000e080 = 1;
  }
  if ((uVar2 >> 1 & 1) != 0) {
    FUN_00014c44(uVar1,2);
    *DAT_0000e084 = 1;
  }
  if ((uVar2 >> 3 & 1) != 0) {
    FUN_00014c44(uVar1,8);
    *DAT_0000e088 = 1;
  }
  uVar3 = uVar2 >> 3;
  if ((uVar2 >> 2 & 1) != 0) {
    FUN_00014c44(uVar1,4);
    uVar3 = 1;
    *DAT_0000e08c = 1;
  }
  return uVar3;
}



char FUN_0000e098(int param_1,int param_2)

{
  undefined2 uVar1;
  bool bVar2;
  undefined2 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int local_60 [9];
  undefined4 *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  char local_2c;
  
  piVar5 = local_60;
  if ((param_2 == -1) || (param_2 == 0)) {
    piVar5 = (int *)0x0;
    local_2c = '\x03';
  }
  else {
    FUN_00015348(local_60,DAT_0000e1e0,param_2,&local_3c);
    local_2c = '\x02';
  }
  puVar3 = DAT_0000e1ec;
  uVar9 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar9 = getBasePriority();
  }
  puVar4 = (undefined4 *)(*DAT_0000e1e8 + param_1);
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x20);
  }
  if (*(short *)(param_1 + 10) == 0) {
    if ((param_2 == 0) && (bVar2 = (bool)isCurrentModePrivileged(), bVar2)) {
      setBasePriority(uVar9);
    }
    if (param_2 == 0) {
      local_2c = '\0';
    }
    else {
      uVar1 = *DAT_0000e1ec;
      local_34 = *(int **)(DAT_0000e1ec + 8);
      *DAT_0000e1ec = 1;
      local_34[6] = (int)&local_3c;
      uVar7 = local_34[3];
      uVar8 = *(uint *)(puVar3 + 2);
      piVar6 = (int *)local_34[0x10];
      *(int *)local_34[1] = *local_34;
      *(int *)(*local_34 + 4) = local_34[1];
      if (piVar6 == (int *)*piVar6) {
        *(uint *)(puVar3 + 2) = uVar8 & ~uVar7;
      }
      if (local_34 == *(int **)(puVar3 + 8)) {
        *(undefined4 *)(puVar3 + 10) = 0;
      }
      puVar3[4] = 1;
      *(undefined *)(local_34 + 5) = 2;
      local_3c = puVar4;
      if ((*(byte *)(param_1 + 8) >> 1 & 1) != 0) {
        local_3c = (undefined4 *)*puVar4;
        while ((puVar4 != local_3c && ((uint)local_34[2] <= *(uint *)(local_3c[2] + 8)))) {
          local_3c = (undefined4 *)*local_3c;
        }
      }
      local_38 = (int *)local_3c[1];
      *local_38 = (int)&local_3c;
      local_3c[1] = &local_3c;
      local_30 = piVar5;
      if (local_2c == '\x02') {
        piVar5[3] = piVar5[2] + *DAT_0000e1e4;
        *(undefined2 *)(piVar5 + 5) = 1;
      }
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(uVar9);
      }
      FUN_000150d8(uVar1);
      uVar9 = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        uVar9 = getBasePriority();
      }
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(0x20);
      }
      if (local_30 != (int *)0x0) {
        *(int *)local_30[1] = *local_30;
        *(int *)(*local_30 + 4) = local_30[1];
      }
      local_34[6] = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(uVar9);
      }
    }
  }
  else {
    *(short *)(param_1 + 10) = *(short *)(param_1 + 10) + -1;
    if (piVar5 != (int *)0x0) {
      *(int *)piVar5[1] = *piVar5;
      *(int *)(*piVar5 + 4) = piVar5[1];
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(uVar9);
    }
    local_2c = '\x01';
  }
  return local_2c;
}



int FUN_0000e1f0(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 local_58;
  byte local_54 [40];
  byte local_2c;
  byte local_2b;
  byte local_2a;
  byte local_29;
  
  FUN_00011a94(local_54,0,0x30);
  puVar1 = DAT_0000e330;
  local_54[0] = 0x1b;
  *(undefined *)((int)DAT_0000e330 + 0x13) = 0x7b;
  *(undefined *)((int)puVar1 + 0x12) = 0;
  uVar2 = *puVar1;
  *(undefined2 *)(puVar1 + 4) = 2;
  *(char *)(puVar1 + 5) = (char)((uint)uVar2 >> 0x18);
  *(char *)((int)puVar1 + 0x17) = (char)uVar2;
  *(char *)((int)puVar1 + 0x15) = (char)((uint)uVar2 >> 0x10);
  *(char *)((int)puVar1 + 0x16) = (char)((uint)uVar2 >> 8);
  iVar3 = FUN_0000f804((int)*(short *)(puVar1 + 1),local_54,0x30,0,puVar1 + 4,0x10);
  iVar7 = DAT_0000e338;
  if (iVar3 == 0x30) {
    puVar8 = puVar1 + 8;
    *(undefined2 *)puVar8 = 2;
    *(undefined2 *)((int)puVar1 + 0x22) = 0;
    puVar1[9] = 0;
    FUN_00011eb0((int)*(short *)(puVar1 + 1),puVar8,0x10);
    local_58 = 0x10;
    do {
      iVar3 = FUN_0000f3c4((int)*(short *)(puVar1 + 1),local_54,0x30,0,puVar8,&local_58);
    } while (iVar3 == -0xb);
    iVar7 = iVar3;
    if ((-1 < iVar3) && (iVar7 = DAT_0000e338, (local_54[0] & 7) == 4)) {
      uVar4 = ((uint)local_2b + (uint)local_2c * 0x100) * 0x100;
      uVar5 = uVar4 + local_2a;
      uVar6 = uVar5 * 0x100;
      iVar7 = uVar6 + local_29;
      iVar9 = (((uint)CARRY4((uint)local_2b,(uint)local_2c * 0x100) * 0x100 +
               (uint)CARRY4(uVar4,(uint)local_2a)) * 0x100 | uVar5 >> 0x18) +
              (uint)CARRY4(uVar6,(uint)local_29);
      *param_1 = iVar7;
      param_1[1] = iVar9;
      puVar1[2] = iVar7;
      puVar1[3] = iVar9;
      return iVar3;
    }
  }
  FUN_00010f2c(s_Error___d__at_line___d__in_funct_0000e300,iVar7);
  return iVar7;
}



void FUN_0000e340(void)

{
  char *pcVar1;
  undefined auStack_34 [52];
  
  FUN_00016410(auStack_34);
  if (*(char *)(DAT_0000e480 + 0xd28) != '\0') {
    if ((*(byte *)(DAT_0000e480 + 0xd28) >> 4 & 1) == 0) {
      if ((*(byte *)(DAT_0000e480 + 0xd28) >> 3 & 1) == 0) {
        if ((*(byte *)(DAT_0000e480 + 0xd28) >> 1 & 1) == 0) {
          if ((*(byte *)(DAT_0000e480 + 0xd28) & 1) == 0) {
            pcVar1 = s_Unknown_0000e3b0;
          }
          else {
            pcVar1 = s_IACCVIOL__Instruction_Access_Vio_0000e3b8;
          }
        }
        else {
          pcVar1 = s_DACCVIOL__Data_Access_Violation___0000e3e0;
        }
      }
      else {
        pcVar1 = s_MUNSTKERR__Unstacking_Error__RD__0000e410;
      }
    }
    else {
      pcVar1 = s_FMSTKERR__Stacking_Error__RD_WR_f_0000e447 + 1;
    }
    FUN_00015bac(auStack_34,*DAT_0000e484,0,0x474,*DAT_0000e47c,pcVar1,
                 *(undefined4 *)(DAT_0000e480 + 0xd34));
  }
  return;
}



int FUN_0000e5c4(uint param_1,short *param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 local_28;
  int local_24;
  
  if ((*(int *)(param_4 + 0xc) == 0) || (*(short *)(param_4 + 2) == 0)) {
    return -7;
  }
  if (7 < (param_1 & 8)) {
    return -9;
  }
  local_28 = param_3;
  local_24 = param_4;
  iVar3 = FUN_0000f9b0(0xf,param_1 & 0xf);
  if (iVar3 != 10) {
    FUN_00015738(iVar3);
    piVar2 = DAT_0000e6f4;
    local_24 = *(undefined4 *)(param_4 + 0xc);
    iVar6 = iVar3 * 0xc;
    *(undefined4 **)(iVar6 + *DAT_0000e6f4 + 0x14) = &local_28;
    local_28 = param_3;
    FUN_00015a80();
    FUN_00015f58(*piVar2 + 0xa0);
    FUN_0000bae6(*piVar2 + 0xa4,0);
    if ((1 < *(byte *)(*piVar2 + 0x9c)) || (iVar4 = FUN_00015758(*piVar2 + 0xa4), iVar4 != -100)) {
      iVar4 = FUN_0001527c();
      if (iVar4 != 0) {
        return iVar4;
      }
      if (*DAT_0000e6f8 != '\x01') {
        bVar1 = *(byte *)(*piVar2 + 0x9c);
        if (bVar1 < 2) {
          return -7;
        }
        iVar4 = *piVar2;
        *(byte *)(*piVar2 + 0x9c) = bVar1 - 1;
        FUN_00016144(iVar4 + 0xa0);
        iVar4 = FUN_0000eba8(param_2,param_4,param_3);
        iVar5 = FUN_00015a2c();
        if (iVar5 == 0) {
          iVar5 = *piVar2;
          if (iVar4 == 0) {
            if ((1 << (param_1 & 0xf) & (uint)*(byte *)(iVar5 + 0xaa)) == 0) {
              iVar6 = FUN_00015758(iVar6 + iVar5 + 0x10);
            }
            else {
              if (*param_2 == -0x6bf6) {
                uVar7 = 6;
              }
              else {
                uVar7 = 7;
              }
              iVar6 = FUN_00015028(iVar6 + iVar5 + 0x10,&DAT_00002710,uVar7);
            }
            if (iVar6 == -100) {
              return -100;
            }
          }
          FUN_00010108(iVar3);
          return iVar4;
        }
        return iVar5;
      }
      iVar3 = FUN_00015a2c();
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    return -100;
  }
  return DAT_0000e6f0;
}



void FUN_0000e6fc(int *param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (*(short *)(param_1 + 8) == 0) {
    return;
  }
  if ((*DAT_0000e828 != 0) && (iVar2 = FUN_00014138(param_2 & 0xffff), iVar2 != 0)) {
    return;
  }
  piVar5 = *DAT_0000e82c;
  if (((piVar5 != (int *)0x0) && ((param_2 >> 7 & 1) != 0)) && (param_1 != piVar5)) {
    (**(code **)(*piVar5 + 0x20))
              (piVar5,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11);
    return;
  }
  uVar6 = *DAT_0000e830;
  uVar3 = thunk_FUN_000163d0(uVar6);
  cVar1 = *(char *)((int)param_1 + 0x1e);
  iVar2 = param_1[6];
  param_1[6] = iVar2 + 2;
  if (cVar1 == -1) goto LAB_0000e7ea;
  iVar7 = param_1[3];
  if (param_1[4] == iVar7) {
    if (cVar1 == '\0') {
      iVar4 = param_1[2];
      goto LAB_0000e78a;
    }
    *(undefined *)((int)param_1 + 0x1e) = 0xff;
  }
  else {
    iVar4 = iVar7 + 0x20;
LAB_0000e78a:
    param_1[3] = iVar4;
  }
  FUN_00011d50(iVar7);
  *(int *)(iVar7 + 8) = iVar2;
  *(undefined4 *)(iVar7 + 0x14) = param_5;
  *(undefined4 *)(iVar7 + 0x1c) = param_7;
  *(undefined4 *)(iVar7 + 0x18) = param_6;
  *(undefined4 *)(iVar7 + 0x10) = param_4;
  *(uint *)(iVar7 + 0xc) = param_3 | param_2 & 0xffff0000;
  iVar7 = param_1[3];
  if (param_1[4] == iVar7) {
    if (cVar1 == '\0') {
      iVar4 = param_1[2];
      goto LAB_0000e7ce;
    }
    *(undefined *)((int)param_1 + 0x1e) = 0xff;
  }
  else {
    iVar4 = iVar7 + 0x20;
LAB_0000e7ce:
    param_1[3] = iVar4;
  }
  *(undefined4 *)(iVar7 + 0x14) = param_9;
  *(undefined4 *)(iVar7 + 0x18) = param_10;
  *(undefined4 *)(iVar7 + 0x1c) = param_11;
  *(int *)(iVar7 + 8) = iVar2 + 1;
  *(undefined4 *)(iVar7 + 0xc) = 0xffffffff;
  *(undefined4 *)(iVar7 + 0x10) = param_8;
LAB_0000e7ea:
  FUN_00013a6c(uVar6,uVar3);
  return;
}



longlong FUN_0000e834(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  
  if ((int)(param_2 ^ param_4) < 0) {
    uVar7 = 0x80000000;
  }
  else {
    uVar7 = 0;
  }
  uVar6 = (param_4 << 1) >> 0x15;
  if (uVar6 == 0) {
    return 0;
  }
  uVar5 = (param_4 & 0xfffff) * 2 + (uint)((param_3 & 0x80000000) != 0) | 0x200000;
  if (uVar6 != 0x7ff) {
    uVar3 = (param_2 << 1) >> 0x15;
    if (uVar3 == 0) {
      return 0;
    }
    uVar2 = (param_2 & 0xfffff) * 2 + (uint)((param_1 & 0x80000000) != 0) | 0x200000;
    if (uVar3 != 0x7ff) {
      iVar4 = uVar3 - uVar6;
      iVar1 = 0;
      uVar6 = 0;
      uVar3 = 0x36;
      while( true ) {
        param_1 = param_1 * 2;
        bVar10 = uVar5 <= uVar2;
        if (uVar2 == uVar5) {
          bVar10 = param_3 * 2 <= param_1;
        }
        if (bVar10 == false) {
          bVar10 = CARRY4(uVar6,uVar6);
          uVar6 = uVar6 * 2;
          iVar1 = iVar1 * 2 + (uint)bVar10;
        }
        else {
          uVar8 = uVar6 * 2;
          bVar9 = CARRY4(uVar6,uVar6);
          uVar6 = uVar6 * 2 + (uint)bVar10;
          iVar1 = iVar1 * 2 + (uint)(bVar9 || CARRY4(uVar8,(uint)bVar10));
          bVar10 = param_1 < param_3 * 2;
          param_1 = param_1 + param_3 * -2;
          uVar2 = (uVar2 - uVar5) - (uint)bVar10;
        }
        uVar8 = uVar3 - 1;
        if ((uVar8 == 0) || ((uVar2 | param_1) == 0)) break;
        uVar2 = uVar2 * 2 + (uint)((param_1 & 0x80000000) != 0);
        uVar3 = uVar8;
      }
      if (uVar8 < 0x20) {
        if (uVar8 < 0x16) {
          uVar5 = iVar1 << (uVar8 & 0xff) | uVar6 >> (0x20 - uVar8 & 0xff);
          uVar6 = uVar6 << (uVar8 & 0xff);
        }
        else {
          uVar5 = uVar6 >> (0x20 - uVar8 & 0xff);
          uVar6 = uVar6 << (uVar8 & 0xff);
        }
      }
      else {
        uVar5 = uVar6 << (uVar3 - 0x21 & 0xff);
        uVar6 = 0;
      }
      if ((uVar5 & 0x200000) == 0) {
        uVar3 = uVar6 & 0x80000000;
        uVar6 = uVar6 << 1;
        uVar5 = uVar5 * 2 + (uint)(uVar3 != 0);
        iVar4 = iVar4 + -1;
      }
      uVar3 = uVar6 + 1;
      uVar5 = uVar5 + (0xfffffffe < uVar6);
      if ((uVar5 & 0x400000) == 0) {
        uVar5 = uVar5 & 0xffdfffff;
      }
      else {
        iVar4 = iVar4 + 1;
        uVar5 = uVar5 & 0xffbfffff;
      }
      bVar11 = SCARRY4(iVar4,0x3ff);
      uVar6 = iVar4 + 0x3ff;
      bVar10 = (int)uVar6 < 0;
      bVar9 = uVar6 == 0;
      if (bVar9 || bVar10 != bVar11) {
        uVar5 = 0;
      }
      if (bVar9 || bVar10 != bVar11) {
        uVar3 = 0;
      }
      if (bVar9 || bVar10 != bVar11) {
        return CONCAT44(uVar5,uVar3);
      }
      if (uVar6 < 0x7ff) {
        return CONCAT44(uVar5 >> 1 | uVar6 * 0x100000 | uVar7,
                        (uint)((uVar5 & 1) != 0) << 0x1f | uVar3 >> 1);
      }
    }
  }
  return (ulonglong)(uVar7 | 0x7ff00000) << 0x20;
}



undefined4 FUN_0000e96c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  FUN_00014c74(4,0x101,param_3,param_4,param_3,param_4);
  uVar1 = DAT_0000ea68;
  FUN_00016286(DAT_0000ea68);
  FUN_000162a2(uVar1);
  FUN_00015e98(uVar1);
  uVar5 = DAT_0000ea70;
  if (((DAT_00000402 != 1) && (DAT_00000402 != 2)) && (uVar5 = DAT_0000ea6c, DAT_00000402 < 3)) {
    uVar5 = 0;
  }
  uVar3 = FUN_00012938(4);
  FUN_00011b08(uVar1,uVar3,uVar5,0,0,DAT_0000ea74);
  iVar4 = FUN_00015cb8(5);
  if (iVar4 == 0) {
    *DAT_0000ea7c = 0;
  }
  else {
    iVar4 = *DAT_0000ea78;
    *DAT_0000ea7c = iVar4 != 0;
    if (iVar4 != 0) {
      FUN_00011a94(DAT_0000ea80,0xff,0x50);
      FUN_00015ab8(0xc);
      FUN_00015ab8(0xd);
      FUN_00016358(uVar1,0x10000000);
      FUN_00016358(uVar1,0x8000000);
      FUN_0001634c(uVar1,0x8000);
      FUN_0001634c(uVar1,0x4000);
      FUN_00015c36(uVar1,1,1);
      FUN_0000bd10(0xc1,DAT_0000ea84,0x20);
      FUN_00014508(uVar1,0x20000);
      FUN_0000bc48(DAT_0000ea88,s_FDMAQueue_0000ea5b + 1,4,1);
    }
  }
  FUN_000162be(uVar1);
  puVar2 = DAT_0000ea8c;
  *DAT_0000ea8c = 1;
  return *puVar2;
}



void FUN_0000ea90(undefined *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  undefined auStack_54 [52];
  
  if (param_1 == (undefined *)0x0) {
    param_1 = auStack_54;
  }
  FUN_000140f4(param_1);
  uVar3 = *DAT_0000eb7c;
  if (((*DAT_0000eb80 != 0) && ((uVar3 & *DAT_0000eb84) != 0)) &&
     (((uVar3 & *DAT_0000eb88) != 0 || ((uVar3 & **DAT_0000eb8c) != 0)))) {
    (**DAT_0000eb94)(*DAT_0000eb90,uVar3,param_2,param_3,param_4,*(undefined4 *)(param_1 + 0x10),
                     param_6,param_7,0,0,0);
  }
  FUN_0001641c();
  puVar2 = DAT_0000eb98;
  uVar1 = *DAT_0000eb98;
  *DAT_0000eb98 = uVar1 + 1;
  FUN_00016228();
  if ((*DAT_0000eb9c != (code *)0x0) && (uVar1 < *DAT_0000eba0)) {
    (**DAT_0000eb9c)(param_1);
  }
  if ((*DAT_0000eba4 != '\x01') || (auStack_54 == param_1)) {
    FUN_00015c00(s_Fxdc_runtime_Error_raise__termin_0000eb4b + 1);
  }
  FUN_0001641c();
  *puVar2 = *puVar2 - 1;
  FUN_00016228();
  return;
}



undefined4 FUN_0000eba8(undefined2 *param_1,ushort *param_2,int param_3,uint param_4)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  
  piVar2 = DAT_0000ecb4;
  puVar3 = (undefined4 *)*DAT_0000ecb4;
  if (param_1 == (undefined2 *)0x0) {
    return 0xfffffff9;
  }
  puVar3[0x2b] = param_1;
  puVar3[0x2c] = param_3;
  puVar3[0x2d] = param_2;
  *(undefined2 *)(puVar3 + 2) = *param_1;
  if (param_2 == (ushort *)0x0) {
    uVar6 = *(byte *)(param_1 + 1) + 3 & 0xfffc;
    uVar7 = param_4;
  }
  else {
    uVar7 = *(byte *)(param_1 + 1) + 3 & 0xfffc;
    uVar6 = (*param_2 + 3 & 0xfffc) + (short)uVar7;
  }
  *(ushort *)((int)puVar3 + 10) = uVar6;
  bVar1 = false;
  if ((param_2 != (ushort *)0x0) && ((short)param_2[1] < 0)) {
    uVar6 = -param_2[1];
    param_2[1] = uVar6;
    bVar1 = true;
    *(ushort *)((int)puVar3 + 10) = uVar6 + *(short *)((int)puVar3 + 10);
  }
  iVar4 = FUN_00012300(*puVar3,DAT_0000ecb8,4,uVar7,param_4);
  if (iVar4 != 4) {
    return 0xfffffffc;
  }
  iVar4 = FUN_00012300(*(undefined4 *)*piVar2,(undefined4 *)*piVar2 + 2,4);
  if (iVar4 != 4) {
    return 0xfffffffc;
  }
  if (param_3 != 0) {
    uVar7 = (uint)*(byte *)(param_1 + 1);
    puVar3 = (undefined4 *)*piVar2;
    if (uVar7 == 0) goto LAB_0000ec54;
    uVar5 = FUN_00012300(*puVar3,param_3,uVar7 + 3 & 0xfffffffc);
    if (uVar5 != (uVar7 + 3 & 0xfffffffc)) {
      return 0xfffffffc;
    }
  }
  puVar3 = (undefined4 *)*piVar2;
LAB_0000ec54:
  if ((bVar1) &&
     (uVar6 = param_2[1],
     uVar7 = FUN_00012300(*puVar3,*(undefined4 *)(param_2 + 6),(int)(short)uVar6 + 3U & 0xfffffffc),
     uVar7 != ((int)(short)uVar6 + 3U & 0xfffffffc))) {
    return 0xfffffffc;
  }
  if ((param_2 != (ushort *)0x0) && (uVar7 = (uint)*param_2, uVar7 != 0)) {
    if ((*(byte *)(param_1 + 1) & 3) != 0) {
      return 0xfffffff9;
    }
    uVar5 = FUN_00012300(*(undefined4 *)*piVar2,*(undefined4 *)(param_2 + 4),uVar7 + 3 & 0xfffffffc)
    ;
    if (uVar5 != (uVar7 + 3 & 0xfffffffc)) {
      return 0xfffffffc;
    }
  }
  return 0;
}



int FUN_0000ecbc(uint param_1)

{
  int iVar1;
  
  if ((param_1 & 0xff0) < 0x30) {
    iVar1 = DAT_0000edc0 + (param_1 & 0xfff) * 0x28;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



void FUN_0000ecd8(uint param_1)

{
  FUN_0000ecbc(param_1 >> 0x10);
  return;
}



undefined2 FUN_0000ecde(undefined2 param_1)

{
  return param_1;
}



uint FUN_0000ece2(uint param_1)

{
  return param_1 >> 0x1c;
}



void FUN_0000ece6(undefined4 param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar1 = DAT_0000edc4;
  iVar4 = *DAT_0000edc4;
  if ((((uint)(param_2 + iVar4) < 1000) &&
      (piVar2 = (int *)FUN_0000ecbc(param_1), piVar2 != (int *)0x0)) && (*piVar2 == 0)) {
    *piVar1 = param_2 + iVar4;
    *piVar2 = (int)piVar1 + iVar4 + 4;
    *(short *)((int)piVar2 + 10) = (short)param_2;
    puVar3 = (undefined4 *)FUN_0000ecbc(param_1);
    if (puVar3 != (undefined4 *)0x0) {
      *(undefined *)((int)puVar3 + 0x1a) = 1;
      *(byte *)(puVar3 + 3) = *(byte *)(puVar3 + 3) | 0x20;
      puVar3[7] = *puVar3;
      return;
    }
    do {
                    // WARNING: Do nothing block with infinite loop
    } while( true );
  }
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_0000ed30(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = FUN_0000ecd8();
  if (((iVar1 != 0) && ((*(byte *)(iVar1 + 0xc) >> 5 & 1) != 0)) &&
     ((param_2 + param_1 & 0xffffU) <= (uint)*(ushort *)(iVar1 + 10))) {
    iVar1 = FUN_0000ecd8(param_1);
    if (*(byte *)(iVar1 + 0x1a) < 5) {
      pcVar2 = *(code **)(DAT_0000edc8 + (uint)*(byte *)(iVar1 + 0x1a) * 8 + -4);
      (*pcVar2)(param_1,param_2,param_3,pcVar2,param_4);
    }
  }
  return;
}



void FUN_0000ed6a(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_0000ecd8();
  iVar2 = FUN_0000ecde(param_1);
  if (((iVar1 != 0) && ((*(byte *)(iVar1 + 0xc) >> 5 & 1) != 0)) &&
     ((param_2 + iVar2 & 0xffffU) <= (uint)*(ushort *)(iVar1 + 10))) {
    iVar1 = FUN_0000ecd8(param_1);
    uVar3 = FUN_0000ece2(param_1,*(undefined *)(iVar1 + 0x1a));
    iVar1 = (int)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 != 0) {
      iVar1 = (int)uVar3;
    }
    if ((iVar1 < 5) && (iVar1 != 0)) {
      (**(code **)(DAT_0000edc8 + iVar1 * 8 + -8))(param_1,param_2);
    }
  }
  return;
}



uint FUN_0000edb8(int param_1)

{
  return (uint)(param_1 << 4) >> 0x14;
}



int FUN_0000edcc(uint param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short local_30;
  byte local_2e;
  undefined2 local_24;
  undefined local_22;
  undefined local_21;
  short local_20;
  byte local_1e;
  
  local_21 = 4;
  if ((*DAT_0000eecc == '\x01') || ((*DAT_0000eed0 >> 9 & 1) == 0)) {
    return -100;
  }
  if (*param_2 == 2) {
    local_24 = 0x9406;
  }
  else {
    if (*param_2 != 9) {
      return -2;
    }
    local_24 = 0x9606;
  }
  local_2e = (byte)param_1;
  local_22 = 0xc;
  local_30 = 0;
  FUN_00015186(param_2,&local_30);
  iVar1 = FUN_00014ca4(&local_20,9,param_1 & 0xf);
  if (iVar1 == 10) {
    return DAT_0000eed4 + 2;
  }
  iVar2 = FUN_0001144c(&local_24,&local_30,0);
  if (iVar2 != 0) {
    return iVar2;
  }
  if ((param_1 & 0xff) == (uint)local_2e) {
    iVar3 = (int)local_30;
    iVar2 = *DAT_0000eec8;
    if (iVar3 == 0) {
      if ((1 << (param_1 & 0xf) & (uint)*(byte *)(iVar2 + 0xaa)) == 0) {
        iVar2 = FUN_00015758(iVar2 + iVar1 * 0xc + 0x10);
      }
      else {
        iVar2 = FUN_00015028(iVar2 + iVar1 * 0xc + 0x10,&DAT_00002710,3);
      }
      if (iVar2 == -100) {
        return -100;
      }
      if ((param_1 & 0xff) != (uint)local_1e) goto LAB_0000eeae;
      iVar3 = (int)local_20;
    }
    FUN_00010108(iVar1);
  }
  else {
LAB_0000eeae:
    iVar3 = -7;
  }
  return iVar3;
}



void FUN_0000eedc(undefined *param_1,int param_2)

{
  undefined uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  piVar2 = DAT_0000efd0;
  uVar5 = (uint)*(byte *)((int)DAT_0000efd0 + param_2 + 4);
  if (uVar5 < 2) {
    piVar2 = DAT_0000efd0 + param_2 + 0xf;
    if (*piVar2 < 300) {
      *param_1 = 3;
      iVar4 = *piVar2 + 1;
LAB_0000ef32:
      *piVar2 = iVar4;
      return;
    }
    uVar1 = 4;
LAB_0000ef38:
    *param_1 = uVar1;
    return;
  }
  if (uVar5 == 2) {
    piVar3 = DAT_0000efd0 + param_2 + 0xf;
    if (299 < *piVar3) {
      uVar1 = 5;
      goto LAB_0000ef38;
    }
    *param_1 = 3;
    iVar6 = *piVar2;
    iVar4 = *piVar3 + 1;
    *piVar3 = iVar4;
    if (iVar6 <= iVar4) goto LAB_0000ef32;
  }
  else {
    if (1 < uVar5 - 3) {
      return;
    }
    *param_1 = 0;
    piVar2[param_2 + 0xf] = 0;
  }
  return;
}



undefined FUN_0000ef48(undefined *param_1)

{
  int iVar1;
  int iVar2;
  undefined uVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = FUN_00002870();
  iVar1 = DAT_0000efd0;
  if (iVar2 == 0) {
    uVar3 = 2;
  }
  else {
    uVar3 = 3;
  }
  puVar5 = (undefined *)(DAT_0000efd0 + 0xc);
  *(undefined *)(DAT_0000efd0 + 0xe) = uVar3;
  FUN_0000eedc(param_1,10);
  iVar2 = FUN_0000645a(0);
  if (iVar2 != 0) {
    iVar2 = (uint)*(byte *)(iVar2 + 4) * 0x88;
    iVar6 = DAT_0000efd4 + iVar2;
    uVar4 = *(uint *)(iVar6 + 0x2c);
    iVar7 = *(int *)(iVar6 + 0x28);
    if (((uVar4 * 100 <= (iVar7 + uVar4) * 3) || ((iVar7 + uVar4 < 0x3e9 && (uVar4 < 0x1f)))) &&
       (*(int *)(iVar6 + 0x20) != *(int *)(iVar1 + 0x10) - iVar7)) {
      iVar2 = iVar2 + DAT_0000efd4;
      *(int *)(iVar1 + 0x10) = *(int *)(iVar2 + 0x20) + *(int *)(iVar2 + 0x28);
      uVar3 = 3;
      goto LAB_0000efbe;
    }
  }
  uVar3 = 2;
LAB_0000efbe:
  *puVar5 = uVar3;
  FUN_0000eedc(param_1,8);
  return *param_1;
}



int * FUN_0000efd8(int *param_1,int *param_2,int param_3,int param_4,undefined4 param_5,
                  undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  FUN_00010ddc(param_3,param_1[6],param_1[7]);
  uVar1 = *DAT_0000f0c4;
  *(int *)(param_3 + 4) = param_3;
  if (param_4 == 0) goto LAB_0000f066;
  if (((uVar1 >> 4 & 1) != 0) &&
     (((*DAT_0000f0c8 >> 4 & 1) != 0 || ((**DAT_0000f0cc >> 4 & 1) != 0)))) {
    uVar2 = *DAT_0000f0d0;
    if (uVar2 == 0) {
      uVar3 = 8;
LAB_0000f022:
      if ((uVar1 & uVar3) == 0) goto LAB_0000f05a;
      if (uVar2 == 0) {
        uVar1 = 8;
      }
      else {
        uVar1 = uVar2 & 0xffef;
      }
      if ((*DAT_0000f0c8 & uVar1) == 0) {
        if (uVar2 == 0) {
          uVar2 = 8;
        }
        else {
          uVar2 = uVar2 & 0xffef;
        }
        if ((uVar2 & **DAT_0000f0cc) == 0) goto LAB_0000f05a;
      }
    }
    else {
      uVar3 = uVar2 & 0xffef;
      if (uVar3 != 0) goto LAB_0000f022;
    }
    if (param_4 != *(int *)(param_4 + 4)) {
      FUN_00013714(*DAT_0000f0d4,0,0x57);
    }
  }
LAB_0000f05a:
  FUN_00013f50(param_3,param_4,param_1[7],8);
LAB_0000f066:
  iVar4 = *(int *)(param_3 + 0xc);
  if (param_2 == (int *)0x0) {
    param_2 = (int *)FUN_00016428(param_1[3],param_1[5],param_1[2],param_6);
    if (param_2 == (int *)0x0) {
      return (int *)0x0;
    }
    FUN_0001641c(param_2);
    *param_2 = param_1[1];
    param_2[1] = *(int *)(param_1[1] + 4);
    **(int ***)(param_1[1] + 4) = param_2;
    *(int **)(param_1[1] + 4) = param_2;
    FUN_00016228();
    param_2 = param_2 + 2;
  }
  else {
    FUN_00011a94(param_2,0,param_1[5] + -8);
  }
  if (*param_1 != -1) {
    *param_2 = *param_1;
  }
  if (param_1[4] != 0) {
    *(undefined4 *)((int)param_2 + param_1[4]) = *(undefined4 *)(iVar4 + 4);
  }
  return param_2;
}



longlong FUN_0000f0d8(uint param_1,uint param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  
  if ((int)(param_2 ^ param_4) < 0) {
    uVar13 = 0x80000000;
  }
  else {
    uVar13 = 0;
  }
  uVar10 = (param_4 << 1) >> 0x15;
  if (uVar10 == 0) {
    return 0;
  }
  uVar9 = param_4 << 0xb | param_3 >> 0x15 | 0x80000000;
  if (uVar10 != 0x7ff) {
    uVar8 = (param_2 << 1) >> 0x15;
    if (uVar8 == 0) {
      return 0;
    }
    uVar6 = param_2 << 0xb | param_1 >> 0x15 | 0x80000000;
    if (uVar8 != 0x7ff) {
      uVar8 = uVar8 + uVar10;
      lVar1 = (ulonglong)uVar6 * (ulonglong)uVar9;
      uVar10 = (uint)lVar1;
      lVar2 = (ulonglong)uVar6 * (ulonglong)(param_3 << 0xb);
      uVar6 = (uint)((ulonglong)(param_1 << 0xb) * (ulonglong)(param_3 << 0xb) >> 0x20);
      lVar4 = lVar2 + (ulonglong)uVar6;
      uVar3 = (ulonglong)(param_1 << 0xb) * (ulonglong)uVar9;
      uVar7 = (uint)(uVar3 >> 0x20);
      uVar11 = (uint)(lVar4 + (uVar3 & 0xffffffff) >> 0x20);
      uVar12 = uVar11 + uVar7;
      uVar9 = uVar10 + uVar12;
      iVar5 = (int)((ulonglong)lVar1 >> 0x20) +
              (uint)CARRY4((uint)((ulonglong)lVar2 >> 0x20),(uint)CARRY4((uint)lVar2,uVar6)) +
              (uint)CARRY4((uint)((ulonglong)lVar4 >> 0x20),(uint)CARRY4((uint)lVar4,(uint)uVar3)) +
              (uint)CARRY4(uVar11,uVar7) + (uint)CARRY4(uVar10,uVar12);
      if (iVar5 < 0) {
        uVar10 = 0x400;
      }
      else {
        uVar10 = 0x200;
      }
      uVar6 = uVar9 + uVar10;
      iVar5 = iVar5 + (uint)CARRY4(uVar9,uVar10);
      if (iVar5 < 0) {
        uVar8 = uVar8 + 1;
      }
      else {
        uVar10 = uVar6 & 0x80000000;
        uVar6 = uVar6 * 2;
        iVar5 = iVar5 * 2 + (uint)(uVar10 != 0);
      }
      uVar10 = uVar8 - 0x3ff;
      bVar14 = uVar10 == 0;
      if (bVar14 || uVar8 < 0x3ff) {
        iVar5 = 0;
      }
      if (bVar14 || uVar8 < 0x3ff) {
        uVar6 = 0;
      }
      if (bVar14 || uVar8 < 0x3ff) {
        return CONCAT44(iVar5,uVar6);
      }
      if (uVar10 < 0x7ff) {
        return CONCAT44((uint)(iVar5 << 1) >> 0xc | uVar10 * 0x100000 | uVar13,
                        uVar6 >> 0xb | iVar5 << 0x15);
      }
    }
  }
  return (ulonglong)(uVar13 | 0x7ff00000) << 0x20;
}



void FUN_0000f1d4(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  short *psVar11;
  
  iVar3 = param_2;
  puVar6 = param_1;
  if (0 < param_2) {
    do {
      iVar3 = iVar3 + -1;
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    } while (iVar3 != 0);
  }
  piVar2 = DAT_0000f2c4;
  puVar6 = DAT_0000f2bc;
  *DAT_0000f2bc = param_1;
  if (0 < param_2) {
    iVar8 = 0;
    iVar3 = param_2;
    psVar11 = *DAT_0000f2c0;
    do {
      if (*psVar11 != 0) {
        uVar4 = (**(code **)(iVar8 * 4 + *piVar2))(0);
        param_1[iVar8] = uVar4;
      }
      iVar3 = iVar3 + -1;
      iVar8 = iVar8 + 1;
      psVar11 = psVar11 + 1;
    } while (iVar3 != 0);
  }
  iVar3 = *DAT_0000f2c8;
  *(undefined2 *)((int)puVar6 + 6) = 1;
  if (0 < iVar3) {
    iVar8 = 0;
    do {
      bVar1 = true;
      if (0 < param_2) {
        piVar9 = param_1 + -1;
        iVar10 = 0;
        iVar7 = param_2;
        do {
          piVar9 = piVar9 + 1;
          iVar5 = *piVar9;
          if (iVar5 != -1) {
            iVar5 = (**(code **)(iVar10 + *piVar2))();
            *piVar9 = iVar5;
          }
          iVar10 = iVar10 + 4;
          iVar7 = iVar7 + -1;
          bVar1 = (bool)(iVar5 == -1 & bVar1);
        } while (iVar7 != 0);
      }
      if (bVar1) goto LAB_0000f286;
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar3);
  }
  FUN_00015c00(s_xdc_runtime_Startup___maxPasses__0000f290);
LAB_0000f286:
  *DAT_0000f2bc = 0;
  return;
}



int FUN_0000f2cc(int *param_1,char **param_2,int **param_3,int *param_4)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *puVar5;
  char cVar6;
  undefined2 local_2c [2];
  undefined4 local_28;
  undefined4 local_24;
  
  pcVar3 = *param_2;
  piVar4 = *param_3;
  cVar6 = *pcVar3;
  bVar1 = false;
  iVar2 = 0;
  *param_2 = pcVar3 + 1;
  if (cVar6 == '$') {
    cVar6 = pcVar3[1];
    *param_2 = pcVar3 + 2;
    if (cVar6 == 'L') {
      puVar5 = (undefined4 *)((int)piVar4 + 3U & 0xfffffffc);
      piVar4 = puVar5 + 1;
      iVar2 = FUN_00013308(*puVar5,param_1,param_4[2]);
      param_4[3] = 0;
      *param_4 = *param_4 - iVar2;
    }
    if (cVar6 == 'F') {
      puVar5 = (undefined4 *)((int)piVar4 + 3U & 0xfffffffc);
      local_28 = *puVar5;
      piVar4 = puVar5 + 2;
      local_24 = puVar5[1];
      local_2c[0] = 0;
      iVar2 = FUN_0001104c(local_2c,param_1,param_4[2]);
      param_4[3] = 0;
      *param_4 = *param_4 - iVar2;
    }
    bVar1 = cVar6 == 'F' || cVar6 == 'L';
    if (cVar6 == 'S') {
      piVar4 = (int *)((int)piVar4 + 3U & 0xfffffffc);
      param_4[7] = *piVar4;
      *param_3 = piVar4 + 1;
      iVar2 = FUN_0000be00(*param_1,param_4[2],param_4[7],param_3,*(undefined2 *)(param_4 + 6));
      if (*param_1 != 0) {
        *param_1 = iVar2 + *param_1;
      }
      piVar4 = *param_3;
      param_4[3] = 0;
      bVar1 = true;
      *param_4 = *param_4 - iVar2;
    }
  }
  if (cVar6 == 'f') {
    if (*(short *)(param_4 + 6) == 0) {
      piVar4 = (int *)(((int)piVar4 + 7U & 0xfffffff8) + 8);
    }
    else {
      piVar4 = (int *)(((int)piVar4 + 3U & 0xfffffffc) + 4);
    }
  }
  if (!bVar1) {
    *(char *)param_4[7] = cVar6;
    param_4[3] = 1;
  }
  *param_3 = piVar4;
  return iVar2;
}



int FUN_0000f3c4(uint param_1,undefined4 param_2,short param_3,byte param_4,ushort *param_5,
                short *param_6)

{
  int iVar1;
  undefined auStack_38 [2];
  short local_36;
  undefined4 local_2c;
  short local_28;
  byte local_26;
  byte local_25;
  ushort local_24;
  undefined2 local_22;
  undefined2 uStack_20;
  ushort local_1e;
  
  if ((*DAT_0000f498 == '\x01') || ((*DAT_0000f49c >> 9 & 1) == 0)) {
    iVar1 = -100;
  }
  else {
    FUN_000164f4(auStack_38);
    local_26 = (byte)param_1;
    if (*param_6 == 0x10) {
      local_25 = param_4 & 0xf | 0x20;
    }
    else {
      if (*param_6 != 0x1c) {
        return -2;
      }
      local_25 = param_4 & 0xf | 0x30;
    }
    local_36 = param_3;
    local_2c = param_2;
    local_28 = param_3;
    iVar1 = FUN_0000e5c4(param_1 & 0xff,DAT_0000f4a0,&local_28,auStack_38);
    if (iVar1 == 0) {
      iVar1 = (int)local_28;
      if (-1 < iVar1) {
        if (local_26 == param_1) {
          *param_5 = (ushort)local_25;
          if (*param_5 == 2) {
            param_5[1] = local_24;
            *(uint *)(param_5 + 2) = CONCAT22(local_1e,uStack_20);
            *param_6 = 0x10;
          }
          else if (*param_5 == 9) {
            param_5[1] = local_24;
            *(uint *)(param_5 + 4) = CONCAT22(uStack_20,local_22);
            param_5[6] = local_1e;
          }
        }
        else {
          iVar1 = -7;
        }
      }
    }
    else {
      iVar1 = (int)(short)iVar1;
    }
  }
  return iVar1;
}



int FUN_0000f4a4(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  
  piVar1 = DAT_0000f578;
  uVar5 = 1 << (param_1 & 0xf);
  do {
    FUN_00015f58(*piVar1 + 0xa0);
    FUN_0000bae6(*piVar1 + 0xa4,0);
    iVar3 = *piVar1;
    if ((uVar5 & *(byte *)(iVar3 + 0xab)) != 0) {
      iVar3 = -1;
LAB_0000f4f8:
      FUN_00016144(*piVar1 + 0xa0);
      return iVar3;
    }
    bVar4 = *(byte *)(iVar3 + 0x9c);
    if (bVar4 < 3) {
      if ((uVar5 & *(byte *)(iVar3 + 0xaa)) != 0) {
        iVar3 = -0xb;
        goto LAB_0000f4f8;
      }
      iVar3 = FUN_00015758(*piVar1 + 0xa4);
      if (iVar3 == -100) {
        return -100;
      }
      bVar4 = *(byte *)(*piVar1 + 0x9c);
    }
    if (2 < bVar4) {
      iVar3 = FUN_0001527c();
      if (iVar3 != 0) {
        return iVar3;
      }
      if (*DAT_0000f574 == '\x01') {
        iVar3 = FUN_00015a2c();
        if (iVar3 == 0) {
          return -100;
        }
        return iVar3;
      }
      bVar4 = *(byte *)(*piVar1 + 0x9c);
      if (bVar4 < 3) {
        return -7;
      }
      iVar3 = *piVar1;
      *(byte *)(*piVar1 + 0x9c) = bVar4 - 1;
      FUN_00016144(iVar3 + 0xa0);
      sVar2 = FUN_0000eba8(param_2,param_4,param_3);
      iVar3 = FUN_00015a2c();
      if (iVar3 != 0) {
        sVar2 = (short)iVar3;
      }
      return (int)sVar2;
    }
    FUN_00016144(*piVar1 + 0xa0);
  } while( true );
}



int FUN_0000f57c(uint param_1)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  
  pcVar2 = DAT_0000f64c;
  piVar1 = DAT_0000f648;
  if ((param_1 >> 0xd & 1) == 0) {
    puVar5 = &DAT_00002710;
  }
  else {
    puVar5 = (undefined *)0xffff;
  }
  while( true ) {
    while( true ) {
      if (*(char *)(*piVar1 + 0x98) != '\x01') {
        iVar3 = FUN_00015a2c();
        if (iVar3 != 0) {
          return iVar3;
        }
        if (*(char *)(*piVar1 + 0xa9) != *pcVar2) {
          FUN_0000bb96(DAT_0000f650,0,0);
          return 0;
        }
        return 0;
      }
      if (*(char *)(*piVar1 + 0xa9) != *pcVar2) break;
      iVar3 = FUN_0000bae6(*piVar1 + 0x94,puVar5);
      if (iVar3 != 0) {
        *(undefined *)(*piVar1 + 0x98) = 0;
        iVar3 = FUN_00015a2c();
        if (iVar3 == 0) {
          FUN_000133bc(4,param_1,puVar5);
          return -100;
        }
        return iVar3;
      }
    }
    iVar3 = FUN_0000b6e8();
    iVar4 = *piVar1;
    if (iVar3 != 0) break;
    *(char *)(iVar4 + 0xa9) = *(char *)(iVar4 + 0xa9) + '\x01';
    if (*(char *)(iVar4 + 0xc4) == '\x01') {
      iVar3 = *piVar1;
      *(undefined *)(iVar4 + 0x98) = 0;
      FUN_0000bae6(iVar3 + 0x94,0);
    }
    else if (*(char *)(iVar4 + 0xc4) == '\x02') {
      FUN_00012f68(1);
      *(undefined4 *)(*piVar1 + 0xb8) = 0;
    }
  }
  if (iVar3 == -100) {
    return -100;
  }
  iVar3 = FUN_00015a2c();
  if (iVar3 == 0) {
    return -100;
  }
  return iVar3;
}



undefined4 FUN_0000f654(int *param_1,int param_2,uint param_3,uint param_4)

{
  code **ppcVar1;
  code *pcVar2;
  uint uVar3;
  code **ppcVar4;
  
  ppcVar1 = DAT_0000f728;
  ppcVar4 = DAT_0000f728 + -1;
  (**ppcVar4)();
  if ((*param_1 != -1) && ((param_3 == 4 || (param_4 != 0)))) {
    if (param_1[1] == 0) {
      uVar3 = param_1[5];
    }
    else {
      uVar3 = param_1[5];
      if ((uVar3 >> 3 & 1) != 0) {
        FUN_00015ce8(param_1[1] + -1,uVar3 >> 4);
        uVar3 = param_1[5];
      }
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      uVar3 = uVar3 & 0xfffffff7;
      param_1[4] = 0;
    }
    if (param_3 == 0) {
      param_3 = 1;
    }
    param_1[5] = param_3 | uVar3 & 0xfffffff8;
    if (param_4 == 1) {
      param_2 = 0;
    }
    if (0x100 < param_4) {
      param_4 = 0x100;
    }
    if (param_2 == 0) {
      param_4 = param_4 + 1;
      param_2 = FUN_00014f48(param_4);
      pcVar2 = *ppcVar1;
      if (param_2 == 0) {
        param_1[1] = 0;
        param_1[5] = param_1[5] | 0x400;
        goto LAB_0000f6de;
      }
      param_1[5] = param_1[5] | 8;
    }
    else {
      pcVar2 = *ppcVar1;
    }
    param_2 = param_2 + 1;
    param_1[1] = param_2;
    param_1[4] = param_2;
    param_1[2] = param_2;
    param_1[3] = param_4 + param_2 + -1;
    (*pcVar2)();
    (**ppcVar4)();
    pcVar2 = *ppcVar1;
    *DAT_0000f720 = DAT_0000f724;
    (*pcVar2)();
    return 0;
  }
  pcVar2 = *ppcVar1;
LAB_0000f6de:
  (*pcVar2)();
  return 0xffffffff;
}



int FUN_0000f72c(undefined4 param_1,short param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short local_40 [2];
  undefined auStack_3c [16];
  short local_2c [4];
  undefined4 local_24;
  short local_1c;
  undefined local_1a;
  
  if ((*DAT_0000f7f8 == '\x01') || ((*DAT_0000f7fc >> 9 & 1) == 0)) {
LAB_0000f7be:
    iVar2 = -100;
  }
  else {
    FUN_000164f4(local_2c);
    local_1a = (undefined)param_4;
    local_2c[0] = param_2;
    local_24 = param_1;
    local_1c = param_2;
    iVar2 = FUN_0000f9b0(0xb,8);
    if (iVar2 == 10) {
      return DAT_0000f800 + 2;
    }
    FUN_00015738(iVar2);
    piVar1 = DAT_0000f7f0;
    iVar3 = *DAT_0000f7f0;
    iVar4 = iVar2 * 0xc;
    *(short **)(*DAT_0000f7f0 + iVar4 + 0x14) = local_40;
    if (param_4 == 3) {
      *(byte *)(iVar3 + iVar4 + 0x19) = *(byte *)(iVar3 + iVar4 + 0x19) | 0x80;
    }
    FUN_00015a80();
    iVar3 = FUN_0001144c(DAT_0000f7f4,&local_1c,local_2c);
    if (iVar3 != 0) {
      return iVar3;
    }
    if (local_1c == 0) {
      iVar4 = FUN_00015758(iVar4 + *piVar1 + 0x10);
      if (iVar4 == -100) goto LAB_0000f7be;
      local_1c = local_40[0];
      if (local_40[0] == 0) {
        FUN_00010ddc(param_3,auStack_3c);
      }
    }
    FUN_00010108(iVar2);
    iVar2 = (int)local_1c;
  }
  return iVar2;
}



uint FUN_0000f804(uint param_1,int param_2,uint param_3,byte param_4,short *param_5)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined2 local_40 [4];
  int local_38;
  undefined2 local_30;
  undefined local_2e;
  byte local_2d;
  undefined2 local_24;
  undefined local_22;
  undefined local_21;
  
  local_24 = 0;
  local_22 = 0;
  local_21 = 0;
  if ((*DAT_0000f8d4 == '\x01') || ((*DAT_0000f8d8 >> 9 & 1) == 0)) {
    param_3 = 0xffffff9c;
  }
  else {
    FUN_000164f4(local_40);
    if (*param_5 == 2) {
      local_24 = 0x940d;
    }
    else {
      if (*param_5 != 9) {
        return 0xfffffffe;
      }
      local_24 = 0x9604;
    }
    local_22 = 0xc;
    local_38 = param_2;
    iVar1 = FUN_00015a9c(param_1,param_3 & 0xffff);
    local_2e = (undefined)param_1;
    local_40[0] = (undefined2)iVar1;
    local_30 = local_40[0];
    FUN_00015186(param_5,&local_30);
    local_2d = param_4 & 0xf | local_2d;
    do {
      uVar2 = FUN_0000f4a4(param_1 & 0xff,&local_24,&local_30,local_40);
      if (uVar2 != 0) {
        return uVar2;
      }
      iVar3 = iVar1 + local_38;
      local_38 = iVar1 + local_38;
      iVar1 = FUN_00015a9c(param_1,param_3 + (param_2 - iVar3) & 0xffff);
      local_40[0] = (undefined2)iVar1;
      local_30 = local_40[0];
    } while (iVar1 != 0);
  }
  return param_3;
}



int FUN_0000f8dc(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = DAT_0000f9a0;
  *DAT_0000f9a0 = DAT_0000f9a4;
  FUN_000164be(*piVar1,0xcc);
  *DAT_0000f9ac = 0;
  iVar2 = FUN_0000bb54(*piVar1 + 0x94);
  if (iVar2 == 0) {
    FUN_0000bae6(*piVar1 + 0x94,0);
    iVar2 = FUN_0000bcc4(*piVar1 + 4);
    if ((iVar2 == 0) && (iVar2 = FUN_0000bcc4(*piVar1 + 0x90), iVar2 == 0)) {
      FUN_000164be(*piVar1 + 0x10,0x78);
      iVar2 = 0;
      iVar4 = 0;
      *(undefined *)(*piVar1 + 0x88) = 0;
      do {
        iVar3 = *piVar1;
        *(char *)(iVar2 + *piVar1 + 0x1a) = (char)iVar4 + '\x01';
        *(undefined *)(iVar2 + iVar3 + 0x19) = 8;
        iVar3 = FUN_0000bb54(iVar2 + iVar3 + 0x10);
        if (iVar3 != 0) {
          return iVar3;
        }
        FUN_0000bae6(iVar2 + *piVar1 + 0x10,0);
        iVar4 = iVar4 + 1;
        iVar2 = iVar2 + 0xc;
      } while (iVar4 < 10);
      iVar2 = *piVar1;
      *(undefined *)(iVar2 + 0x8a) = 10;
      iVar4 = *piVar1;
      *(undefined *)(iVar2 + 0x89) = 10;
      *(undefined *)(iVar2 + 0x9c) = 1;
      iVar2 = FUN_0000bcc4(iVar4 + 0xa0);
      if ((iVar2 == 0) && (iVar2 = FUN_0000bb54(*piVar1 + 0xa4), iVar2 == 0)) {
        *DAT_0000f9a8 = 0;
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}



uint FUN_0000f9b0(byte param_1,uint param_2)

{
  byte bVar1;
  int *piVar2;
  undefined *puVar3;
  undefined uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  FUN_00015738();
  piVar2 = DAT_0000fa80;
  iVar5 = *DAT_0000fa80;
  if (*(byte *)(iVar5 + 0x88) < 10) {
    bVar1 = *(byte *)(iVar5 + 0x88);
    uVar6 = (uint)bVar1;
    if (*(byte *)(iVar5 + uVar6 * 0xc + 0x1a) < 10) {
      puVar3 = (undefined *)(uVar6 * 0xc + iVar5 + 0x1a);
      uVar4 = *puVar3;
    }
    else {
      uVar4 = 10;
      puVar3 = (undefined *)(uVar6 * 0xc + iVar5 + 0x1a);
    }
    iVar7 = uVar6 * 0xc;
    *(undefined *)(iVar5 + 0x88) = uVar4;
    *(byte *)(iVar7 + iVar5 + 0x18) = param_1;
    if ((int)param_2 < 8) {
      *(char *)(iVar7 + iVar5 + 0x19) = (char)param_2;
    }
    uVar8 = 1 << (uint)param_1;
    while ((((int)param_2 < 8 && ((1 << (param_2 & 0xff) & *(uint *)(iVar5 + 0x8c)) != 0)) ||
           (((uVar8 & *(uint *)(iVar5 + 0x8c)) != 0 && (param_2 == 8))))) {
      *puVar3 = *(undefined *)(iVar5 + 0x89);
      *(byte *)(iVar5 + 0x89) = bVar1;
      FUN_00015a80();
      FUN_00015758(iVar7 + *piVar2 + 0x10);
      FUN_00015738();
      iVar5 = *piVar2;
      puVar3 = (undefined *)(iVar7 + iVar5 + 0x1a);
    }
    if ((int)param_2 < 8) {
      uVar8 = 1 << (param_2 & 0xff);
    }
    *(uint *)(iVar5 + 0x8c) = uVar8 | *(uint *)(iVar5 + 0x8c);
    *puVar3 = *(undefined *)(iVar5 + 0x8a);
    *(byte *)(iVar5 + 0x8a) = bVar1;
  }
  else {
    uVar6 = 10;
  }
  FUN_00015a80();
  return uVar6;
}



undefined4 FUN_0000fb58(undefined4 *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined auStack_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  int local_2c;
  
  iVar4 = *(int *)(param_4 + 0x24);
  iVar5 = *DAT_0000fc20;
  local_2c = *DAT_0000fc18;
  iVar6 = *DAT_0000fc1c;
  iVar2 = *DAT_0000fc24;
  param_1[3] = iVar4;
  local_2c = local_2c + (int)param_1;
  uVar1 = *(undefined4 *)(param_4 + 0x10);
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[4] = param_3;
  param_1[5] = 0;
  uVar3 = param_2 + 8;
  *param_1 = uVar1;
  if (iVar4 == 0) {
    uVar3 = *DAT_0000fc28 + param_2 + 7U & ~(*DAT_0000fc28 - 1U);
    iVar4 = FUN_000124b8(uVar1,uVar3 * param_3,0,param_5);
    param_1[5] = iVar4;
    if (iVar4 == 0) {
      return 1;
    }
  }
  FUN_000150ac(iVar6 + (int)param_1,0);
  FUN_000150ac(local_2c,0);
  FUN_00014e28(param_1,uVar3);
  FUN_000163f8(auStack_50,0,0x24,8);
  local_40 = *(undefined4 *)(param_4 + 0x14);
  local_3c = *(undefined4 *)(param_4 + 0x18);
  FUN_00014e58(iVar5 + (int)param_1,0,auStack_50);
  local_40 = *(undefined4 *)(param_4 + 0x1c);
  local_3c = *(undefined4 *)(param_4 + 0x20);
  FUN_00014e58(iVar2 + (int)param_1,param_1[2],auStack_50);
  return 0;
}



void FUN_0000fc2c(int *param_1,uint param_2,uint param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  if (*(short *)(param_1 + 8) == 0) {
    return;
  }
  if ((*DAT_0000fcf4 != 0) && (iVar1 = FUN_00014138(param_2 & 0xffff), iVar1 != 0)) {
    return;
  }
  piVar6 = *DAT_0000fcf8;
  if (((piVar6 != (int *)0x0) && ((param_2 >> 7 & 1) != 0)) && (param_1 != piVar6)) {
    (**(code **)(*piVar6 + 0x1c))(piVar6,param_2,param_3);
    return;
  }
  uVar4 = *DAT_0000fcfc;
  uVar2 = thunk_FUN_000163d0(uVar4);
  iVar1 = param_1[6];
  param_1[6] = iVar1 + 2;
  if (*(char *)((int)param_1 + 0x1e) == -1) goto LAB_0000fcca;
  iVar5 = param_1[3];
  if (param_1[4] == iVar5) {
    if (*(char *)((int)param_1 + 0x1e) == '\0') {
      iVar3 = param_1[2];
      goto LAB_0000fca6;
    }
    *(undefined *)((int)param_1 + 0x1e) = 0xff;
  }
  else {
    iVar3 = iVar5 + 0x20;
LAB_0000fca6:
    param_1[3] = iVar3;
  }
  FUN_00011d50(iVar5);
  *(int *)(iVar5 + 8) = iVar1;
  *(undefined4 *)(iVar5 + 0x14) = param_5;
  *(undefined4 *)(iVar5 + 0x18) = param_6;
  *(undefined4 *)(iVar5 + 0x1c) = param_7;
  *(undefined4 *)(iVar5 + 0x10) = param_4;
  *(uint *)(iVar5 + 0xc) = param_3 | param_2 & 0xffff0000;
LAB_0000fcca:
  FUN_00013a6c(uVar4,uVar2);
  return;
}



void FUN_0000fd00(uint param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar6 = CONCAT44(param_2,param_1);
  puVar4 = &DAT_0000fdb0;
  uVar2 = (param_2 << 1) >> 0x15;
  if (uVar2 == 0) {
    if ((param_1 | param_2 & 0x7fffffff) == 0) {
      return;
    }
    uVar6 = FUN_0000f0d8(param_1,param_2,DAT_0000fda8,DAT_0000fdac);
    uVar2 = ((uint)((int)((ulonglong)uVar6 >> 0x20) << 1) >> 0x15) - 0x36;
    if (param_3 < DAT_0000fdc8) goto LAB_0000fd9e;
  }
  uVar5 = (uint)((ulonglong)uVar6 >> 0x20);
  uVar1 = (undefined4)uVar6;
  if (uVar2 == 0x7ff) {
    FUN_0000d466(uVar1,uVar5,uVar1,uVar5);
    return;
  }
  iVar3 = param_3 + uVar2;
  if (iVar3 < 0x7ff) {
    if (0 < iVar3) {
      return;
    }
    if (iVar3 + 0x35 < 0 == SCARRY4(iVar3,0x35)) {
      puVar4 = &DAT_0000fdc0;
      uVar6 = CONCAT44(uVar5 & 0x800fffff | (iVar3 + 0x36) * 0x100000,uVar1);
    }
    else {
      if (50000 < param_3) goto LAB_0000fd80;
      uVar6 = FUN_000164c6(DAT_0000fdb0,DAT_0000fdb4,0x7fe,uVar5);
    }
LAB_0000fd9e:
    FUN_0000f0d8((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),*puVar4,puVar4[1]);
    return;
  }
LAB_0000fd80:
  *DAT_0000fdcc = 0x22;
  FUN_000164c6(DAT_0000fdb8,DAT_0000fdbc,0x7fe,uVar5);
  return;
}



undefined4 thunk_FUN_00014dc8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = DAT_00014df0;
  if (*(int *)(DAT_00014df0 + 0x10) != *(int *)(param_1 + 4)) {
    FUN_0000e098(*DAT_00014df4 + param_1,0xffffffff,param_3,param_4,param_4);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 0x10);
    return 0;
  }
  return 1;
}



int FUN_0000ff70(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 0x18);
  iVar1 = *(int *)(param_3 + 0x24);
  if (iVar1 == 0) {
    iVar1 = *DAT_00010030;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  uVar2 = *(uint *)(param_3 + 0x20);
  if (uVar2 == 0) {
    uVar2 = *DAT_00010034;
  }
  iVar1 = FUN_000163c0();
  iVar5 = *(int *)(param_3 + 0x1c);
  if (iVar5 == 0) {
    if (iVar1 != 0) {
      uVar2 = -iVar1 & (uVar2 + iVar1) - 1;
    }
    *(uint *)(param_1 + 0x1c) = uVar2;
    uVar3 = FUN_000124b8(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x1c),iVar1,
                         param_4);
    *(undefined4 *)(param_1 + 0x20) = uVar3;
    if (*(int *)(param_1 + 0x20) == 0) {
      return 1;
    }
  }
  else {
    if (iVar1 == 0) {
      *(int *)(param_1 + 0x20) = iVar5;
    }
    else {
      uVar4 = -iVar1 & (iVar5 + iVar1) - 1U;
      *(uint *)(param_1 + 0x20) = uVar4;
      *(uint *)(param_1 + 0x1c) = *(int *)(param_3 + 0x1c) + (uVar2 - uVar4);
      uVar2 = -iVar1 & *(uint *)(param_1 + 0x1c);
    }
    *(uint *)(param_1 + 0x1c) = uVar2;
    *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_3 + 0x14);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_3 + 0x28);
  *(undefined2 *)(param_1 + 0x3c) = *(undefined2 *)(param_3 + 0x2c);
  if (*(short *)(param_1 + 0x3c) == 1) {
    *(int *)(DAT_00010038 + 0xc) = *(int *)(DAT_00010038 + 0xc) + 1;
  }
  iVar5 = FUN_000113c0(param_1,param_4);
  iVar1 = FUN_00015e38(param_4);
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = iVar5 + 3;
  }
  return iVar5;
}



int * FUN_0001003c(int *param_1,int *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  FUN_00010ddc(param_3,param_1[6],param_1[7]);
  uVar1 = *DAT_000100f4;
  *(int *)(param_3 + 4) = param_3;
  if (param_4 == 0) goto LAB_000100ca;
  if (((uVar1 >> 4 & 1) != 0) &&
     (((*DAT_000100f8 >> 4 & 1) != 0 || ((**DAT_000100fc >> 4 & 1) != 0)))) {
    uVar2 = *DAT_00010100;
    if (uVar2 == 0) {
      uVar3 = 8;
LAB_00010086:
      if ((uVar1 & uVar3) == 0) goto LAB_000100be;
      if (uVar2 == 0) {
        uVar1 = 8;
      }
      else {
        uVar1 = uVar2 & 0xffef;
      }
      if ((*DAT_000100f8 & uVar1) == 0) {
        if (uVar2 == 0) {
          uVar2 = 8;
        }
        else {
          uVar2 = uVar2 & 0xffef;
        }
        if ((uVar2 & **DAT_000100fc) == 0) goto LAB_000100be;
      }
    }
    else {
      uVar3 = uVar2 & 0xffef;
      if (uVar3 != 0) goto LAB_00010086;
    }
    if (param_4 != *(int *)(param_4 + 4)) {
      FUN_00013714(*DAT_00010104,0,0x49);
    }
  }
LAB_000100be:
  FUN_00013f50(param_3,param_4,param_1[7],8);
LAB_000100ca:
  iVar4 = *(int *)(param_3 + 0xc);
  FUN_00011a94(param_2,0,param_1[5] + -8);
  if (*param_1 != -1) {
    *param_2 = *param_1;
  }
  if (param_1[4] != 0) {
    *(undefined4 *)((int)param_2 + param_1[4]) = *(undefined4 *)(iVar4 + 4);
  }
  return param_2;
}



void FUN_00010108(undefined4 param_1)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  
  FUN_00015738();
  piVar2 = DAT_000101cc;
  iVar6 = *DAT_000101cc;
  uVar4 = (uint)*(byte *)(iVar6 + 0x89);
  if (uVar4 < 10) {
    iVar7 = (short)param_1 * 0xc + *DAT_000101cc;
    do {
      iVar3 = uVar4 * 0xc + iVar6;
      if ((*(char *)(iVar7 + 0x18) == *(char *)(iVar3 + 0x18)) &&
         ((bVar5 = *(byte *)(iVar3 + 0x19) & 0xf, bVar5 == 8 ||
          ((bVar1 = *(byte *)(iVar7 + 0x19), (bVar1 & 8) < 8 && ((bVar1 & 0xf) == bVar5)))))) {
        FUN_00013bec(*DAT_000101cc + 0x89);
        FUN_00016154(uVar4 * 0xc + *piVar2 + 0x10);
        iVar6 = *piVar2;
        break;
      }
      uVar4 = (uint)*(byte *)(iVar3 + 0x1a);
    } while (uVar4 < 10);
  }
  iVar3 = (short)param_1 * 0xc;
  iVar7 = iVar3 + iVar6;
  if ((*(byte *)(iVar7 + 0x19) & 8) < 8) {
    uVar4 = *(byte *)(iVar7 + 0x19) & 0xf;
  }
  else {
    uVar4 = (uint)*(byte *)(iVar7 + 0x18);
  }
  *(uint *)(iVar6 + 0x8c) = *(uint *)(iVar6 + 0x8c) & ~(1 << uVar4);
  *(undefined4 *)(iVar7 + 0x14) = 0;
  *(undefined *)(iVar7 + 0x18) = 0;
  *(undefined *)(iVar7 + 0x19) = 8;
  FUN_00013bec(*piVar2 + 0x8a,param_1);
  iVar6 = *piVar2;
  *(undefined *)(iVar3 + *piVar2 + 0x1a) = *(undefined *)(iVar6 + 0x88);
  *(char *)(iVar6 + 0x88) = (char)param_1;
  FUN_00015a80();
  return;
}



void FUN_000101d0(int param_1)

{
  undefined2 uVar1;
  bool bVar2;
  undefined2 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int local_50 [2];
  int local_48;
  int local_44;
  undefined2 local_3c;
  undefined4 ***local_2c;
  undefined4 ***local_28;
  int *local_24;
  int *local_20;
  
  if (param_1 != 0) {
    FUN_00015348(local_50,DAT_0001028c,param_1,&local_2c);
    puVar3 = DAT_00010290;
    uVar5 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      uVar5 = getBasePriority();
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x20);
    }
    uVar1 = *DAT_00010290;
    local_24 = *(int **)(DAT_00010290 + 8);
    *DAT_00010290 = 1;
    uVar6 = local_24[3];
    uVar7 = *(uint *)(puVar3 + 2);
    piVar4 = (int *)local_24[0x10];
    *(int *)local_24[1] = *local_24;
    *(int *)(*local_24 + 4) = local_24[1];
    if (piVar4 == (int *)*piVar4) {
      *(uint *)(puVar3 + 2) = uVar7 & ~uVar6;
    }
    *(undefined4 *)(puVar3 + 10) = 0;
    puVar3[4] = 1;
    piVar4 = DAT_00010294;
    *(undefined *)(local_24 + 5) = 2;
    local_44 = local_48 + *piVar4;
    local_3c = 1;
    local_28 = &local_2c;
    local_24[6] = (int)&local_2c;
    local_2c = &local_2c;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(uVar5);
    }
    local_20 = local_50;
    FUN_000150d8(uVar1);
    uVar5 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      uVar5 = getBasePriority();
    }
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(0x20);
    }
    *(int *)local_20[1] = *local_20;
    *(int *)(*local_20 + 4) = local_20[1];
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(uVar5);
    }
    local_24[6] = 0;
  }
  return;
}



uint FUN_00010298(uint param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined2 local_38;
  undefined2 uStack_36;
  int local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined2 local_24;
  undefined local_22;
  byte local_21;
  
  if ((*DAT_00010350 == '\x01') || ((*DAT_00010354 >> 9 & 1) == 0)) {
    uVar1 = 0xffffff9c;
  }
  else {
    FUN_000164f4(&local_38);
    bVar4 = (param_1 & 0xf0) != 0x80;
    if (bVar4) {
      local_2c = (undefined4 *)0x0;
    }
    else {
      local_2c = &local_28;
      uStack_36 = 0xfffc;
      local_28 = param_4;
    }
    local_30 = param_2;
    iVar2 = FUN_00015a9c(param_1,param_3 & 0xffff);
    local_22 = (undefined)param_1;
    local_24 = (undefined2)iVar2;
    local_21 = (byte)param_4 & 0xf | local_21;
    while (local_38 = local_24,
          uVar1 = FUN_0000f4a4(param_1 & 0xff,DAT_00010358,&local_24,&local_38), uVar1 == 0) {
      iVar3 = iVar2 + local_30;
      local_30 = iVar2 + local_30;
      iVar2 = FUN_00015a9c(param_1,param_3 + (param_2 - iVar3) & 0xffff);
      local_24 = (undefined2)iVar2;
      if (iVar2 == 0) {
        return param_3;
      }
      if (!bVar4) {
        return param_3;
      }
    }
  }
  return uVar1;
}



undefined4 FUN_0001035c(undefined *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined auStack_28 [32];
  
  *(undefined4 *)(param_1 + 4) = DAT_00010410;
  uVar5 = FUN_0001190c(s__sys_mcuimg0_bin_000103d0,0,auStack_28);
  bVar4 = (int)uVar5 == 0;
  if (bVar4) {
    uVar5 = 0;
  }
  uVar2 = (undefined4)uVar5;
  uVar3 = (undefined)((ulonglong)uVar5 >> 0x20);
  if (!bVar4) {
    iVar1 = FUN_0001190c(s__sys_mcuimg1_bin_000103e4,0,auStack_28);
    if (iVar1 != 0) {
      return 0xffffffff;
    }
    uVar3 = 1;
    uVar2 = 0;
  }
  *param_1 = uVar3;
  return uVar2;
}



void FUN_0001039a(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  local_c = DAT_00010414;
  local_10 = param_3;
  iVar1 = FUN_00011c64(s__sys_mcubootinfo_bin_000103f8,0x1000,&local_c,&local_10);
  if ((iVar1 == 0) && (iVar1 = FUN_00010bf8(local_10,0,param_1,8), 0 < iVar1)) {
    FUN_0001155c(local_10,0,0,0);
  }
  return;
}



int FUN_00010418(int *param_1)

{
  ushort uVar1;
  code **ppcVar2;
  int iVar3;
  code *pcVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = *param_1;
  uVar7 = param_1[5];
  if ((iVar8 == -1) || (iVar3 = FUN_00013988(), iVar3 != 0)) {
    return -1;
  }
  if (((uint)param_1[5] >> 3 & 1) != 0) {
    FUN_00015ce8(param_1[1] + -1);
    param_1[5] = param_1[5] & 0xfffffff7;
  }
  param_1[1] = 0;
  iVar3 = *param_1;
  param_1[2] = 0;
  ppcVar2 = DAT_000104c8;
  param_1[3] = 0;
  if (iVar3 < 0) {
LAB_000104a0:
    pcVar4 = *ppcVar2;
  }
  else {
    pcVar4 = *ppcVar2;
    if (iVar3 < 10) {
      (*pcVar4)();
      iVar6 = *(int *)(iVar3 * 8 + DAT_000104d0);
      piVar5 = (int *)(iVar3 * 8 + DAT_000104d0);
      if (iVar6 != 0) {
        iVar3 = (**(code **)(iVar6 + 0x10))(piVar5[1]);
        if (iVar3 != -1) {
          iVar6 = *piVar5;
          uVar1 = *(ushort *)(iVar6 + 10);
          *piVar5 = 0;
          *(ushort *)(iVar6 + 10) = uVar1 & 0xfffe;
        }
        (*ppcVar2[1])();
        pcVar4 = *ppcVar2;
        goto LAB_000104a6;
      }
      (*ppcVar2[1])();
      goto LAB_000104a0;
    }
  }
  iVar3 = -1;
LAB_000104a6:
  *param_1 = -1;
  if ((uVar7 & 0x1000) != 0) {
    (*pcVar4)();
    FUN_000152cc(DAT_000104cc + iVar8 * 0x10);
    (*ppcVar2[1])();
  }
  return iVar3;
}



void FUN_000104d8(void)

{
  char *pcVar1;
  undefined auStack_34 [52];
  
  FUN_00016410(auStack_34);
  if (*(int *)(DAT_00010588 + 0xd30) != 0) {
    if ((*(uint *)(DAT_00010588 + 0xd30) >> 4 & 1) == 0) {
      if ((*(uint *)(DAT_00010588 + 0xd30) >> 3 & 1) == 0) {
        if ((*(uint *)(DAT_00010588 + 0xd30) >> 2 & 1) == 0) {
          if ((*(uint *)(DAT_00010588 + 0xd30) >> 1 & 1) == 0) {
            if ((*(uint *)(DAT_00010588 + 0xd30) & 1) == 0) {
              pcVar1 = s_Unknown_00010554;
            }
            else {
              pcVar1 = s_HALTED_0001055c;
            }
          }
          else {
            pcVar1 = &DAT_00010564;
          }
        }
        else {
          pcVar1 = s_DWTTRAP_0001056c;
        }
      }
      else {
        pcVar1 = s_VCATCH_00010574;
      }
    }
    else {
      pcVar1 = s_EXTERNAL_0001057c;
    }
    FUN_00015bac(auStack_34,*DAT_0001058c,0,0x4e6,*DAT_00010590,pcVar1,0);
  }
  return;
}



void thunk_FUN_000157d8(undefined4 *param_1)

{
  FUN_000128d0(DAT_000157f0,*param_1,DAT_000157f4,0,0);
  *param_1 = 0;
  return;
}



void FUN_00010598(void)

{
  undefined2 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined auStack_3c [52];
  
  FUN_00016410(auStack_3c);
  uVar3 = *DAT_00010648;
  uVar1 = *DAT_00010650;
  if ((*(uint *)(DAT_0001064c + 0xd2c) >> 0x1e & 1) == 0) {
    if (*(int *)(DAT_0001064c + 0xd2c) < 0) {
      FUN_00015bac(auStack_3c,uVar1,0,0x44e,uVar3,s_DEBUGEVT_00010634,0);
      FUN_000104d8();
    }
    else {
      if ((*(uint *)(DAT_0001064c + 0xd2c) >> 1 & 1) == 0) {
        pcVar2 = s_Unknown_00010624;
      }
      else {
        pcVar2 = (char *)0x1062c;
      }
      FUN_00015bac(auStack_3c,uVar1,0,0x458,uVar3,pcVar2,0);
    }
  }
  else {
    FUN_00015bac(auStack_3c,uVar1,0,0x447,uVar3,s_FORCED_00010640,0);
    FUN_0000ddd8();
    FUN_0000dc60();
    FUN_0000e340();
  }
  return;
}



undefined4 FUN_00010654(void)

{
  return 1;
}



void FUN_00010658(int *param_1,int param_2)

{
  char cVar1;
  undefined2 uVar2;
  bool bVar3;
  undefined2 *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  
  puVar4 = DAT_00010710;
  if (param_2 == 0) {
    uVar2 = *DAT_00010710;
    puVar5 = (uint *)0x20;
    uVar7 = 0;
    bVar3 = (bool)isCurrentModePrivileged();
    if (bVar3) {
      uVar7 = getBasePriority();
    }
    *DAT_00010710 = 1;
    bVar3 = (bool)isCurrentModePrivileged();
    if (bVar3) {
      setBasePriority(0x20);
    }
    cVar1 = *(char *)(param_1 + 5);
    if (cVar1 == '\x01') {
      *(int *)param_1[1] = *param_1;
      *(int *)(*param_1 + 4) = param_1[1];
      puVar5 = (uint *)param_1[0x10];
      if (puVar5 == (uint *)*puVar5) {
        puVar5 = (uint *)(*(uint *)(puVar4 + 2) & ~param_1[3]);
        *(uint **)(puVar4 + 2) = puVar5;
      }
      if ((param_1[6] != 0) && (puVar6 = *(uint **)(param_1[6] + 0xc), puVar6 != (uint *)0x0)) {
        *(uint *)puVar6[1] = *puVar6;
        puVar5 = (uint *)*puVar6;
        *(uint *)((int)puVar5 + 4) = puVar6[1];
      }
    }
    if ((cVar1 == '\x02') && (puVar6 = (uint *)param_1[6], puVar6 != (uint *)0x0)) {
      *(uint *)puVar6[1] = *puVar6;
      puVar5 = (uint *)*puVar6;
      *(uint *)((int)puVar5 + 4) = puVar6[1];
      puVar6 = (uint *)puVar6[3];
      if (puVar6 != (uint *)0x0) {
        *(uint *)puVar6[1] = *puVar6;
        puVar5 = (uint *)*puVar6;
        *(uint *)((int)puVar5 + 4) = puVar6[1];
      }
    }
    if (cVar1 == '\x03') {
      *(int *)param_1[1] = *param_1;
      *(int *)(*param_1 + 4) = param_1[1];
    }
    else {
      FUN_00014880(param_1,puVar5);
    }
    bVar3 = (bool)isCurrentModePrivileged();
    if (bVar3) {
      setBasePriority(uVar7);
    }
    FUN_000150d8(uVar2);
  }
  if ((param_2 != 1) && (param_1[9] != -1)) {
    FUN_00016248(param_1[9],param_1[8],param_1[7]);
  }
  return;
}



void FUN_000107d0(uint param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  FUN_00016092(param_2,param_3,param_4 << (param_1 & 7) & 0xff);
  return;
}



void FUN_000107e6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined uVar4;
  undefined uVar5;
  undefined4 uVar6;
  
  puVar1 = DAT_00010880;
  uVar3 = *(undefined4 *)(DAT_00010880 + 4);
  uVar4 = *DAT_00010880;
  uVar6 = *(undefined4 *)(DAT_00010880 + 8);
  uVar5 = DAT_00010880[1];
  if (param_1 == 1) goto LAB_00010840;
  if (param_1 - 2U < 4) goto LAB_00010848;
  if (param_1 - 6U < 2) {
LAB_00010838:
    uVar2 = 0xb;
    uVar6 = *(undefined4 *)(DAT_00010880 + 0xc);
    uVar5 = DAT_00010880[2];
    goto LAB_0001084a;
  }
  if (param_1 == 8) {
LAB_00010840:
    uVar2 = 10;
  }
  else {
    if (param_1 != 9) {
      if (param_1 == 10) goto LAB_00010840;
      if (param_1 == 0xb) goto LAB_00010838;
      if (param_1 != 0xc) {
        return;
      }
      FUN_000107d0(0xb,*(undefined4 *)(DAT_00010880 + 0xc),DAT_00010880[2],0,param_4);
      FUN_000107d0(10,*(undefined4 *)(puVar1 + 8),puVar1[1],0);
      uVar3 = *(undefined4 *)(puVar1 + 4);
      uVar4 = *puVar1;
    }
LAB_00010848:
    uVar2 = 9;
    uVar6 = uVar3;
    uVar5 = uVar4;
  }
LAB_0001084a:
  FUN_000107d0(uVar2,uVar6,uVar5,0,param_4);
  return;
}



void FUN_00010852(void)

{
  FUN_000107d0(9,*(undefined4 *)(DAT_00010880 + 4),*DAT_00010880,1);
  return;
}



void FUN_00010860(uint param_1,int *param_2,undefined *param_3)

{
  *param_3 = (char)(1 << (param_1 & 7));
  *param_2 = (int)param_1 >> 3;
  *param_2 = *(int *)(DAT_00010884 + ((int)param_1 >> 1 & 0xfffffffcU));
  return;
}



int FUN_00010888(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int **ppiVar1;
  int iVar2;
  int *piVar3;
  int local_20;
  undefined4 uStack_1c;
  
  if (*DAT_0001093c != '\x01') {
    local_20 = param_3;
    uStack_1c = param_4;
    FUN_0000f8dc();
    ppiVar1 = DAT_0001092c;
    piVar3 = *DAT_0001092c;
    if (param_1 == 0) {
      param_1 = FUN_0000e96c(param_2,0);
    }
    *piVar3 = param_1;
    iVar2 = FUN_00014ca4(&local_20,0xe,8);
    if (iVar2 == 10) {
      return DAT_00010930 + 4;
    }
    if (**ppiVar1 < 0) {
      return DAT_00010930;
    }
    FUN_00014994(DAT_00010930);
    FUN_00015634(DAT_00010934,0);
    (*ppiVar1)[3] = param_3;
    FUN_00015204();
    if (param_3 != 0) {
      return 0;
    }
    iVar2 = FUN_00015028(*ppiVar1 + iVar2 * 3 + 4,0xffff,0);
    if (iVar2 == 0) {
      piVar3 = *ppiVar1;
      *DAT_00010938 = *DAT_00010938 | 0x200;
      FUN_00010108(*(undefined *)(piVar3 + 0x2f));
      iVar2 = FUN_00016164(local_20);
      return iVar2;
    }
  }
  return -100;
}



void FUN_00010940(int param_1,int param_2)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined auStack_1c [8];
  
  if (param_1 != 0) {
    iVar3 = FUN_000163b0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x1c));
    puVar2 = DAT_000109ec;
    puVar1 = DAT_000109e8;
    if (iVar3 == 0) {
      FUN_00015bac(0,*DAT_000109e8,0,0x175,*DAT_000109ec,param_1,0);
    }
    iVar3 = FUN_000163b0(*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x1c));
    if (iVar3 == 0) {
      FUN_00015bac(0,*puVar1,0,0x179,*puVar2,param_2,0);
    }
    puVar2 = DAT_000109f0;
    if ((auStack_1c < *(undefined **)(param_1 + 0x20)) ||
       (*(undefined **)(param_1 + 0x20) + *(int *)(param_1 + 0x1c) < auStack_1c)) {
      FUN_00015bac(0,*puVar1,0,0x17f,*DAT_000109f0,param_1,*(undefined4 *)(param_1 + 0x10));
    }
    uVar4 = *(uint *)(param_2 + 0x10);
    if ((uVar4 < *(uint *)(param_2 + 0x20)) ||
       (*(uint *)(param_2 + 0x20) + *(int *)(param_2 + 0x1c) < uVar4)) {
      FUN_00015bac(0,*puVar1,0,0x184,*puVar2,param_2,uVar4);
    }
  }
  return;
}



int FUN_000109f4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char *pcVar1;
  int *piVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 local_20;
  undefined4 local_1c;
  
  piVar2 = DAT_00010a9c;
  pcVar1 = DAT_00010a94;
  local_20 = param_3;
  local_1c = param_4;
  if ((param_1 != 0) && (*DAT_00010a94 == '\0')) {
    local_20._2_2_ = (undefined2)((uint)param_3 >> 0x10);
    local_20 = CONCAT22(local_20._2_2_,(short)param_1);
    iVar4 = FUN_00014ca4(&local_1c,0xe,8);
    if (iVar4 == 10) {
      return DAT_00010a98;
    }
    iVar5 = FUN_0001144c(DAT_00010aa0,&local_20,0);
    if (iVar5 != 0) {
      return iVar5;
    }
    if ((short)local_20 == 0) {
      iVar5 = FUN_00015028(*piVar2 + iVar4 * 0xc + 0x10,0xffff,1);
      if (iVar5 == -100) {
        return -100;
      }
      local_20 = CONCAT22(local_20._2_2_,(undefined2)local_1c);
    }
    FUN_00010108(iVar4);
  }
  FUN_00015634(0,0);
  if (param_1 == 0) {
    FUN_000159f4();
  }
  FUN_00014994();
  sVar3 = FUN_00011cd8(*(undefined4 *)*piVar2);
  FUN_00011334();
  *pcVar1 = '\0';
  return (int)sVar3;
}



int FUN_00010aa4(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iStack_20;
  undefined4 uStack_1c;
  
  uVar2 = DAT_00010b50;
  uVar1 = DAT_00010b44;
  if ((param_1 == 1) && (*DAT_00010b48 == 1)) {
    iStack_20 = param_3;
    uStack_1c = param_4;
    if (((param_3 < 0x65) || (*DAT_00010b4c == '\0')) || ((param_2 & 3) != 0)) {
      FUN_000162da(DAT_00010b44,0);
      iVar3 = FUN_00013c7c(param_2,param_3);
    }
    else {
      iVar3 = 0;
      do {
        if (param_3 < 4000) {
          FUN_00011b7c(param_2,param_3);
          FUN_00016294(uVar1);
          FUN_0000bc06(uVar2,&iStack_20,0xffffffff);
          return param_3 + iVar3;
        }
        FUN_00011b7c(param_2,4000);
        FUN_00016294(uVar1);
        FUN_0000bc06(uVar2,&iStack_20,0xffffffff);
        param_3 = param_3 + -4000;
        iVar3 = iVar3 + 4000;
        param_2 = param_2 + 4000;
      } while (0 < param_3);
    }
    return iVar3;
  }
  return -1;
}



int FUN_00010b54(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined2 local_38;
  undefined2 local_36;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  int local_24;
  undefined2 local_20;
  
  if ((*DAT_00010bf0 == '\x01') || ((*DAT_00010bf4 >> 9 & 1) == 0)) {
    iVar2 = -100;
  }
  else {
    iVar2 = 0;
    local_38 = 0;
    local_30 = 0;
    if (param_4 < 0x5b5) {
      uVar4 = param_4 & 0xffff;
    }
    else {
      uVar4 = 0x5b4;
    }
    local_20 = (undefined2)uVar4;
    local_2c = param_3;
    local_24 = param_2;
    do {
      iVar1 = local_24;
      local_36 = local_20;
      local_28 = param_1;
      iVar3 = FUN_0001144c(DAT_00010bec,&local_28,&local_38);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = (int)(short)local_28;
      if (iVar3 < 0) {
        if (0 < iVar2) {
          return iVar2;
        }
        return iVar3;
      }
      iVar2 = iVar3 + iVar2;
      local_24 = uVar4 + iVar1;
      param_4 = param_4 - uVar4;
      local_2c = uVar4 + local_2c;
      if (param_4 < 0x5b5) {
        uVar4 = param_4 & 0xffff;
      }
      else {
        uVar4 = 0x5b4;
      }
      local_20 = (undefined2)uVar4;
    } while (uVar4 != 0);
  }
  return iVar2;
}



int FUN_00010bf8(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined2 local_38;
  undefined2 local_36;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  int local_24;
  undefined2 local_20;
  
  if ((*DAT_00010c90 == '\x01') || ((*DAT_00010c94 >> 9 & 1) == 0)) {
    iVar2 = -100;
  }
  else {
    iVar2 = 0;
    local_36 = 0;
    local_2c = 0;
    if (param_4 < 0x5b5) {
      uVar4 = param_4 & 0xffff;
    }
    else {
      uVar4 = 0x5b4;
    }
    local_20 = (undefined2)uVar4;
    local_30 = param_3;
    local_24 = param_2;
    do {
      iVar1 = local_24;
      local_38 = local_20;
      local_28 = param_1;
      iVar3 = FUN_0001144c(DAT_00010c98,&local_28,&local_38);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = (int)(short)local_28;
      if (iVar3 < 0) {
        if (0 < iVar2) {
          return iVar2;
        }
        return iVar3;
      }
      iVar2 = iVar3 + iVar2;
      local_24 = uVar4 + iVar1;
      param_4 = param_4 - uVar4;
      local_30 = uVar4 + local_30;
      if (param_4 < 0x5b5) {
        uVar4 = param_4 & 0xffff;
      }
      else {
        uVar4 = 0x5b4;
      }
      local_20 = (undefined2)uVar4;
    } while (uVar4 != 0);
  }
  return iVar2;
}



void FUN_00010c9c(void)

{
  int iVar1;
  byte **ppbVar2;
  code **ppcVar3;
  byte **ppbVar4;
  code **ppcVar5;
  
  ppbVar4 = DAT_00010d2c;
  iVar1 = DAT_00010d34;
  ppbVar2 = DAT_00010d30;
  if (DAT_00010d20 != -1) {
    FUN_0001393c();
    ppbVar4 = DAT_00010d2c;
    iVar1 = DAT_00010d34;
    ppbVar2 = DAT_00010d30;
  }
  for (; ppbVar4 < ppbVar2; ppbVar4 = ppbVar4 + 2) {
    (**(code **)(iVar1 + (uint)**ppbVar4 * 4))(*ppbVar4 + 1,ppbVar4[1]);
  }
  ppcVar5 = DAT_00010d24;
  ppcVar3 = DAT_00010d28;
  if (DAT_00010d38 != (code *)0x0) {
    (*DAT_00010d38)();
    ppcVar5 = DAT_00010d24;
    ppcVar3 = DAT_00010d28;
  }
  for (; ppcVar5 < ppcVar3; ppcVar5 = ppcVar5 + 1) {
    (**ppcVar5)();
  }
  return;
}



undefined8 FUN_00010d3c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  int local_20;
  int local_1c;
  int local_18;
  undefined4 uStack_14;
  
  local_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  uStack_14 = param_4;
  if ((int)(uint)*DAT_00010dcc < param_1) {
    if (param_1 <= (int)(uint)*DAT_00010dc8) {
      iVar1 = FUN_00015958();
      local_18 = FUN_000141c0(param_2,param_3,*(undefined4 *)(iVar1 + 4));
      goto LAB_00010da2;
    }
    if (*DAT_00010dd0 != 0) {
      if (param_3 < 0) {
        param_3 = 0x7fff;
      }
      local_18 = 0;
      local_20 = param_2;
      local_1c = param_3;
      (**DAT_00010dd4)(param_1,DAT_00010dd8,&local_20);
      goto LAB_00010da2;
    }
    pcVar2 = s__module_rope__x__00010db4;
  }
  else {
    pcVar2 = s__module__d__00010da8;
  }
  local_18 = FUN_000141c0(param_2,param_3,pcVar2,param_1);
LAB_00010da2:
  return CONCAT44(local_1c,local_18);
}



undefined4 * FUN_00010ddc(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  
  if (param_3 == 0) {
    return param_1;
  }
  puVar1 = param_1;
  if (((uint)param_2 & 3) == 0) {
    if (((uint)param_1 & 3) != 0) goto LAB_00010e32;
LAB_00010dec:
    if (0xf < param_3) {
      do {
        param_3 = param_3 - 0x10;
        uVar3 = *param_2;
        uVar4 = param_2[1];
        uVar5 = param_2[2];
        uVar6 = param_2[3];
        param_2 = param_2 + 4;
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
        puVar1 = puVar1 + 4;
      } while (0xf < param_3);
      if (param_3 == 0) {
        return param_1;
      }
    }
    if (3 < param_3) {
      if (7 < param_3) {
        if (0xb < param_3) {
          uVar3 = *param_2;
          param_2 = param_2 + 1;
          *puVar1 = uVar3;
          puVar1 = puVar1 + 1;
        }
        uVar3 = *param_2;
        param_2 = param_2 + 1;
        *puVar1 = uVar3;
        puVar1 = puVar1 + 1;
      }
      uVar3 = *param_2;
      param_2 = param_2 + 1;
      *puVar1 = uVar3;
      puVar1 = puVar1 + 1;
      if ((param_3 & 3) == 0) {
        return param_1;
      }
      param_3 = param_3 & 3;
      goto LAB_00010e68;
    }
  }
  else {
    do {
      *(undefined *)puVar1 = *(undefined *)param_2;
      param_2 = (undefined4 *)((int)param_2 + 1);
      puVar1 = (undefined4 *)((int)puVar1 + 1);
      param_3 = param_3 - 1;
      if (param_3 == 0) {
        return param_1;
      }
    } while (((uint)param_2 & 3) != 0);
LAB_00010e32:
    if (((uint)puVar1 & 1) == 0) {
      uVar2 = param_3;
      if (((uint)puVar1 & 3) != 0) {
        while (param_3 = uVar2 - 4, 3 < uVar2) {
          uVar3 = *param_2;
          param_2 = param_2 + 1;
          *(short *)puVar1 = (short)uVar3;
          *(short *)((int)puVar1 + 2) = (short)((uint)uVar3 >> 0x10);
          puVar1 = puVar1 + 1;
          uVar2 = param_3;
        }
        goto LAB_00010e64;
      }
      goto LAB_00010dec;
    }
  }
  while (bVar7 = 3 < param_3, param_3 = param_3 - 4, bVar7) {
    uVar3 = *param_2;
    param_2 = param_2 + 1;
    *(char *)puVar1 = (char)uVar3;
    *(char *)((int)puVar1 + 1) = (char)((uint)uVar3 >> 8);
    *(char *)((int)puVar1 + 2) = (char)((uint)uVar3 >> 0x10);
    *(char *)((int)puVar1 + 3) = (char)((uint)uVar3 >> 0x18);
    puVar1 = puVar1 + 1;
  }
LAB_00010e64:
  for (param_3 = param_3 + 4; param_3 != 0; param_3 = param_3 - 1) {
LAB_00010e68:
    *(undefined *)puVar1 = *(undefined *)param_2;
    param_2 = (undefined4 *)((int)param_2 + 1);
    puVar1 = (undefined4 *)((int)puVar1 + 1);
  }
  return param_1;
}



int FUN_00010e78(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined2 param_5,
                undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined2 local_138 [4];
  undefined *local_130;
  short local_128;
  undefined2 local_126;
  undefined4 local_124;
  undefined4 local_120;
  undefined auStack_11c [256];
  
  if ((*DAT_00010f08 == '\x01') || ((*DAT_00010f0c >> 9 & 1) == 0)) {
    iVar1 = -100;
  }
  else {
    local_128 = CONCAT11((char)param_4,(char)param_2);
    local_120 = param_7;
    local_126 = param_5;
    local_124 = param_6;
    if (param_2 + param_4 < 0xff) {
      FUN_000164be(auStack_11c,0xff);
      FUN_00010ddc(auStack_11c,param_1,param_2);
      if (param_4 != 0) {
        FUN_00010ddc(auStack_11c + param_2,param_3,param_4);
      }
      FUN_000164f4(local_138);
      local_130 = auStack_11c;
      local_138[0] = (undefined2)(param_2 + param_4);
      iVar1 = FUN_0001144c(DAT_00010f10,&local_128,local_138);
      if (iVar1 == 0) {
        iVar1 = (int)local_128;
      }
    }
    else {
      iVar1 = -1;
    }
  }
  return iVar1;
}



void FUN_00010f14(char *param_1)

{
  if (param_1 != (char *)0x0) {
    for (; *param_1 != '\0'; param_1 = param_1 + 1) {
      FUN_00016468(DAT_00010fac);
    }
  }
  return;
}



void FUN_00010f2c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  iVar1 = FUN_00014f48(0x100);
  if (iVar1 != 0) {
    iVar3 = 0x100;
    do {
      iVar2 = iVar1;
      iVar1 = FUN_0001151c(iVar2,iVar3,param_1,&uStack_c);
      if ((-1 < iVar1) && (iVar1 < iVar3)) goto LAB_00010f76;
      iVar3 = iVar3 << 1;
      iVar1 = FUN_000144c8(iVar2,iVar3);
    } while (iVar1 != 0);
    FUN_00010f14(s_Could_not_reallocate_memory_00010f8c);
LAB_00010f76:
    FUN_00010f14(iVar2);
    FUN_00015ce8(iVar2);
  }
  return;
}



// WARNING: Control flow encountered bad instruction data

void FUN_00010fb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *unaff_r4;
  uint *unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r11;
  undefined4 in_lr;
  bool in_NG;
  bool in_ZR;
  bool in_CY;
  undefined4 in_cr15;
  
  if (in_CY && !in_ZR) {
    *param_4 = in_lr;
    param_4[-1] = unaff_r8;
    param_4[-2] = unaff_r7;
    param_4[-3] = unaff_r6;
    param_4[-4] = unaff_r5;
    param_4[-5] = unaff_r4;
  }
  if (in_CY && !in_ZR) {
    *unaff_r4 = 0x10fc0;
    unaff_r4[-1] = unaff_r11;
    unaff_r4[-2] = unaff_r7;
    unaff_r4[-3] = param_3;
    unaff_r4[-4] = param_1;
  }
  if (in_NG) {
    SignedSaturate(param_1 << 0xd,0x1d);
    SignedDoesSaturate(param_1 << 0xd,0x1d);
  }
  if (in_ZR) {
    *unaff_r5 = (uint)param_4 & 0x1000;
    coprocessor_storelong(1,in_cr15,param_1 + -0x2b4);
  }
                    // WARNING: Bad instruction - Truncating control flow here
  halt_baddata();
}



int FUN_0001104c(short *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_3 < 0) {
    param_3 = 0x7fff;
  }
  if (param_1 == (short *)0x0) {
    iVar1 = 0;
  }
  else {
    if (*param_1 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00010d3c(*param_1,param_2,param_3,param_4,param_4);
    }
    if (iVar1 < param_3) {
      if (*param_1 != 0) {
        iVar2 = FUN_000141c0(param_2,param_3 - iVar1,&DAT_000110d0);
        iVar1 = iVar2 + iVar1;
      }
      if (*(int *)(param_1 + 4) != 0) {
        iVar4 = *(int *)(param_1 + 2);
        iVar2 = param_3 - iVar1;
        if ((iVar4 != 0) && (iVar3 = FUN_00015fa8(iVar4), iVar3 + 5 <= iVar2)) {
          iVar2 = FUN_000141c0(param_2,param_3 - iVar1,s___s___000110d4,iVar4);
          iVar1 = iVar2 + iVar1;
          iVar2 = param_3 - iVar1;
        }
        if (0x11 < iVar2) {
          iVar2 = FUN_000141c0(param_2,param_3 - iVar1,s_line__d__000110dc,
                               *(undefined4 *)(param_1 + 4));
          iVar1 = iVar2 + iVar1;
        }
      }
    }
  }
  return iVar1;
}



undefined4 FUN_000110e8(char *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *DAT_00011178;
  bVar2 = *(byte *)(iVar6 + 0x8a);
  while( true ) {
    if (9 < bVar2) {
      return 0xfffffffd;
    }
    iVar4 = iVar6 + (uint)bVar2 * 0xc;
    bVar1 = *(byte *)(iVar4 + 0x19);
    if ((bVar1 & 0x80) != 0) {
      param_1 = (char *)((uint)param_1 & 0xfffffdff);
    }
    if (((*(byte *)(iVar4 + 0x18) == 0xf) && (bVar1 == param_2)) &&
       ((param_1 == s_Main_0x_08X___version_0x_04X_nee_00000fe8 + 0x22 ||
        ((param_1 == s_Main_0x_08X___version_0x_04X_nee_00000fe8 + 0x23 ||
         (param_1 == (char *)0x120b)))))) break;
    iVar5 = DAT_00011174 + (uint)*(byte *)(iVar4 + 0x18) * 8;
    if ((param_1 == (char *)(uint)*(ushort *)(iVar5 + -0x3e)) &&
       (((uVar3 = bVar1 & 0xf, uVar3 == param_2 && ((int)param_2 < 8)) || (uVar3 == 8)))) {
      *(undefined4 *)(iVar6 + 0xc0) = *(undefined4 *)(iVar5 + -0x3c);
      break;
    }
    bVar2 = *(byte *)(iVar4 + 0x1a);
  }
  *(byte *)(iVar6 + 0xbc) = bVar2;
  return 0;
}



uint FUN_0001117c(int param_1,byte *param_2,byte *param_3,undefined4 param_4)

{
  uint uVar1;
  ushort local_30;
  undefined2 local_2e;
  ushort local_2c;
  ushort local_2a;
  undefined auStack_28 [2];
  ushort local_26;
  short local_24;
  undefined4 local_1c;
  
  if ((*DAT_00011208 == '\x01') || ((*DAT_0001120c >> 9 & 1) == 0)) {
    uVar1 = 0xffffff9c;
  }
  else {
    uVar1 = DAT_00011200;
    if (*param_3 != 0) {
      FUN_000164f4(auStack_28);
      local_2e = (undefined2)param_1;
      local_2a = (ushort)*param_3;
      if (param_2 != (byte *)0x0) {
        local_2c = (ushort)*param_2;
      }
      local_26 = local_2a;
      local_1c = param_4;
      uVar1 = FUN_0001144c(DAT_00011204,&local_30,auStack_28);
      if (uVar1 == 0) {
        if (param_2 != (byte *)0x0) {
          *param_2 = (byte)local_2c;
        }
        if ((short)local_26 < local_24) {
          *param_3 = (byte)local_26;
          if (param_1 == 2) {
            uVar1 = 0;
          }
          else {
            uVar1 = 0xfffff82f;
          }
        }
        else {
          *param_3 = (byte)local_24;
          uVar1 = (uint)local_30;
        }
      }
    }
  }
  return uVar1;
}



undefined8 FUN_00011210(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  piVar1 = DAT_000112a0;
  iVar5 = *(int *)(DAT_0001129c + 0x1c);
  *(short *)(param_1 + 0x12) = (short)param_2;
  if (*piVar1 == *(int *)(iVar5 + param_2 * 4)) {
    FUN_00013cc8(param_2);
    *(undefined4 *)(param_1 + 8) = param_3;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_4 + 0x14);
    iVar5 = *(int *)(param_4 + 0x20);
    if (iVar5 == -1) {
      iVar5 = 0xff;
    }
    *(char *)(param_1 + 0x10) = (char)iVar5;
    *(undefined4 *)(param_1 + 0xc) = 0;
    bVar6 = *(short *)(param_4 + 0x18) != 0;
    uVar4 = (uint)bVar6;
    if (bVar6) {
      *(uint *)(param_1 + 0xc) = uVar4;
    }
    if (*(short *)(param_4 + 0x24) != 0) {
      *(uint *)(param_1 + 0xc) = uVar4 | 2;
    }
    iVar3 = FUN_00011888(param_1);
    iVar5 = FUN_00015e38(param_5);
    if (iVar5 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar3 + 3;
    }
    return CONCAT44(param_2,iVar3);
  }
  uVar2 = *DAT_00011298;
  FUN_00015bac(param_5,*DAT_00011294,0,0x8f,uVar2,param_2,0);
  return CONCAT44(uVar2,1);
}



int FUN_000112a4(undefined2 param_1,byte *param_2,byte *param_3,undefined4 param_4)

{
  int iVar1;
  short local_30;
  undefined2 local_2e;
  ushort local_2c;
  undefined auStack_28 [2];
  ushort local_26;
  ushort local_24;
  undefined4 local_1c;
  
  if ((*DAT_00011330 == '\x01') || ((*DAT_00011324 >> 9 & 1) == 0)) {
    iVar1 = -100;
  }
  else {
    iVar1 = DAT_00011328;
    if (*param_3 != 0) {
      if (param_2 == (byte *)0x0) {
        iVar1 = -1;
      }
      else {
        FUN_000164f4(auStack_28);
        local_26 = (ushort)*param_3;
        local_2c = (ushort)*param_2;
        local_2e = param_1;
        local_1c = param_4;
        iVar1 = FUN_0001144c(DAT_0001132c,&local_30,auStack_28);
        if (iVar1 == 0) {
          *param_2 = (byte)local_2c;
          if ((short)local_26 < (short)local_24) {
            iVar1 = -0x7d1;
            local_24 = local_26;
          }
          else {
            iVar1 = (int)local_30;
          }
          *param_3 = (byte)local_24;
        }
      }
    }
  }
  return iVar1;
}



void FUN_00011334(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = DAT_000113b8;
  *DAT_000113b4 = *DAT_000113b4 & 0xfdff;
  *(undefined *)(*piVar1 + 0x9c) = 0;
  iVar2 = FUN_0000bcba(*piVar1 + 0xa0);
  if (((iVar2 == 0) && (iVar2 = FUN_0000bb36(*piVar1 + 0xa4), iVar2 == 0)) &&
     (iVar2 = FUN_0000bb36(*piVar1 + 0x94), iVar2 == 0)) {
    iVar2 = *piVar1;
    if (*DAT_000113bc == '\0') {
      iVar2 = FUN_0000bcba(iVar2 + 4);
      if (iVar2 != 0) {
        return;
      }
      iVar2 = *piVar1;
    }
    iVar2 = FUN_0000bcba(iVar2 + 0x90);
    if (iVar2 == 0) {
      iVar2 = 10;
      iVar4 = 0;
      do {
        iVar3 = FUN_0000bb36(iVar4 + *piVar1 + 0x10);
        if (iVar3 != 0) {
          return;
        }
        iVar2 = iVar2 + -1;
        iVar4 = iVar4 + 0xc;
      } while (iVar2 != 0);
      iVar2 = *piVar1;
      *(undefined *)(iVar2 + 0x88) = 0;
      *(undefined *)(iVar2 + 0x89) = 10;
      *(undefined *)(iVar2 + 0x8a) = 10;
      *piVar1 = 0;
    }
  }
  return;
}



undefined4 FUN_000113c0(int param_1,undefined4 param_2)

{
  undefined2 uVar1;
  bool bVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar4 = FUN_00014d38(param_1,DAT_0001143c,DAT_00011440,param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  iVar5 = FUN_00015e38(param_2);
  if (iVar5 == 0) {
    iVar5 = *DAT_00011448;
    *(undefined *)(param_1 + 0x14) = 1;
    puVar3 = DAT_00011444;
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*(int *)(param_1 + 8) < 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
      *(int *)(param_1 + 0x40) = (int)puVar3 + iVar5;
      FUN_00015b70((int)puVar3 + iVar5,param_1);
    }
    else {
      uVar4 = *(undefined4 *)(puVar3 + 0xc);
      *(int *)(param_1 + 0xc) = 1 << (*(uint *)(param_1 + 8) & 0xff);
      uVar4 = FUN_000163ec(uVar4,*(undefined4 *)(param_1 + 8));
      uVar6 = 0;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        uVar6 = getBasePriority();
      }
      *(undefined4 *)(param_1 + 0x40) = uVar4;
      uVar1 = *puVar3;
      *puVar3 = 1;
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(0x20);
      }
      FUN_00015ef0(param_1,0x20);
      bVar2 = (bool)isCurrentModePrivileged();
      if (bVar2) {
        setBasePriority(uVar6);
      }
      FUN_000150d8(uVar1);
    }
  }
  return 0;
}



int FUN_0001144c(undefined2 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int local_18;
  
  iVar1 = FUN_0001527c();
  if (iVar1 == 0) {
    if (*DAT_000114c8 == '\x01') {
      iVar1 = FUN_00015a2c();
      if (iVar1 == 0) {
        iVar1 = -100;
      }
      else {
        iVar1 = (int)(short)iVar1;
      }
    }
    else {
      *(undefined *)(*DAT_000114d0 + 0x98) = 1;
      iVar2 = FUN_0000eba8(param_1,param_3,param_2);
      if (iVar2 == 0) {
        if (*DAT_000114cc == '\0') {
          *DAT_000114cc = '\x01';
          for (local_18 = 3999; local_18 != -1; local_18 = local_18 + -1) {
          }
        }
        iVar1 = FUN_0000f57c(*param_1);
      }
      else {
        iVar1 = FUN_00015a2c();
        if (iVar1 == 0) {
          return iVar2;
        }
      }
    }
  }
  return iVar1;
}



uint FUN_000114ec(undefined4 param_1,int *param_2,uint param_3)

{
  uint uVar1;
  
  if ((uint)param_2[2] < (uint)param_2[1]) {
    uVar1 = param_2[1] - param_2[2];
    if (param_3 <= uVar1) {
      uVar1 = param_3;
    }
    FUN_00010ddc(*param_2,param_1,uVar1);
    *param_2 = uVar1 + *param_2;
  }
  param_2[2] = param_3 + param_2[2];
  return param_3;
}



void FUN_0001151c(undefined *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (param_2 == 0) {
    local_18 = 0;
  }
  else {
    local_18 = param_2 + -1;
  }
  local_14 = 0;
  local_1c = param_1;
  local_10 = param_3;
  FUN_0000474c(&local_10,param_4,&local_1c,DAT_00011558,DAT_00011554);
  if (param_2 != 0) {
    *local_1c = 0;
  }
  return;
}



int FUN_0001155c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  ushort local_30;
  short local_2e;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  
  FUN_000164be(&local_20,0xc);
  if ((*DAT_000115d8 == '\x01') || ((*DAT_000115dc >> 9 & 1) == 0)) {
    iVar1 = -100;
  }
  else {
    local_20 = param_1;
    if (param_2 != 0) {
      iVar1 = FUN_00015eae(param_2);
      local_1c = iVar1 + 4U & 0xfffffffc;
    }
    local_2e = (short)local_1c;
    local_30 = (short)param_4 + 3U & 0xfffc;
    if ((param_2 != 0) && (local_2e != 0)) {
      local_2e = -local_2e;
    }
    local_28 = param_3;
    local_24 = param_2;
    local_18 = param_4;
    iVar1 = FUN_0001144c(DAT_000115e0,&local_20,&local_30);
    if (iVar1 == 0) {
      iVar1 = (int)(short)local_20;
    }
  }
  return iVar1;
}



undefined4 FUN_00011670(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int **ppiVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = *DAT_000116ec;
  iVar7 = *DAT_000116e8;
  iVar2 = FUN_0000e098(*DAT_000116f0 + param_1,param_3);
  if (iVar2 != 0) {
    uVar4 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar4 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x20);
    }
    ppiVar3 = (int **)(*DAT_000116f4 + param_1);
    piVar5 = *ppiVar3;
    iVar2 = *piVar5;
    *ppiVar3 = (int *)iVar2;
    *(int ***)(iVar2 + 4) = ppiVar3;
    if (ppiVar3 != (int **)piVar5) {
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + -1;
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar4);
      }
      FUN_00010ddc(piVar5 + 2,param_2,*(undefined4 *)(param_1 + 4),uVar4);
      FUN_00015b70(iVar7 + param_1,piVar5);
      FUN_00011f90(iVar6 + param_1);
      return 1;
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar4);
    }
  }
  return 0;
}



void FUN_000116f8(void)

{
  return;
}



void FUN_0001177e(void)

{
  return;
}



int FUN_00011804(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = FUN_0001527c();
  piVar2 = DAT_00011880;
  if (iVar3 == 0) {
    if (*(char *)(*DAT_00011880 + 0xa9) == *DAT_00011884) {
      iVar3 = FUN_00015a2c();
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    else {
      iVar3 = FUN_0000b6e8();
      iVar4 = *piVar2;
      if (iVar3 != 0) {
        if ((iVar3 != -100) && (iVar3 = FUN_00015a2c(), iVar3 != 0)) {
          return iVar3;
        }
        return -100;
      }
      *(char *)(iVar4 + 0xa9) = *(char *)(iVar4 + 0xa9) + '\x01';
      cVar1 = *(char *)(iVar4 + 0xc4);
      if (cVar1 != '\0') {
        if (cVar1 == '\x02') {
          if (*(int *)(iVar4 + 0xb8) == 0) {
            return -7;
          }
          FUN_00012f68(0);
          *(undefined4 *)(*piVar2 + 0xb8) = 0;
        }
        else if (cVar1 != '\x03') {
          return -7;
        }
      }
      iVar3 = FUN_00015a2c();
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    iVar3 = 0;
  }
  return iVar3;
}



void FUN_00011888(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined *puVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  iVar5 = DAT_00011900;
  sVar3 = *(short *)(param_1 + 0x12);
  uVar4 = (uint)sVar3;
  if (((*(uint *)(param_1 + 0xc) >> 1 & 1) == 0) || (*(byte *)(param_1 + 0x10) < 0x20)) {
    iVar5 = *(int *)(param_1 + 8);
    piVar1 = (int *)(*(int *)(DAT_00011900 + 0x1c) + uVar4 * 4);
    bVar7 = iVar5 != *piVar1;
    if (bVar7) {
      *piVar1 = iVar5;
    }
    if (bVar7) {
      sVar3 = *(short *)(param_1 + 0x12);
    }
    *(short *)(param_1 + 0x12) = -sVar3;
  }
  else {
    *(int *)(uVar4 * 4 + *(int *)(DAT_00011900 + 0x24)) = param_1;
    piVar1 = (int *)(uVar4 * 4 + *(int *)(iVar5 + 0x1c));
    if (DAT_00011904 != *piVar1) {
      *piVar1 = DAT_00011904;
    }
  }
  iVar5 = DAT_00011908;
  uVar6 = *(uint *)(param_1 + 0xc);
  puVar2 = (undefined *)(DAT_00011908 + uVar4 + 0x3f0);
  if (uVar4 < 0x10) {
    if (3 < uVar4) {
      iVar5 = DAT_00011908 + uVar4;
      *(undefined *)(iVar5 + 0xd14) = *(undefined *)(param_1 + 0x10);
    }
  }
  else {
    *puVar2 = *(undefined *)(param_1 + 0x10);
  }
  if ((uVar6 & 1) != 0) {
    FUN_00013d10(uVar4,uVar6 >> 1,puVar2,iVar5,param_4);
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



int FUN_0001190c(undefined4 param_1,undefined4 param_2,undefined2 *param_3)

{
  short sVar1;
  int iVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  ushort local_1c;
  undefined2 local_1a;
  undefined4 local_14;
  undefined4 local_10;
  
  if ((*DAT_00011984 == '\x01') || ((*DAT_00011988 >> 9 & 1) == 0)) {
    iVar2 = -100;
  }
  else {
    sVar1 = FUN_00015eae(param_1);
    local_1a = 0;
    local_1c = sVar1 + 4U & 0xfffc;
    local_10 = 0;
    local_38 = param_2;
    local_14 = param_1;
    iVar2 = FUN_0001144c(DAT_00011980,&local_38,&local_1c);
    if (iVar2 == 0) {
      *(undefined4 *)(param_3 + 2) = local_34;
      *(undefined4 *)(param_3 + 4) = local_30;
      *param_3 = local_38._2_2_;
      *(undefined4 *)(param_3 + 6) = local_2c;
      *(undefined4 *)(param_3 + 8) = local_28;
      *(undefined4 *)(param_3 + 10) = local_24;
      iVar2 = (int)(short)local_38;
      *(undefined4 *)(param_3 + 0xc) = local_20;
    }
  }
  return iVar2;
}



void FUN_0001198c(uint param_1,uint param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_00011a08 + -0x44);
  param_1 = param_1 & 0x3f;
  piVar2 = (int *)(iVar3 + param_1 * 0x10);
  if ((param_1 >> 5 != 0) && (param_2 == 4 || param_2 == 6)) {
    param_2 = param_2 | 1;
  }
  uVar1 = param_2 | param_5 * 0x10 - 0x10U | DAT_00011a04 & piVar2[2];
  if ((uVar1 & 0xc000000) != 0xc000000) {
    param_3 = (param_5 << ((uVar1 & 0xc000000) >> 0x1a)) + param_3 + -1;
  }
  *piVar2 = param_3;
  if ((uVar1 & 0xc0000000) != 0xc0000000) {
    if ((param_2 == 4) || (param_2 == 6)) {
      param_4 = iVar3 + (param_1 << 4 | 0x200) + 0xc;
    }
    else {
      param_4 = (param_5 << (uVar1 >> 0x1e)) + param_4 + -1;
    }
  }
  piVar2[1] = param_4;
  piVar2[2] = uVar1;
  return;
}



uint * FUN_00011a94(uint *param_1,undefined param_2,uint param_3)

{
  ushort uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  puVar3 = param_1;
  if (((uint)param_1 & 3) != 0) {
    do {
      bVar6 = param_3 == 0;
      if (!bVar6) {
        *(undefined *)puVar3 = param_2;
        param_3 = param_3 - 1;
        bVar6 = param_3 == 0;
        puVar3 = (uint *)((int)puVar3 + 1);
      }
      if (!bVar6) {
        bVar6 = ((uint)puVar3 & 3) == 0;
      }
    } while (!bVar6);
    if (param_3 == 0) {
      return param_1;
    }
  }
  uVar1 = CONCAT11(param_2,param_2);
  uVar4 = (uint)uVar1;
  puVar2 = puVar3;
  if (3 < param_3) {
    uVar4 = CONCAT22(uVar1,uVar1);
    if (7 < param_3) {
      if (0xf < param_3) {
        uVar5 = param_3 - 0xf;
        param_3 = param_3 & 0xf;
        do {
          *puVar3 = uVar4;
          puVar3[1] = uVar4;
          puVar3[2] = uVar4;
          puVar3[3] = uVar4;
          puVar3 = puVar3 + 4;
          bVar6 = 0xf < uVar5;
          uVar5 = uVar5 - 0x10;
        } while (bVar6 && uVar5 != 0);
      }
      if ((param_3 & 8) != 0) {
        *puVar3 = uVar4;
        puVar3[1] = uVar4;
        puVar3 = puVar3 + 2;
      }
    }
    puVar2 = puVar3;
    if ((param_3 & 4) != 0) {
      puVar2 = puVar3 + 1;
      *puVar3 = uVar4;
    }
  }
  puVar3 = puVar2;
  if ((param_3 & 2) != 0) {
    puVar3 = (uint *)((int)puVar2 + 2);
    *(short *)puVar2 = (short)uVar4;
  }
  if ((param_3 & 1) != 0) {
    *(char *)puVar3 = (char)uVar4;
  }
  return param_1;
}



void FUN_00011b08(int param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  
  *(uint *)(param_1 + 0x128) =
       param_4 & 0xff | param_6 >> 0x18 | *(uint *)(param_1 + 0x128) & 0xfffffffa;
  uVar1 = DAT_00011b78;
  if (param_4 == 0) {
    uVar2 = 0x10000;
  }
  else {
    uVar2 = 0x60000;
  }
  uVar2 = DAT_00011b74 & uVar2;
  *(uint *)(param_1 + 0x134) = (param_2 / param_3) * 0x10 - 0x10 & 0xff00;
  *(uint *)(param_1 + 300) =
       param_5 | uVar1 & param_6 | uVar2 | (param_2 / param_3 + 0x3fffffff & 0xf) << 2 | 0x20000000;
  return;
}



void FUN_00011b7c(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = (int)(param_2 + ((uint)(param_2 >> 1) >> 0x1e)) >> 2;
  FUN_00014768(0xd,1,iVar1,0x22000000,0,DAT_00011be8 + -0x28,0xc000000,DAT_00011bec + -4,0xc0000000)
  ;
  FUN_00014768(0xc,1,iVar1,0x22000000,0,DAT_00011be0,0xc000000,param_1,0x80000000);
  FUN_000162da(DAT_00011be4,iVar1);
  return;
}



void FUN_00011bf0(char *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined uVar3;
  
  uVar2 = 0;
  if (((uint)param_1 >> 10 & 1) == 0) {
    if (param_1 == (char *)0x63) {
      uVar3 = 3;
    }
    else if (((param_1 == s_Main_0x_08X___version_0x_04X_nee_00000fe8 + 0x22) ||
             (param_1 == s_Main_0x_08X___version_0x_04X_nee_00000fe8 + 0x23)) ||
            (param_1 == (char *)0x120b)) {
      uVar3 = 0;
    }
    else {
      uVar3 = 2;
      uVar2 = DAT_00011c5c;
      if (((param_1 != (char *)0x182e) && (param_1 != (char *)0x1830)) &&
         (uVar2 = *(undefined4 *)(DAT_00011c54 + ((int)param_1 >> 9 & 0x1cU)),
         param_1 == (char *)0x1822)) {
        uVar2 = DAT_00011c58;
      }
    }
  }
  else {
    uVar3 = 1;
  }
  iVar1 = *DAT_00011c60;
  *(undefined *)(iVar1 + 0xc4) = uVar3;
  *(undefined4 *)(iVar1 + 0xc0) = uVar2;
  return;
}



int FUN_00011c64(undefined4 param_1,int param_2,undefined4 *param_3,int *param_4)

{
  short sVar1;
  int iVar2;
  int local_28;
  undefined4 local_24;
  ushort local_20;
  undefined2 local_1e;
  undefined4 local_18;
  undefined4 local_14;
  
  if ((*DAT_00011ccc == '\x01') || ((*DAT_00011cd0 >> 9 & 1) == 0)) {
    iVar2 = -100;
  }
  else {
    sVar1 = FUN_00015eae(param_1);
    local_20 = sVar1 + 4U & 0xfffc;
    local_24 = 0;
    local_1e = 0;
    local_14 = 0;
    if (param_3 != (undefined4 *)0x0) {
      local_24 = *param_3;
    }
    local_28 = param_2;
    local_18 = param_1;
    iVar2 = FUN_0001144c(DAT_00011cd4,&local_28,&local_20);
    *param_4 = local_28;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = local_24;
      local_28 = *param_4;
    }
    if (local_28 < 0) {
      iVar2 = local_28;
    }
  }
  return iVar2;
}



undefined4 FUN_00011cd8(void)

{
  undefined4 uVar1;
  
  *DAT_00011d40 = 0;
  uVar1 = DAT_00011d3c;
  if (*DAT_00011d44 != '\0') {
    FUN_0000bcfe(0xc1);
    FUN_0000bc3e(DAT_00011d48);
    FUN_000162cc(uVar1,0x10000000);
    FUN_000162cc(uVar1,0x8000000);
    FUN_000162b0(uVar1,0x8000);
    FUN_000162b0(uVar1,0x4000);
  }
  FUN_00016286(uVar1);
  FUN_000162a2(uVar1);
  FUN_00015e98(uVar1);
  FUN_00015a10(4,0x101);
  return 0;
}



void FUN_00011d50(undefined4 *param_1)

{
  bool bVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  
  uVar9 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar9 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x20);
  }
  uVar8 = *DAT_00011db8;
  iVar4 = *DAT_00011dc0;
  uVar3 = *(uint *)(DAT_00011dbc + 0x18);
  uVar7 = *(uint *)(iVar4 + 0x10);
  uVar6 = *(uint *)(DAT_00011dbc + 0x10);
  uVar5 = *(uint *)(DAT_00011dbc + 0x18);
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    if ((uVar6 >> 0x10 & 1) != 0) {
      *DAT_00011db8 = *DAT_00011db8 + 1;
    }
    if ((uVar5 < uVar3) && ((uVar6 & 0x10000) != 0)) {
      uVar3 = *(int *)(iVar4 + 0x10) * 2 - uVar3;
    }
    else {
      uVar3 = *(int *)(iVar4 + 0x10) - uVar3;
    }
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar9);
  }
  lVar2 = (ulonglong)uVar8 * (ulonglong)uVar7 + (ulonglong)uVar3;
  param_1[1] = (int)lVar2;
  *param_1 = (int)((ulonglong)lVar2 >> 0x20);
  return;
}



void thunk_FUN_000158b8(undefined4 *param_1)

{
  FUN_000128d0(DAT_000158d4,*param_1,DAT_000158d0,0,0);
  *param_1 = 0;
  return;
}



undefined4 FUN_00011dc8(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int **ppiVar4;
  undefined4 uVar5;
  
  iVar2 = FUN_0000e098(*DAT_00011e2c + param_1,param_3);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_00015b50(*DAT_00011e30 + param_1);
    FUN_00010ddc(param_2,piVar3 + 2,*(undefined4 *)(param_1 + 4));
    uVar5 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar5 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x20);
    }
    iVar2 = *DAT_00011e34 + param_1;
    ppiVar4 = *(int ***)(iVar2 + 4);
    *piVar3 = iVar2;
    piVar3[1] = (int)ppiVar4;
    *ppiVar4 = piVar3;
    *(int **)(iVar2 + 4) = piVar3;
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar5);
    }
    FUN_00011f90(*DAT_00011e38 + param_1,ppiVar4,uVar5);
    return 1;
  }
  return 0;
}



ushort FUN_00011e3c(undefined4 param_1,int param_2)

{
  ushort uVar1;
  undefined auStack_3c [48];
  
  if (param_2 == 0) {
    uVar1 = *DAT_00011ea4;
  }
  else if (param_2 == 0x20) {
    uVar1 = DAT_00011ea4[1];
  }
  else if (param_2 == 0x40) {
    uVar1 = DAT_00011ea4[2];
  }
  else if (param_2 == 0x60) {
    uVar1 = ((DAT_00011ea4[2] | DAT_00011ea4[1] | *DAT_00011ea4) ^ 0xff87) & 0xff87;
  }
  else {
    FUN_00016410(auStack_3c);
    FUN_00015bac(auStack_3c,*DAT_00011ea8,0,0xd6,*DAT_00011eac,param_2,0);
    uVar1 = 0;
  }
  return uVar1;
}



undefined8 FUN_00011eb0(undefined4 param_1,short *param_2,undefined4 param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  short local_18;
  undefined uStack_16;
  undefined uStack_15;
  short *psStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  uStack_15 = (undefined)((uint)param_1 >> 0x18);
  psStack_14 = param_2;
  if ((*DAT_00011f18 == '\x01') || ((*DAT_00011f1c >> 9 & 1) == 0)) {
    iVar1 = -100;
  }
  else {
    if (*param_2 == 2) {
      uVar2 = 0x9404;
    }
    else {
      if (*param_2 != 9) {
        iVar1 = -2;
        goto LAB_00011f14;
      }
      uVar2 = 0x9604;
    }
    uStack_16 = (undefined)param_1;
    uVar3 = 0;
    local_18 = 0;
    local_c = CONCAT13(4,CONCAT12(0xc,uVar2));
    uStack_10 = param_3;
    FUN_00015186(param_2,&local_18);
    iVar1 = FUN_0001144c(&local_c,&local_18,uVar3);
    if (iVar1 == 0) {
      iVar1 = (int)local_18;
    }
  }
LAB_00011f14:
  return CONCAT44(psStack_14,iVar1);
}



void FUN_00011f90(int param_1)

{
  undefined2 uVar1;
  bool bVar2;
  int **ppiVar3;
  short sVar4;
  int **ppiVar5;
  int *piVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar7 = getBasePriority();
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x20);
  }
  ppiVar5 = (int **)(*DAT_00011ff8 + param_1);
  if (ppiVar5 == (int **)*ppiVar5) {
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      sVar4 = *(short *)(param_1 + 10) + 1;
    }
    else {
      sVar4 = 1;
    }
    *(short *)(param_1 + 10) = sVar4;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(uVar7);
    }
    return;
  }
  uVar1 = *DAT_00011ffc;
  *DAT_00011ffc = 1;
  ppiVar3 = (int **)*ppiVar5;
  piVar6 = *ppiVar3;
  *ppiVar5 = piVar6;
  piVar6[1] = (int)ppiVar5;
  *(undefined *)(ppiVar3 + 4) = 1;
  if (ppiVar3[3] != (int *)0x0) {
    *(undefined2 *)((int)ppiVar3[3] + 0x14) = 0;
  }
  FUN_00014eb8(ppiVar3[2],uVar7);
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(uVar7);
  }
  FUN_000150d8(uVar1);
  return;
}



uint FUN_00012070(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 * 2 < 0xffe00000) {
    uVar1 = param_1 >> 0x14 | param_2 << 0xc;
    uVar2 = uVar1 + 0x100;
    if (0xfffffeff < uVar1) {
      uVar2 = uVar2 >> 1;
      param_2 = param_2 + 0x100000;
    }
    uVar2 = uVar2 >> 9;
    if ((int)param_2 < 0) {
      uVar2 = uVar2 | 0x80000000;
    }
    param_2 = ((param_2 << 1) >> 0x15) - 0x380;
    if ((int)param_2 < 0) {
      return 0;
    }
    if (param_2 < 0xff) {
      return uVar2 | param_2 * 0x800000;
    }
  }
  else if ((param_2 * 2 + 0x200000 & 0x1fffff | param_1) != 0) {
    return 0xffe00000;
  }
  return param_2 & 0x80000000 | 0x7f800000;
}



char * FUN_000120e0(char *param_1,uint param_2,int param_3,uint param_4)

{
  int extraout_r1;
  int iVar1;
  char cVar2;
  
  iVar1 = 0;
  cVar2 = '\0';
  if (((int)param_4 < 0) && (param_4 = -param_4, (int)param_2 < 0)) {
    param_2 = -param_2;
    param_3 = param_3 + -1;
    cVar2 = '-';
  }
  do {
    FUN_000143c8(param_2,param_4);
    param_2 = param_2 / param_4;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + -1;
    *param_1 = s_F0123456789abcdef_0001213b[extraout_r1 + 1];
  } while (param_2 != 0);
  if (iVar1 < param_3) {
    param_3 = param_3 - iVar1;
    do {
      param_3 = param_3 + -1;
      param_1 = param_1 + -1;
      *param_1 = '0';
    } while (param_3 != 0);
  }
  if (cVar2 != '\0') {
    param_1 = param_1 + -1;
    *param_1 = cVar2;
  }
  return param_1;
}



undefined4 FUN_00012150(undefined4 param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  FUN_000164ae(DAT_000121b8,param_2,param_4,0,param_4);
  iVar1 = param_3;
  iVar2 = param_2;
  for (uVar3 = param_4 >> 4; uVar3 != 0; uVar3 = uVar3 - 1) {
    FUN_00014204(param_1,iVar2,0x10);
    FUN_0001495e(param_1,iVar1,0x10);
    iVar2 = iVar2 + 0x10;
    iVar1 = iVar1 + 0x10;
  }
  uVar3 = param_4 & 0xf;
  if (uVar3 != 0) {
    FUN_00014204(param_1,param_2 + (param_4 & 0xfffffff0),uVar3);
    FUN_0001495e(param_1,param_3 + (param_4 & 0xfffffff0),uVar3);
  }
  return 1;
}



void FUN_000121bc(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = DAT_0001221c;
  iVar2 = (int)(param_2 + ((uint)(param_2 >> 1) >> 0x1e)) >> 2;
  FUN_00014768(0xd,1,iVar2,0x22000000,0,param_1,0x8000000,DAT_0001221c + -4,0xc0000000);
  FUN_00014768(0xc,1,iVar2,0x22000000,0,iVar1,0xc000000,DAT_00012220,0xc0000000);
  FUN_000162da(DAT_00012224,iVar2);
  return;
}



undefined4 FUN_00012228(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  FUN_00015738();
  piVar1 = DAT_00012290;
  iVar4 = *DAT_00012290;
  iVar2 = (short)(ushort)*(byte *)(iVar4 + 0xbc) * 0xc;
  if ((*(byte *)(iVar2 + *DAT_00012290 + 0x19) & 0x80) == 0) {
    puVar3 = *(undefined4 **)(iVar2 + *DAT_00012290 + 0x14);
    *puVar3 = *(undefined4 *)(param_1 + 8);
    puVar3[1] = *(undefined4 *)(param_1 + 0xc);
  }
  else {
    FUN_00010ddc(*(undefined4 *)((short)(ushort)*(byte *)(iVar4 + 0xbc) * 0xc + iVar4 + 0x14),
                 (undefined4 *)(param_1 + 8),0x14);
  }
  FUN_00016154((short)(ushort)*(byte *)(*piVar1 + 0xbc) * 0xc + *piVar1 + 0x10);
  FUN_00015a80();
  return 0;
}



int FUN_00012300(int param_1,uint param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iStack_18;
  undefined4 uStack_14;
  
  uVar1 = DAT_00012364;
  if ((param_1 != 1) || (*DAT_0001235c != 1)) {
    return -1;
  }
  iStack_18 = param_3;
  uStack_14 = param_4;
  if ((100 < param_3) && ((*DAT_00012360 != '\0' && ((param_2 & 3) == 0)))) {
    FUN_000121bc(param_2,param_3);
    FUN_00016294(uVar1);
    FUN_0000bc06(DAT_00012368,&iStack_18,0xffffffff);
    return param_3;
  }
  FUN_000162da(DAT_00012364,0);
  iVar2 = FUN_00014020(param_2,param_3);
  return iVar2;
}



void thunk_FUN_000155a4(undefined4 *param_1)

{
  FUN_000128d0(DAT_000155c4,*param_1,DAT_000155c0,0xffffffff,0);
  *param_1 = 0;
  return;
}



void FUN_000123e0(int param_1)

{
  bool bVar1;
  undefined2 *puVar2;
  int **ppiVar3;
  int **ppiVar4;
  int *piVar5;
  int **ppiVar6;
  
  puVar2 = DAT_00012448;
  if (param_1 == 0) {
    if (*(int *)(DAT_00012448 + 2) != 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0);
      }
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(0x20);
      }
      ppiVar6 = *(int ***)(DAT_00012448 + 8);
      ppiVar4 = (int **)(*(int *)(DAT_00012448 + 10) +
                        LZCOUNT(*(undefined4 *)(DAT_00012448 + 2)) * -8 + 0xf8);
      while (ppiVar6 < ppiVar4) {
        ppiVar3 = (int **)*ppiVar4;
        piVar5 = *ppiVar3;
        *ppiVar4 = piVar5;
        piVar5[1] = (int)ppiVar4;
        if (ppiVar4 == (int **)*ppiVar4) {
          *(uint *)(puVar2 + 2) = *(uint *)(puVar2 + 2) & ~(uint)ppiVar3[6];
        }
        FUN_000130d8();
        if (*(int *)(puVar2 + 2) == 0) break;
        ppiVar4 = (int **)(*(int *)(puVar2 + 10) + LZCOUNT(*(int *)(puVar2 + 2)) * -8 + 0xf8);
      }
    }
    *puVar2 = 0;
  }
  return;
}



void FUN_0001244c(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x10) != 0)) {
    uVar1 = FUN_00013194(param_1);
    FUN_0001104c(uVar1,0,0xffffffff);
    if (*DAT_000124b4 == 0) {
      FUN_00015c6a(s_error__id_0x_x__args__0x_x__0x_x_0001248c,*(undefined4 *)(param_1 + 0xc),
                   *(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    }
    else {
      FUN_00015c6a(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 4),
                   *(undefined4 *)(param_1 + 8));
    }
    FUN_00015c84(&DAT_000124b0);
  }
  return;
}



undefined8 FUN_000124b8(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  iVar3 = param_1;
  iVar5 = param_2;
  iVar4 = param_3;
  uVar6 = param_4;
  iVar1 = FUN_00015e38(param_4);
  if (param_3 == 0) {
    param_3 = FUN_00016434();
  }
  iVar2 = param_1;
  if (param_1 == 0) {
    iVar2 = *DAT_00012518;
  }
  iVar3 = FUN_00016486(iVar2,param_2,param_3,param_4,iVar3,iVar5,iVar4,uVar6);
  if ((iVar3 == 0) && ((iVar1 != 0 || (iVar4 = FUN_00015e38(param_4), iVar4 == 0)))) {
    FUN_00015bac(param_4,*DAT_0001251c,0,0x34,*DAT_00012520,param_1,param_2);
    iVar5 = param_1;
  }
  return CONCAT44(iVar5,iVar3);
}



void FUN_00012590(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = DAT_000125f4;
  if (param_1 == 4) {
    uVar2 = *DAT_000125f4 | 0x10000;
  }
  else if (param_1 == 5) {
    uVar2 = *DAT_000125f4 | 0x20000;
  }
  else if (param_1 == 6) {
    uVar2 = *DAT_000125f4 | 0x40000;
  }
  else if (param_1 == 0xf) {
    uVar2 = *DAT_000125f0 | 2;
    puVar1 = DAT_000125f0;
  }
  else {
    if (param_1 < 0x10) {
      return;
    }
    uVar2 = 1 << (param_1 - 0x10 & 0x1f);
    puVar1 = *(uint **)(DAT_000125ec + (param_1 - 0x10 >> 5) * 4);
  }
  *puVar1 = uVar2;
  DataSynchronizationBarrier(0xf);
  InstructionSynchronizationBarrier(0xf);
  return;
}



uint FUN_000125f8(uint param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uStack_2c;
  uint local_28 [4];
  undefined4 uStack_18;
  
  local_28[0] = *DAT_0001265c;
  local_28[1] = DAT_0001265c[1];
  local_28[2] = DAT_0001265c[2];
  iVar5 = 5;
  local_28[3] = DAT_0001265c[3];
  uStack_18 = DAT_0001265c[4];
  uVar1 = 0;
  puVar3 = &uStack_2c;
  do {
    puVar2 = puVar3;
    puVar3 = puVar2 + 1;
    if (param_1 <= *puVar3 * 0xff) goto LAB_0001262e;
    iVar5 = iVar5 + -1;
    uVar1 = uVar1 + 1;
  } while (iVar5 != 0);
  puVar3 = puVar2 + 2;
LAB_0001262e:
  uVar6 = *puVar3;
  uVar4 = param_1 / uVar6;
  if (param_1 != uVar6 * (param_1 / uVar6)) {
    uVar4 = uVar4 + 1;
  }
  return uVar4 & 0xff | (uVar1 & 0xf) << 8 | (param_2 & 0xff) << 0x10 | 0x3000;
}



undefined8 FUN_000126c8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *local_28 [4];
  
  iVar4 = *param_1;
  local_28[0] = param_1;
  local_28[1] = (int *)param_2;
  local_28[2] = (int *)param_3;
  local_28[3] = (int *)param_4;
  iVar2 = FUN_00015ec4(iVar4,0x3a);
  iVar1 = DAT_0001272c;
  if (iVar2 != 0) {
    iVar3 = iVar2 - iVar4;
    if (8 < iVar3) {
      iVar3 = 8;
    }
    FUN_00014928(local_28,iVar4,iVar3);
    *(undefined *)(iVar3 + (int)local_28) = 0;
    if ((char)local_28[0] != '\0') {
      uVar5 = 0x50;
      iVar4 = iVar1 + 0x78;
      do {
        iVar3 = FUN_00015d18(iVar4,local_28);
        if (iVar3 == 0) {
          if (iVar4 != 0) {
            *param_1 = iVar2 + 1;
            goto LAB_00012726;
          }
          break;
        }
        uVar5 = uVar5 - 0x28;
        iVar4 = iVar4 + 0x28;
      } while (0x27 < uVar5);
    }
  }
  iVar4 = iVar1 + 0x50;
LAB_00012726:
  return CONCAT44(local_28[1],iVar4);
}



int FUN_00012730(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  code **ppcVar5;
  byte *pbVar6;
  
  ppcVar5 = DAT_00012790;
  (**DAT_00012790)();
  pbVar6 = DAT_00012794;
  *DAT_00012794 = (byte)param_1;
  pbVar6[2] = (byte)param_2;
  pbVar6[6] = (byte)param_3;
  pbVar6[1] = (byte)((uint)param_1 >> 8);
  pbVar6[3] = (byte)((uint)param_2 >> 8);
  pbVar6[4] = (byte)((uint)param_2 >> 0x10);
  pbVar6[5] = (byte)((uint)param_2 >> 0x18);
  pbVar6[7] = (byte)((uint)param_3 >> 8);
  FUN_00012798(0xf4,pbVar6,0,0);
  FUN_000127ca(pbVar6,0);
  bVar1 = pbVar6[2];
  bVar2 = pbVar6[3];
  bVar3 = *pbVar6;
  bVar4 = pbVar6[1];
  (*ppcVar5[1])();
  return (uint)bVar3 + (uint)bVar1 * 0x10000 + (uint)bVar2 * 0x1000000 + (uint)bVar4 * 0x100;
}



void FUN_00012798(undefined param_1,undefined *param_2,undefined *param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = DAT_000127fc;
  iVar3 = 8;
  *DAT_000127fc = param_4;
  *(undefined *)(piVar1 + 1) = param_1;
  piVar2 = piVar1;
  do {
    iVar3 = iVar3 + -1;
    *(undefined *)((int)piVar2 + 5) = *param_2;
    piVar2 = (int *)((int)piVar2 + 1);
    param_2 = param_2 + 1;
  } while (iVar3 != 0);
  if (param_4 != 0) {
    do {
      param_4 = param_4 + -1;
      *(undefined *)((int)piVar1 + 0xd) = *param_3;
      piVar1 = (int *)((int)piVar1 + 1);
      param_3 = param_3 + 1;
    } while (param_4 != 0);
  }
  return;
}



void FUN_000127ca(undefined *param_1,undefined *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = DAT_000127fc;
  iVar5 = 8;
  iVar4 = *DAT_000127fc;
  piVar3 = DAT_000127fc;
  do {
    piVar1 = piVar3 + 1;
    iVar5 = iVar5 + -1;
    piVar3 = (int *)((int)piVar3 + 1);
    *param_1 = *(undefined *)piVar1;
    param_1 = param_1 + 1;
  } while (iVar5 != 0);
  if (param_2 != (undefined *)0x0) {
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      piVar3 = piVar2 + 3;
      piVar2 = (int *)((int)piVar2 + 1);
      *param_2 = *(undefined *)piVar3;
      param_2 = param_2 + 1;
    }
  }
  return;
}



int FUN_00012800(undefined param_1,undefined param_2,undefined param_3,undefined4 param_4,
                undefined2 param_5)

{
  int iVar1;
  undefined2 local_30 [4];
  undefined4 local_28;
  short local_20;
  undefined local_1e;
  undefined local_1d;
  
  if ((*DAT_00012860 == '\x01') || ((*DAT_00012864 >> 9 & 1) == 0)) {
    iVar1 = -100;
  }
  else {
    FUN_000164f4(local_30);
    local_30[0] = param_5;
    local_20 = CONCAT11(param_2,param_1);
    local_1d = (undefined)param_5;
    local_28 = param_4;
    local_1e = param_3;
    iVar1 = FUN_0001144c(DAT_0001285c,&local_20,local_30);
    if (iVar1 == 0) {
      iVar1 = (int)local_20;
    }
  }
  return iVar1;
}



int FUN_00012868(undefined param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined auStack_28 [2];
  short local_26;
  undefined4 local_1c;
  short local_18 [4];
  
  if ((*DAT_000128c8 == '\x01') || ((*DAT_000128cc >> 9 & 1) == 0)) {
    iVar1 = -100;
  }
  else {
    iVar1 = DAT_000128c0;
    if (param_2 != 0) {
      FUN_000164f4(auStack_28);
      local_26 = (short)param_2 * 0x2c;
      local_18[0] = CONCAT11((char)param_2,param_1);
      local_1c = param_3;
      iVar1 = FUN_0001144c(DAT_000128c4,local_18,auStack_28);
      if (iVar1 == 0) {
        iVar1 = (int)local_18[0];
      }
    }
  }
  return iVar1;
}



void FUN_000128d0(int param_1,int param_2,code *param_3,int param_4,short param_5)

{
  int unaff_r6;
  
  if (param_2 != 0) {
    if (param_5 == 0) {
      FUN_0001641c();
      **(undefined4 **)(param_2 + -4) = *(undefined4 *)(param_2 + -8);
      *(undefined4 *)(*(int *)(param_2 + -8) + 4) = *(undefined4 *)(param_2 + -4);
      *(undefined4 *)(param_2 + -4) = 0;
      *(undefined4 *)(param_2 + -8) = 0;
      FUN_00016228();
      unaff_r6 = param_2 + -8;
    }
    if (param_3 != (code *)0x0) {
      if (param_4 == -1) {
        (*param_3)(param_2);
      }
      else {
        (*param_3)(param_2,param_4);
      }
    }
    if (param_5 == 0) {
      FUN_00016248(*(undefined4 *)(param_1 + 0xc),unaff_r6,*(undefined4 *)(param_1 + 0x14));
    }
  }
  return;
}



uint FUN_00012938(uint param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  
  bVar3 = param_1 == 0x13;
  bVar4 = param_1 == 4;
  bVar5 = param_1 == 3;
  if (bVar5 || (bVar4 || bVar3)) {
    param_1 = DAT_00012990 >> 1;
  }
  if (!bVar5 && (!bVar4 && !bVar3)) {
    if (param_1 == 0) {
      uVar2 = *DAT_00012994;
      uVar1 = *DAT_00012994;
    }
    else {
      if (param_1 != 2) {
        return DAT_00012990;
      }
      uVar2 = DAT_00012994[8];
      uVar1 = DAT_00012994[8];
    }
    param_1 = DAT_00012998 / (((uVar2 << 0x15) >> 0x1d) + (uVar1 & 0xff) + 2);
  }
  return param_1;
}



int FUN_00012b90(undefined param_1,undefined4 param_2,short param_3,byte param_4)

{
  int iVar1;
  undefined auStack_28 [2];
  short local_26;
  undefined4 local_1c;
  short local_18;
  undefined local_16;
  byte local_15;
  
  if ((*DAT_00012bec == '\x01') || ((*DAT_00012bf0 >> 9 & 1) == 0)) {
    iVar1 = -100;
  }
  else {
    FUN_000164f4(auStack_28);
    local_15 = param_4 & 0xf;
    local_26 = param_3;
    local_1c = param_2;
    local_18 = param_3;
    local_16 = param_1;
    iVar1 = FUN_0000e5c4(param_1,DAT_00012be8,&local_18,auStack_28);
    if (iVar1 == 0) {
      iVar1 = (int)local_18;
    }
  }
  return iVar1;
}



int FUN_00012bf4(undefined2 param_1,undefined2 param_2,short param_3,undefined4 param_4)

{
  int iVar1;
  short local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  short local_2a;
  ushort local_28 [4];
  undefined4 local_20;
  
  if ((*DAT_00012c50 == '\x01') || ((*DAT_00012c54 >> 9 & 1) == 0)) {
    iVar1 = -100;
  }
  else {
    FUN_000164f4(local_28);
    local_28[0] = param_3 + 3U & 0xfffc;
    local_2e = param_1;
    local_2c = param_2;
    local_2a = param_3;
    local_20 = param_4;
    iVar1 = FUN_0001144c(DAT_00012c4c,&local_30,local_28);
    if (iVar1 == 0) {
      iVar1 = (int)local_30;
    }
  }
  return iVar1;
}



int FUN_00012c58(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined auStack_48 [48];
  
  uVar1 = DAT_00012cb4;
  iVar2 = FUN_0000efd8(DAT_00012cb4,0,auStack_48,param_3,0x30,param_4);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar3 = FUN_00011210(iVar2,param_1,param_2,auStack_48,param_4);
    iVar4 = FUN_00015e38(param_4);
    if (iVar4 != 0) {
      FUN_000128d0(uVar1,iVar2,DAT_00012cb8,uVar3,0);
      iVar2 = 0;
    }
  }
  return iVar2;
}



int FUN_00012d24(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined auStack_50 [56];
  
  uVar1 = DAT_00012d80;
  iVar2 = FUN_0000efd8(DAT_00012d80,0,auStack_50,param_3,0x34,param_4);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar3 = FUN_0000fb58(iVar2,param_1,param_2,auStack_50,param_4);
    iVar4 = FUN_00015e38(param_4);
    if (iVar4 != 0) {
      FUN_000128d0(uVar1,iVar2,DAT_00012d84,uVar3,0);
      iVar2 = 0;
    }
  }
  return iVar2;
}



void FUN_00012d88(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  
  uVar1 = *(uint *)(DAT_00012de4 + (param_1 & 0x3f) * 4);
  if (param_3 == 0x10000000) {
    puVar2 = (uint *)(DAT_00012de0 + uVar1 * 4);
    *DAT_00012ddc = 0x80 << (uVar1 & 0xff) & 0x1e00U | *DAT_00012ddc;
    param_3 = 0xc00;
  }
  else {
    puVar2 = (uint *)(DAT_00012de0 + uVar1 * 4);
    *DAT_00012ddc = (0x80 << (uVar1 & 0xff) ^ 0x1e00U | 0xffffe1ff) & *DAT_00012ddc;
    param_3 = param_3 | param_2 | *puVar2 & 0xfffffc0f;
  }
  *puVar2 = param_3;
  return;
}



int FUN_00012e52(undefined4 param_1,int *param_2,int param_3,undefined4 param_4)

{
  FUN_00010ddc(*param_2,param_1,param_3,param_4,param_4);
  *param_2 = param_3 + *param_2;
  return param_3;
}



void FUN_00012e6a(undefined *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_24;
  undefined *local_20 [2];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  local_24 = param_2;
  local_20[0] = param_1;
  uStack_8 = param_3;
  uStack_4 = param_4;
  FUN_0000474c(&local_24,&uStack_8,local_20,DAT_00012ea4,DAT_00012ea0);
  *local_20[0] = 0;
  return;
}



int FUN_00012ea8(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  ushort local_20;
  undefined2 local_1e;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10 [2];
  
  if ((*DAT_00012f00 == '\x01') || ((*DAT_00012f04 >> 9 & 1) == 0)) {
    iVar2 = -100;
  }
  else {
    sVar1 = FUN_00015eae(param_1);
    local_1e = 0;
    local_20 = sVar1 + 4U & 0xfffc;
    local_14 = 0;
    local_18 = param_1;
    local_10[0] = param_2;
    iVar2 = FUN_0001144c(DAT_00012efc,local_10,&local_20);
    if (iVar2 == 0) {
      iVar2 = (int)(short)local_10[0];
    }
  }
  return iVar2;
}



void FUN_00012f08(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = DAT_00012f64;
  do {
    *(undefined2 *)(iVar1 + 8) = 0;
    while (*(int *)(iVar1 + 4) == 0) {
      FUN_00013b10();
    }
    piVar2 = (int *)(*(int *)(iVar1 + 0x18) + LZCOUNT(*(undefined4 *)(iVar1 + 4)) * -8 + 0xf8);
    if (*(int **)(iVar1 + 0x14) < piVar2) {
      iVar3 = *piVar2;
      iVar4 = *(int *)(iVar1 + 0x10);
      *(int **)(iVar1 + 0x14) = piVar2;
      *(int *)(iVar1 + 0x10) = iVar3;
      FUN_00010940(iVar4,iVar3);
      FUN_000161b8(iVar4 + 0x10,iVar3 + 0x10);
    }
  } while (*(short *)(iVar1 + 8) != 0);
  return;
}



void FUN_00012f68(undefined param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint *puVar2;
  ushort *puVar3;
  int iVar4;
  uint local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  puVar2 = &local_18;
  iVar4 = *DAT_00012fbc;
  if (*(int *)(iVar4 + 0xc0) != 0) {
    iVar1 = 0xf;
    puVar3 = (ushort *)(DAT_00012fc0 + -4);
    do {
      local_18 = param_2;
      local_14 = param_3;
      if (**(ushort **)(iVar4 + 0xb8) == puVar3[2]) {
        puVar2 = (uint *)(*(int *)(iVar4 + 0xb8) + 4);
        *puVar2 = (uint)*(byte *)(puVar3 + 3);
        goto LAB_00012fb2;
      }
      iVar1 = iVar1 + -1;
      puVar3 = puVar3 + 2;
    } while (iVar1 != 0);
    if ((**(ushort **)(iVar4 + 0xb8) & 0x7800) == 0) {
      local_14 = CONCAT31((int3)((uint)param_3 >> 8),param_1);
      local_18 = *(uint *)(iVar4 + 0xb8);
    }
    else {
      puVar2 = *(uint **)(iVar4 + 0xb8);
    }
LAB_00012fb2:
    uStack_10 = param_4;
    (**(code **)(iVar4 + 0xc0))(puVar2);
  }
  return;
}



int FUN_00012fc4(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  code **ppcVar3;
  byte *pbVar4;
  int iVar5;
  
  ppcVar3 = DAT_00013018;
  (**DAT_00013018)();
  pbVar4 = DAT_0001301c;
  DAT_0001301c[1] = (byte)((uint)param_3 >> 8);
  pbVar4[2] = (byte)param_2;
  *pbVar4 = (byte)param_3;
  pbVar4[3] = (byte)((uint)param_2 >> 8);
  iVar5 = FUN_00015fa8(param_1);
  FUN_00012798(0xf0,pbVar4,param_1,iVar5 + 1);
  FUN_000127ca(pbVar4,0);
  bVar1 = pbVar4[1];
  bVar2 = *pbVar4;
  (*ppcVar3[1])();
  iVar5 = (int)(short)((ushort)bVar2 + (ushort)bVar1 * 0x100);
  if (iVar5 < 0) {
    param_3 = iVar5;
  }
  return param_3;
}



void FUN_00013020(uint param_1,uint param_2,int *param_3,undefined4 param_4)

{
  int iVar1;
  uint extraout_r1;
  uint uVar2;
  
  iVar1 = DAT_00013074;
  uVar2 = param_2 & 0x7fffffff;
  *param_3 = 0;
  if (((int)uVar2 < iVar1) && ((uVar2 | param_1) != 0)) {
    if (uVar2 < 0x100000) {
      FUN_0000f0d8(param_1,param_2,DAT_0001306c,DAT_00013070,param_4);
      uVar2 = extraout_r1 & 0x7fffffff;
      *param_3 = -0x36;
    }
    *param_3 = *param_3 + ((int)uVar2 >> 0x14) + -0x3fe;
  }
  return;
}



int FUN_0001307c(undefined param_1,undefined param_2,undefined4 param_3,undefined2 param_4)

{
  int iVar1;
  undefined2 local_28 [4];
  undefined4 local_20;
  undefined2 local_18;
  undefined local_16;
  undefined local_15;
  
  if ((*DAT_000130cc == '\x01') || ((*DAT_000130d0 >> 9 & 1) == 0)) {
    iVar1 = -100;
  }
  else {
    FUN_000164f4(local_28);
    local_18 = CONCAT11(local_18._1_1_,param_1);
    local_15 = (undefined)param_4;
    local_28[0] = param_4;
    local_20 = param_3;
    local_16 = param_2;
    iVar1 = FUN_0001144c(DAT_000130d4,&local_18,local_28);
    if (iVar1 == 0) {
      iVar1 = (int)local_18;
    }
  }
  return iVar1;
}



undefined4 FUN_000130d8(int param_1)

{
  undefined uVar1;
  bool bVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar4 = DAT_00013130;
  puVar3 = DAT_0001312c;
  uVar5 = *(undefined4 *)(param_1 + 0x24);
  *(undefined2 *)(param_1 + 0x1c) = 0;
  uVar6 = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x20);
  uVar9 = *(undefined4 *)(puVar3 + 6);
  *puVar3 = 0;
  uVar8 = *(undefined4 *)(puVar3 + 8);
  *(int *)(puVar3 + 6) = param_1;
  uVar7 = *(undefined4 *)(puVar3 + 4);
  *(undefined4 *)(puVar3 + 8) = uVar6;
  uVar1 = *(undefined *)(iVar4 + 0x14);
  *(undefined4 *)(puVar3 + 4) = uVar5;
  *(undefined *)(iVar4 + 0x14) = 1;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0);
  }
  (**(code **)(param_1 + 8))(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x20);
  }
  *puVar3 = 1;
  *(undefined *)(iVar4 + 0x14) = uVar1;
  *(undefined4 *)(puVar3 + 8) = uVar8;
  *(undefined4 *)(puVar3 + 6) = uVar9;
  *(undefined4 *)(puVar3 + 4) = uVar7;
  return 0x20;
}



void thunk_FUN_000158f8(undefined4 *param_1)

{
  FUN_000128d0(DAT_00015914,*param_1,DAT_00015910,0,0);
  *param_1 = 0;
  return;
}



void FUN_00013138(void)

{
  undefined2 uVar1;
  bool bVar2;
  undefined2 *puVar3;
  undefined4 uVar4;
  
  puVar3 = DAT_00013190;
  uVar4 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar4 = getBasePriority();
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x20);
  }
  if ((uint)(*(int *)(DAT_00013190 + 10) + LZCOUNT(*(undefined4 *)(DAT_00013190 + 2)) * -8 + 0xf8)
      <= *(uint *)(DAT_00013190 + 8)) {
    *DAT_00013190 = 0;
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(uVar4);
    }
    return;
  }
  uVar1 = *DAT_00013188;
  *DAT_00013188 = 1;
  FUN_000159d4(DAT_0001318c);
  *puVar3 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(uVar4);
  }
  FUN_000150d8(uVar1);
  return;
}



int FUN_00013194(int param_1)

{
  return param_1 + 0x14;
}



undefined4 FUN_00013198(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = FUN_00010654();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = *DAT_000131e8;
    if (0 < iVar1) {
      iVar4 = 0;
      do {
        uVar2 = FUN_00016208(0,iVar4);
        FUN_000113c0(uVar2,0);
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
    }
    iVar1 = DAT_000131f0;
    iVar4 = *DAT_000131ec;
    if (iVar4 != 0) {
      iVar3 = 0;
      do {
        FUN_000113c0(*(undefined4 *)(*(int *)(iVar1 + 0x30) + iVar3 * 4),0);
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



int FUN_000131f4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined auStack_50 [60];
  
  uVar1 = DAT_00013248;
  iVar2 = FUN_0000efd8(DAT_00013248,0,auStack_50,param_2,0x3c,param_3);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar3 = FUN_0000ff70(iVar2,param_1,auStack_50,param_3);
    iVar4 = FUN_00015e38(param_3);
    if (iVar4 != 0) {
      FUN_000128d0(uVar1,iVar2,DAT_0001324c,uVar3,0);
      iVar2 = 0;
    }
  }
  return iVar2;
}



int FUN_00013308(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_00010d3c(*(undefined2 *)(param_1 + 1));
  if ((param_3 < 0) || (9 < param_3 - iVar1)) {
    iVar2 = FUN_000141c0(param_2,param_3 - iVar1,&DAT_00013358,*param_1,param_4);
    iVar1 = iVar2 + iVar1;
  }
  if ((*(short *)(param_1 + 3) != 0) &&
     ((param_3 < 0 || (iVar2 = FUN_00015fa8(param_1[2]), iVar2 + 5 <= param_3 - iVar1)))) {
    iVar2 = FUN_000141c0(param_2,param_3 - iVar1,s____s___0001335c,param_1[2],param_4);
    iVar1 = iVar2 + iVar1;
  }
  return iVar1;
}



void FUN_00013364(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = DAT_000133b8;
  FUN_0001644a(DAT_000133b8 + -0x48,1);
  iVar2 = FUN_00016124(iVar1 + -0x40);
  uVar3 = FUN_00016124(iVar1 + -0x44);
  FUN_0001644a(iVar1 + -0x38,uVar3 + param_1);
  FUN_0001644a(iVar1 + -0x34,iVar2 + param_2 + (uint)CARRY4(uVar3,param_1));
  return;
}



void FUN_000133bc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  piVar1 = DAT_0001340c;
  iVar2 = *DAT_0001340c;
  if (*DAT_00013410 != '\x01') {
    *DAT_00013410 = '\x01';
    local_28 = param_2;
    local_24 = param_3;
    local_20 = param_4;
    FUN_0000bcba(iVar2 + 4);
    iVar3 = 10;
    iVar2 = 0;
    do {
      FUN_00016154(iVar2 + *piVar1 + 0x10);
      iVar2 = iVar2 + 0xc;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    local_28 = CONCAT31(local_28._1_3_,(char)param_1);
    if (param_1 == 2) {
      local_20 = param_3;
    }
    local_24 = param_2;
    FUN_00003b88(&local_28);
  }
  return;
}



void FUN_000135c0(void)

{
  return;
}



void FUN_000135c4(void)

{
  FUN_000135c0();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_000135cc(undefined4 param_1)

{
  code **ppcVar1;
  code *pcVar2;
  
  ppcVar1 = DAT_00013604;
  if ((DAT_00013604[2] != (code *)0x0) && (DAT_00013608 != (code *)0xffffffff)) {
    (*DAT_00013608)();
  }
  (**DAT_0001360c)();
  pcVar2 = ppcVar1[1];
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)(param_1);
  }
  pcVar2 = *ppcVar1;
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)();
  }
  (**DAT_00013610)();
  FUN_000135c4();
  return;
}



int FUN_00013614(undefined4 param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  code **ppcVar3;
  byte *pbVar4;
  
  ppcVar3 = DAT_00013660;
  (**DAT_00013660)();
  pbVar4 = DAT_00013664;
  if (0x100 < param_3) {
    param_3 = 0x100;
  }
  *DAT_00013664 = (byte)param_1;
  pbVar4[1] = (byte)((uint)param_1 >> 8);
  pbVar4[2] = (byte)param_3;
  pbVar4[3] = (byte)(param_3 >> 8);
  FUN_00012798(0xf3,pbVar4,param_2,param_3,param_4);
  FUN_000127ca(pbVar4,0);
  bVar1 = pbVar4[1];
  bVar2 = *pbVar4;
  (*ppcVar3[1])();
  return (int)(short)((ushort)bVar2 + (ushort)bVar1 * 0x100);
}



// WARNING: Removing unreachable block (ram,0x0001368e)

char * FUN_00013668(uint param_1,undefined4 param_2)

{
  char *pcVar1;
  char *pcVar2;
  uint uVar3;
  bool bVar4;
  char local_f [3];
  
  bVar4 = (int)param_1 < 0;
  local_f[2] = 0;
  pcVar2 = local_f + 2;
  do {
    pcVar1 = pcVar2;
    uVar3 = param_1 % 10;
    param_1 = param_1 / 10;
    pcVar2 = pcVar1 + -1;
    *pcVar2 = (char)uVar3 + '0';
  } while (param_1 != 0);
  if (bVar4) {
    pcVar2 = pcVar1 + -2;
    *pcVar2 = '-';
  }
  FUN_00010ddc(param_2,pcVar2,&stack0xfffffff4 + -(int)pcVar2);
  return local_f + -(int)pcVar2 + 2;
}



undefined8 thunk_FUN_000163d0(void)

{
  bool bVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x20);
  }
  return CONCAT44(0x20,uVar2);
}



void FUN_000136c0(int param_1)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x20);
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    if (0xf < *(uint *)(param_1 + 0x18)) {
      uVar2 = *(uint *)(param_1 + 0x18) - 0x10;
      *(int *)(DAT_0001370c + (uVar2 >> 5) * 4) = 1 << (uVar2 & 0x1f);
    }
    FUN_00013d10();
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    uVar2 = *(uint *)(DAT_00013710 + 0x10) | 5;
  }
  else {
    uVar2 = *(uint *)(DAT_00013710 + 0x10) | 1;
  }
  *(uint *)(DAT_00013710 + 0x10) = uVar2;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar3);
  }
  return;
}



undefined8 FUN_00013714(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined *puVar3;
  
  puVar1 = &DAT_0001375c;
  if (param_4 == 0) {
    puVar3 = &DAT_0001375c;
  }
  else {
    puVar3 = (undefined *)0x13758;
    if (*DAT_00013760 != 0) {
      puVar1 = (undefined *)FUN_00015e80(param_4 >> 0x10);
    }
  }
  uVar2 = FUN_00015bac(0,param_1,param_2,param_3,*DAT_00013764,puVar3,puVar1,param_4);
  return CONCAT44(puVar3,uVar2);
}



undefined4 FUN_00013768(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  FUN_00015738();
  piVar1 = DAT_000137b4;
  if ((*(byte *)(param_1 + 10) & 0xf) < 9) {
    FUN_00010ddc(*(undefined4 *)
                  ((short)(ushort)*(byte *)(*DAT_000137b4 + 0xbc) * 0xc + *DAT_000137b4 + 0x14),
                 param_1 + 8,0xc);
    FUN_00016154((short)(ushort)*(byte *)(*piVar1 + 0xbc) * 0xc + *piVar1 + 0x10);
    FUN_00015a80();
    uVar2 = 0;
  }
  else {
    uVar2 = 0xfffffff9;
  }
  return uVar2;
}



undefined4 FUN_00013858(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar2 = FUN_000156b8();
  uVar3 = *param_1;
  param_1[1] = uVar2;
  uVar1 = DAT_000138a0;
  if (uVar2 < uVar3) {
    uVar3 = (uVar2 - uVar3) - 1;
  }
  else {
    uVar3 = uVar2 - uVar3;
  }
  param_1[2] = uVar3;
  uVar3 = uVar3 + param_1[3];
  if (uVar1 < uVar3) {
    uVar4 = param_1[4] - uVar3 / uVar1;
    param_1[4] = uVar4;
    param_1[3] = uVar3 - (uVar3 / uVar1) * uVar1;
    if ((int)uVar4 < 1) {
      return 1;
    }
    *param_1 = uVar2;
  }
  return 0;
}



int FUN_000138a4(byte *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  while (uVar3 = (uint)*param_1, (*(byte *)(DAT_000138ec + uVar3 + 1) >> 3 & 1) != 0) {
    param_1 = param_1 + 1;
  }
  if (uVar3 == 0x2d) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if (uVar3 != 0x2b) goto LAB_000138da;
  }
  param_1 = param_1 + 1;
  uVar3 = (uint)*param_1;
LAB_000138da:
  while ((*(byte *)(DAT_000138ec + uVar3 + 1) >> 2 & 1) != 0) {
    iVar2 = uVar3 + iVar2 * 10;
    param_1 = param_1 + 1;
    uVar3 = (uint)*param_1;
    iVar2 = iVar2 + -0x30;
  }
  if (bVar1) {
    iVar2 = -iVar2;
  }
  return iVar2;
}



int FUN_000138f0(byte *param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  while (uVar3 = (uint)*param_1, (*(byte *)(DAT_00013938 + uVar3 + 1) >> 3 & 1) != 0) {
    param_1 = param_1 + 1;
  }
  if (uVar3 == 0x2d) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if (uVar3 != 0x2b) goto LAB_00013926;
  }
  param_1 = param_1 + 1;
  uVar3 = (uint)*param_1;
LAB_00013926:
  while ((*(byte *)(DAT_00013938 + uVar3 + 1) >> 2 & 1) != 0) {
    iVar2 = uVar3 + iVar2 * 10;
    param_1 = param_1 + 1;
    uVar3 = (uint)*param_1;
    iVar2 = iVar2 + -0x30;
  }
  if (bVar1) {
    iVar2 = -iVar2;
  }
  return iVar2;
}



void FUN_0001393c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  
  iVar2 = DAT_00013984;
  iVar1 = DAT_00013980;
  uVar5 = (uint)*(ushort *)(param_1 + 2);
  uVar6 = 0;
  do {
    if (uVar5 <= uVar6) {
      return;
    }
    iVar3 = param_1 + uVar6 * 0xc;
    if (*(int *)(iVar3 + 0xc) == 0) {
      if (iVar2 != iVar1) {
        pcVar4 = *(code **)(iVar1 + (uint)**(byte **)(iVar3 + 4) * 4);
        (*pcVar4)(*(byte **)(iVar3 + 4) + 1,*(undefined4 *)(iVar3 + 8),pcVar4,
                  *(undefined4 *)(iVar3 + 8),param_4);
        goto LAB_00013974;
      }
    }
    else {
      FUN_00010ddc();
LAB_00013974:
      uVar5 = (uint)*(ushort *)(param_1 + 2);
    }
    uVar6 = uVar6 + 1 & 0xffff;
  } while( true );
}



undefined4 FUN_00013988(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*param_1 != -1) {
    uVar4 = param_1[5];
    iVar2 = 0;
    if ((((uVar4 >> 5 & 1) != 0) && (iVar3 = param_1[1], iVar3 != 0)) && (iVar3 != param_1[2])) {
      iVar2 = FUN_000152f4(*param_1,iVar3,param_1[2] - iVar3,uVar4,param_4);
      uVar4 = param_1[5];
    }
    if (-1 < iVar2) {
      param_1[4] = param_1[1];
      param_1[2] = param_1[1];
      bVar1 = (uVar4 >> 6 & 1) != 0;
      if (bVar1) {
        uVar4 = uVar4 & 0xffffffcf;
      }
      if (bVar1) {
        param_1[5] = uVar4;
      }
      return 0;
    }
    param_1[5] = uVar4 | 0x400;
  }
  return 0xffffffff;
}



uint FUN_000139d4(undefined param_1,undefined param_2,undefined param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_8;
  
  local_8._0_2_ = CONCAT11(param_2,param_1);
  if ((*DAT_00013a14 != '\x01') && ((*DAT_00013a18 >> 9 & 1) != 0)) {
    uVar1 = FUN_0001144c(DAT_00013a1c,&local_8,0);
    if ((uVar1 == 0) && (uVar1 = (uint)(short)local_8, -1 < (int)uVar1)) {
      uVar1 = local_8 >> 0x10 & 0xff;
    }
    return uVar1;
  }
  return 0xffffff9c;
}



undefined4 *
FUN_00013a20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  *(undefined4 *)(param_1 + -4) = param_4;
  *(undefined4 *)(param_1 + -8) = param_3;
  *(undefined4 *)(param_1 + -0xc) = param_2;
  *(undefined4 *)(param_1 + -0x10) = param_6;
  *(undefined4 *)(param_1 + -0x14) = param_5;
  *(undefined4 *)(param_1 + -0x18) = DAT_00013a68;
  *(undefined4 *)(param_1 + -0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + -0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + -0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + -0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + -0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + -0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + -0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + -0x38) = 0xffffffff;
  return (undefined4 *)(param_1 + -0x38);
}



void FUN_00013a6c(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(param_2);
  }
  return;
}



void FUN_00013ac0(void)

{
  int iVar1;
  int **ppiVar2;
  int **ppiVar3;
  int *piVar4;
  int **ppiVar5;
  
  iVar1 = DAT_00013b08;
  ppiVar5 = *(int ***)(DAT_00013b08 + 0x10);
  ppiVar3 = (int **)(*(int *)(DAT_00013b08 + 0x14) +
                    LZCOUNT(*(undefined4 *)(DAT_00013b08 + 4)) * -8 + 0xf8);
  do {
    ppiVar2 = (int **)*ppiVar3;
    piVar4 = *ppiVar2;
    *ppiVar3 = piVar4;
    piVar4[1] = (int)ppiVar3;
    if (ppiVar3 == (int **)*ppiVar3) {
      *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & ~(uint)ppiVar2[6];
    }
    FUN_000130d8();
  } while ((*(int *)(iVar1 + 4) != 0) &&
          (ppiVar3 = (int **)(*(int *)(iVar1 + 0x14) + LZCOUNT(*(int *)(iVar1 + 4)) * -8 + 0xf8),
          ppiVar5 < ppiVar3));
  return;
}



undefined4 FUN_00013b10(void)

{
  bool bVar1;
  code *pcVar2;
  
  pcVar2 = *DAT_00013b54;
  if (DAT_00013b58 == pcVar2) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0);
    }
    FUN_00015898(0);
  }
  else if (pcVar2 == (code *)0x0) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0);
    }
    bVar1 = false;
    while (!bVar1) {
      bVar1 = true;
    }
  }
  else {
    (*pcVar2)();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x20);
  }
  return 0x20;
}



void FUN_00013b5c(int param_1)

{
  uint *puVar1;
  sbyte sVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = DAT_00013ba0;
  puVar1 = (uint *)(DAT_00013ba0 + 8);
  sVar2 = *(sbyte *)(DAT_00013ba0 + *(int *)(DAT_00013ba0 + 0xc) * 0x14 + 0x18);
  if (param_1 == 0) {
    *(uint *)(DAT_00013ba0 + 4) = *(uint *)(DAT_00013ba0 + 4) & ~(1 << sVar2);
    uVar4 = ~(1 << sVar2) & *puVar1;
  }
  else {
    if (param_1 == 4) {
      *(uint *)(DAT_00013ba0 + 4) = 1 << sVar2 | *(uint *)(DAT_00013ba0 + 4);
      return;
    }
    if (param_1 != 5) {
      return;
    }
    uVar4 = 1 << sVar2 | *puVar1;
  }
  *(uint *)(iVar3 + 8) = uVar4;
  return;
}



void FUN_00013ba4(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint local_8;
  
  iVar1 = DAT_00013be4;
  if (param_1 != 0x12) {
    iVar2 = *(int *)(DAT_00013be8 + param_1 * 8);
    puVar3 = (uint *)(DAT_00013be4 + iVar2);
    *puVar3 = *puVar3 | 1;
    local_8 = 0;
    do {
      local_8 = local_8 + 1;
    } while (local_8 < 0x10);
    puVar3 = (uint *)(iVar1 + iVar2);
    *puVar3 = *puVar3 & 0xfffffffe;
  }
  return;
}



void FUN_00013bec(byte *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = (uint)*param_1;
  if (*(char *)((short)(ushort)*param_1 * 0xc + *DAT_00013c30 + 0x1a) == '\n') {
    bVar1 = 10;
  }
  else {
    if (param_2 != uVar2) {
      if (9 < uVar2) {
        return;
      }
      while( true ) {
        param_1 = (byte *)(*DAT_00013c30 + uVar2 * 0xc + 0x1a);
        uVar2 = (uint)*param_1;
        if (param_2 == uVar2) break;
        if (9 < uVar2) {
          return;
        }
      }
    }
    bVar1 = *(byte *)((short)param_2 * 0xc + *DAT_00013c30 + 0x1a);
  }
  *param_1 = bVar1;
  return;
}



uint FUN_00013c34(uint param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = ((uint)(param_2 << 1) >> 0x15) - 0x3ff;
  if ((int)uVar2 < 0) {
    return 0;
  }
  uVar3 = -uVar2 + 0x1f;
  if (uVar2 < 0x20 && uVar3 != 0) {
    uVar1 = (param_2 << 0xb | 0x80000000U) >> (uVar3 & 0xff);
    if (uVar3 < 0xb) {
      uVar1 = uVar1 | param_1 >> (-uVar2 + 0x34 & 0xff);
    }
    if (param_2 < 0) {
      uVar1 = -uVar1;
    }
    return uVar1;
  }
  uVar2 = 0x80000000;
  if (-1 < param_2) {
    uVar2 = 0x7fffffff;
  }
  return uVar2;
}



int FUN_00013c7c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  
  uVar1 = DAT_00013cbc;
  FUN_00016294(DAT_00013cbc);
  puVar2 = DAT_00013cc0;
  iVar4 = param_2 + 3 >> 2;
  if (iVar4 != 0) {
    puVar3 = DAT_00013cc0 + -3;
    do {
      do {
      } while ((*puVar3 >> 1 & 1) == 0);
      puVar2[-1] = 0xffffffff;
      do {
      } while ((*puVar3 & 1) == 0);
      iVar4 = iVar4 + -1;
      *param_1 = *puVar2;
      param_1 = param_1 + 1;
    } while (iVar4 != 0);
  }
  FUN_00016286(uVar1);
  return param_2;
}



undefined4 thunk_FUN_000153c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_c;
  
  uStack_c = param_2;
  iVar1 = FUN_00016258();
  if (iVar1 != 0) {
    uVar2 = FUN_0000be00(0,0xffffffff,param_1,&uStack_c,1);
    return uVar2;
  }
  return 0xffffffff;
}



uint FUN_00013cc8(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 < 0x10) {
    if (param_1 == 0xf) {
      uVar1 = *(uint *)(DAT_00013d0c + 0x10) & 2;
      *(uint *)(DAT_00013d0c + 0x10) = *(uint *)(DAT_00013d0c + 0x10) & 0xfffffffd;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    iVar2 = DAT_00013d0c + (param_1 - 0x10 >> 3 & 0xfffffffc);
    uVar1 = 1 << (param_1 - 0x10 & 0x1f);
    *(uint *)(iVar2 + 0x180) = uVar1;
    uVar1 = uVar1 & *(uint *)(iVar2 + 0x100);
  }
  return uVar1;
}



uint FUN_00013d10(uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 < 0x10) {
    if (param_1 == 0xf) {
      uVar1 = *(uint *)(DAT_00013d54 + 0x10) & 2;
      *(uint *)(DAT_00013d54 + 0x10) = *(uint *)(DAT_00013d54 + 0x10) | 2;
    }
    else {
      uVar1 = 0;
    }
  }
  else {
    iVar2 = DAT_00013d54 + (param_1 - 0x10 >> 3 & 0xfffffffc);
    uVar3 = *(uint *)(iVar2 + 0x100);
    uVar1 = 1 << (param_1 - 0x10 & 0x1f);
    *(uint *)(iVar2 + 0x100) = uVar1;
    uVar1 = uVar1 & uVar3;
  }
  return uVar1;
}



void FUN_00013d58(undefined4 param_1,undefined4 param_2)

{
  undefined auStack_3c [52];
  
  FUN_00016410(auStack_3c);
  FUN_00015bac(auStack_3c,*DAT_00013d9c,0,0x4f2,*DAT_00013d98,s_FException____00013d87 + 1,param_2);
  return;
}



void FUN_00013ec0(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = DAT_00013f04;
  param_1 = param_1 & 0x1f;
  if ((param_2 & 1) != 0) {
    *(int *)(DAT_00013f04 + -0xc) = 1 << param_1;
  }
  if ((param_2 >> 1 & 1) != 0) {
    *(int *)(iVar1 + 0xc) = 1 << param_1;
  }
  if ((param_2 >> 2 & 1) != 0) {
    *(int *)(iVar1 + 0x14) = 1 << param_1;
  }
  if ((param_2 >> 3 & 1) != 0) {
    *(int *)(iVar1 + -4) = 1 << param_1;
  }
  return;
}



void FUN_00013f08(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = DAT_00013f4c;
  param_1 = param_1 & 0x1f;
  if ((param_2 & 1) != 0) {
    *(int *)(DAT_00013f4c + -0x10) = 1 << param_1;
  }
  if ((param_2 >> 1 & 1) != 0) {
    *(int *)(iVar1 + 8) = 1 << param_1;
  }
  if ((param_2 >> 2 & 1) != 0) {
    *(int *)(iVar1 + 0x10) = 1 << param_1;
  }
  if ((param_2 >> 3 & 1) != 0) {
    *(int *)(iVar1 + -8) = 1 << param_1;
  }
  return;
}



void FUN_00013f50(int *param_1,int *param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  
  piVar5 = (int *)param_2[3];
  uVar4 = param_3 - param_4;
  uVar2 = *param_2 - *piVar5;
  uVar1 = uVar4;
  if (uVar2 < uVar4) {
    uVar1 = uVar2;
  }
  FUN_00010ddc(param_1,param_2,uVar1,uVar2,param_4);
  *param_1 = param_3;
  param_1[1] = (int)param_1;
  piVar3 = (int *)((int)param_1 + uVar4);
  param_1[3] = (int)piVar3;
  FUN_00010ddc(piVar3,piVar5);
  *piVar3 = param_4;
  return;
}



void FUN_00013fdc(undefined4 param_1,undefined param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_8;
  
  local_8 = CONCAT31((int3)((uint)param_4 >> 8),param_2);
  FUN_0000ed30(param_1,1,&local_8);
  return;
}



uint FUN_00013fec(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint local_8 [2];
  
  local_8[0] = param_4 & 0xffffff00;
  FUN_0000ed6a(param_1,1,local_8);
  return local_8[0] & 0xff;
}



undefined8 FUN_00014002(undefined4 param_1)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = 0;
  uStack_c = 0;
  FUN_0000ed6a(param_1,8,&local_10);
  return CONCAT44(uStack_c,local_10);
}



int FUN_00014020(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  int iVar5;
  
  uVar1 = DAT_0001405c;
  FUN_00016294(DAT_0001405c);
  puVar2 = DAT_00014060;
  iVar5 = param_2 + 3 >> 2;
  uVar4 = extraout_r1;
  if (iVar5 != 0) {
    puVar3 = DAT_00014060 + -3;
    do {
      do {
      } while ((*puVar3 >> 1 & 1) == 0);
      puVar2[-1] = *param_1;
      do {
      } while ((*puVar3 & 1) == 0);
      uVar4 = *puVar2;
      iVar5 = iVar5 + -1;
      param_1 = param_1 + 1;
    } while (iVar5 != 0);
  }
  FUN_00016286(uVar1,uVar4);
  return param_2;
}



undefined4 thunk_FUN_00015610(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_c;
  
  uStack_c = param_2;
  iVar1 = FUN_00016258();
  if (iVar1 != 0) {
    uVar2 = FUN_0000be00(0,0xffffffff,param_1,&uStack_c,0);
    return uVar2;
  }
  return 0xffffffff;
}



bool FUN_00014068(int *param_1,int param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar4;
  
  iVar6 = DAT_000140a8;
  iVar5 = *(int *)(DAT_000140a8 + 0x18);
  param_1[1] = iVar5;
  pcVar7 = *(char **)(iVar6 + 0x14);
  param_1[2] = (int)pcVar7;
  cVar1 = *pcVar7;
  if ((param_2 == 0) || (pcVar4 = pcVar7, cVar1 != -0x42)) {
    iVar6 = 0;
  }
  else {
    do {
      pcVar3 = pcVar4 + 1;
      cVar2 = *pcVar4;
      pcVar4 = pcVar3;
    } while (cVar2 == -0x42);
    iVar6 = (iVar5 - ((int)pcVar3 - (int)pcVar7)) + 1;
  }
  *param_1 = iVar6;
  return cVar1 != -0x42;
}



void FUN_000140b0(int *param_1)

{
  short sVar1;
  bool bVar2;
  short *psVar3;
  int **ppiVar4;
  int iVar5;
  undefined4 uVar6;
  
  psVar3 = DAT_000140f0;
  uVar6 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar6 = getBasePriority();
  }
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x20);
  }
  if (*(short *)(param_1 + 7) == 0) {
    iVar5 = param_1[10];
    *(undefined2 *)(param_1 + 7) = 1;
    sVar1 = *psVar3;
    *psVar3 = 1;
    ppiVar4 = *(int ***)(iVar5 + 4);
    *param_1 = iVar5;
    param_1[1] = (int)ppiVar4;
    *ppiVar4 = param_1;
    *(int **)(iVar5 + 4) = param_1;
    *(uint *)(psVar3 + 2) = param_1[6] | *(uint *)(psVar3 + 2);
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(uVar6);
    }
    if (sVar1 == 0) {
      FUN_00013138();
      return;
    }
  }
  else {
    bVar2 = (bool)isCurrentModePrivileged();
    if (bVar2) {
      setBasePriority(uVar6);
    }
  }
  return;
}



void FUN_000140f4(int param_1,undefined2 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
                 undefined4 param_6,undefined4 param_7)

{
  short sVar1;
  short *psVar2;
  undefined4 uVar3;
  
  FUN_00016410();
  psVar2 = DAT_00014134;
  *(undefined4 *)(param_1 + 4) = param_6;
  sVar1 = *psVar2;
  *(undefined4 *)(param_1 + 8) = param_7;
  *(uint *)(param_1 + 0xc) = param_5;
  if (sVar1 == 0) {
    uVar3 = 0x14130;
  }
  else {
    uVar3 = FUN_00015e80(param_5 >> 0x10);
  }
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  *(undefined2 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_3;
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  return;
}



undefined4 FUN_00014138(ushort param_1)

{
  if ((param_1 & *DAT_00014178) == 0) {
    if ((param_1 & DAT_00014178[1]) == 0) {
      if ((param_1 & DAT_00014178[2]) == 0) {
        return 0;
      }
      if ((param_1 & 0x60) < 0x41) {
        return 0;
      }
    }
    else if ((param_1 & 0x60) < 0x21) {
      return 0;
    }
  }
  else if ((param_1 & 0x60) == 0) {
    return 0;
  }
  return 1;
}



void FUN_0001417c(void)

{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  uVar2 = FUN_0001641c();
  piVar1 = DAT_000141b8;
  pcVar3 = *DAT_000141b4;
  if (*(short *)(DAT_000141b8 + 2) == 1) {
    (*pcVar3)(DAT_000141b8[1] + *DAT_000141b8,*DAT_000141bc - DAT_000141b8[1]);
  }
  (*pcVar3)(*piVar1,piVar1[1]);
  piVar1[1] = 0;
  *(undefined2 *)(piVar1 + 2) = 0;
  FUN_00016228(uVar2);
  return;
}



void FUN_000141c0(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uStack_4;
  
  if ((param_1 == (int *)0x0) || (iVar1 = *param_1, iVar1 == 0)) {
    iVar1 = 0;
  }
  uStack_4 = param_4;
  uVar2 = FUN_00016268(iVar1,param_2,param_3,&uStack_4);
  if (param_2 < uVar2) {
    uVar2 = param_2 - 1;
  }
  if (iVar1 != 0) {
    *param_1 = uVar2 + *param_1;
  }
  return;
}



undefined8 FUN_00014204(int param_1,undefined *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int local_20;
  undefined *local_1c;
  int local_18;
  undefined4 local_14;
  
  piVar2 = &local_20;
  local_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  local_14 = param_4;
  uVar1 = FUN_00011a94(piVar2,0,0x10);
  if ((param_3 != 0) && (param_3 < 0x11)) {
    do {
    } while ((*(uint *)(param_1 + 0x50) >> 1 & 1) == 0);
    do {
      param_3 = param_3 + -1;
      *(undefined *)piVar2 = *param_2;
      piVar2 = (int *)((int)piVar2 + 1);
      param_2 = param_2 + 1;
    } while (param_3 != 0);
    *(int *)(param_1 + 0x6c) = local_20;
    *(undefined **)(param_1 + 0x68) = local_1c;
    *(int *)(param_1 + 100) = local_18;
    *(undefined4 *)(param_1 + 0x60) = local_14;
    uVar1 = local_14;
  }
  return CONCAT44(local_1c,uVar1);
}



void FUN_00014246(undefined4 param_1,uint param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_000156d8();
  if (param_2 < param_3 << 4) {
    param_3 = param_3 >> 1;
    uVar2 = *(uint *)(iVar1 + 0x30) | 0x20;
  }
  else {
    uVar2 = *(uint *)(iVar1 + 0x30) & 0xffffffdf;
  }
  *(uint *)(iVar1 + 0x30) = uVar2;
  uVar2 = (param_2 << 3) / param_3 + 1;
  *(uint *)(iVar1 + 0x24) = uVar2 >> 7;
  *(uint *)(iVar1 + 0x28) = uVar2 * 0x2000000 >> 0x1a;
  *(undefined4 *)(iVar1 + 0x2c) = param_4;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  FUN_00015f44();
  return;
}



void FUN_00014288(uint param_1)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = DAT_000142c4;
  if (param_1 == 0xe) {
    uVar2 = *DAT_000142c4 | 0x8000000;
  }
  else if (param_1 == 0xf) {
    uVar2 = *DAT_000142c4 | 0x2000000;
  }
  else {
    if (param_1 < 0x10) {
      return;
    }
    uVar2 = 1 << (param_1 - 0x10 & 0x1f);
    puVar1 = *(uint **)(DAT_000142c0 + (param_1 - 0x10 >> 5) * 4);
  }
  *puVar1 = uVar2;
  return;
}



undefined8 FUN_000143c8(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    iVar2 = 0;
    uVar1 = param_2;
    uVar3 = 0x80000000;
    if (param_1 < 0x80000000) {
      uVar3 = param_1;
    }
    for (; uVar1 < uVar3; uVar1 = uVar1 << 1) {
    }
    while( true ) {
      iVar2 = iVar2 * 2 + (uint)(uVar1 <= param_1);
      if (uVar1 <= param_1) {
        param_1 = param_1 - uVar1;
      }
      if (uVar1 <= param_2) break;
      uVar1 = uVar1 >> 1;
    }
    return CONCAT44(param_1,iVar2);
  }
  if (param_1 != 0) {
    param_1 = 0xffffffff;
  }
  uVar4 = FUN_00005026(param_1);
  return uVar4;
}



void FUN_00014408(void)

{
  undefined4 uVar1;
  
  FUN_00014c74(0x10,1);
  FUN_00013ba4(0x10);
  uVar1 = DAT_00014444;
  FUN_00015254(DAT_00014444,0x22);
  FUN_0001606c(uVar1,0xff,0);
  FUN_0001605a(uVar1,0xff,0xffffffff);
  FUN_000162e8(uVar1,0xff);
  return;
}



void FUN_00014488(void)

{
  undefined2 uVar1;
  bool bVar2;
  undefined2 *puVar3;
  int **ppiVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *piVar8;
  
  puVar3 = DAT_000144c4;
  ppiVar4 = (int **)0x20;
  uVar7 = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    uVar7 = getBasePriority();
  }
  uVar1 = *DAT_000144c4;
  *DAT_000144c4 = 1;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(0x20);
  }
  piVar8 = *(int **)(puVar3 + 10);
  if (piVar8 != (int *)0x0) {
    ppiVar4 = (int **)*piVar8;
    iVar5 = (int)*ppiVar4;
    *piVar8 = iVar5;
    *(int **)(iVar5 + 4) = piVar8;
    piVar6 = (int *)piVar8[1];
    *ppiVar4 = piVar8;
    ppiVar4[1] = piVar6;
    *piVar6 = (int)ppiVar4;
    piVar8[1] = (int)ppiVar4;
  }
  puVar3[4] = 1;
  *(undefined4 *)(puVar3 + 10) = 0;
  bVar2 = (bool)isCurrentModePrivileged();
  if (bVar2) {
    setBasePriority(uVar7);
  }
  FUN_000150d8(uVar1,uVar1,0,ppiVar4);
  return;
}



int FUN_000144c8(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    iVar1 = FUN_00014f48(param_2);
  }
  else {
    if (param_2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_00014f48(param_2);
      if (iVar1 == 0) {
        return 0;
      }
      uVar2 = *(int *)(param_1 + -4) - 8;
      if (param_2 < uVar2) {
        uVar2 = param_2;
      }
      FUN_00010ddc(iVar1,param_1,uVar2);
    }
    FUN_00015ce8(param_1);
  }
  return iVar1;
}



void FUN_00014508(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_0001453c;
  if ((param_2 >> 0x1d & 1) != 0) {
    iVar2 = FUN_00015698(param_1);
    *piVar1 = iVar2;
  }
  if ((param_2 >> 0x1c & 1) != 0) {
    iVar2 = FUN_00015698(param_1);
    *piVar1 = iVar2 >> 1;
  }
  *(uint *)(param_1 + 0x11c) = DAT_00014540 & param_2 | *(uint *)(param_1 + 0x11c);
  return;
}



void FUN_00014544(int param_1)

{
  int *piVar1;
  
  FUN_00015738();
  piVar1 = DAT_0001457c;
  **(undefined4 **)((short)(ushort)*(byte *)(*DAT_0001457c + 0xbc) * 0xc + *DAT_0001457c + 0x14) =
       *(undefined4 *)(param_1 + 8);
  FUN_00016154((short)(ushort)*(byte *)(*piVar1 + 0xbc) * 0xc + *piVar1 + 0x10);
  FUN_00015a80();
  return;
}



int FUN_00014580(undefined param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_8;
  
  if ((*DAT_000145b0 != '\x01') && ((*DAT_000145b4 >> 9 & 1) != 0)) {
    local_8 = CONCAT31((int3)((uint)param_4 >> 8),param_1);
    iVar1 = FUN_0001144c(DAT_000145b8,&local_8,0);
    if (iVar1 == 0) {
      iVar1 = (int)(short)local_8;
    }
    return iVar1;
  }
  return -100;
}



void FUN_00014638(int param_1)

{
  undefined auStack_3c [52];
  
  FUN_00016410(auStack_3c);
  FUN_00015bac(auStack_3c,*DAT_00014670,0,0x4c7,*DAT_0001466c,
               *(undefined *)(*(int *)(param_1 + 0x38) + -2),0);
  return;
}



void FUN_00014730(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = DAT_00014760;
  uVar2 = FUN_00016124(DAT_00014760);
  FUN_0001644a(uVar1,param_1 & 1 | uVar2);
  uVar1 = DAT_00014764;
  uVar2 = FUN_00016124(DAT_00014764);
  FUN_0001644a(uVar1,(param_1 << 8) >> 0x18 | uVar2);
  return;
}



void FUN_00014768(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5
                 ,undefined4 param_6,uint param_7,undefined4 param_8,uint param_9)

{
  FUN_000155ec(param_1,param_5 | param_7 | param_4 | param_9,param_3,param_4,param_3,param_4);
  FUN_00013f08(param_1,1);
  FUN_0001198c(param_1,param_2,param_6,param_8,param_3);
  FUN_00016020(param_1);
  return;
}



undefined8 FUN_000147a0(uint param_1)

{
  uint uVar1;
  
  uVar1 = (param_1 << 1) >> 0x18;
  if (uVar1 == 0) {
    return 0;
  }
  if (uVar1 != 0xff) {
    return CONCAT44((param_1 << 9) >> 0xc | (uVar1 + 0x380 | (param_1 >> 0x1f) << 0xb) << 0x14,
                    param_1 << 0x1d);
  }
  return CONCAT44(((param_1 >> 0x17) * 8 + 7) * 0x100000,param_1 << 9);
}



undefined4 FUN_00014810(undefined4 param_1)

{
  undefined local_8;
  undefined uStack_7;
  undefined uStack_6;
  undefined uStack_5;
  undefined4 local_4;
  
  uStack_5 = (undefined)((uint)param_1 >> 0x18);
  uStack_6 = (undefined)((uint)param_1 >> 0x10);
  uStack_7 = (undefined)((uint)param_1 >> 8);
  local_8 = (undefined)param_1;
  local_4 = CONCAT13(local_8,CONCAT12(uStack_7,CONCAT11(uStack_6,uStack_5)));
  return local_4;
}



void FUN_00014848(int param_1,undefined4 param_2)

{
  undefined auStack_3c [48];
  
  FUN_00016410(auStack_3c);
  FUN_00015bac(auStack_3c,*DAT_0001487c,0,0x4fd,*DAT_00014878,param_2,
               *(undefined4 *)(param_1 + 0x38));
  return;
}



void FUN_00014880(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(short *)(param_1 + 0x3c) == 1) {
    uVar3 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      uVar3 = getBasePriority();
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x20);
    }
    iVar2 = *(int *)(DAT_000148b0 + 0xc) + -1;
    *(int *)(DAT_000148b0 + 0xc) = iVar2;
    if (iVar2 == 0) {
      bVar1 = (bool)isCurrentModePrivileged();
      if (bVar1) {
        setBasePriority(uVar3);
      }
      (**(code **)(DAT_000148b4 + 0x20))(0);
    }
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(uVar3);
    }
  }
  return;
}



void FUN_000148b8(undefined param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *DAT_000148ec;
  if (iVar3 != 0) {
    FUN_0001641c();
    piVar1 = DAT_000148e8;
    iVar2 = DAT_000148e8[1];
    DAT_000148e8[1] = iVar2 + 1;
    *(undefined *)(iVar2 + *piVar1) = param_1;
    if (iVar3 == piVar1[1]) {
      piVar1[1] = 0;
      *(undefined2 *)(piVar1 + 2) = 1;
    }
    FUN_00016228();
  }
  return;
}



char * FUN_00014928(char *param_1,int param_2,uint param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  bool bVar5;
  
  if (param_3 != 0) {
    pcVar1 = (char *)(param_2 + -1);
    pcVar2 = param_1;
    do {
      pcVar1 = pcVar1 + 1;
      bVar5 = *pcVar1 == '\0';
      pcVar3 = pcVar2 + 1;
      *pcVar2 = *pcVar1;
      if (!bVar5) {
        param_3 = param_3 - 1;
        bVar5 = param_3 == 0;
      }
      pcVar2 = pcVar3;
    } while (!bVar5);
    iVar4 = param_3 - 1;
    if (1 < param_3) {
      do {
        iVar4 = iVar4 + -1;
        *pcVar3 = '\0';
        pcVar3 = pcVar3 + 1;
      } while (iVar4 != 0);
    }
  }
  return param_1;
}



void FUN_0001495e(int param_1,undefined *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  if ((param_3 != 0) && (param_3 < 0x11)) {
    do {
    } while ((*(uint *)(param_1 + 0x50) & 1) == 0);
    local_10 = *(undefined4 *)(param_1 + 0x6c);
    local_c = *(undefined4 *)(param_1 + 0x68);
    local_8 = *(undefined4 *)(param_1 + 100);
    local_4 = *(undefined4 *)(param_1 + 0x60);
    puVar1 = &local_10;
    do {
      param_3 = param_3 + -1;
      *param_2 = *(undefined *)puVar1;
      param_2 = param_2 + 1;
      puVar1 = (undefined4 *)((int)puVar1 + 1);
    } while (param_3 != 0);
  }
  return;
}



void FUN_00014994(void)

{
  uint *puVar1;
  
  FUN_000164e8(s_F13__try_to_bypass_IP_Event__fai_00001f03 + 0x3d);
  FUN_00016114();
  puVar1 = DAT_000149c0;
  DAT_000149c0[0x3ae] = DAT_000149c0[0x3ae] & 0xf7ffffff;
  *puVar1 = *puVar1 | 2;
  FUN_000164e8(DAT_000149c4);
  return;
}



void FUN_000149c8(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_000149f4;
  if ((param_2 >> 0x1d & 1) != 0) {
    iVar2 = FUN_00015698(param_1);
    *piVar1 = iVar2;
  }
  if ((param_2 >> 0x1c & 1) != 0) {
    iVar2 = FUN_00015698(param_1);
    *piVar1 = iVar2 >> 1;
  }
  *(uint *)(param_1 + 0x118) = DAT_000149f8 & param_2;
  return;
}



void FUN_000149fc(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  piVar2 = (int *)(DAT_00014a2c + -4);
  piVar3 = (int *)(DAT_00014a2c + 0xa0);
  FUN_00010418(piVar3);
  iVar1 = *piVar2;
  if (1 < iVar1) {
    iVar4 = 1;
    do {
      piVar3 = piVar3 + 6;
      if (-1 < *piVar3) {
        FUN_00010418(piVar3);
        iVar1 = *piVar2;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return;
}



char * FUN_00014a30(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  
  if (*param_2 != '\0') {
    for (; *param_1 != '\0'; param_1 = param_1 + 1) {
      pcVar2 = param_2 + -1;
      pcVar1 = param_1 + -1;
      do {
        pcVar2 = pcVar2 + 1;
        pcVar1 = pcVar1 + 1;
        if (*pcVar2 != *pcVar1) break;
      } while (*pcVar1 != '\0');
      if (*pcVar2 == '\0') {
        return param_1;
      }
    }
    param_1 = (char *)0x0;
  }
  return param_1;
}



// WARNING: Removing unreachable block (ram,0x00014a90)

undefined2 FUN_00014a64(undefined2 param_1)

{
  undefined local_8;
  undefined uStack_7;
  undefined2 local_6;
  
  uStack_7 = (undefined)((ushort)param_1 >> 8);
  local_8 = (undefined)param_1;
  local_6 = CONCAT11(local_8,uStack_7);
  return local_6;
}



void FUN_00014ad0(void)

{
  undefined auStack_34 [52];
  
  FUN_00016410(auStack_34);
  FUN_00015bac(auStack_34,*DAT_00014b00,0,0x43a,*DAT_00014afc,0,0);
  return;
}



int FUN_00014b74(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined auStack_30 [36];
  
  iVar1 = FUN_0000efd8(DAT_00014ba4,0,auStack_30,param_2,0x24,param_3);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_00015580(iVar1,param_1,auStack_30);
  }
  return iVar1;
}



void FUN_00014ba8(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = *DAT_00014bd0;
  *(short *)(param_1 + 0xc) = (short)param_3;
  if (((param_3 != 0) && (iVar1 = *DAT_00014bd4, param_2 != 0)) &&
     (iVar1 = FUN_00015130(), iVar1 == 0)) {
    iVar1 = *DAT_00014bd8;
  }
  *(int *)(param_1 + 8) = iVar1;
  return;
}



void FUN_00014c44(int param_1,uint param_2)

{
  *(uint *)(DAT_00014c70 + -4) = (param_2 << 0xc) >> 0x1c | *(uint *)(DAT_00014c70 + -4);
  *(uint *)(param_1 + 0x90) = (DAT_00014c6c | param_2 ^ 0xffff) & *(uint *)(param_1 + 0x90);
  return;
}



void FUN_00014c74(int param_1,uint param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  
  puVar1 = DAT_00014c9c;
  if (param_1 != 0xff) {
    puVar2 = (uint *)((int)DAT_00014c9c + *(int *)(DAT_00014ca0 + -4 + param_1 * 8));
    *puVar2 = param_2 | *puVar2;
  }
  if (param_1 == 0) {
    *puVar1 = 0x404;
  }
  return;
}



int FUN_00014ca4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0000f9b0(param_2,param_3,param_3,param_4,param_4);
  if (iVar1 != 10) {
    FUN_00015738();
    *(undefined4 *)(*DAT_00014cd0 + iVar1 * 0xc + 0x14) = param_1;
    FUN_00015a80();
  }
  return iVar1;
}



void FUN_00014d38(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *puVar1;
  int iVar2;
  
  puVar1 = *(undefined **)(param_1 + 0x20);
  for (iVar2 = *(int *)(param_1 + 0x1c); iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar1 = 0xbe;
    puVar1 = puVar1 + 1;
  }
  FUN_00013a20(*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x20) + -4,
               *(undefined4 *)(param_1 + 0x28),param_3,param_2,*(undefined4 *)(param_1 + 0x2c),
               *(undefined4 *)(param_1 + 0x30),param_4);
  return;
}



int FUN_00014d68(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined auStack_20 [24];
  
  iVar1 = FUN_0000efd8(DAT_00014d94,param_1,auStack_20,param_4,0x18,param_6);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    FUN_00016550(iVar1,auStack_20);
  }
  return iVar1;
}



undefined4 FUN_00014dc8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = DAT_00014df0;
  if (*(int *)(DAT_00014df0 + 0x10) != *(int *)(param_1 + 4)) {
    FUN_0000e098(*DAT_00014df4 + param_1,0xffffffff,param_3,param_4,param_4);
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar1 + 0x10);
    return 0;
  }
  return 1;
}



undefined4 FUN_00014e28(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  
  iVar2 = *(int *)(param_1 + 0xc);
  iVar1 = *DAT_00014e54 + param_1;
  if (iVar2 == 0) {
    iVar2 = *(int *)(param_1 + 0x14);
  }
  for (uVar3 = 0; uVar3 < *(uint *)(param_1 + 8); uVar3 = uVar3 + 1) {
    uVar4 = FUN_00015b70(iVar1,iVar2);
    iVar1 = (int)uVar4;
    iVar2 = param_2 + (int)((ulonglong)uVar4 >> 0x20);
  }
  return 0;
}



void FUN_00014e58(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined auStack_30 [36];
  
  FUN_0001003c(DAT_00014e84,param_1,auStack_30,param_3,0x24,0);
  FUN_00015580(param_1,param_2,auStack_30);
  return;
}



undefined4 FUN_00014eb8(int *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int **ppiVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = DAT_00014ee4;
  iVar6 = param_1[0x10];
  uVar5 = *(uint *)(DAT_00014ee4 + 4);
  ppiVar3 = *(int ***)(iVar6 + 4);
  *param_1 = iVar6;
  param_1[1] = (int)ppiVar3;
  uVar4 = param_1[3];
  *ppiVar3 = param_1;
  *(int **)(iVar6 + 4) = param_1;
  *(undefined2 *)(iVar2 + 8) = 1;
  *(undefined *)(param_1 + 5) = 1;
  *(uint *)(iVar2 + 4) = uVar4 | uVar5;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(param_2);
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x20);
  }
  return 0x20;
}



void FUN_00014ee8(char *param_1)

{
  if (*DAT_00014f10 != 0) {
    if (param_1 != (char *)0x0) {
      for (; *param_1 != '\0'; param_1 = param_1 + 1) {
        FUN_000148b8();
      }
    }
    if (*DAT_00014f14 != 0) {
      FUN_0001417c();
    }
  }
  return;
}



void FUN_00014f18(undefined4 param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  FUN_0001641c();
  piVar2 = DAT_00014f44;
  iVar3 = DAT_00014f44[1];
  if (0 < DAT_00014f44[1]) {
    do {
      (**(code **)(*piVar2 + iVar3 * 4 + -4))(param_1);
      iVar4 = iVar3 + -1;
      bVar1 = 0 < iVar3;
      iVar3 = iVar4;
    } while (iVar4 != 0 && bVar1);
  }
  FUN_00015be4(param_1);
  return;
}



int FUN_00014f48(int param_1)

{
  int iVar1;
  undefined auStack_38 [48];
  
  FUN_00016410(auStack_38);
  if (param_1 != 0) {
    iVar1 = FUN_000124b8(0,param_1 + 8,0,auStack_38);
    if (iVar1 != 0) {
      *(int *)iVar1 = iVar1;
      *(int *)(iVar1 + 4) = param_1 + 8;
      return iVar1 + 8;
    }
  }
  return 0;
}



undefined8 FUN_00014f76(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  if ((int)param_1 < 0) {
    iVar2 = 0xc1f;
    param_1 = -param_1;
  }
  else {
    iVar2 = 0x41f;
  }
  do {
    uVar1 = param_1;
    iVar2 = iVar2 + -1;
    param_1 = uVar1 << 1;
  } while ((uVar1 & 0x80000000) == 0);
  return CONCAT44(iVar2 * 0x100000 | (uVar1 << 1) >> 0xc,uVar1 << 0x15);
}



void FUN_00014fa4(int param_1,uint param_2)

{
  *(uint *)(DAT_00014fcc + -4) = (param_2 >> 0x10 ^ 0xf | 0xfffffff0) & *(uint *)(DAT_00014fcc + -4)
  ;
  *(uint *)(param_1 + 0x90) = param_2 & 0xffff | *(uint *)(param_1 + 0x90);
  return;
}



void FUN_00014fd0(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00014ff0;
  FUN_000149c8(DAT_00014ff0,0x20000);
  FUN_00016286(uVar1);
  FUN_0000bbc8(DAT_00014ff4,DAT_00014ff8,0);
  return;
}



undefined4 FUN_00015028(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0000bae6();
  if (iVar1 == 0) {
    if (*DAT_00015050 == '\x01') {
      return 0xffffff9c;
    }
  }
  else {
    FUN_000133bc(6,param_3,param_2);
  }
  return 0;
}



int FUN_00015054(int param_1,int param_2,int param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  int iVar3;
  bool bVar4;
  
  if (param_3 != 0) {
    pbVar2 = (byte *)(param_1 + -1);
    pbVar1 = (byte *)(param_2 + -1);
    do {
      pbVar1 = pbVar1 + 1;
      pbVar2 = pbVar2 + 1;
      iVar3 = (uint)*pbVar2 - (uint)*pbVar1;
      if (iVar3 != 0) {
        return iVar3;
      }
      bVar4 = *pbVar1 == 0;
      if (!bVar4) {
        param_3 = param_3 + -1;
        bVar4 = param_3 == 0;
      }
    } while (!bVar4);
  }
  return 0;
}



void FUN_00015080(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_000150a8;
  *DAT_000150a8 = *DAT_000150a8 + 1;
  FUN_00016558();
  iVar2 = FUN_00016330(piVar1 + 9);
  if (iVar2 == 0) {
    piVar1[1] = piVar1[1] + 1;
    FUN_000140b0(piVar1[3]);
  }
  return;
}



void FUN_000150ac(undefined4 param_1,undefined4 param_2)

{
  undefined auStack_20 [24];
  
  FUN_0001003c(DAT_000150d4,param_1,auStack_20,param_2,0x18,0);
  FUN_00016520(param_1,auStack_20);
  return;
}



void FUN_000150d8(int param_1)

{
  bool bVar1;
  undefined2 *puVar2;
  
  puVar2 = DAT_00015100;
  if (param_1 == 0) {
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0x20);
    }
    if ((DAT_00015100[4] != 0) && (*DAT_000150fc == 0)) {
      FUN_00012f08();
    }
    *puVar2 = 0;
    bVar1 = (bool)isCurrentModePrivileged();
    if (bVar1) {
      setBasePriority(0);
    }
  }
  return;
}



void FUN_00015104(uint param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = (param_1 & 7) << 2;
  puVar1 = (uint *)(DAT_0001512c + ((param_1 & 0x1f) >> 1 & 0xfffffffc));
  *puVar1 = (param_1 >> 0x10) << iVar2 | *puVar1 & ~(0xf << iVar2);
  return;
}



uint FUN_00015130(uint param_1)

{
  if (((*DAT_00015150 <= param_1) && (param_1 < *DAT_00015150 + (int)*DAT_00015154)) &&
     (*DAT_00015158 == 0)) {
    param_1 = 0;
  }
  return param_1;
}



void FUN_0001515c(int param_1,undefined4 *param_2,int param_3)

{
  *(undefined4 *)(param_1 + 0x38) = *param_2;
  *(undefined4 *)(param_1 + 0x3c) = param_2[1];
  *(undefined4 *)(param_1 + 0x30) = param_2[2];
  *(undefined4 *)(param_1 + 0x34) = param_2[3];
  if (param_3 != 8) {
    *(undefined4 *)(param_1 + 0x28) = param_2[4];
    *(undefined4 *)(param_1 + 0x2c) = param_2[5];
    if (param_3 == 0x18) {
      *(undefined4 *)(param_1 + 0x20) = param_2[6];
      *(undefined4 *)(param_1 + 0x24) = param_2[7];
    }
  }
  return;
}



void FUN_00015186(ushort *param_1,int param_2)

{
  *(char *)(param_2 + 3) = (char)(((uint)*param_1 << 0x1c) >> 0x18);
  *(ushort *)(param_2 + 4) = param_1[1];
  if (*param_1 == 2) {
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_1 + 2);
  }
  else if (*param_1 == 9) {
    *(undefined4 *)(param_2 + 6) = *(undefined4 *)(param_1 + 4);
    *(ushort *)(param_2 + 10) = param_1[6];
    return;
  }
  return;
}



void FUN_000151b0(int *param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  undefined *puVar2;
  
  if (1 < *param_3) {
    puVar2 = (undefined *)*param_1;
    *param_3 = *param_3 - 1;
    if (puVar2 == (undefined *)0x0) {
      iVar1 = FUN_00016258();
      if (iVar1 != 0) {
        FUN_000148b8(param_2);
        return;
      }
    }
    else {
      *param_1 = *param_1 + 1;
      *puVar2 = (char)param_2;
    }
  }
  return;
}



uint FUN_000151dc(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    uVar2 = *DAT_00015200;
    uVar1 = *(uint *)(param_1 + 0x8c);
  }
  else {
    uVar2 = DAT_00015200[1];
    uVar1 = *(uint *)(param_1 + 0x8c) & *(uint *)(param_1 + 0x90);
  }
  return uVar1 | (uVar2 & 0xf) << 0x10;
}



void FUN_00015204(void)

{
  *DAT_00015220 = *DAT_00015220 & 0xfffffffd;
  *(undefined4 *)(DAT_00015228 + 8) = 1;
  *DAT_00015224 = 1;
  FUN_00016340();
  return;
}



void FUN_0001522c(uint param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(DAT_0001524c + *(int *)(DAT_00015250 + (param_1 & 0x3f) * 4) * 4);
  *puVar1 = (param_2 | *puVar1 & 0xfffffff0) & 0xfffff3ff;
  return;
}



void FUN_00015254(uint *param_1,uint param_2)

{
  *DAT_00015274 = 0xff;
  param_1[3] = DAT_00015278 & param_1[3];
  *param_1 = param_2 >> 0x18;
  param_1[1] = param_2 & 0xff;
  param_1[2] = (param_2 << 0x10) >> 0x18;
  return;
}



undefined4 FUN_0001527c(void)

{
  undefined4 uVar1;
  
  if (*DAT_0001529c != '\x01') {
    uVar1 = FUN_0000bc82(*DAT_000152a0 + 4,0xffffffff);
    return uVar1;
  }
  return 0xffffff9c;
}



void FUN_000152a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  code **ppcVar2;
  
  uVar1 = DAT_000152c4;
  FUN_0000d7b0(param_1,DAT_000152c4,param_3,param_4,param_4);
  ppcVar2 = DAT_000152c8;
  (**DAT_000152c8)();
  FUN_00013988(uVar1);
  (*ppcVar2[1])();
  FUN_000135c4();
  return;
}



undefined4 FUN_000152cc(undefined4 param_1)

{
  code **ppcVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_10;
  
  ppcVar1 = DAT_000152f0;
  local_10 = param_1;
  (**DAT_000152f0)();
  iVar2 = FUN_000126c8(&local_10);
  uVar3 = (**(code **)(iVar2 + 0x20))(local_10);
  (*ppcVar1[1])();
  return uVar3;
}



undefined4 FUN_000152f4(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  if (((-1 < param_1) && (param_1 < 10)) &&
     (piVar2 = (int *)(param_1 * 8 + DAT_00015318), *(int *)(param_1 * 8 + DAT_00015318) != 0)) {
    uVar1 = (**(code **)(*piVar2 + 0x18))(piVar2[1]);
    return uVar1;
  }
  return 0xffffffff;
}



int FUN_0001531c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  undefined4 local_c;
  
  if ((*DAT_0001533c != '\x01') && ((*DAT_00015340 >> 9 & 1) != 0)) {
    local_10 = param_3;
    local_c = param_4;
    FUN_000164be(&local_10,4);
    local_c = 0x4008c81;
    iVar1 = FUN_0001144c(&local_c,&local_10);
    if (iVar1 == 0) {
      iVar1 = (int)(short)local_10;
    }
    return iVar1;
  }
  return -100;
}



void FUN_00015348(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0x18) = param_2;
  piVar2 = DAT_0001536c;
  *(undefined4 *)(param_1 + 8) = param_3;
  iVar1 = DAT_00015368;
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  *(undefined4 *)(param_1 + 0x10) = 0;
  iVar3 = *piVar2;
  *(undefined2 *)(param_1 + 0x14) = 0;
  FUN_00015b70(iVar1 + iVar3,param_1);
  return;
}



undefined4 FUN_000153c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  
  local_c = param_2;
  iVar1 = FUN_00016258();
  if (iVar1 != 0) {
    uVar2 = FUN_0000be00(0,0xffffffff,param_1,&local_c,1);
    return uVar2;
  }
  return 0xffffffff;
}



uint FUN_000153e8(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *DAT_00015404 & 0xff;
  if ((uVar2 == 0) && (uVar1 = FUN_00016124(DAT_00015408), (uVar1 & 1) != 0)) {
    uVar2 = 7;
  }
  return uVar2;
}



int FUN_0001540c(int param_1,int param_2,int param_3)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  if (param_3 == 0) {
    iVar1 = 0;
  }
  else {
    pbVar3 = (byte *)(param_1 + -1);
    pbVar2 = (byte *)(param_2 + -1);
    do {
      pbVar2 = pbVar2 + 1;
      pbVar3 = pbVar3 + 1;
      if ((uint)*pbVar2 != (uint)*pbVar3) break;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    iVar1 = (uint)*pbVar3 - (uint)*pbVar2;
  }
  return iVar1;
}



longlong FUN_00015430(uint param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = 0x9e;
    if (-1 < (int)param_1) {
      do {
        iVar2 = iVar2 + -1;
        param_1 = param_1 << 1;
      } while (-1 < (int)param_1);
    }
    uVar1 = param_1 + 0x80;
    if (param_1 < 0xffffff80) {
      uVar1 = uVar1 * 2;
    }
    else {
      iVar2 = iVar2 + 1;
    }
    return CONCAT44(param_2,uVar1 >> 9 | iVar2 << 0x17);
  }
  return (ulonglong)param_2 << 0x20;
}



void FUN_00015478(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_00015494;
  if (*(int *)(DAT_00015498 + 0x10) != 0) {
    FUN_00015f88(DAT_00015494);
    FUN_00015f82(uVar1);
  }
  return;
}



void FUN_00015580(undefined4 *param_1,undefined2 param_2,int param_3)

{
  undefined uVar1;
  int iVar2;
  
  uVar1 = *(undefined *)(param_3 + 0x18);
  iVar2 = *DAT_000155a0;
  *(undefined2 *)((int)param_1 + 10) = param_2;
  *(undefined *)(param_1 + 2) = uVar1;
  FUN_000150ac((int)param_1 + iVar2,0);
  *param_1 = 0;
  param_1[1] = 1;
  return;
}



void FUN_000155a4(undefined4 *param_1)

{
  FUN_000128d0(DAT_000155c4,*param_1,DAT_000155c0,0xffffffff,0);
  *param_1 = 0;
  return;
}



void FUN_000155ec(uint param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_0001560c + -0x20) + (param_1 & 0x3f) * 0x10;
  *(uint *)(iVar1 + 8) = param_2 | DAT_00015608 & *(uint *)(iVar1 + 8);
  return;
}



undefined4 FUN_00015610(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_c;
  
  local_c = param_2;
  iVar1 = FUN_00016258();
  if (iVar1 != 0) {
    uVar2 = FUN_0000be00(0,0xffffffff,param_1,&local_c,0);
    return uVar2;
  }
  return 0xffffffff;
}



undefined4 FUN_00015634(int param_1)

{
  if (param_1 == 0) {
    FUN_0000bcfe(0xbb);
  }
  else {
    FUN_00014288(0xbb);
    FUN_0000bd10(0xbb,param_1,0x20);
  }
  return 0;
}



void FUN_00015656(int param_1,uint param_2)

{
  uint uVar1;
  
  for (; ((param_2 != 0 && (uVar1 = FUN_00013614(1,param_1,param_2), 0 < (int)uVar1)) &&
         (uVar1 <= param_2)); param_2 = param_2 - uVar1) {
    param_1 = uVar1 + param_1;
  }
  return;
}



void FUN_00015678(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x10;
  }
  FUN_00012d88(param_1,0x20,uVar1,param_4,param_4);
  FUN_0001522c(param_1,param_2);
  return;
}



int FUN_00015698(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 3;
  piVar1 = (int *)(DAT_000156b4 + -8);
  do {
    if (param_1 == piVar1[2]) {
      return piVar1[3];
    }
    iVar2 = iVar2 + -1;
    piVar1 = piVar1 + 2;
  } while (iVar2 != 0);
  return -1;
}



int FUN_000156b8(void)

{
  int iVar1;
  
  iVar1 = FUN_00015cb8(0x10);
  if (iVar1 == 0) {
    FUN_00014408();
  }
  iVar1 = FUN_0001645e(DAT_000156d4,0xff);
  return -1 - iVar1;
}



void FUN_000156d8(int param_1)

{
  uint uVar1;
  
  uVar1 = DAT_000156f4;
  do {
  } while ((*(uint *)(param_1 + 0x18) >> 3 & 1) != 0);
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xffffffef;
  *(uint *)(param_1 + 0x30) = uVar1 & *(uint *)(param_1 + 0x30);
  return;
}



int FUN_000156f8(int param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 2;
  piVar1 = (int *)(DAT_00015714 + -8);
  do {
    if (param_1 == piVar1[2]) {
      return piVar1[3];
    }
    iVar2 = iVar2 + -1;
    piVar1 = piVar1 + 2;
  } while (iVar2 != 0);
  return -1;
}



int FUN_00015738(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0000bc82(*DAT_00015754 + 0x90,0xffffffff,param_3,param_4,param_4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)(short)iVar1;
  }
  return iVar1;
}



undefined4 FUN_00015758(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  FUN_0000bae6(param_1,0xffffffff,param_3,param_4,param_4);
  if (*DAT_00015774 == '\x01') {
    uVar1 = 0xffffff9c;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



char * FUN_00015778(int param_1,char param_2,int param_3)

{
  char *pcVar1;
  
  if (param_3 != 0) {
    pcVar1 = (char *)(param_1 + -1);
    do {
      pcVar1 = pcVar1 + 1;
      if (param_2 == *pcVar1) {
        return pcVar1;
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  return (char *)0x0;
}



undefined8 FUN_00015798(uint param_1)

{
  uint uVar1;
  int iVar2;
  
  if (param_1 != 0) {
    iVar2 = 0x41f;
    do {
      uVar1 = param_1;
      iVar2 = iVar2 + -1;
      param_1 = uVar1 << 1;
    } while ((uVar1 & 0x80000000) == 0);
    return CONCAT44(iVar2 * 0x100000 | (uVar1 << 1) >> 0xc,uVar1 << 0x15);
  }
  return 0;
}



void FUN_000157b8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = DAT_000157d4;
  uVar2 = thunk_FUN_00014dc8(*(undefined4 *)(DAT_000157d4 + 0x10));
  if (*(int *)(iVar1 + 8) == 0) {
    *(undefined4 *)(iVar1 + 0xc) = uVar2;
  }
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
  return;
}



void FUN_000157d8(undefined4 *param_1)

{
  FUN_000128d0(DAT_000157f0,*param_1,DAT_000157f4,0,0);
  *param_1 = 0;
  return;
}



void FUN_00015898(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_000158b4;
  for (iVar2 = 0; iVar2 < *piVar1; iVar2 = iVar2 + 1) {
    (**(code **)(piVar1[1] + iVar2 * 4))();
  }
  return;
}



void FUN_000158b8(undefined4 *param_1)

{
  FUN_000128d0(DAT_000158d4,*param_1,DAT_000158d0,0,0);
  *param_1 = 0;
  return;
}



void FUN_000158f8(undefined4 *param_1)

{
  FUN_000128d0(DAT_00015914,*param_1,DAT_00015910,0,0);
  *param_1 = 0;
  return;
}



void FUN_00015958(uint param_1)

{
  undefined4 *puVar1;
  
  for (puVar1 = (undefined4 *)*DAT_00015974;
      (puVar1 != (undefined4 *)0x0 && (param_1 != *(ushort *)(puVar1 + 2)));
      puVar1 = (undefined4 *)*puVar1) {
  }
  return;
}



char * FUN_00015998(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  for (pcVar2 = param_1; *pcVar2 != '\0'; pcVar2 = pcVar2 + 1) {
  }
  do {
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    param_2 = param_2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return param_1;
}



void FUN_000159b6(int param_1)

{
  if (*(int *)(param_1 + 0xc) == 0x10000) {
    FUN_00015478();
    FUN_00016178(3);
  }
  FUN_0001244c(param_1);
  return;
}



void FUN_000159d4(code *param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  char cVar4;
  
  cVar1 = isThreadModePrivileged();
  cVar2 = isUsingMainStack();
  if (cVar1 != '\x01' || cVar2 != '\x01') {
    param_2 = 0;
    bVar3 = (bool)isCurrentModePrivileged();
    if (bVar3) {
      setThreadModePrivileged(1);
      bVar3 = (bool)isThreadMode();
      if (bVar3) {
        cVar4 = isUsingMainStack();
        setStackMode(cVar4 == '\x01');
      }
    }
  }
  (*param_1)(param_1,param_2);
  if ((cVar1 != '\x01' || cVar2 != '\x01') && (bVar3 = (bool)isCurrentModePrivileged(), bVar3)) {
    setThreadModePrivileged(1);
    bVar3 = (bool)isThreadMode();
    if (bVar3) {
      cVar1 = isUsingMainStack();
      setStackMode(cVar1 == '\x01');
    }
  }
  return;
}



void FUN_000159f4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(DAT_00015a0c + 0x24);
  *(undefined4 *)(DAT_00015a0c + 0x2c) = 1;
  FUN_000164e8(0x640);
  *puVar1 = 1;
  return;
}



void FUN_00015a10(int param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(DAT_00015a24 + *(int *)(DAT_00015a28 + -4 + param_1 * 8));
  *puVar1 = *puVar1 & ~param_2;
  return;
}



int FUN_00015a2c(void)

{
  int iVar1;
  
  iVar1 = FUN_0000bc76(*DAT_00015a44 + 4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)(short)iVar1;
  }
  return iVar1;
}



void FUN_00015a48(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (**DAT_00015a60)(param_1);
  if (iVar1 != 0) {
    FUN_00003ad8(param_1);
  }
  return;
}



void FUN_00015a64(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = (**DAT_00015a7c)(param_1);
  if (iVar1 != 0) {
    FUN_000038d4(param_1);
  }
  return;
}



int FUN_00015a80(void)

{
  int iVar1;
  
  iVar1 = FUN_0000bc76(*DAT_00015a98 + 0x90);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)(short)iVar1;
  }
  return iVar1;
}



int FUN_00015a9c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(byte *)(DAT_00015ab4 + ((uint)(param_1 << 0x18) >> 0x1c)) + 0x546;
  if (param_2 <= iVar1) {
    iVar1 = param_2;
  }
  return iVar1;
}



void FUN_00015ab8(uint param_1)

{
  if ((param_1 & 0xff) < 0x41) {
    FUN_00015104(param_1);
    FUN_00013ec0(param_1,2);
  }
  return;
}



void FUN_00015ad8(uint param_1,undefined param_2)

{
  int iVar1;
  
  iVar1 = DAT_00015af0;
  if ((0xf < param_1) || (iVar1 = DAT_00015aec, 3 < param_1)) {
    *(undefined *)(iVar1 + param_1) = param_2;
  }
  return;
}



void FUN_00015b50(int **param_1)

{
  bool bVar1;
  int **ppiVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar3 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x20);
  }
  ppiVar2 = (int **)*param_1;
  *param_1 = *ppiVar2;
  *(int ***)((int)*ppiVar2 + 4) = param_1;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar3);
  }
  return;
}



void FUN_00015b70(int param_1,int *param_2)

{
  bool bVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x20);
  }
  *param_2 = param_1;
  param_2[1] = *(int *)(param_1 + 4);
  **(int ***)(param_1 + 4) = param_2;
  *(int **)(param_1 + 4) = param_2;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(uVar2);
  }
  return;
}



void FUN_00015bac(void)

{
  (**DAT_00015bc4)();
  return;
}



int FUN_00015bc8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_000124b8();
  if (iVar1 != 0) {
    FUN_00011a94(iVar1,param_4,param_2);
  }
  return iVar1;
}



void FUN_00015be4(void)

{
  if ((*DAT_00015bf8 != 0) && (*DAT_00015bfc != 0)) {
    FUN_0001417c();
    return;
  }
  return;
}



void FUN_00015c00(undefined4 param_1)

{
  FUN_0001641c();
  FUN_00014ee8(param_1);
  (**DAT_00015c18)();
  return;
}



void FUN_00015c36(int param_1,int param_2,int param_3)

{
  *(uint *)(param_1 + 0x17c) =
       param_2 - 1U | param_3 * 0x100 - 0x100U | (*(int *)(param_1 + 0x17c) >> 0x10) << 0x10;
  return;
}



void FUN_00015c6a(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  thunk_FUN_000153c0(param_1,&uStack_c);
  return;
}



void FUN_00015c84(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_c = param_2;
  uStack_8 = param_3;
  uStack_4 = param_4;
  thunk_FUN_00015610(param_1,&uStack_c);
  return;
}



uint FUN_00015cb8(int param_1)

{
  return (uint)(*(int *)(DAT_00015cc8 + *(int *)(DAT_00015ccc + param_1 * 8)) << 0x1e) >> 0x1f;
}



void FUN_00015cd0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_000156f8();
  FUN_00016104(uVar1,param_2);
  FUN_00012590(uVar1);
  return;
}



void FUN_00015ce8(int param_1)

{
  if (param_1 != 0) {
    FUN_00016248(0,*(int *)(param_1 + -8),
                 *(int *)(param_1 + -4) + (param_1 - *(int *)(param_1 + -8)) + -8);
    return;
  }
  return;
}



int FUN_00015d18(int param_1,int param_2)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  
  pbVar3 = (byte *)(param_1 + -1);
  pbVar1 = (byte *)(param_2 + -1);
  do {
    pbVar3 = pbVar3 + 1;
    pbVar1 = pbVar1 + 1;
    iVar2 = (uint)*pbVar3 - (uint)*pbVar1;
    if (*pbVar3 == 0) {
      return iVar2;
    }
  } while (iVar2 == 0);
  return iVar2;
}



undefined4 * FUN_00015d48(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = param_1;
  *(undefined2 *)(param_2 + 1) = 0x26;
  FUN_00014ba8(param_2,0,0);
  return param_2;
}



undefined4 FUN_00015d78(void)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((*DAT_00015d8c != 0) && (-1 < *(int *)(*DAT_00015d8c + 0x20))) {
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 * FUN_00015d90(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = param_1;
  *(undefined2 *)(param_2 + 1) = 0x31;
  FUN_00014ba8(param_2,0,0);
  return param_2;
}



undefined4 * FUN_00015da8(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = param_1;
  *(undefined2 *)(param_2 + 1) = 0x32;
  FUN_00014ba8(param_2,0,0);
  return param_2;
}



undefined4 * FUN_00015df0(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = param_1;
  *(undefined2 *)(param_2 + 1) = 0x21;
  FUN_00014ba8(param_2,0,0);
  return param_2;
}



undefined4 * FUN_00015e08(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = param_1;
  *(undefined2 *)(param_2 + 1) = 0x22;
  FUN_00014ba8(param_2,0,0);
  return param_2;
}



void FUN_00015e20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x20);
  }
  FUN_00014eb8(*(undefined4 *)(param_1 + 8),uVar2,0x20,param_4,param_4);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(extraout_r1);
  }
  return;
}



undefined4 FUN_00015e38(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((*DAT_00015e4c != '\0') && (param_1 != 0)) && (*(int *)(param_1 + 0xc) != 0)) {
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 * FUN_00015e50(undefined4 param_1,undefined4 *param_2)

{
  *param_2 = param_1;
  *(undefined2 *)(param_2 + 1) = 8;
  FUN_00014ba8(param_2,0,0);
  return param_2;
}



void FUN_00015e68(undefined4 param_1)

{
  FUN_00014f18();
  (**DAT_00015e7c)(param_1);
  return;
}



int FUN_00015e80(uint param_1)

{
  int iVar1;
  
  if ((param_1 & 0xffff8000) == 0) {
    iVar1 = param_1 + *DAT_00015e94;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



void FUN_00015e98(int param_1)

{
  *(uint *)(param_1 + 0x110) = *(uint *)(param_1 + 0x110) | 2;
  do {
  } while ((*(uint *)(param_1 + 0x114) & 1) == 0);
  return;
}



short FUN_00015eae(char *param_1)

{
  short sVar1;
  
  sVar1 = 0;
  if (param_1 != (char *)0x0) {
    while (*param_1 != '\0') {
      sVar1 = sVar1 + 1;
      param_1 = param_1 + 1;
    }
  }
  return sVar1;
}



char * FUN_00015ec4(char *param_1,char param_2)

{
  char cVar1;
  
  cVar1 = *param_1;
  while( true ) {
    if (param_2 == cVar1) {
      return param_1;
    }
    if (cVar1 == '\0') break;
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  return (char *)0x0;
}



void FUN_00015eda(undefined4 param_1)

{
  FUN_00015478();
  FUN_00016178(3);
  FUN_00015e68(param_1);
  return;
}



void FUN_00015ef0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 extraout_r1;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x20);
  }
  FUN_00014eb8(param_1,uVar2,0x20,param_4,param_4);
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(extraout_r1);
  }
  return;
}



void FUN_00015f1c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0001644a(DAT_00015f2c + -0x54,1,param_3,param_4,param_4);
  WaitForInterrupt();
  do {
                    // WARNING: Do nothing block with infinite loop
  } while( true );
}



void FUN_00015f30(undefined4 param_1)

{
  FUN_0001522c();
  FUN_00012d88(param_1,0x20,0);
  return;
}



void FUN_00015f44(int param_1)

{
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 0x10;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x301;
  return;
}



int FUN_00015f58(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0000bc82(param_1,0xffffffff,param_3,param_4,param_4);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)(short)iVar1;
  }
  return iVar1;
}



void FUN_00015f6c(undefined4 *param_1,uint param_2)

{
  undefined4 uVar1;
  
  param_1[4] = param_2 / 10;
  uVar1 = FUN_000156b8();
  *param_1 = uVar1;
  return;
}



void FUN_00015f82(undefined4 param_1)

{
  *DAT_00015f90 = param_1;
  return;
}



void FUN_00015f88(undefined4 param_1)

{
  *(undefined4 *)(DAT_00015f90 + -4) = param_1;
  return;
}



char * FUN_00015f94(char *param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  pcVar2 = param_1;
  do {
    cVar1 = *param_2;
    *pcVar2 = cVar1;
    param_2 = param_2 + 1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return param_1;
}



int FUN_00015fa8(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = -1;
  pcVar2 = (char *)(param_1 + -1);
  do {
    pcVar2 = pcVar2 + 1;
    iVar1 = iVar1 + 1;
  } while (*pcVar2 != '\0');
  return iVar1;
}



void FUN_00016020(uint param_1)

{
  *DAT_00016030 = 1 << (param_1 & 0x1f);
  return;
}



void FUN_00016048(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x40) = *param_2;
  *(undefined4 *)(param_1 + 0x44) = param_2[1];
  *(undefined4 *)(param_1 + 0x48) = param_2[2];
  *(undefined4 *)(param_1 + 0x4c) = param_2[3];
  return;
}



void FUN_0001605a(int param_1,uint param_2,undefined4 param_3)

{
  if ((param_2 & 0xff) != 0) {
    *(undefined4 *)(param_1 + 0x28) = param_3;
  }
  if ((param_2 & 0xff00) != 0) {
    *(undefined4 *)(param_1 + 0x2c) = param_3;
  }
  return;
}



void FUN_0001606c(int param_1,uint param_2,undefined4 param_3)

{
  if ((param_2 & 0xff) != 0) {
    *(undefined4 *)(param_1 + 0x38) = param_3;
  }
  if ((param_2 & 0xff00) != 0) {
    *(undefined4 *)(param_1 + 0x3c) = param_3;
  }
  return;
}



void FUN_00016092(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 4) = param_3;
  return;
}



undefined4 FUN_00016098(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00015d78();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



void FUN_00016104(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*DAT_00016110 + param_1 * 4) = param_2;
  return;
}



void FUN_00016114(void)

{
  *(undefined4 *)(DAT_00016120 + -4) = 1;
  return;
}



undefined4 FUN_00016124(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  FUN_000164e8(&LAB_000014d2_3);
  return uVar1;
}



void FUN_00016134(int param_1)

{
  FUN_0001644a(DAT_00016140 + param_1 * 4);
  return;
}



int FUN_00016144(void)

{
  int iVar1;
  
  iVar1 = FUN_0000bc76();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)(short)iVar1;
  }
  return iVar1;
}



int FUN_00016154(void)

{
  int iVar1;
  
  iVar1 = FUN_0000bb2a();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)(short)iVar1;
  }
  return iVar1;
}



int FUN_00016164(uint param_1)

{
  return (int)*(char *)(DAT_00016170 + (param_1 & 7));
}



undefined FUN_00016178(undefined param_1)

{
  undefined uVar1;
  
  uVar1 = *(undefined *)(DAT_00016184 + 0x14);
  *(undefined *)(DAT_00016184 + 0x14) = param_1;
  return uVar1;
}



undefined4 FUN_00016198(int param_1)

{
  return *(undefined4 *)(*(int *)(DAT_000161a4 + 0x24) + param_1 * 4);
}



void FUN_000161b8(undefined4 *param_1)

{
  *param_1 = &stack0xffffffdc;
  return;
}



int FUN_00016208(int param_1,int param_2)

{
  if (param_1 == 0) {
    param_1 = DAT_00016214;
  }
  return param_2 * 0x4c + param_1;
}



undefined8 FUN_00016228(undefined4 param_1)

{
  bool bVar1;
  
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(param_1);
  }
  return CONCAT44(param_1,*DAT_00016234);
}



void FUN_00016248(int *param_1)

{
  if (param_1 == (int *)0x0) {
    param_1 = *DAT_00016254;
  }
  (**(code **)(*param_1 + 0xc))();
  return;
}



bool FUN_00016258(void)

{
  return *DAT_00016264 != 0;
}



void FUN_00016268(void)

{
  FUN_0000be00();
  return;
}



void FUN_00016278(int param_1,uint param_2)

{
  if ((*(uint *)(param_1 + 0x50) >> 0x1d & 1) != 0) {
    param_2 = param_2 | 0x20000000;
  }
  *(uint *)(param_1 + 0x50) = param_2;
  return;
}



void FUN_00016286(int param_1)

{
  *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) & 0xffefffff;
  return;
}



void FUN_00016294(int param_1)

{
  *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) | 0x100000;
  return;
}



void FUN_000162a2(int param_1)

{
  *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) & 0xfffffffe;
  return;
}



void FUN_000162b0(int param_1,uint param_2)

{
  *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) & ~param_2;
  return;
}



void FUN_000162be(int param_1)

{
  *(uint *)(param_1 + 0x134) = *(uint *)(param_1 + 0x134) | 1;
  return;
}



void FUN_000162cc(int param_1,uint param_2)

{
  *(uint *)(param_1 + 300) = *(uint *)(param_1 + 300) & ~param_2;
  return;
}



void FUN_000162da(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x17c) = *(uint *)(param_1 + 0x17c) & 0xffff | param_2 << 0x10;
  return;
}



void FUN_000162e8(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xc) = param_2 & 0x101 | *(uint *)(param_1 + 0xc);
  return;
}



bool FUN_00016330(int *param_1)

{
  return param_1 == (int *)*param_1;
}



void FUN_00016340(void)

{
  *DAT_00016348 = 1;
  return;
}



void FUN_0001634c(int param_1,uint param_2)

{
  *(uint *)(param_1 + 300) = param_2 | *(uint *)(param_1 + 300);
  return;
}



void FUN_00016358(int param_1,uint param_2)

{
  *(uint *)(param_1 + 300) = param_2 | *(uint *)(param_1 + 300);
  return;
}



void FUN_00016364(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x30) = param_2 | *(uint *)(param_1 + 0x30) & 0xffffffef;
  return;
}



void FUN_00016394(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = DAT_0001639c;
  }
  FUN_00013f50(param_1,param_2);
  return;
}



bool FUN_000163b0(char *param_1)

{
  return *param_1 == -0x42;
}



undefined4 FUN_000163c0(void)

{
  return *DAT_000163c8;
}



undefined8 FUN_000163d0(void)

{
  bool bVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    uVar2 = getBasePriority();
  }
  bVar1 = (bool)isCurrentModePrivileged();
  if (bVar1) {
    setBasePriority(0x20);
  }
  return CONCAT44(0x20,uVar2);
}



undefined4 FUN_000163e0(void)

{
  return *DAT_000163e8;
}



int FUN_000163ec(int param_1,int param_2)

{
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + param_2 * 8;
  }
  return param_1;
}



void FUN_000163f8(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = DAT_00016400;
  }
  FUN_00013f50(param_1,param_2);
  return;
}



void FUN_00016404(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = DAT_0001640c;
  }
  FUN_00013f50(param_1,param_2);
  return;
}



void FUN_00016410(int param_1)

{
  if (param_1 != 0) {
    FUN_00011a94(param_1,0,0x30);
    return;
  }
  return;
}



void FUN_0001641c(void)

{
  FUN_000163d0(*DAT_00016424);
  return;
}



void FUN_00016428(void)

{
  FUN_00015bc8();
  return;
}



undefined4 FUN_00016434(void)

{
  return *DAT_0001643c;
}



void FUN_0001644a(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  FUN_000164e8(&LAB_000014d2_3);
  return;
}



undefined4 FUN_0001645e(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0xff) {
    uVar1 = *(undefined4 *)(param_1 + 0x48);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x4c);
  }
  return uVar1;
}



void FUN_00016468(undefined4 *param_1,undefined4 param_2)

{
  do {
  } while (((uint)param_1[6] >> 5 & 1) != 0);
  *param_1 = param_2;
  return;
}



void FUN_00016486(int *param_1)

{
  (**(code **)(*param_1 + 8))();
  return;
}



void FUN_000164ae(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x54) = param_3;
  *(undefined4 *)(param_1 + 0x58) = param_4;
  return;
}



void FUN_000164b6(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x38) = param_2 | *(uint *)(param_1 + 0x38);
  return;
}



void FUN_000164be(undefined4 param_1,undefined4 param_2)

{
  FUN_00011a94(param_1,0,param_2);
  return;
}



void FUN_000164c6(void)

{
  return;
}



void FUN_000164e8(int param_1)

{
  do {
    param_1 = param_1 + -1;
  } while (param_1 != 0);
  return;
}



void FUN_000164f4(undefined4 param_1)

{
  FUN_000164be(param_1,0x10);
  return;
}



void FUN_00016520(int param_1)

{
  *(int *)(param_1 + 4) = param_1;
  *(int *)param_1 = param_1;
  return;
}



void FUN_00016550(void)

{
  return;
}



void FUN_00016558(void)

{
  return;
}


