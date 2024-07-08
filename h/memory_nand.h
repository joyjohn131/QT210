#ifndef MEMORY_NAND_H
#define MEMORY_NAND_H

#define NFCONF       *(uint32_t*)0xB0E00000
#define NFCONT       *(uint32_t*)0xB0E00004
#define NFCMMD       *(uint32_t*)0xB0E00008
#define NFADDR       *(uint32_t*)0xB0E0000C
#define NFDATA       *(uint32_t*)0xB0E00010
#define NFMECCD0     *(uint32_t*)0xB0E00014
#define NFMECCD1     *(uint32_t*)0xB0E00018
#define NFSECCD      *(uint32_t*)0xB0E0001C
#define NFSBLK       *(uint32_t*)0xB0E00020
#define NFEBLK       *(uint32_t*)0xB0E00024
#define NFSTAT       *(uint32_t*)0xB0E00028
#define NFECCERR0    *(uint32_t*)0xB0E0002C
#define NFECCERR1    *(uint32_t*)0xB0E00030
#define NFMECC0      *(uint32_t*)0xB0E00034
#define NFMECC1      *(uint32_t*)0xB0E00038
#define NFSECC       *(uint32_t*)0xB0E0003C
#define NFMLCBITPT   *(uint32_t*)0xB0E00040
#define NFECCCONF    *(uint32_t*)0xB0E20000
#define NFECCCONT    *(uint32_t*)0xB0E20020
#define NFECCSTAT    *(uint32_t*)0xB0E20030
#define NFECCSECSTAT *(uint32_t*)0xB0E20040
#define NFECCPRGECC0 *(uint32_t*)0xB0E20090
#define NFECCPRGECC1 *(uint32_t*)0xB0E20094
#define NFECCPRGECC2 *(uint32_t*)0xB0E20098
#define NFECCPRGECC3 *(uint32_t*)0xB0E2009C
#define NFECCPRGECC4 *(uint32_t*)0xB0E200A0
#define NFECCPRGECC5 *(uint32_t*)0xB0E200A4
#define NFECCPRGECC6 *(uint32_t*)0xB0E200A8
#define NFECCERL0    *(uint32_t*)0xB0E200C0
#define NFECCERL1    *(uint32_t*)0xB0E200C4
#define NFECCERL2    *(uint32_t*)0xB0E200C8
#define NFECCERL3    *(uint32_t*)0xB0E200CC
#define NFECCERL4    *(uint32_t*)0xB0E200D0
#define NFECCERL5    *(uint32_t*)0xB0E200D4
#define NFECCERL6    *(uint32_t*)0xB0E200D8
#define NFECCERL7    *(uint32_t*)0xB0E200DC
#define NFECCERP0    *(uint32_t*)0xB0E200F0
#define NFECCERP1    *(uint32_t*)0xB0E200F4
#define NFECCERP2    *(uint32_t*)0xB0E200F8
#define NFECCERP3    *(uint32_t*)0xB0E200FC
#define NFECCCONECC0 *(uint32_t*)0xB0E20110
#define NFECCCONECC1 *(uint32_t*)0xB0E20114
#define NFECCCONECC2 *(uint32_t*)0xB0E20118
#define NFECCCONECC3 *(uint32_t*)0xB0E2011C
#define NFECCCONECC4 *(uint32_t*)0xB0E20120
#define NFECCCONECC5 *(uint32_t*)0xB0E20124
#define NFECCCONECC6 *(uint32_t*)0xB0E20128


#endif
