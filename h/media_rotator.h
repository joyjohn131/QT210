#ifndef MEDIA_ROTATOR_H
#define MEDIA_ROTATOR_H


#define CONFIG          *(uint32_t*)0xFA300000
#define CONTROL         *(uint32_t*)0xFA300010
#define STATUS          *(uint32_t*)0xFA300020
#define SRCBASEADDR0    *(uint32_t*)0xFA300030
#define SRCBASEADDR1    *(uint32_t*)0xFA300034
#define SRCBASEADDR2    *(uint32_t*)0xFA300038
#define SRCIMGSIZE      *(uint32_t*)0xFA30003C
#define SRC_XY          *(uint32_t*)0xFA300040
#define SRCROTSIZE      *(uint32_t*)0xFA300044
#define DSTBASEADDR0    *(uint32_t*)0xFA300050
#define DSTBASEADDR1    *(uint32_t*)0xFA300054
#define DSTBASEADDR2    *(uint32_t*)0xFA300058
#define DSTIMGSIZE      *(uint32_t*)0xFA30005C
#define DST_XY          *(uint32_t*)0xFA300060

#endif
