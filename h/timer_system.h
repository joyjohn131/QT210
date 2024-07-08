#ifndef TIMER_SYSTEM_H
#define TIMER_SYSTEM_H

#define TCFG      *(uint32_t*)0xE2600000
#define TCON      *(uint32_t*)0xE2600004
#define TICNTB    *(uint32_t*)0xE2600008
#define TICNTO    *(uint32_t*)0xE260000C
#define TFCNTB    *(uint32_t*)0xE2600010
#define Reserved  *(uint32_t*)0xE2600014
#define ICNTB     *(uint32_t*)0xE2600018
#define ICNTO     *(uint32_t*)0xE260001C
#define INT_CSTAT *(uint32_t*)0xE2600020

#endif
