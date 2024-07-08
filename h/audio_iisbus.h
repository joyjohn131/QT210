#ifndef AUDIO_IISBUS_H
#define AUDIO_IISBUS_H

#define IIS1_IISCON    *(uint32_t*)0xE2100000
#define IIS1_IISMOD    *(uint32_t*)0xE2100004
#define IIS1_IISFIC    *(uint32_t*)0xE2100008
#define IIS1_IISPSR    *(uint32_t*)0xE210000C
#define IIS1_IISTXD    *(uint32_t*)0xE2100010
#define IIS1_IISRXD    *(uint32_t*)0xE2100014

#define IIS2_IISCON    *(uint32_t*)0xE2A00000
#define IIS2_IISMOD    *(uint32_t*)0xE2A00004
#define IIS2_IISFIC    *(uint32_t*)0xE2A00008
#define IIS2_IISPSR    *(uint32_t*)0xE2A0000C
#define IIS2_IISTXD    *(uint32_t*)0xE2A00010
#define IIS2_IISRXD    *(uint32_t*)0xE2A00014


#endif
