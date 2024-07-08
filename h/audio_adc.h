#ifndef AUDIO_ADC_H
#define AUDIO_ADC_H

#define TSADCCON0   *(uint32_t*)0xE1700000
#define TSCON0      *(uint32_t*)0xE1700004
#define TSDLY0      *(uint32_t*)0xE1700008
#define TSDATX0     *(uint32_t*)0xE170000C
#define TSDATY0     *(uint32_t*)0xE1700010
#define TSPENSTAT0  *(uint32_t*)0xE1700014
#define CLRINTADC0  *(uint32_t*)0xE1700018
#define ADCMUX      *(uint32_t*)0xE170001C
#define CLRINTPEN0  *(uint32_t*)0xE1700020
#define TSADCCON1   *(uint32_t*)0xE1701000
#define TSCON1      *(uint32_t*)0xE1701004
#define TSDLY1      *(uint32_t*)0xE1701008
#define TSDATX1     *(uint32_t*)0xE170100C
#define TSDATY1     *(uint32_t*)0xE1701010
#define TSPENSTAT1  *(uint32_t*)0xE1701014
#define CLRINTADC1  *(uint32_t*)0xE1701018
#define CLRINTPEN1  *(uint32_t*)0xE1701020

#endif
