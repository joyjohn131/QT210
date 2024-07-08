#ifndef MEMORY_FLASH_H
#define MEMORY_FLASH_H

#define ATA_CONTROL     *(uint32_t*)0xE8200000
#define ATA_STATUS      *(uint32_t*)0xE8200004
#define ATA_COMMAND     *(uint32_t*)0xE8200008
#define ATA_SWRST       *(uint32_t*)0xE820000C
#define ATA_IRQ         *(uint32_t*)0xE8200010
#define ATA_IRQ_MASK    *(uint32_t*)0xE8200014
#define ATA_CFG         *(uint32_t*)0xE8200018
#define Reserved        *(uint32_t*)0xE820001C
#define Reserved        *(uint32_t*)0xE8200020
#define Reserved        *(uint32_t*)0xE8200024
#define ATA_MDMA_TIME   *(uint32_t*)0xE8200028
#define ATA_PIO_TIME    *(uint32_t*)0xE820002C
#define ATA_UDMA_TIME   *(uint32_t*)0xE8200030
#define ATA_XFR_NUM     *(uint32_t*)0xE8200034
#define ATA_XFR_CNT     *(uint32_t*)0xE8200038
#define ATA_TBUF_BASE   *(uint32_t*)0xE820003C
#define ATA_TBUF_SIZE   *(uint32_t*)0xE8200040
#define ATA_SBUF_BASE   *(uint32_t*)0xE8200044
#define ATA_SBUF_SIZE   *(uint32_t*)0xE8200048
#define ATA_CADR_TBUF   *(uint32_t*)0xE820004C
#define ATA_CADR_SBUF   *(uint32_t*)0xE8200050
#define ATA_PIO_DTR     *(uint32_t*)0xE8200054
#define ATA_PIO_FED     *(uint32_t*)0xE8200058
#define ATA_PIO_SCR     *(uint32_t*)0xE820005C
#define ATA_PIO_LLR     *(uint32_t*)0xE8200060
#define ATA_PIO_LMR     *(uint32_t*)0xE8200064
#define ATA_PIO_LHR     *(uint32_t*)0xE8200068
#define ATA_PIO_DVR     *(uint32_t*)0xE820006C
#define ATA_PIO_CSD     *(uint32_t*)0xE8200070
#define ATA_PIO_DAD     *(uint32_t*)0xE8200074
#define ATA_PIO_READY   *(uint32_t*)0xE8200078
#define ATA_PIO_RDATA   *(uint32_t*)0xE820007C
#define BUS_FIFO_STATUS *(uint32_t*)0xE8200080
#define ATA_FIFO_STATUS *(uint32_t*)0xE8200084

#endif
