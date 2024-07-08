#ifndef TIMER_PWM_H
#define TIMER_PWM_H

#define TCFG0      *(uint32_t*)0xE2500000
#define TCFG1      *(uint32_t*)0xE2500004
#define TCON       *(uint32_t*)0xE2500008
#define TCNTB0     *(uint32_t*)0xE250000C
#define TCMPB0     *(uint32_t*)0xE2500010
#define TCNTO0     *(uint32_t*)0xE2500014
#define TCNTB1     *(uint32_t*)0xE2500018
#define TCMPB1     *(uint32_t*)0xE250001C
#define TCNTO1     *(uint32_t*)0xE2500020
#define TCNTB2     *(uint32_t*)0xE2500024
#define TCMPB2     *(uint32_t*)0xE2500028
#define TCNTO2     *(uint32_t*)0xE250002C
#define TCNTB3     *(uint32_t*)0xE2500030
#define TCMPB3     *(uint32_t*)0xE2500034
#define TCNTO3     *(uint32_t*)0xE2500038
#define TCNTB4     *(uint32_t*)0xE250003C
#define TCNTO4     *(uint32_t*)0xE2500040
#define TINT_CSTAT *(uint32_t*)0xE2500044

#endif
