#ifndef TIMER_RTC_H
#define TIMER_RTC_H

#define INTP       *(uint32_t*)0xE2800030
#define RTCCON     *(uint32_t*)0xE2800040
#define TICCNT     *(uint32_t*)0xE2800044
#define RTCALM     *(uint32_t*)0xE2800050
#define ALMSEC     *(uint32_t*)0xE2800054
#define ALMMIN     *(uint32_t*)0xE2800058
#define ALMHOUR    *(uint32_t*)0xE280005C
#define ALMDAY     *(uint32_t*)0xE2800060
#define ALMMON     *(uint32_t*)0xE2800064
#define ALMYEAR    *(uint32_t*)0xE2800068
#define BCDSEC     *(uint32_t*)0xE2800070
#define BCDMIN     *(uint32_t*)0xE2800074
#define BCDHOUR    *(uint32_t*)0xE2800078
#define BCDDAYWEEK *(uint32_t*)0xE280007C
#define BCDDAY     *(uint32_t*)0xE2800080
#define BCDMON     *(uint32_t*)0xE2800084
#define BCDYEAR    *(uint32_t*)0xE2800088
#define CURTICCNT  *(uint32_t*)0xE2800090


#endif
