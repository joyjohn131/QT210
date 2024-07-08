#ifndef CONNECTIVITY_MODEM_H
#define CONNECTIVITY_MODEM_H

//#define MSBM       *(uint32_t*)0xED00_0000~0xED00_3FFC
#define INT2AP     *(uint32_t*)0xED00_8000
#define INT2MSM    *(uint32_t*)0xED00_8004
#define MIFCON     *(uint32_t*)0xED00_8008
#define MIFPCON    *(uint32_t*)0xED00_800C
#define MSMINTCLR  *(uint32_t*)0xED00_8010
#define DMA_TX_ADR *(uint32_t*)0xED00_8014
#define DMA_RX_ADR *(uint32_t*)0xED00_8018

#endif
