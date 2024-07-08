#ifndef AUDIO_IIS_H
#define AUDIO_IIS_H

#define IISCON      *(uint32_t*)0xEEE30000
#define IISMOD      *(uint32_t*)0xEEE30004
#define IISFIC      *(uint32_t*)0xEEE30008
#define IISPSR      *(uint32_t*)0xEEE3000C
#define IISTXD      *(uint32_t*)0xEEE30010
#define IISRXD      *(uint32_t*)0xEEE30014
#define IISFICS     *(uint32_t*)0xEEE30018
#define IISTXDS     *(uint32_t*)0xEEE3001C
#define IISAHB      *(uint32_t*)0xEEE30020
#define IISSTR0     *(uint32_t*)0xEEE30024
#define IISSIZE     *(uint32_t*)0xEEE30028
#define IISTRNCNT   *(uint32_t*)0xEEE3002C
#define IISLVL0ADDR *(uint32_t*)0xEEE30030
#define IISLVL1ADDR *(uint32_t*)0xEEE30034
#define IISLVL2ADDR *(uint32_t*)0xEEE30038
#define IISLVL3ADDR *(uint32_t*)0xEEE3003C
#define IISSTR1     *(uint32_t*)0xEEE30040

#endif
