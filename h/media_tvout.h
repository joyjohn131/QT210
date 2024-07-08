#ifndef    MEDIA_TVOUT_H
#define    MEDIA_TVOUT_H


#define    SDO_CLKCON             *(uint32_t*)0xF9000000
#define    SDO_CONFIG             *(uint32_t*)0xF9000008
#define    SDO_SCALE              *(uint32_t*)0xF900000C
#define    SDO_VBI                *(uint32_t*)0xF9000014
#define    SDO_SCALE_CH0          *(uint32_t*)0xF900001C
#define    SDO_YCDELAY            *(uint32_t*)0xF9000034
#define    SDO_SCHLOCK            *(uint32_t*)0xF9000038
#define    SDO_DAC                *(uint32_t*)0xF900003C
#define    SDO_FINFO              *(uint32_t*)0xF9000040
#define    SDO_Y0                 *(uint32_t*)0xF9000044
#define    SDO_Y1                 *(uint32_t*)0xF9000048
#define    SDO_Y2                 *(uint32_t*)0xF900004C
#define    SDO_Y3                 *(uint32_t*)0xF9000050
#define    SDO_Y4                 *(uint32_t*)0xF9000054
#define    SDO_Y5                 *(uint32_t*)0xF9000058
#define    SDO_Y6                 *(uint32_t*)0xF900005C
#define    SDO_Y7                 *(uint32_t*)0xF9000060
#define    SDO_Y8                 *(uint32_t*)0xF9000064
#define    SDO_Y9                 *(uint32_t*)0xF9000068
#define    SDO_Y10                *(uint32_t*)0xF900006C
#define    SDO_Y11                *(uint32_t*)0xF9000070
#define    SDO_CB0                *(uint32_t*)0xF9000080
#define    SDO_CB1                *(uint32_t*)0xF9000084
#define    SDO_CB2                *(uint32_t*)0xF9000088
#define    SDO_CB3                *(uint32_t*)0xF900008C
#define    SDO_CB4                *(uint32_t*)0xF9000090
#define    SDO_CB5                *(uint32_t*)0xF9000094
#define    SDO_CB6                *(uint32_t*)0xF9000098
#define    SDO_CB7                *(uint32_t*)0xF900009C
#define    SDO_CB8                *(uint32_t*)0xF90000A0
#define    SDO_CB9                *(uint32_t*)0xF90000A4
#define    SDO_CB10               *(uint32_t*)0xF90000A8
#define    SDO_CB11               *(uint32_t*)0xF90000AC
#define    SDO_CR0                *(uint32_t*)0xF90000C0
#define    SDO_CR1                *(uint32_t*)0xF90000C4
#define    SDO_CR2                *(uint32_t*)0xF90000C8
#define    SDO_CR3                *(uint32_t*)0xF90000CC
#define    SDO_CR4                *(uint32_t*)0xF90000D0
#define    SDO_CR5                *(uint32_t*)0xF90000D4
#define    SDO_CR6                *(uint32_t*)0xF90000D8
#define    SDO_CR7                *(uint32_t*)0xF90000DC
#define    SDO_CR8                *(uint32_t*)0xF90000E0
#define    SDO_CR9                *(uint32_t*)0xF90000E4
#define    SDO_CR10               *(uint32_t*)0xF90000E8
#define    SDO_CR11               *(uint32_t*)0xF90000EC
#define    SDO_CCCON              *(uint32_t*)0xF9000180
#define    SDO_YSCALE             *(uint32_t*)0xF9000184
#define    SDO_CBSCALE            *(uint32_t*)0xF9000188
#define    SDO_CRSCALE            *(uint32_t*)0xF900018C
#define    SDO_CB_CR_OFFSET       *(uint32_t*)0xF9000190
#define    SDO_CVBS_CC_Y1         *(uint32_t*)0xF9000198
#define    SDO_CVBS_CC_Y2         *(uint32_t*)0xF900019C
#define    SDO_CVBS_CC_C          *(uint32_t*)0xF90001A0
#define    SDO_OSFC000            *(uint32_t*)0xF9000200
#define    SDO_OSFC01_0           *(uint32_t*)0xF9000204
#define    SDO_OSFC02_0           *(uint32_t*)0xF9000208
#define    SDO_OSFC03_0           *(uint32_t*)0xF900020C
#define    SDO_OSFC04_0           *(uint32_t*)0xF9000210
#define    SDO_OSFC05_0           *(uint32_t*)0xF9000214
#define    SDO_OSFC06_0           *(uint32_t*)0xF9000218
#define    SDO_OSFC07_0           *(uint32_t*)0xF900021C
#define    SDO_OSFC08_0           *(uint32_t*)0xF9000220
#define    SDO_OSFC09_0           *(uint32_t*)0xF9000224
#define    SDO_OSFC10_0           *(uint32_t*)0xF9000228
#define    SDO_OSFC11_0           *(uint32_t*)0xF900022C
#define    SDO_OSFC12_0           *(uint32_t*)0xF9000230
#define    SDO_OSFC13_0           *(uint32_t*)0xF9000234
#define    SDO_OSFC14_0           *(uint32_t*)0xF9000238
#define    SDO_OSFC15_0           *(uint32_t*)0xF900023C
#define    SDO_OSFC16_0           *(uint32_t*)0xF9000240
#define    SDO_OSFC17_0           *(uint32_t*)0xF9000244
#define    SDO_OSFC18_0           *(uint32_t*)0xF9000248
#define    SDO_OSFC19_0           *(uint32_t*)0xF900024C
#define    SDO_OSFC20_0           *(uint32_t*)0xF9000250
#define    SDO_OSFC21_0           *(uint32_t*)0xF9000254
#define    SDO_OSFC22_0           *(uint32_t*)0xF9000258
#define    SDO_OSFC23_0           *(uint32_t*)0xF900025C
#define    SDO_XTALK0             *(uint32_t*)0xF9000260
#define    SDO_BB_CTRL            *(uint32_t*)0xF900026C
#define    SDO_IRQ                *(uint32_t*)0xF9000280
#define    SDO_IRQMASK            *(uint32_t*)0xF9000284
//Reserved *(uint32_t*)0xF90002C0
//Reserved *(uint32_t*)0xF90002C4
//Reserved *(uint32_t*)0xF90002C8
//Reserved *(uint32_t*)0xF90002CC
//Reserved *(uint32_t*)0xF90002D0
//Reserved *(uint32_t*)0xF90002D4
//Reserved *(uint32_t*)0xF90002D8
//Reserved *(uint32_t*)0xF90002DC
//Reserved *(uint32_t*)0xF90002E0
//Reserved *(uint32_t*)0xF90002E4
//Reserved *(uint32_t*)0xF90002E8
//Reserved *(uint32_t*)0xF90002EC
//Reserved *(uint32_t*)0xF90002F0
//Reserved *(uint32_t*)0xF90002F4
//Reserved *(uint32_t*)0xF90002F8
//Reserved *(uint32_t*)0xF90002FC
//Reserved *(uint32_t*)0xF9000300
//Reserved *(uint32_t*)0xF9000304
//Reserved *(uint32_t*)0xF9000308
//Reserved *(uint32_t*)0xF900030C
//Reserved *(uint32_t*)0xF9000310
//Reserved *(uint32_t*)0xF9000314
//Reserved *(uint32_t*)0xF9000318
//Reserved *(uint32_t*)0xF900031C
//Reserved *(uint32_t*)0xF9000320
//Reserved *(uint32_t*)0xF9000324
//Reserved *(uint32_t*)0xF9000328
//Reserved *(uint32_t*)0xF900032C
//Reserved *(uint32_t*)0xF9000330
//Reserved *(uint32_t*)0xF9000334
//Reserved *(uint32_t*)0xF9000338
//Reserved *(uint32_t*)0xF900033C
//Reserved *(uint32_t*)0xF9000340
//Reserved *(uint32_t*)0xF9000344
//Reserved *(uint32_t*)0xF9000348
//Reserved *(uint32_t*)0xF900034C
//Reserved *(uint32_t*)0xF9000350
//Reserved *(uint32_t*)0xF9000354
//Reserved *(uint32_t*)0xF9000358
//Reserved *(uint32_t*)0xF900035C
//Reserved *(uint32_t*)0xF9000360
//Reserved *(uint32_t*)0xF9000364
//Reserved *(uint32_t*)0xF9000368
//Reserved *(uint32_t*)0xF900036C
//Reserved *(uint32_t*)0xF9000370
//Reserved *(uint32_t*)0xF9000374
//Reserved *(uint32_t*)0xF9000378
//Reserved *(uint32_t*)0xF900037C
#define    SDO_ARMCC              *(uint32_t*)0xF90003C0
#define    SDO_ARMWSS525          *(uint32_t*)0xF90003C4
#define    SDO_ARMWSS625          *(uint32_t*)0xF90003C8
#define    SDO_ARMCGMS525         *(uint32_t*)0xF90003CC
#define    SDO_ARMCGMS625         *(uint32_t*)0xF90003D4
#define    SDO_VERSION            *(uint32_t*)0xF90003D8
#define    SDO_CC                 *(uint32_t*)0xF9000380
#define    SDO_WSS525             *(uint32_t*)0xF9000384
#define    SDO_WSS625             *(uint32_t*)0xF9000388
#define    SDO_CGMS525            *(uint32_t*)0xF900038C
#define    SDO_CGMS625            *(uint32_t*)0xF9000394


#endif
