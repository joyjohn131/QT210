#ifndef MEMORY_ONENAND_H
#define MEMORY_ONENAND_H

#define ONENAND_IF_CTRL              *(uint32_t*)0xB0600100
#define ONENAND_IF_CMD               *(uint32_t*)0xB0600104
#define ONENAND_IF_ASYNC_TIMING_CTRL *(uint32_t*)0xB0600108
#define ONENAND_IF_STATUS            *(uint32_t*)0xB060010C
#define DMA_SRC_ADDR                 *(uint32_t*)0xB0600400
#define DMA_SRC_CFG                  *(uint32_t*)0xB0600404
#define DMA_DST_ADDR                 *(uint32_t*)0xB0600408
#define DMA_DST_CFG                  *(uint32_t*)0xB060040C
#define DMA_TRANS_SIZE               *(uint32_t*)0xB0600414
#define DMA_TRANS_CMD                *(uint32_t*)0xB0600418
#define DMA_TRANS_STATUS             *(uint32_t*)0xB060041C
#define DMA_TRANS_DIR                *(uint32_t*)0xB0600420
#define INTC_DMA_CLR                 *(uint32_t*)0xB0601004
#define INTC_ONENAND_CLR             *(uint32_t*)0xB0601008
#define INTC_DMA_MASK                *(uint32_t*)0xB0601024
#define INTC_ONENAND_MASK            *(uint32_t*)0xB06_01028
#define INTC_DMA_PEND                *(uint32_t*)0xB0601044
#define INTC_ONENAND_PEND            *(uint32_t*)0xB0601048
#define INTC_DMA_STATUS              *(uint32_t*)0xB0601064
#define INTC_ONENAND_STATUS          *(uint32_t*)0xB0601068



#endif
