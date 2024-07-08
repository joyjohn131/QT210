#ifndef    MEDIA_JPEG_H
#define    MEDIA_JPEG_H

#define    JPGMOD           *(uint32_t*)0xFB600000
#define    JPGOPR           *(uint32_t*)0xFB600004
#define    QTBL             *(uint32_t*)0xFB600008
#define    HTBL             *(uint32_t*)0xFB60000C
#define    JPGDRI_U         *(uint32_t*)0xFB600010
#define    JPGDRI_L         *(uint32_t*)0xFB600014
#define    JPGY_U           *(uint32_t*)0xFB600018
#define    JPGY_L           *(uint32_t*)0xFB60001C
#define    JPGX_U           *(uint32_t*)0xFB600020
#define    JPGX_L           *(uint32_t*)0xFB600024
#define    JPGCNT_U         *(uint32_t*)0xFB600028
#define    JPGCNT_M         *(uint32_t*)0xFB60002C
#define    JPGCNT_L         *(uint32_t*)0xFB600030
#define    JPGINTSE         *(uint32_t*)0xFB600034
#define    JPGINTST         *(uint32_t*)0xFB600038
//Reserved 0xFB60003C~      0xFB600048
#define    JPGCOM           *(uint32_t*)0xFB60004C
#define    IMGADR           *(uint32_t*)0xFB600050
#define    Reserved         *(uint32_t*)0xFB600054
#define    JPGADR           *(uint32_t*)0xFB600058
#define    COEF1            *(uint32_t*)0xFB60005C
#define    COEF2            *(uint32_t*)0xFB600060
#define    COEF3            *(uint32_t*)0xFB600064
#define    JPGCMOD          *(uint32_t*)0xFB600068
#define    JPGCLKCON        *(uint32_t*)0xFB60006C
#define    JSTART           *(uint32_t*)0xFB600070
#define    Reserved         *(uint32_t*)0xFB600074
#define    SW_RESET         *(uint32_t*)0xFB600078
#define    TIMER_SE         *(uint32_t*)0xFB60007C
#define    TIMER_ST         *(uint32_t*)0xFB600080
#define    COMSTAT          *(uint32_t*)0xFB600084
#define    OUTFORM          *(uint32_t*)0xFB600088
#define    VERSION          *(uint32_t*)0xFB60008C
#define    Reserved         *(uint32_t*)0xFB600090
#define    ENC_STREAM_INTSE *(uint32_t*)0xFB600098
#define    ENC_STREAM_INTST *(uint32_t*)0xFB60009C
//#define  QTBL0            *(uint32_t*)0xFB600400~0xFB6004FC
//#define  QTBL1            *(uint32_t*)0xFB600500~0xFB6005FC
//#define  QTBL2            *(uint32_t*)0xFB600600~0xFB6006FC
//#define  QTBL3            *(uint32_t*)0xFB600700~0xFB6007FC
//#define  HDCTBL0          *(uint32_t*)0xFB600800~0xFB60083C
//#define  HDCTBLG0         *(uint32_t*)0xFB600840~0xFB60086C
//#define  HACTBL0          *(uint32_t*)0xFB600880~0xFB6008BC
//#define  HACTBLG0         *(uint32_t*)0xFB6008C0~0xFB600B44
//#define  HDCTBL1          *(uint32_t*)0xFB600C00~0xFB600C3C
//#define  HDCTBLG1         *(uint32_t*)0xFB600C40~0xFB600C6C
//#define  HACTBL1          *(uint32_t*)0xFB600C80~0xFB600CBC
//#define  HACTBLG1         *(uint32_t*)0xFB600CC0~0xFB600F44


#endif
