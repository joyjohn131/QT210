#ifndef CONNECTIVITY_SPI_H
#define CONNECTIVITY_SPI_H


#define CH_CFG0          *(uint32_t*)0xE1300000
#define CLK_CFG0         *(uint32_t*)0xE1300004
#define MODE_CFG0        *(uint32_t*)0xE1300008
#define CS_REG0          *(uint32_t*)0xE130000C
#define SPI_INT_EN0      *(uint32_t*)0xE1300010
#define SPI_STATUS0      *(uint32_t*)0xE1300014
#define SPI_TX_DATA0     *(uint32_t*)0xE1300018
#define SPI_RX_DATA0     *(uint32_t*)0xE130001C
#define PACKET_CNT_REG0  *(uint32_t*)0xE1300020
#define PENDING_CLR_REG0 *(uint32_t*)0xE1300024
#define SWAP_CFG0        *(uint32_t*)0xE1300028
#define FB_CLK_SEL0      *(uint32_t*)0xE130002C
#define CH_CFG1          *(uint32_t*)0xE1400000
#define CLK_CFG1         *(uint32_t*)0xE1400004
#define MODE_CFG1        *(uint32_t*)0xE1400008
#define CS_REG1          *(uint32_t*)0xE140000C
#define SPI_INT_EN1      *(uint32_t*)0xE1400010
#define SPI_STATUS1      *(uint32_t*)0xE1400014
#define SPI_TX_DATA1     *(uint32_t*)0xE1400018
#define SPI_RX_DATA1     *(uint32_t*)0xE140001C
#define PACKET_CNT_REG1  *(uint32_t*)0xE1400020
#define PENDING_CLR_REG1 *(uint32_t*)0xE1400024
#define SWAP_CFG1        *(uint32_t*)0xE1400028



#endif
