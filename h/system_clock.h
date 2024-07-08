#ifndef SYSTEM_CLOCK_H
#define SYSTEM_CLOCK_H

static void SYSTEM_CLOCK_Init();

enum PLL
{
    APLL = 1, MPLL, EPLL, VPLL
};

enum MUX
{
    MUX_APLL=1, MUX_MPLL, MUX_EPLL, MUX_VPLL,
    MUX_MSYS, MUX_DSYS, MUX_PSYS,
    MUX_HPM, MUX_DMC0, MUX_FLASH,
//---------------------------------------next page
    MUX_DAC, MUX_HDMI, MUX_MIXER,
    MUX_MFC, MUX_G3D, MUX_G2D,
//---------
    MUX_CAM0, MUX_CAM1, MUX_FIMD,
    MUX_MMC0, MUX_MMC1, MUX_MMC2, MUX_MMC3,
    MUX_AUDIO0, MUX_AUDIO1, MUX_AUDIO2,
    MUX_FIMC_LCLK, MUX_CSIS,
    MUX_SPI0, MUX_SPI1, MUX_PWI,
    MUX_UART0, MUX_UART1, MUX_UART2, MUX_UART3,
    MUX_PWM, MUX_SPDIF
};

enum MUX_page2_RU
{
    SCLKA2M = 00b,
    SCLKMPLL = 01b,
    SCLKEPLL = 10b,
    SCLKVPLL = 11b
};

enum MUX_page2_LD
{
    SCLK_AUDIO0 = 00b,
    SCLK_AUDIO1 = 01b,
    SCLK_AUDIO2 = 10b
};

enum MUX_page2_LR
{
    XXIT = 0000b,
    I2SCDCLK1 = 0000b,
    I2SCDCLK2 = 0000b,

    XUSBXTI = 0001b,
    PCMCDCLK0 = 0001b,
    PCMCDCLK1 = 0001b,
    PCMCDCLK2 = 0001b,

    SCLK_HDMI27M = 0010b,
    SCLK_USBPHY0 = 0011b,
    SCLK_USBPHY1 = 0100b,
    SCLK_HDMIPHY = 0101b,
    SCLKMPLL = 0110b,
    SCLKEPLL = 0111b,
    SCLKVPLL = 1000b
};

enum DIV
{
    DIV_COPY=1, DIV_HPM, DIV_APLL,
    DIV_HCLKM, DIV_PCLKM, DIV_IMEM,
    DIV_A2M, DIV_DMC0,
    DIV_HCLKD, DIV_PCLKD, DIV_FLASH,
    DIV_HCLKP, DIV_PCLKP, DIV_DPM, DIV_DVSEM,
//-------------------------------------next page
    DIV_TBLK, DIV_MFC, DIV_G3D, DIV_G2D,
//----------
    DIV_CAM0, DIV_CAM1, DIV_FIMD,
    DIV_MMC0, DIV_MMC1, DIV_MMC2, DIV_MMC3,
    DIV_AUDIO0, DIV_AUDIO1, DIV_AUDIO2,
    DIV_FIMC_LCLK, DIV_CSIS,
    DIV_SPI0, DIV_SPI1, DIV_PWI,
    DIV_UART0, DIV_UART1, DIV_UART2, DIV_UART3,
    DIV_PWM
};


#define APLL_LOCK       *(uint32_t*)0xE0100000
//****Reserved    *(uint32_t*)0xE0100004
#define MPLL_LOCK       *(uint32_t*)0xE0100008
//****Reserved    *(uint32_t*)0xE010000C
#define EPLL_LOCK       *(uint32_t*)0xE0100010
//****Reserved    *(uint32_t*)0xE0100014~*(uint32_t*)0xE010001C
#define VPLL_LOCK       *(uint32_t*)0xE0100020
//****Reserved    *(uint32_t*)0xE0100024~*(uint32_t*)0xE01000FC
#define APLL_CON0       *(uint32_t*)0xE0100100
#define APLL_CON1       *(uint32_t*)0xE0100104
#define MPLL_CON        *(uint32_t*)0xE0100108
//****Reserved    *(uint32_t*)0xE010010C
#define EPLL_CON0       *(uint32_t*)0xE0100110
#define EPLL_CON1       *(uint32_t*)0xE0100114
//****Reserved    *(uint32_t*)0xE0100118~*(uint32_t*)0xE010011C
#define VPLL_CON        *(uint32_t*)0xE0100120
//****Reserved    *(uint32_t*)0xE0100124~*(uint32_t*)0xE01001FC
#define CLK_SRC0        *(uint32_t*)0xE0100200
#define CLK_SRC1        *(uint32_t*)0xE0100204
#define CLK_SRC2        *(uint32_t*)0xE0100208
#define CLK_SRC3        *(uint32_t*)0xE010020C
#define CLK_SRC4        *(uint32_t*)0xE0100210
#define CLK_SRC5        *(uint32_t*)0xE0100214
#define CLK_SRC6        *(uint32_t*)0xE0100218
//****Reserved    *(uint32_t*)0xE010021C~*(uint32_t*)0xE010027C
#define CLK_SRC_MASK0   *(uint32_t*)0xE0100280
#define CLK_SRC_MASK1   *(uint32_t*)0xE0100284
//****Reserved    *(uint32_t*)0xE0100288~*(uint32_t*)0xE01002FC
#define CLK_DIV0        *(uint32_t*)0xE0100300
#define CLK_DIV1        *(uint32_t*)0xE0100304
#define CLK_DIV2        *(uint32_t*)0xE0100308
#define CLK_DIV3        *(uint32_t*)0xE010030C
#define CLK_DIV4        *(uint32_t*)0xE0100310
#define CLK_DIV5        *(uint32_t*)0xE0100314
#define CLK_DIV6        *(uint32_t*)0xE0100318
#define CLK_DIV7        *(uint32_t*)0xE010031C
//****Reserved    *(uint32_t*)0xE0100320~*(uint32_t*)0xE0100440
#define CLK_GATE_SCLK   *(uint32_t*)0xE0100444
//****Reserved    *(uint32_t*)0xE0100448~*(uint32_t*)0xE010045C
#define CLK_GATE_IP0    *(uint32_t*)0xE0100460
#define CLK_GATE_IP1    *(uint32_t*)0xE0100464
#define CLK_GATE_IP2    *(uint32_t*)0xE0100468
#define CLK_GATE_IP3    *(uint32_t*)0xE010046C
#define CLK_GATE_IP4    *(uint32_t*)0xE0100470
//****Reserved    *(uint32_t*)0xE0100474~*(uint32_t*)0xE010047C
#define CLK_GATE_BLOCK  *(uint32_t*)0xE0100480
#define CLK_GATE_IP5    *(uint32_t*)0xE0100484
//****Reserved    *(uint32_t*)0xE0100488~*(uint32_t*)0xE01004FC
#define CLK_OUT         *(uint32_t*)0xE0100500
//****Reserved    *(uint32_t*)0xE0100504~*(uint32_t*)0xE0100FFC
#define CLK_DIV_STAT0   *(uint32_t*)0xE0101000
#define CLK_DIV_STAT1   *(uint32_t*)0xE0101004
//****Reserved    *(uint32_t*)0xE0101008~*(uint32_t*)0xE01010FC
#define CLK_MUX_STAT0   *(uint32_t*)0xE0101100
#define CLK_MUX_STAT1   *(uint32_t*)0xE0101104
//****Reserved    *(uint32_t*)0xE0101108~*(uint32_t*)0xE0101FFC
#define SWRESET         *(uint32_t*)0xE0102000
//****Reserved    *(uint32_t*)0xE0102004~*(uint32_t*)0xE0102FFC
#define DCGIDX_MAP0     *(uint32_t*)0xE0103000
#define DCGIDX_MAP1     *(uint32_t*)0xE0103004
#define DCGIDX_MAP2     *(uint32_t*)0xE0103008
//****Reserved    *(uint32_t*)0xE010300C~*(uint32_t*)0xE010301C
#define DCGPERF_MAP0    *(uint32_t*)0xE0103020
#define DCGPERF_MAP1    *(uint32_t*)0xE0103024
//****Reserved    *(uint32_t*)0xE0103028~*(uint32_t*)0xE010303C
#define DVCIDX_MAP      *(uint32_t*)0xE0103040
//****Reserved    *(uint32_t*)0xE0103044~*(uint32_t*)0xE010305C
#define FREQ_CPU        *(uint32_t*)0xE0103060
#define FREQ_DPM        *(uint32_t*)0xE0103064
//****Reserved    *(uint32_t*)0xE0103068~*(uint32_t*)0xE010307C
#define DVSEMCLK_EN     *(uint32_t*)0xE0103080
#define MAXPERF         *(uint32_t*)0xE0103084
//****Reserved    *(uint32_t*)0xE0103088~*(uint32_t*)0xE01030FC
#define APLL_CON0_L8    *(uint32_t*)0xE0103100
#define APLL_CON0_L7    *(uint32_t*)0xE0103104
#define APLL_CON0_L6    *(uint32_t*)0xE0103108
#define APLL_CON0_L5    *(uint32_t*)0xE010310C
#define APLL_CON0_L4    *(uint32_t*)0xE0103110
#define APLL_CON0_L3    *(uint32_t*)0xE0103114
#define APLL_CON0_L2    *(uint32_t*)0xE0103118
#define APLL_CON0_L1    *(uint32_t*)0xE010311C
//****Reserved    *(uint32_t*)0xE0103120~*(uint32_t*)0xE01031FC
#define CLKDIV_IEM_L8   *(uint32_t*)0xE0103200
#define CLKDIV_IEM_L7   *(uint32_t*)0xE0103204
#define CLKDIV_IEM_L6   *(uint32_t*)0xE0103208
#define CLKDIV_IEM_L5   *(uint32_t*)0xE010320C
#define CLKDIV_IEM_L4   *(uint32_t*)0xE0103210
#define CLKDIV_IEM_L3   *(uint32_t*)0xE0103214
#define CLKDIV_IEM_L2   *(uint32_t*)0xE0103218
#define CLKDIV_IEM_L1   *(uint32_t*)0xE010321C
//****Reserved    *(uint32_t*)0xE0103220~*(uint32_t*)0xE01032FC
#define APLL_CON1_L8    *(uint32_t*)0xE0103300
#define APLL_CON1_L7    *(uint32_t*)0xE0103304
#define APLL_CON1_L6    *(uint32_t*)0xE0103308
#define APLL_CON1_L5    *(uint32_t*)0xE010330C
#define APLL_CON1_L4    *(uint32_t*)0xE0103310
#define APLL_CON1_L3    *(uint32_t*)0xE0103314
#define APLL_CON1_L2    *(uint32_t*)0xE0103318
#define APLL_CON1_L1    *(uint32_t*)0xE010331C
//****Reserved    *(uint32_t*)0xE0103320~*(uint32_t*)0xE01060FC
#define GENERAL_CTRL    *(uint32_t*)0xE0106100
//****Reserved    *(uint32_t*)0xE0106104~*(uint32_t*)0xE0107004
#define DISPLAY_CONTROL *(uint32_t*)0xE0107008
#define AUDIO_ENDIAN    *(uint32_t*)0xE010700C




#endif // SYSTEM_CLOCK_H
