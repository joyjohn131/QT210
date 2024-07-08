#ifndef AUDIO_AC97_H
#define AUDIO_AC97_H

#define AC_GLBCTRL    *(uint32_t*)0xE2200000
#define AC_GLBSTAT    *(uint32_t*)0xE2200004
#define AC_CODEC_CMD  *(uint32_t*)0xE2200008
#define AC_CODEC_STAT *(uint32_t*)0xE220000C
#define AC_PCMADDR    *(uint32_t*)0xE2200010
#define AC_MICADDR    *(uint32_t*)0xE2200014
#define AC_PCMDATA    *(uint32_t*)0xE2200018
#define AC_MICDATA    *(uint32_t*)0xE220001C

#endif
