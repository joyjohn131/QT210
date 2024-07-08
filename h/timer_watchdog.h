#ifndef TIMER_WATCHDOG_H
#define TIMER_WATCHDOG_H

#define WTCON    *(uint32_t*)0xE2700000
#define WTDAT    *(uint32_t*)0xE2700004
#define WTCNT    *(uint32_t*)0xE2700008
#define WTCLRINT *(uint32_t*)0xE270000C

#endif
