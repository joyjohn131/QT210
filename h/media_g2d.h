#ifndef MEDIA_G2D_H
#define MEDIA_G2D_H

#define SOFT_RESET_REG          *(uint32_t*)0xFA000000
#define INTEN_REG               *(uint32_t*)0xFA000004
#define INTC_PEND_REG           *(uint32_t*)0xFA00000C
#define FIFO_STAT_REG           *(uint32_t*)0xFA000010
#define AXI_ID_MODE_REG         *(uint32_t*)0xFA000014
#define CACHECTL_REG            *(uint32_t*)0xFA000018
#define BITBLT_START_REG        *(uint32_t*)0xFA000100
#define BITBLT_COMMAND_REG      *(uint32_t*)0xFA000104
#define ROTATE_REG              *(uint32_t*)0xFA000200
#define SRC_MSK_DIRECT_REG      *(uint32_t*)0xFA000204
#define DST_PAT_DIRECT_REG      *(uint32_t*)0xFA000208
#define SRC_SELECT_REG          *(uint32_t*)0xFA000300
#define SRC_BASE_ADDR_REG       *(uint32_t*)0xFA000304
#define SRC_STRIDE_REG          *(uint32_t*)0xFA000308
#define SRC_COLOR_MODE_REG      *(uint32_t*)0xFA00030C
#define SRC_LEFT_TOP_REG        *(uint32_t*)0xFA000310
#define SRC_RIGHT_BOTTOM_REG    *(uint32_t*)0xFA000314
#define DST_SELECT_REG          *(uint32_t*)0xFA000400
#define DST_BASE_ADDR_REG       *(uint32_t*)0xFA000404
#define DST_STRIDE_REG          *(uint32_t*)0xFA000408
#define DST_COLOR_MODE_REG      *(uint32_t*)0xFA00040C
#define DST_LEFT_TOP_REG        *(uint32_t*)0xFA000410
#define DST_RIGHT_BOTTOM_REG    *(uint32_t*)0xFA000414
#define PAT_BASE_ADDR_REG       *(uint32_t*)0xFA000500
#define PAT_SIZE_REG            *(uint32_t*)0xFA000504
#define PAT_COLOR_MODE_REG      *(uint32_t*)0xFA000508
#define PAT_OFFSET_REG          *(uint32_t*)0xFA00050C
#define PAT_STRIDE_REG          *(uint32_t*)0xFA000510
#define MASK_BASE_ADDR_REG      *(uint32_t*)0xFA000520
#define MASK_STRIDE_REG         *(uint32_t*)0xFA000524
#define CW_LT_REG               *(uint32_t*)0xFA000600
#define CW_RB_REG               *(uint32_t*)0xFA000604
#define THIRD_OPERAND_REG       *(uint32_t*)0xFA000610
#define ROP4_REG                *(uint32_t*)0xFA000614
#define ALPHA_REG               *(uint32_t*)0xFA000618
#define FG_COLOR_REG            *(uint32_t*)0xFA000700
#define BG_COLOR_REG            *(uint32_t*)0xFA000704
#define BS_COLOR_REG            *(uint32_t*)0xFA000708
#define SRC_COLORKEY_CTRL_REG   *(uint32_t*)0xFA000710
#define SRC_COLORKEY_DR_MIN_REG *(uint32_t*)0xFA000714
#define SRC_COLORKEY_DR_MAX_REG *(uint32_t*)0xFA000718
#define DST_COLORKEY_CTRL_REG   *(uint32_t*)0xFA00071C
#define DST_COLORKEY_DR_MIN_REG *(uint32_t*)0xFA000720
#define DST_COLORKEY_DR_MAX_REG *(uint32_t*)0xFA000724


#endif
