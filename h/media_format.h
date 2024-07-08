#ifndef    MEDIA_FORMAT_H
#define    MEDIA_FORMAT_H

#define    MFC_SW_RESET                      *(uint32_t*)0xF1700000
#define    MFC_RISC_HOST_INT                 *(uint32_t*)0xF1700008
#define    MFC_HOST2RISC_COMMAND             *(uint32_t*)0xF1700030
#define    MFC_HOST2RISC_ARG1                *(uint32_t*)0xF1700034
#define    MFC_HOST2RISC_ARG2                *(uint32_t*)0xF1700038
#define    MFC_HOST2RISC_ARG3                *(uint32_t*)0xF170003C
#define    MFC_HOST2RISC_ARG4                *(uint32_t*)0xF1700040
#define    MFC_RISC2HOST_COMMAND             *(uint32_t*)0xF1700044
#define    MFC_RISC2HOST_ARG1                *(uint32_t*)0xF1700048
#define    MFC_RISC2HOST_ARG2                *(uint32_t*)0xF170004C
#define    MFC_RISC2HOST_ARG3                *(uint32_t*)0xF1700050
#define    MFC_RISC2HOST_ARG4                *(uint32_t*)0xF1700054
#define    MFC_FIRMWARE_VERSION              *(uint32_t*)0xF1700058
#define    DBG_INFO_OUTPUT1                  *(uint32_t*)0xF1700064
#define    DBG_INFO_OUTPUT1                  *(uint32_t*)0xF1700068
#define    MFC_FIRMWARE_STATUS               *(uint32_t*)0xF1700080
#define    MFC_MC_DRAMBASE_ADDR_A            *(uint32_t*)0xF1700508
#define    MFC_MC_DRAMBASE_ADDR_B            *(uint32_t*)0xF170050C
#define    MFC_MC_STATUS                     *(uint32_t*)0xF1700510
//#define  MFC_COMMON_BASE_ADDR_0~63[16:0]   *(uint32_t*)0xF1700600~*(uint32_t*)0xF17006FC
//#define  MFC_COMMON_BASE_ADDR_64~127[16:0] *(uint32_t*)0xF1700700~*(uint32_t*)0xF17007FC
#define    MFC_HSIZE_PX                      *(uint32_t*)0xF1700818
#define    MFC_VSIZE_PX                      *(uint32_t*)0xF170081C
#define    MFC_PROFILE                       *(uint32_t*)0xF1700830
#define    MFC_PICTURE_STRUCT                *(uint32_t*)0xF170083C
#define    MFC_LF_CONTROL                    *(uint32_t*)0xF1700848
#define    MFC_LF_ALPHA_OFF                  *(uint32_t*)0xF170084C
#define    MFC_LF_BETA_OFF                   *(uint32_t*)0xF1700850
#define    MFC_QP_OFFSET                     *(uint32_t*)0xF1700C30
#define    MFC_QP_OUT_EN                     *(uint32_t*)0xF1700C34
#define    MFC_SI_RTN_CHID                   *(uint32_t*)0xF1702000
//#define  MFC_COMMON_SI_RG_1~15             *(uint32_t*)0xF1702004~*(uint32_t*)0xF170203C
#define    MFC_SI_CH0INST_ID                 *(uint32_t*)0xF1702040
#define    MFC_SI_CH1_INST_ID                *(uint32_t*)0xF1702080
//#define  MFC_COMMON_CH0RG_1~15             *(uint32_t*)0xF1702044~*(uint32_t*)0xF170207C
//#define  MFC_COMMON_CH1_RG_1~15            *(uint32_t*)0xF1702084~*(uint32_t*)0xF17020BC
#define    MFC_COMMON_SI_RG_1                *(uint32_t*)0xF1702004
#define    MFC_COMMON_SI_RG_2                *(uint32_t*)0xF1702008
#define    MFC_COMMON_SI_RG_3                *(uint32_t*)0xF170200C
#define    MFC_COMMON_SI_RG_4                *(uint32_t*)0xF1702010
#define    MFC_COMMON_SI_RG_5                *(uint32_t*)0xF1702014
#define    MFC_COMMON_SI_RG_6                *(uint32_t*)0xF1702018
#define    MFC_COMMON_SI_RG_7                *(uint32_t*)0xF170201C
#define    MFC_COMMON_SI_RG_8                *(uint32_t*)0xF1702020
#define    MFC_COMMON_SI_RG_9                *(uint32_t*)0xF1702024
#define    MFC_COMMON_SI_RG_10               *(uint32_t*)0xF1702028
#define    MFC_COMMON_SI_RG_11               *(uint32_t*)0xF170202C
#define    MFC_COMMON_CHx_RG_1               *(uint32_t*)0xF1702044
//or       *(uint32_t*)0xF1702084
#define    MFC_COMMON_CHx_RG_2               *(uint32_t*)0xF1702048
//or       *(uint32_t*)0xF1702088
#define    MFC_COMMON_CHx_RG_3               *(uint32_t*)0xF170204C
//or       *(uint32_t*)0xF170208C
//Reserved *(uint32_t*)0xF1702050
//or       *(uint32_t*)0xF1702090
//Reserved *(uint32_t*)0xF1702054
//or       *(uint32_t*)0xF1702094
#define    MFC_COMMON_CHx_RG_6               *(uint32_t*)0xF1702058
//or       *(uint32_t*)0xF1702098
#define    MFC_COMMON_CHx_RG_7               *(uint32_t*)0xF170205C
//or       *(uint32_t*)0xF170209C
#define    MFC_COMMON_CHx_RG_8               *(uint32_t*)0xF1702060
//or       *(uint32_t*)0xF17020A0
#define    MFC_COMMON_CHx_RG_9               *(uint32_t*)0xF1702064
//or       *(uint32_t*)0xF17020A4
#define    MFC_COMMON_CHx_RG_10              *(uint32_t*)0xF1702068
//or       *(uint32_t*)0xF17020A8
#define    MFC_COMMON_CHx_RG_11              *(uint32_t*)0xF170206C
//or       *(uint32_t*)0xF17020AC
#define    MFC_COMMON_SI_RG_1                *(uint32_t*)0xF1702004
#define    MFC_COMMON_SI_RG_2                *(uint32_t*)0xF1702008
#define    MFC_COMMON_SI_RG_3                *(uint32_t*)0xF170200C
#define    MFC_COMMON_SI_RG_4                *(uint32_t*)0xF1702010
#define    MFC_COMMON_SI_RG_5                *(uint32_t*)0xF1702014
#define    MFC_COMMON_SI_RG_6                *(uint32_t*)0xF1702018
#define    MFC_COMMON_CHx_RG_1               *(uint32_t*)0xF1702044
//or       *(uint32_t*)0xF1702084
#define    MFC_COMMON_CHx_RG_3               *(uint32_t*)0xF170204C
//or       *(uint32_t*)0xF170208C
#define    MFC_COMMON_CHx_RG_4               *(uint32_t*)0xF1702050
//or       *(uint32_t*)0xF1702090
#define    MFC_COMMON_CHx_RG_5               *(uint32_t*)0xF1702054
//or       *(uint32_t*)0xF1702094
#define    MFC_COMMON_CHx_RG_6               *(uint32_t*)0xF1702058
//or       *(uint32_t*)0xF1702098
#define    MFC_COMMON_CHx_RG_9               *(uint32_t*)0xF1702064
//or       *(uint32_t*)0xF17020A4
#define    MFC_COMMON_CHx_RG_10              *(uint32_t*)0xF1702068
//or       *(uint32_t*)0xF17020A8
#define    MFC_COMMON_CHx_RG_11              *(uint32_t*)0xF170206C
//or       *(uint32_t*)0xF17020AC
#define    ENC_PIC_TYPE_CTRL                 *(uint32_t*)0xF170C504
#define    ENC_B_RECON_WRITE_ON              *(uint32_t*)0xF170C508
#define    ENC_MSLICE_CTRL                   *(uint32_t*)0xF170C50C
#define    ENC_MSLICE_MB                     *(uint32_t*)0xF170C510
#define    ENC_MSLICE_Bit                    *(uint32_t*)0xF170C514
#define    ENC_CIR_CTRL                      *(uint32_t*)0xF170C518
#define    ENC_MAP_F//or_CUR                 *(uint32_t*)0xF170C51C
#define    ENC_PADDING_CTRL                  *(uint32_t*)0xF170C520
#define    ENC_COMMON_INTRA_BIAS             *(uint32_t*)0xF170C588
#define    ENC_COMMON_BI_DIRECT_BIAS         *(uint32_t*)0xF170C58C
#define    RC_CONFIG                         *(uint32_t*)0xF170C5A0
#define    RC_FRAME_RATE                     *(uint32_t*)0xF170D0D0
#define    RC_BIT_RATE                       *(uint32_t*)0xF170C5A8
#define    RC_QBOUND                         *(uint32_t*)0xF170C5AC
#define    RC_RPARA                          *(uint32_t*)0xF170C5B0
#define    RC_MB_CTRL                        *(uint32_t*)0xF170C5B4
#define    H264_ENC_ENTRP_MODE               *(uint32_t*)0xF170D004
#define    H264_ENC_NUM_OF_REF               *(uint32_t*)0xF170D010
#define    H264_ENC_TRANS_8X8_FLAG           *(uint32_t*)0xF170D034
#define    MPEG4_ENC_QUART_PXL               *(uint32_t*)0xF170E008


//Shared Memory Structure
#define    EXTENDED_DECODE_STATUS            0x0000
#define    SET_FRAME_TAG                     0x0004
#define    GET_FRAME_TAG_TOP                 0x0008
#define    GET_FRAME_TAG_BOTTOM              0x000C
#define    PIC_TIME_TOP                      0x0010
#define    PIC_TIME_BOTTOM                   0x0014
#define    START_BYTE_NUM                    0x0018
#define    CROP_INFO1                        0x0020
#define    CROP_INFO2                        0x0024
#define    EXT_ENC_CONTROL                   0x0028
#define    ENC_PARAM_CHANGE                  0x002C
#define    VOP_TIMING                        0x0030
#define    HEC_PERIOD                        0x0034
#define    METADATA_ENABLE                   0x0038
#define    METADATA_STATUS                   0x003C
#define    METADATA_DISPLAY_INDEX            0x0040
#define    EXT_METADATA_START_ADDR           0x0044
#define    PUT_EXTRADATA                     0x0048
#define    EXTRADATA_ADDR                    0x004C
#define    ALLOCATED_LUMA_DPB_SIZE           0x0064
#define    ALLOCATED_CHROMA_DPB_SIZE         0x0068
#define    ALLOCATED_MV_SIZE                 0x006C
#define    P_B_FRAME_QP                      0x0070
#define    ASPECT_RATIO_IDC                  0x0074
#define    EXTENDED_SAR                      0x0078
#define    DISP_PIC_PROFILE                  0x007C
#define    FLUSH_CMD_TYPE                    0x0080
#define    FLUSH_CMD_INBUF1                  0x0084
#define    FLUSH_CMD_INBUF2                  0x0088
#define    FLUSH_CMD_OUTBUF                  0x008C
#define    NEW_RC_BIT_RATE                   0x0090
#define    NEW_RC_FRAME_RATE                 0x0094
#define    NEW_I_PERIOD                      0x0098
#define    H264_I_PERIOD                     0x009C
#define    RC_CONTROL_CONFIG                 0x00A0
#define    BATCH_INPUT_ADDR                  0x00A4
#define    BATCH_OUTPUT_ADDR                 0x00A8
#define    BATCH_OUTPUT_SIZE                 0x00AC
#define    MIN_LUMA_DPB_SIZE                 0x00B0
#define    H264_POC_TYPE                     0x00B8
#define    MIN_CHROMA_DPB_SIZE               0x00BC
#define    DISP_PIC_FRAME_TYPE               0x00C0
#define    FREE_LUMA_DPB                     0x00C4
#define    ASPECT_RATIO_INFO                 0x00C8
#define    EXTENDED_PAR                      0x00CC
#define    DBG_HISTORY_INPUT0                0x00D0
#define    DBG_HISTORY_INPUT1                0x00D4
#define    DBG_HISTORY_OUTPUT                0x00D8
#define    HIERARCHICAL_P_QP                 0x00E0







#endif
