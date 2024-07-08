#ifndef CONNECTIVITY_IIC_H
#define CONNECTIVITY_IIC_H

#define I2CCON0          *(uint32_t*)0xE1800000
#define I2CSTAT0         *(uint32_t*)0xE1800004
#define I2CADD0          *(uint32_t*)0xE1800008
#define I2CDS0           *(uint32_t*)0xE180000C
#define I2CLC0           *(uint32_t*)0xE1800010
#define I2CCON2          *(uint32_t*)0xE1A00000
#define I2CSTAT2         *(uint32_t*)0xE1A00004
#define I2CADD2          *(uint32_t*)0xE1A00008
#define I2CDS2           *(uint32_t*)0xE1A0000C
#define I2CLC2           *(uint32_t*)0xE1A00010
#define I2CCON_HDMI_DDC  *(uint32_t*)0xFAB00000
#define I2CSTAT_HDMI_DDC *(uint32_t*)0xFAB00004
#define I2CADD_HDMI_DDC  *(uint32_t*)0xFAB00008
#define I2CDS_HDMI_DDC   *(uint32_t*)0xFAB0000C
#define I2CLC_HDMI_DDC   *(uint32_t*)0xFAB00010
#define I2CCON_HDMI_PHY  *(uint32_t*)0xFA900000
#define I2CSTAT_HDMI_PHY *(uint32_t*)0xFA900004
#define I2CADD_HDMI_PHY  *(uint32_t*)0xFA900008
#define I2CDS_HDMI_PHY   *(uint32_t*)0xFA90000C
#define I2CLC_HDMI_PHY   *(uint32_t*)0xFA900010


#endif
