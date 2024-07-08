#ifndef SYSTEM_POWER_H
#define SYSTEM_POWER_H











#define   OSC_CON           *(uint32_t*)0xE0108000
//#define Reserved          *(uint32_t*)0xE0108004~*(uint32_t*)0xE0109FFC
#define   RST_STAT          *(uint32_t*)0xE010A000
//#define Reserved          *(uint32_t*)0xE010A004~*(uint32_t*)0xE010BFFC
#define   PWR_CFG           *(uint32_t*)0xE010C000
#define   EINT_WAKEUP_MASK  *(uint32_t*)0xE010C004
#define   WAKEUP_MASK       *(uint32_t*)0xE010C008
#define   PWR_MODE          *(uint32_t*)0xE010C00C
#define   NORMAL_CFG        *(uint32_t*)0xE010C010
//#define Reserved          *(uint32_t*)0xE010C014~*(uint32_t*)0xE010C01C
#define   IDLE_CFG          *(uint32_t*)0xE010C020
//#define Reserved          *(uint32_t*)0xE010C024~*(uint32_t*)0xE010C02C
#define   STOP_CFG          *(uint32_t*)0xE010C030
#define   STOP_MEM_CFG      *(uint32_t*)0xE010C034
//#define Reserved          *(uint32_t*)0xE010C038~*(uint32_t*)0xE010C03C
#define   SLEEP_CFG         *(uint32_t*)0xE010C040
//#define Reserved          *(uint32_t*)0xE010C044~*(uint32_t*)0xE010C0FC
#define   OSC_FREQ          *(uint32_t*)0xE010C100
#define   OSC_STABLE        *(uint32_t*)0xE010C104
#define   PWR_STABLE        *(uint32_t*)0xE010C108
//#define Reserved          *(uint32_t*)0xE010C10C
#define   MTC_STABLE        *(uint32_t*)0xE010C110
#define   CLAMP_STABLE      *(uint32_t*)0xE010C114
//#define Reserved          *(uint32_t*)0xE010C118~*(uint32_t*)0xE010C1FC
#define   WAKEUP_STAT       *(uint32_t*)0xE010C200
#define   BLK_PWR_STAT      *(uint32_t*)0xE010C204
//#define Reserved          *(uint32_t*)0xE010C208~*(uint32_t*)0xE010DFFC
#define   OTHERS            *(uint32_t*)0xE010E000
//#define Reserved          *(uint32_t*)0xE010E00C~*(uint32_t*)0xE010E0FC
#define   OM_STAT           *(uint32_t*)0xE010E100
//#define Reserved          *(uint32_t*)0xE010E104~*(uint32_t*)0xE010E7FC
//#define Reserved          *(uint32_t*)0xE010E800
#define   HDMI_CONTROL      *(uint32_t*)0xE010E804
//#define Reserved          *(uint32_t*)0xE010E808
#define   USB_PHY_CONTROL   *(uint32_t*)0xE010E80C
#define   DAC_CONTROL       *(uint32_t*)0xE010E810
#define   MIPI_DPHY_CONTROL *(uint32_t*)0xE010E814
#define   ADC_CONTROL       *(uint32_t*)0xE010E818
#define   PS_HOLD_CONTROL   *(uint32_t*)0xE010E81C
//#define Reserved          *(uint32_t*)0xE010E81C~*(uint32_t*)0xE010EFFC
#define   INFORM0           *(uint32_t*)0xE010F000
#define   INFORM1           *(uint32_t*)0xE010F004
#define   INFORM2           *(uint32_t*)0xE010F008
#define   INFORM3           *(uint32_t*)0xE010F00C
#define   INFORM4           *(uint32_t*)0xE010F010
#define   INFORM5           *(uint32_t*)0xE010F014
#define   INFORM6           *(uint32_t*)0xE010F018
//#define Reserved          *(uint32_t*)0xE010F020~*(uint32_t*)0xE010FFFC


#endif // SYSTEM_POWER_H
