#ifndef AUDIO_SPDIF_H
#define AUDIO_SPDIF_H

#define SPDCLKCON     *(uint32_t*)0xE1100000
#define SPDCON        *(uint32_t*)0xE1100004
#define SPDBSTAS      *(uint32_t*)0xE1100008
#define SPDCSTAS      *(uint32_t*)0xE110000C
#define SPDDAT        *(uint32_t*)0xE1100010
#define SPDCNT        *(uint32_t*)0xE1100014
#define SPDBSTAS_SHD  *(uint32_t*)0xE1100018
#define SPDCNT_SHD    *(uint32_t*)0xE110001C
#define USERBIT1      *(uint32_t*)0xE1100020
#define USERBIT2      *(uint32_t*)0xE1100024
#define USERBIT3      *(uint32_t*)0xE1100028
#define USERBIT1_SHD  *(uint32_t*)0xE110002C
#define USERBIT2_SHD  *(uint32_t*)0xE1100030
#define USERBIT3_SHD  *(uint32_t*)0xE1100034
#define VERSION_INFO  *(uint32_t*)0xE1100038

#endif
