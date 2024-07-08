#ifndef MEDIA_MIPIDSIM_H
#define MEDIA_MIPIDSIM_H

#define DSIM_STATUS      *(uint32_t*)0xFA500000
#define DSIM_SWRST       *(uint32_t*)0xFA500004
#define DSIM_CLKCTRL     *(uint32_t*)0xFA500008
#define DSIM_TIMEOUT     *(uint32_t*)0xFA50000C
#define DSIM_CONFIG      *(uint32_t*)0xFA500010
#define DSIM_ESCMODE     *(uint32_t*)0xFA500014
#define DSIM_MDRESOL     *(uint32_t*)0xFA500018
#define DSIM_MVPORCH     *(uint32_t*)0xFA50001C
#define DSIM_MHPORCH     *(uint32_t*)0xFA500020
#define DSIM_MSYNC       *(uint32_t*)0xFA500024
#define DSIM_SDRESOL     *(uint32_t*)0xFA500028
#define DSIM_INTSRC      *(uint32_t*)0xFA50002C
#define DSIM_INTMSK      *(uint32_t*)0xFA500030
#define DSIM_PKTHDR      *(uint32_t*)0xFA500034
#define DSIM_PAYLOAD     *(uint32_t*)0xFA500038
#define DSIM_RXFIFO      *(uint32_t*)0xFA50003C
#define DSIM_FIFOTHLD    *(uint32_t*)0xFA500040
#define DSIM_FIFOCTRL    *(uint32_t*)0xFA500044
#define DSIM_MEMACCHR    *(uint32_t*)0xFA500048
#define DSIM_PLLCTRL     *(uint32_t*)0xFA50004C
#define DSIM_PLLTMR      *(uint32_t*)0xFA500050
#define DSIM_PHYACCHR    *(uint32_t*)0xFA500054
#define DSIM_PHYACCHR1   *(uint32_t*)0xFA500058


#endif
