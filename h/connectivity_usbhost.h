#ifndef CONNECTIVITY_USBHOST_H
#define CONNECTIVITY_USBHOST_H

#define HCCPBASE           *(uint32_t*)0xEC200000
#define HCSPARAMS          *(uint32_t*)0xEC200004
#define HCCPARAMS          *(uint32_t*)0xEC200008
#define USBCMD             *(uint32_t*)0xEC200010
#define USBSTS             *(uint32_t*)0xEC200014
#define USBINTR            *(uint32_t*)0xEC200018
#define FRINDEX            *(uint32_t*)0xEC20001C
#define CTRLDSSEGMENT      *(uint32_t*)0xEC200020
#define PERIODICLISTBASE   *(uint32_t*)0xEC200024
#define ASYNCLISTADDR      *(uint32_t*)0xEC200028
#define CONFIGFLAG         *(uint32_t*)0xEC200050
#define PortStatusControl  *(uint32_t*)0xEC200054
#define INSNREG00          *(uint32_t*)0xEC200090
#define INSNREG01          *(uint32_t*)0xEC200094
#define INSNREG02          *(uint32_t*)0xEC200098
#define INSNREG03          *(uint32_t*)0xEC20009C
#define INSNREG04          *(uint32_t*)0xEC2000A0
#define INSNREG05          *(uint32_t*)0xEC2000A4
#define INSNREG06          *(uint32_t*)0xEC2000A8
#define INSNREG07          *(uint32_t*)0xEC2000AC
#define HcRevision         *(uint32_t*)0xEC300000
#define HcControl          *(uint32_t*)0xEC300004
#define HcCommonStatus     *(uint32_t*)0xEC300008
#define HcInterruptStatus  *(uint32_t*)0xEC30000C
#define HcInterruptEnable  *(uint32_t*)0xEC300010
#define HcInterruptDisable *(uint32_t*)0xEC300014
#define HcHCCA             *(uint32_t*)0xEC300018
#define HcPeriodCuttentED  *(uint32_t*)0xEC30001C
#define HcControlHeadED    *(uint32_t*)0xEC300020
#define HcControlCurrentED *(uint32_t*)0xEC300024
#define HcBulkHeadED       *(uint32_t*)0xEC300028
#define HcBulkCurrentED    *(uint32_t*)0xEC30002C
#define HcDoneHead         *(uint32_t*)0xEC300030
#define HcRmInterval       *(uint32_t*)0xEC300034
#define HcFmRemaining      *(uint32_t*)0xEC300038
#define HcFmNumber         *(uint32_t*)0xEC30003C
#define HcPeriodicStart    *(uint32_t*)0xEC300040
#define HcLSThreshold      *(uint32_t*)0xEC300044
#define HcRhDescriptorA    *(uint32_t*)0xEC300048
#define HcRhDescriptorB    *(uint32_t*)0xEC30004C
#define HcRhStatus         *(uint32_t*)0xEC300050
#define HcRhPortStatus     *(uint32_t*)0xEC300054

#endif
