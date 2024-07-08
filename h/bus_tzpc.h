#ifndef BUS_TZPC_H
#define BUS_TZPC_H



#define TZPC0R0SIZE       *(uint32_t*)0xF1500000
#define TZPC0DECPROT0Stat *(uint32_t*)0xF1500800
#define TZPC0DECPROT0Set  *(uint32_t*)0xF1500804
#define TZPC0DECPROT0Clr  *(uint32_t*)0xF1500808
#define TZPC0DECPROT1Stat *(uint32_t*)0xF150080C
#define TZPC0DECPROT1Set  *(uint32_t*)0xF1500810
#define TZPC0DECPROT1Clr  *(uint32_t*)0xF1500814
#define TZPC0DECPROT2Stat *(uint32_t*)0xF1500818
#define TZPC0DECPROT2Set  *(uint32_t*)0xF150081C
#define TZPC0DECPROT2Clr  *(uint32_t*)0xF1500820
#define TZPC0DECPROT3Stat *(uint32_t*)0xF1500824
#define TZPC0DECPROT3Set  *(uint32_t*)0xF1500828
#define TZPC0DECPROT3Clr  *(uint32_t*)0xF150082C
#define TZPC0PERIPHID0    *(uint32_t*)0xF1500FE0
#define TZPC0PERIPHID1    *(uint32_t*)0xF1500FE4
#define TZPC0PERIPHID2    *(uint32_t*)0xF1500FE8
#define TZPC0PERIPHID3    *(uint32_t*)0xF1500FEC
#define TZPC0PCELLID0     *(uint32_t*)0xF1500FF0
#define TZPC0PCELLID1     *(uint32_t*)0xF1500FF4
#define TZPC0PCELLID2     *(uint32_t*)0xF1500FF8
#define TZPC0PCELLID3     *(uint32_t*)0xF1500FFC

#define TZPC1R0SIZE       *(uint32_t*)0xFAD00000
#define TZPC1DECPROT0Stat *(uint32_t*)0xFAD00800
#define TZPC1DECPROT0Set  *(uint32_t*)0xFAD00804
#define TZPC1DECPROT0Clr  *(uint32_t*)0xFAD00808
#define TZPC1DECPROT1Stat *(uint32_t*)0xFAD0080C
#define TZPC1DECPROT1Set  *(uint32_t*)0xFAD00810
#define TZPC1DECPROT1Clr  *(uint32_t*)0xFAD00814
#define TZPC1DECPROT2Stat *(uint32_t*)0xFAD00818
#define TZPC1DECPROT2Set  *(uint32_t*)0xFAD0081C
#define TZPC1DECPROT2Clr  *(uint32_t*)0xFAD00820
#define TZPC1DECPROT3Stat *(uint32_t*)0xFAD00824
#define TZPC1DECPROT3Set  *(uint32_t*)0xFAD00828
#define TZPC1DECPROT3Clr  *(uint32_t*)0xFAD0082C
#define TZPC1PERIPHID0    *(uint32_t*)0xFAD00FE0
#define TZPC1PERIPHID1    *(uint32_t*)0xFAD00FE4
#define TZPC1PERIPHID2    *(uint32_t*)0xFAD00FE8
#define TZPC1PERIPHID3    *(uint32_t*)0xFAD00FEC
#define TZPC1PCELLID0     *(uint32_t*)0xFAD00FF0
#define TZPC1PCELLID1     *(uint32_t*)0xFAD00FF4
#define TZPC1PCELLID2     *(uint32_t*)0xFAD00FF8
#define TZPC1PCELLID3     *(uint32_t*)0xFAD00FFC

#define TZPC2R0SIZE       *(uint32_t*)0xE0600000
#define TZPC2DECPROT0Stat *(uint32_t*)0xE0600800
#define TZPC2DECPROT0Set  *(uint32_t*)0xE0600804
#define TZPC2DECPROT0Clr  *(uint32_t*)0xE0600808
#define TZPC2DECPROT1Stat *(uint32_t*)0xE060080C
#define TZPC2DECPROT1Set  *(uint32_t*)0xE0600810
#define TZPC2DECPROT1Clr  *(uint32_t*)0xE0600814
#define TZPC2DECPROT2Stat *(uint32_t*)0xE0600818
#define TZPC2DECPROT2Set  *(uint32_t*)0xE060081C
#define TZPC2DECPROT2Clr  *(uint32_t*)0xE0600820
#define TZPC2DECPROT3Stat *(uint32_t*)0xE0600824
#define TZPC2DECPROT3Set  *(uint32_t*)0xE0600828
#define TZPC2DECPROT3Clr  *(uint32_t*)0xE060082C
#define TZPC2PERIPHID0    *(uint32_t*)0xE0600FE0
#define TZPC2PERIPHID1    *(uint32_t*)0xE0600FE4
#define TZPC2PERIPHID2    *(uint32_t*)0xE0600FE8
#define TZPC2PERIPHID3    *(uint32_t*)0xE0600FEC
#define TZPC2PCELLID0     *(uint32_t*)0xE0600FF0
#define TZPC2PCELLID1     *(uint32_t*)0xE0600FF4
#define TZPC2PCELLID2     *(uint32_t*)0xE0600FF8
#define TZPC2PCELLID3     *(uint32_t*)0xE0600FFC

#define TZPC3R0SIZE       *(uint32_t*)0xE1C00000
#define TZPC3DECPROT0Stat *(uint32_t*)0xE1C00800
#define TZPC3DECPROT0Set  *(uint32_t*)0xE1C00804
#define TZPC3DECPROT0Clr  *(uint32_t*)0xE1C00808
#define TZPC3DECPROT1Stat *(uint32_t*)0xE1C0080C
#define TZPC3DECPROT1Set  *(uint32_t*)0xE1C00810
#define TZPC3DECPROT1Clr  *(uint32_t*)0xE1C00814
#define TZPC3DECPROT2Stat *(uint32_t*)0xE1C00818
#define TZPC3DECPROT2Set  *(uint32_t*)0xE1C0081C
#define TZPC3DECPROT2Clr  *(uint32_t*)0xE1C00820
#define TZPC3DECPROT3Stat *(uint32_t*)0xE1C00824
#define TZPC3DECPROT3Set  *(uint32_t*)0xE1C00828
#define TZPC3DECPROT3Clr  *(uint32_t*)0xE1C0082C
#define TZPC3PERIPHID0    *(uint32_t*)0xE1C00FE0
#define TZPC3PERIPHID1    *(uint32_t*)0xE1C00FE4
#define TZPC3PERIPHID2    *(uint32_t*)0xE1C00FE8
#define TZPC3PERIPHID3    *(uint32_t*)0xE1C00FEC
#define TZPC3PCELLID0     *(uint32_t*)0xE1C00FF0
#define TZPC3PCELLID1     *(uint32_t*)0xE1C00FF4
#define TZPC3PCELLID2     *(uint32_t*)0xE1C00FF8
#define TZPC3PCELLID3     *(uint32_t*)0xE1C00FFC

#endif //BUS_TZPC_H
