#ifndef AUDIO_SUBSYSTEM_H
#define AUDIO_SUBSYSTEM_H

//IMEM  0xC0000000        ~0xC000FFFC
//DMEM  A
//RM    decode            mode                    (MISC SFR[3] = 0) 0xC0010000 ~0xC002_7FFC
//RP    decode            mode                    (MISC SFR[3] = 1) 0xC0100000 ~0xC011_7FFC
//IBUF0 0xEEA00000        ~0xEEA047FC
//IBUF1 0xEEB00000        ~0xEEB047FC
//OBUF0 0xEEC00000        ~0xEEC023FC
//OBUF1 0xEED00000        ~0xEED023FC

#define ASS_CLK_SRC       *(uint32_t*)0xEEE10000
#define ASS_CLK_DIV       *(uint32_t*)0xEEE10004
#define ASS_CLK_GATE      *(uint32_t*)0xEEE10008
#define ASS_INTR          *(uint32_t*)0xEEE20000
#define SW_DEFINE00       *(uint32_t*)0xEEE20004
#define SW_DEFINE01       *(uint32_t*)0xEEE20008
#define SW_DEFINE02       *(uint32_t*)0xEEE2000C
#define SW_DEFINE03       *(uint32_t*)0xEEE20010
#define INST_START_ADDR   *(uint32_t*)0xEEE20014
#define SW_DEFINE04       *(uint32_t*)0xEEE20018
#define RESET             *(uint32_t*)0xEEE20100
#define RP_PENDING        *(uint32_t*)0xEEE20104
#define FRM_SIZE          *(uint32_t*)0xEEE20108
#define SW_DEFINE05       *(uint32_t*)0xEEE2010C
#define SW_DEFINE06       *(uint32_t*)0xEEE20110
#define SW_DEFINE07       *(uint32_t*)0xEEE20114
#define SW_DEFINE08       *(uint32_t*)0xEEE20118
#define SW_DEFINE09       *(uint32_t*)0xEEE2011C
#define SW_DEFINE10       *(uint32_t*)0xEEE20120
#define SW_DEFINE11       *(uint32_t*)0xEEE20124
#define SW_DEFINE12       *(uint32_t*)0xEEE20128
#define RP_BOOT           *(uint32_t*)0xEEE2012C
#define SW_DEFINE13       *(uint32_t*)0xEEE20130
#define SW_DEFINE14       *(uint32_t*)0xEEE20134
#define SW_DEFINE15       *(uint32_t*)0xEEE20138
#define PAD_PDN_CTRL      *(uint32_t*)0xEEE20204
#define MISC              *(uint32_t*)0xEEE20208


#endif
