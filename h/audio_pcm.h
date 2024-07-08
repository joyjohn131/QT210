#ifndef AUDIO_PCM_H
#define AUDIO_PCM_H

#define PCM0_CTL       *(uint32_t*)0xE2300000
#define PCM0_CLKCTL    *(uint32_t*)0xE2300004
#define PCM0_TXFIFO    *(uint32_t*)0xE2300008
#define PCM0_RXFIFO    *(uint32_t*)0xE230000C
#define PCM0_IRQ_CTL   *(uint32_t*)0xE2300010
#define PCM0_IRQ_STAT  *(uint32_t*)0xE2300014
#define PCM0_FIFO_STAT *(uint32_t*)0xE2300018
#define PCM0_CLRINT    *(uint32_t*)0xE2300020

#define PCM1_CTL       *(uint32_t*)0xE1200000
#define PCM1_CLKCTL    *(uint32_t*)0xE1200004
#define PCM1_TXFIFO    *(uint32_t*)0xE1200008
#define PCM1_RXFIFO    *(uint32_t*)0xE120000C
#define PCM1_IRQ_CTL   *(uint32_t*)0xE1200010
#define PCM1_IRQ_STAT  *(uint32_t*)0xE1200014
#define PCM1_FIFO_STAT *(uint32_t*)0xE1200018
#define PCM1_CLRINT    *(uint32_t*)0xE1200020

#define PCM2_CTL       *(uint32_t*)0xE2B00000
#define PCM2_CLKCTL    *(uint32_t*)0xE2B00004
#define PCM2_TXFIFO    *(uint32_t*)0xE2B00008
#define PCM2_RXFIFO    *(uint32_t*)0xE2B0000C
#define PCM2_IRQ_CTL   *(uint32_t*)0xE2B00010
#define PCM2_IRQ_STAT  *(uint32_t*)0xE2B00014
#define PCM2_FIFO_STAT *(uint32_t*)0xE2B00018
#define PCM2_CLRINT    *(uint32_t*)0xE2B00020


#endif
