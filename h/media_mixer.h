#ifndef MEDIA_MIXER_H
#define MEDIA_MIXER_H

#define MIXER_STATUS                   *(uint32_t*)0xF9200000
#define MIXER_CFG                      *(uint32_t*)0xF9200004
#define MIXER_INT_EN                   *(uint32_t*)0xF9200008
#define MIXER_INT_STATUS               *(uint32_t*)0xF920000C
#define MIXER_LAYER_CFG                *(uint32_t*)0xF9200010
#define MIXER_VIDEO_CFG                *(uint32_t*)0xF9200014
#define MIXER_VIDEO_LIMITER_PARA_CFG   *(uint32_t*)0xF9200018
#define MIXER_GRAPHIC0_CFG             *(uint32_t*)0xF9200020
#define MIXER_GRAPHIC0_BASE            *(uint32_t*)0xF9200024
#define MIXER_GRAPHIC0_SPAN            *(uint32_t*)0xF9200028
#define MIXER_GRAPHIC0_SXY             *(uint32_t*)0xF920002C
#define MIXER_GRAPHIC0_WH              *(uint32_t*)0xF9200030
#define MIXER_GRAPHIC0_DXY             *(uint32_t*)0xF9200034
#define MIXER_GRAPHIC0_BLANK           *(uint32_t*)0xF9200038
#define MIXER_GRAPHIC1_CFG             *(uint32_t*)0xF9200040
#define MIXER_GRAPHIC1_BASE            *(uint32_t*)0xF9200044
#define MIXER_GRAPHIC1_SPAN            *(uint32_t*)0xF9200048
#define MIXER_GRAPHIC1_SXY             *(uint32_t*)0xF920004C
#define MIXER_GRAPHIC1_WH              *(uint32_t*)0xF9200050
#define MIXER_GRAPHIC1_DXY             *(uint32_t*)0xF9200054
#define MIXER_GRAPHIC1_BLANK           *(uint32_t*)0xF9200058
#define MIXER_BG_COLOR0                *(uint32_t*)0xF9200064
#define MIXER_BG_COLOR1                *(uint32_t*)0xF9200068
#define MIXER_BG_COLOR2                *(uint32_t*)0xF920006C
#define MIXER_CM_COEFF_Y               *(uint32_t*)0xF9200080
#define MIXER_CM_COEFF_CB              *(uint32_t*)0xF9200084
#define MIXER_CM_COEFF_CR              *(uint32_t*)0xF9200088
#define MIXER_STATUS_S                 *(uint32_t*)0xF9202000
#define MIXER_CFG_S                    *(uint32_t*)0xF9202004
#define MIXER_LAYER_CFG_S              *(uint32_t*)0xF9202010
#define MIXER_VIDEO_CFG_S              *(uint32_t*)0xF9202014
#define MIXER_VIDEO_LIMITER_PARA_CFG_S *(uint32_t*)0xF9202018
#define MIXER_GRAPHIC0_CFG_S           *(uint32_t*)0xF9202020
#define MIXER_GRAPHIC0_BASE_S          *(uint32_t*)0xF9202024
#define MIXER_GRAPHIC0_SPAN_S          *(uint32_t*)0xF9202028
#define MIXER_GRAPHIC0_SXY_S           *(uint32_t*)0xF920202C
#define MIXER_GRAPHIC0_WH_S            *(uint32_t*)0xF9202030
#define MIXER_GRAPHIC0_DXY_S           *(uint32_t*)0xF9202034
#define MIXER_GRAPHIC0_BLANK_PIXEL_S   *(uint32_t*)0xF9202038
#define MIXER_GRAPHIC1_CFG_S           *(uint32_t*)0xF9202040
#define MIXER_GRAPHIC1_BASE_S          *(uint32_t*)0xF9202044
#define MIXER_GRAPHIC1_SPAN_S          *(uint32_t*)0xF9202048
#define MIXER_GRAPHIC1_SXY_S           *(uint32_t*)0xF920204C
#define MIXER_GRAPHIC1_WH_S            *(uint32_t*)0xF9202050
#define MIXER_GRAPHIC1_DXY_S           *(uint32_t*)0xF9202054
#define MIXER_GRAPHIC1_BLANK_PIXEL_S   *(uint32_t*)0xF9202058
#define MIXER_BG_COLOR0_S              *(uint32_t*)0xF0202064
#define MIXER_BG_COLOR1_S              *(uint32_t*)0xF9202068
#define MIXER_BG_COLOR2_S              *(uint32_t*)0xF920206C
#define MIXER_VER                      *(uint32_t*)0xF9200100


#endif
