/*
 * AMD GCN ISA Assembler
 *
 * GCN ISA instruction structures
 *
 * This software is Copyright 2013, Daniel Bali <balijanosdaniel at gmail.com>,
 * and it is hereby released to the general public under the following terms:
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted.
 */

#include "isa_instr.h"

const isa_instr isa_instr_list[] =
{
	// SOP2 instructions
	{"S_ADD_U32",					0x80000000, SOP2},
	{"S_SUB_U32",					0x80800000, SOP2},
	{"S_ADD_I32",					0x81000000, SOP2},
	{"S_SUB_I32",					0x81800000, SOP2},
	{"S_ADDC_U32",					0x82000000, SOP2},
	{"S_SUBB_U32",					0x82800000, SOP2},
	{"S_MIN_I32",					0x83000000, SOP2},
	{"S_MIN_U32",					0x83800000, SOP2},
	{"S_MAX_I32",					0x84000000, SOP2},
	{"S_MAX_U32",					0x84800000, SOP2},
	{"S_CSELECT_B32",				0x85000000, SOP2},
	{"S_CSELECT_B64",				0x85800000, SOP2},
	{"S_AND_B32",					0x87000000, SOP2},
	{"S_AND_B64",					0x87800000, SOP2},
	{"S_OR_B32",					0x88000000, SOP2},
	{"S_OR_B64",					0x88800000, SOP2},
	{"S_XOR_B32",					0x89000000, SOP2},
	{"S_XOR_B64",					0x89800000, SOP2},
	{"S_ANDN2_B32",					0x8A000000, SOP2},
	{"S_ANDN2_B64",					0x8A800000, SOP2},
	{"S_ORN2_B32",					0x8B000000, SOP2},
	{"S_ORN2_B64",					0x8B800000, SOP2},
	{"S_NAND_B32",					0x8C000000, SOP2},
	{"S_NAND_B64",					0x8C800000, SOP2},
	{"S_NOR_B32",					0x8D000000, SOP2},
	{"S_NOR_B64",					0x8D800000, SOP2},
	{"S_XNOR_B32",					0x8E000000, SOP2},
	{"S_XNOR_B64",					0x8E800000, SOP2},
	{"S_LSHL_B32",					0x8F000000, SOP2},
	{"S_LSHL_B64",					0x8F800000, SOP2},
	{"S_LSHR_B32",					0x90000000, SOP2},
	{"S_LSHR_B64",					0x90800000, SOP2},
	{"S_ASHR_I32",					0x91000000, SOP2},
	{"S_ASHR_I64",					0x91800000, SOP2},
	{"S_BFM_B32",					0x92000000, SOP2},
	{"S_BFM_B64",					0x92800000, SOP2},
	{"S_MUL_I32",					0x93000000, SOP2},
	{"S_BFE_U32",					0x93800000, SOP2},
	{"S_BFE_I32",					0x94000000, SOP2},
	{"S_BFE_U64",					0x94800000, SOP2},
	{"S_BFE_I64",					0x95000000, SOP2},
	{"S_CBRANCH_G_FORK",			0x95800000, SOP2},
	{"S_ABSDIFF_I32",				0x96000000, SOP2},

	// SOPK instructions
	{"S_MOVK_I32",					0xB0000000, SOPK},
	{"S_CMOVK_I32",					0xB1000000, SOPK},
	{"S_CMPK_EQ_I32",				0xB1800000, SOPK},
	{"S_CMPK_LG_I32",				0xB2000000, SOPK},
	{"S_CMPK_GT_I32",				0xB2800000, SOPK},
	{"S_CMPK_GE_I32",				0xB3000000, SOPK},
	{"S_CMPK_LT_I32",				0xB3800000, SOPK},
	{"S_CMPK_LE_I32",				0xB4000000, SOPK},
	{"S_CMPK_EQ_U32",				0xB4800000, SOPK},
	{"S_CMPK_LG_U32",				0xB5000000, SOPK},
	{"S_CMPK_GT_U32",				0xB5800000, SOPK},
	{"S_CMPK_GE_U32",				0xB6000000, SOPK},
	{"S_CMPK_LT_U32",				0xB6800000, SOPK},
	{"S_CMPK_LE_U32",				0xB7000000, SOPK},
	{"S_ADDK_I32",					0xB7800000, SOPK},
	{"S_MULK_I32",					0xB8000000, SOPK},
	{"S_CBRANCH_I_FORK",			0xB8800000, SOPK},
	{"S_GETREG_B32",				0xB9000000, SOPK},
	{"S_SETREG_B32",				0xB9800000, SOPK},
	{"S_SETREG_IMM32_B32",			0xBA800000, SOPK},

	// SOP1 instructions
	{"S_MOV_B32",					0xBE800300,	SOP1},
	{"S_MOV_B64",					0xBE800400,	SOP1},
	{"S_CMOV_B32",					0xBE800500,	SOP1},
	{"S_CMOV_B64",					0xBE800600,	SOP1},
	{"S_NOT_B32",					0xBE800700,	SOP1},
	{"S_NOT_B64",					0xBE800800,	SOP1},
	{"S_WQM_B32",					0xBE800900,	SOP1},
	{"S_WQM_B64	",					0xBE800A00,	SOP1},
	{"S_BREV_B32",					0xBE800B00,	SOP1},
	{"S_BREV_B64",					0xBE800C00,	SOP1},
	{"S_BCNT0_I32_B32",				0xBE800D00,	SOP1},
	{"S_BCNT0_I32_B64",				0xBE800E00,	SOP1},
	{"S_BCNT1_I32_B32",				0xBE800F00,	SOP1},
	{"S_BCNT1_I32_B64",				0xBE801000,	SOP1},
	{"S_FF0_I32_B32",				0xBE801100,	SOP1},
	{"S_FF0_I32_B64",				0xBE801200,	SOP1},
	{"S_FF1_I32_B32",				0xBE801300,	SOP1},
	{"S_FF1_I32_B64",				0xBE801400,	SOP1},
	{"S_FLBIT_I32_B32",				0xBE801500,	SOP1},
	{"S_FLBIT_I32_B64",				0xBE801600,	SOP1},
	{"S_FLBIT_I32",					0xBE801700,	SOP1},
	{"S_FLBIT_I32_I64",				0xBE801800,	SOP1},
	{"S_SEXT_I32_I8",				0xBE801900,	SOP1},
	{"S_SEXT_I32_I16",				0xBE801A00,	SOP1},
	{"S_BITSET0_B32",				0xBE801B00,	SOP1},
	{"S_BITSET0_B64",				0xBE801C00,	SOP1},
	{"S_BITSET1_B32",				0xBE801D00,	SOP1},
	{"S_BITSET1_B64",				0xBE801E00,	SOP1},
	{"S_GETPC_B64",					0xBE801F00,	SOP1},
	{"S_SETPC_B64",					0xBE802000,	SOP1},
	{"S_SWAPPC_B64",				0xBE802100,	SOP1},
	{"S_RFE_B64",					0xBE802200,	SOP1},
	{"S_AND_SAVEEXEC_B64",			0xBE802400,	SOP1},
	{"S_OR_SAVEEXEC_B64",			0xBE802500,	SOP1},
	{"S_XOR_SAVEEXEC_B64",			0xBE802600,	SOP1},
	{"S_ANDN2_SAVEEXEC_B64",		0xBE802700,	SOP1},
	{"S_ORN2_SAVEEXEC_B64",			0xBE802800,	SOP1},
	{"S_NAND_SAVEEXEC_B64",			0xBE802900,	SOP1},
	{"S_NOR_SAVEEXEC_B64",			0xBE802A00,	SOP1},
	{"S_XNOR_SAVEEXEC_B64",			0xBE802B00,	SOP1},
	{"S_QUADMASK_B32",				0xBE802C00,	SOP1},
	{"S_QUADMASK_B64",				0xBE802D00,	SOP1},
	{"S_MOVRELS_B32",				0xBE802E00,	SOP1},
	{"S_MOVRELS_B64",				0xBE802F00,	SOP1},
	{"S_MOVRELD_B32",				0xBE803000,	SOP1},
	{"S_MOVRELD_B64",				0xBE803100,	SOP1},
	{"S_CBRANCH_JOIN",				0xBE803200,	SOP1},
	{"S_ABS_I32",					0xBE803400,	SOP1},
	{"S_MOV_FED_B32",				0xBE803500,	SOP1},

	// SOPC instructions
	{"S_CMP_EQ_I32",				0xBF000000,	SOPC},
	{"S_CMP_LG_I32",				0xBF000000,	SOPC},
	{"S_CMP_GT_I32",				0xBF000000,	SOPC},
	{"S_CMP_GE_I32",				0xBF000000,	SOPC},
	{"S_CMP_LT_I32",				0xBF000000,	SOPC},
	{"S_CMP_LE_I32",				0xBF000000,	SOPC},
	{"S_CMP_EQ_U32",				0xBF000000,	SOPC},
	{"S_CMP_LG_U32",				0xBF000000,	SOPC},
	{"S_CMP_GT_U32",				0xBF000000,	SOPC},
	{"S_CMP_GE_U32",				0xBF000000,	SOPC},
	{"S_CMP_LT_U32",				0xBF000000,	SOPC},
	{"S_CMP_LE_U32",				0xBF000000,	SOPC},
	{"S_BITCMP0_B32",				0xBF000000,	SOPC},
	{"S_BITCMP1_B32",				0xBF000000,	SOPC},
	{"S_BITCMP0_B64",				0xBF000000,	SOPC},
	{"S_BITCMP1_B64",				0xBF000000,	SOPC},
	{"S_SETVSKIP",					0xBF000000,	SOPC},

	// SOPP instructions
	{"S_NOP",						0xBF800000, SOPP},
	{"S_ENDPGM",					0xBF810000, SOPP},
	{"S_BRANCH",					0xBF820000, SOPP},
	{"S_CBRANCH_SCC0",				0xBF840000, SOPP},
	{"S_CBRANCH_SCC1",				0xBF850000, SOPP},
	{"S_CBRANCH_VCCZ",				0xBF860000, SOPP},
	{"S_CBRANCH_VCCNZ",				0xBF870000, SOPP},
	{"S_CBRANCH_EXECZ",				0xBF880000, SOPP},
	{"S_CBRANCH_EXECNZ",			0xBF890000, SOPP},
	{"S_BARRIER",					0xBF8A0000, SOPP},
	{"S_WAITCNT",					0xBF8C0000, SOPP},
	{"S_SETHALT",					0xBF8D0000, SOPP},
	{"S_SLEEP",						0xBF8E0000, SOPP},
	{"S_SETPRIO",					0xBF8F0000, SOPP},
	{"S_SENDMSG",					0xBF900000, SOPP},
	{"S_SENDMSGHALT",				0xBF910000, SOPP},
	{"S_TRAP",						0xBF920000, SOPP},
	{"S_ICACHE_INV",				0xBF930000, SOPP},
	{"S_INCPERFLEVEL",				0xBF940000, SOPP},
	{"S_DECPERFLEVEL",				0xBF950000, SOPP},
	{"S_TTRACEDATA",				0xBF960000, SOPP},

	// SMRD instructions
	{"S_LOAD_DWORD",				0xC0000000, SMRD},
	{"S_LOAD_DWORDX2",				0xC0400000, SMRD},
	{"S_LOAD_DWORDX4",				0xC0800000, SMRD},
	{"S_LOAD_DWORDX8",				0xC0C00000, SMRD},
	{"S_LOAD_DWORDX16",				0xC1000000, SMRD},
	{"S_BUFFER_LOAD_DWORD",			0xC2000000, SMRD},
	{"S_BUFFER_LOAD_DWORDX2",		0xC2400000, SMRD},
	{"S_BUFFER_LOAD_DWORDX4",		0xC2800000, SMRD},
	{"S_BUFFER_LOAD_DWORDX8",		0xC2C00000, SMRD},
	{"S_BUFFER_LOAD_DWORDX16",		0xC3000000, SMRD},
	{"S_MEMTIME",					0xC7800000, SMRD},
	{"S_DCACHE_INV",				0xC7C00000, SMRD},

	// VOP2 instructions
	{"V_CNDMASK_B32",				0x00000000, VOP2},
	{"V_READLANE_B32",				0x02000000, VOP2},
	{"V_WRITELANE_B32",				0x04000000, VOP2},
	{"V_ADD_F32",					0x06000000, VOP2},
	{"V_SUB_F32",					0x08000000, VOP2},
	{"V_SUBREV_F32",				0x0A000000, VOP2},
	{"V_MAC_LEGACY_F32",			0x0C000000, VOP2},
	{"V_MUL_LEGACY_F32",			0x0E000000, VOP2},
	{"V_MUL_F32",					0x10000000, VOP2},
	{"V_MUL_I32_I24",				0x12000000, VOP2},
	{"V_MUL_HI_I32_I24",			0x14000000, VOP2},
	{"V_MUL_U32_U24",				0x16000000, VOP2},
	{"V_MUL_HI_U32_U24",			0x18000000, VOP2},
	{"V_MIN_LEGACY_F32",			0x1A000000, VOP2},
	{"V_MAX_LEGACY_F32",			0x1C000000, VOP2},
	{"V_MIN_F32",					0x1E000000, VOP2},
	{"V_MAX_F32",					0x20000000, VOP2},
	{"V_MIN_I32",					0x22000000, VOP2},
	{"V_MAX_I32",					0x24000000, VOP2},
	{"V_MIN_U32",					0x26000000, VOP2},
	{"V_MAX_U32",					0x28000000, VOP2},
	{"V_LSHR_B32",					0x2A000000, VOP2},
	{"V_LSHRREV_B32",				0x2C000000, VOP2},
	{"V_ASHR_I32",					0x2E000000, VOP2},
	{"V_ASHRREV_I32",				0x30000000, VOP2},
	{"V_LSHL_B32",					0x32000000, VOP2},
	{"V_LSHLREV_B32",				0x34000000, VOP2},
	{"V_AND_B32",					0x36000000, VOP2},
	{"V_OR_B32",					0x38000000, VOP2},
	{"V_XOR_B32",					0x3A000000, VOP2},
	{"V_BFM_B32",					0x3C000000, VOP2},
	{"V_MAC_F32",					0x3E000000, VOP2},
	{"V_MADMK_F32",					0x40000000, VOP2},
	{"V_MADAK_F32",					0x42000000, VOP2},
	{"V_BCNT_U32_B32",				0x44000000, VOP2},
	{"V_MBCNT_LO_U32_B32",			0x46000000, VOP2},
	{"V_MBCNT_HI_U32_B32",			0x48000000, VOP2},
	{"V_ADD_I32",					0x4A000000, VOP2},
	{"V_SUB_I32",					0x4C000000, VOP2},
	{"V_SUBREV_I32",				0x4E000000, VOP2},
	{"V_ADDC_U32",					0x50000000, VOP2},
	{"V_SUBB_U32",					0x52000000, VOP2},
	{"V_SUBBREV_U32",				0x54000000, VOP2},
	{"V_LDEXP_F32",					0x56000000, VOP2},
	{"V_CVT_PKACCUM_U8_F32",		0x58000000, VOP2},
	{"V_CVT_PKNORM_I16_F32",		0x5A000000, VOP2},
	{"V_CVT_PKNORM_U16_F32",		0x5C000000, VOP2},
	{"V_CVT_PKRTZ_F16_F32",			0x5E000000, VOP2},
	{"V_CVT_PK_U16_U32",			0x60000000, VOP2},
	{"V_CVT_PK_I16_I32",			0x62000000, VOP2},

	// VOP1 instructions
	{"V_NOP",						0x7E000000,	VOP1},
	{"V_MOV_B32",					0x7E000200,	VOP1},
	{"V_READFIRSTLANE_B32",			0x7E000400,	VOP1},
	{"V_CVT_I32_F64",				0x7E000600,	VOP1},
	{"V_CVT_F64_I32",				0x7E000800,	VOP1},
	{"V_CVT_F32_I32",				0x7E000A00,	VOP1},
	{"V_CVT_F32_U32",				0x7E000C00,	VOP1},
	{"V_CVT_U32_F32",				0x7E000E00,	VOP1},
	{"V_CVT_I32_F32",				0x7E001000,	VOP1},
	{"V_MOV_FED_B32",				0x7E001200,	VOP1},
	{"V_CVT_F16_F32",				0x7E001400,	VOP1},
	{"V_CVT_F32_F16",				0x7E001600,	VOP1},
	{"V_CVT_RPI_I32_F32",			0x7E001800,	VOP1},
	{"V_CVT_FLR_I32_F32",			0x7E001A00,	VOP1},
	{"V_CVT_OFF_F32_I4",			0x7E001C00,	VOP1},
	{"V_CVT_F32_F64",				0x7E001E00,	VOP1},
	{"V_CVT_F64_F32",				0x7E002000,	VOP1},
	{"V_CVT_F32_UBYTE0",			0x7E002200,	VOP1},
	{"V_CVT_F32_UBYTE1",			0x7E002400,	VOP1},
	{"V_CVT_F32_UBYTE2",			0x7E002600,	VOP1},
	{"V_CVT_F32_UBYTE3",			0x7E002800,	VOP1},
	{"V_CVT_U32_F64",				0x7E002A00,	VOP1},
	{"V_CVT_F64_U32",				0x7E002C00,	VOP1},
	{"V_FRACT_F32",					0x7E004000,	VOP1},
	{"V_TRUNC_F32",					0x7E004200,	VOP1},
	{"V_CEIL_F32",					0x7E004400,	VOP1},
	{"V_RNDNE_F32",					0x7E004600,	VOP1},
	{"V_FLOOR_F32",					0x7E004800,	VOP1},
	{"V_EXP_F32",					0x7E004A00,	VOP1},
	{"V_LOG_CLAMP_F32",				0x7E004C00,	VOP1},
	{"V_LOG_F32",					0x7E004E00,	VOP1},
	{"V_RCP_CLAMP_F32",				0x7E005000,	VOP1},
	{"V_RCP_LEGACY_F32",			0x7E005200,	VOP1},
	{"V_RCP_F32",					0x7E005400,	VOP1},
	{"V_RCP_IFLAG_F32",				0x7E005600,	VOP1},
	{"V_RSQ_CLAMP_F32",				0x7E005800,	VOP1},
	{"V_RSQ_LEGACY_F32",			0x7E005A00,	VOP1},
	{"V_RSQ_F32",					0x7E005C00,	VOP1},
	{"V_RCP_F64",					0x7E005E00,	VOP1},
	{"V_RCP_CLAMP_F64",				0x7E006000,	VOP1},
	{"V_RSQ_F64",					0x7E006200,	VOP1},
	{"V_RSQ_CLAMP_F64",				0x7E006400,	VOP1},
	{"V_SQRT_F32",					0x7E006600,	VOP1},
	{"V_SQRT_F64",					0x7E006800,	VOP1},
	{"V_SIN_F32",					0x7E006A00,	VOP1},
	{"V_COS_F32",					0x7E006C00,	VOP1},
	{"V_NOT_B32",					0x7E006E00,	VOP1},
	{"V_BFREV_B32",					0x7E007000,	VOP1},
	{"V_FFBH_U32",					0x7E007200,	VOP1},
	{"V_FFBL_B32",					0x7E007400,	VOP1},
	{"V_FFBH_I32",					0x7E007600,	VOP1},
	{"V_FREXP_EXP_I32_F64",			0x7E007800,	VOP1},
	{"V_FREXP_MANT_F64",			0x7E007A00,	VOP1},
	{"V_FRACT_F64",					0x7E007C00,	VOP1},
	{"V_FREXP_EXP_I32_F32",			0x7E007E00,	VOP1},
	{"V_FREXP_MANT_F32",			0x7E008000,	VOP1},
	{"V_CLREXCP",					0x7E008200,	VOP1},
	{"V_MOVRELD_B32",				0x7E008400,	VOP1},
	{"V_MOVRELS_B32",				0x7E008600,	VOP1},
	{"V_MOVRELSD_B32",				0x7E008800,	VOP1},

	// VOPC instructions
	{"V_CMP_F_F32",					0x7c000000, VOPC},
	{"V_CMP_LT_F32",				0x7c020000, VOPC},
	{"V_CMP_EQ_F32",				0x7c040000, VOPC},
	{"V_CMP_LE_F32",				0x7c060000, VOPC},
	{"V_CMP_GT_F32",				0x7c080000, VOPC},
	{"V_CMP_LG_F32",				0x7c0a0000, VOPC},
	{"V_CMP_GE_F32",				0x7c0c0000, VOPC},
	{"V_CMP_O_F32",					0x7c0e0000, VOPC},
	{"V_CMP_U_F32",					0x7c100000, VOPC},
	{"V_CMP_NGE_F32",				0x7c120000, VOPC},
	{"V_CMP_NLG_F32",				0x7c140000, VOPC},
	{"V_CMP_NGT_F32",				0x7c160000, VOPC},
	{"V_CMP_NLE_F32",				0x7c180000, VOPC},
	{"V_CMP_NEQ_F32",				0x7c1a0000, VOPC},
	{"V_CMP_NLT_F32",				0x7c1c0000, VOPC},
	{"V_CMP_TRU_F32",				0x7c1e0000, VOPC},
	{"V_CMPX_F_F32",				0x7c200000, VOPC},
	{"V_CMPX_LT_F32",				0x7c220000, VOPC},
	{"V_CMPX_EQ_F32",				0x7c240000, VOPC},
	{"V_CMPX_LE_F32",				0x7c260000, VOPC},
	{"V_CMPX_GT_F32",				0x7c280000, VOPC},
	{"V_CMPX_LG_F32",				0x7c2a0000, VOPC},
	{"V_CMPX_GE_F32",				0x7c2c0000, VOPC},
	{"V_CMPX_O_F32",				0x7c2e0000, VOPC},
	{"V_CMPX_U_F32",				0x7c300000, VOPC},
	{"V_CMPX_NGE_F32",				0x7c320000, VOPC},
	{"V_CMPX_NLG_F32",				0x7c340000, VOPC},
	{"V_CMPX_NGT_F32",				0x7c360000, VOPC},
	{"V_CMPX_NLE_F32",				0x7c380000, VOPC},
	{"V_CMPX_NEQ_F32",				0x7c3a0000, VOPC},
	{"V_CMPX_NLT_F32",				0x7c3c0000, VOPC},
	{"V_CMPX_TRU_F32",				0x7c3e0000, VOPC},
	{"V_CMP_F_F64",					0x7c400000, VOPC},
	{"V_CMP_LT_F64",				0x7c420000, VOPC},
	{"V_CMP_EQ_F64",				0x7c440000, VOPC},
	{"V_CMP_LE_F64",				0x7c460000, VOPC},
	{"V_CMP_GT_F64",				0x7c480000, VOPC},
	{"V_CMP_LG_F64",				0x7c4a0000, VOPC},
	{"V_CMP_GE_F64",				0x7c4c0000, VOPC},
	{"V_CMP_O_F64",					0x7c4e0000, VOPC},
	{"V_CMP_U_F64",					0x7c500000, VOPC},
	{"V_CMP_NGE_F64",				0x7c520000, VOPC},
	{"V_CMP_NLG_F64",				0x7c540000, VOPC},
	{"V_CMP_NGT_F64",				0x7c560000, VOPC},
	{"V_CMP_NLE_F64",				0x7c580000, VOPC},
	{"V_CMP_NEQ_F64",				0x7c5a0000, VOPC},
	{"V_CMP_NLT_F64",				0x7c5c0000, VOPC},
	{"V_CMP_TRU_F64",				0x7c5e0000, VOPC},
	{"V_CMPX_F_F64",				0x7c600000, VOPC},
	{"V_CMPX_LT_F64",				0x7c620000, VOPC},
	{"V_CMPX_EQ_F64",				0x7c640000, VOPC},
	{"V_CMPX_LE_F64",				0x7c660000, VOPC},
	{"V_CMPX_GT_F64",				0x7c680000, VOPC},
	{"V_CMPX_LG_F64",				0x7c6a0000, VOPC},
	{"V_CMPX_GE_F64",				0x7c6c0000, VOPC},
	{"V_CMPX_O_F64",				0x7c6e0000, VOPC},
	{"V_CMPX_U_F64",				0x7c700000, VOPC},
	{"V_CMPX_NGE_F64",				0x7c720000, VOPC},
	{"V_CMPX_NLG_F64",				0x7c740000, VOPC},
	{"V_CMPX_NGT_F64",				0x7c760000, VOPC},
	{"V_CMPX_NLE_F64",				0x7c780000, VOPC},
	{"V_CMPX_NEQ_F64",				0x7c7a0000, VOPC},
	{"V_CMPX_NLT_F64",				0x7c7c0000, VOPC},
	{"V_CMPX_TRU_F64",				0x7c7e0000, VOPC},
	{"V_CMPS_F_F32",				0x7c800000, VOPC},
	{"V_CMPS_LT_F32",				0x7c820000, VOPC},
	{"V_CMPS_EQ_F32",				0x7c840000, VOPC},
	{"V_CMPS_LE_F32",				0x7c860000, VOPC},
	{"V_CMPS_GT_F32",				0x7c880000, VOPC},
	{"V_CMPS_LG_F32",				0x7c8a0000, VOPC},
	{"V_CMPS_GE_F32",				0x7c8c0000, VOPC},
	{"V_CMPS_O_F32",				0x7c8e0000, VOPC},
	{"V_CMPS_U_F32",				0x7c900000, VOPC},
	{"V_CMPS_NGE_F32",				0x7c920000, VOPC},
	{"V_CMPS_NLG_F32",				0x7c940000, VOPC},
	{"V_CMPS_NGT_F32",				0x7c960000, VOPC},
	{"V_CMPS_NLE_F32",				0x7c980000, VOPC},
	{"V_CMPS_NEQ_F32",				0x7c9a0000, VOPC},
	{"V_CMPS_NLT_F32",				0x7c9c0000, VOPC},
	{"V_CMPS_TRU_F32",				0x7c9e0000, VOPC},
	{"V_CMPSX_F_F32",				0x7ca00000, VOPC},
	{"V_CMPSX_LT_F32",				0x7ca20000, VOPC},
	{"V_CMPSX_EQ_F32",				0x7ca40000, VOPC},
	{"V_CMPSX_LE_F32",				0x7ca60000, VOPC},
	{"V_CMPSX_GT_F32",				0x7ca80000, VOPC},
	{"V_CMPSX_LG_F32",				0x7caa0000, VOPC},
	{"V_CMPSX_GE_F32",				0x7cac0000, VOPC},
	{"V_CMPSX_O_F32",				0x7cae0000, VOPC},
	{"V_CMPSX_U_F32",				0x7cb00000, VOPC},
	{"V_CMPSX_NGE_F32",				0x7cb20000, VOPC},
	{"V_CMPSX_NLG_F32",				0x7cb40000, VOPC},
	{"V_CMPSX_NGT_F32",				0x7cb60000, VOPC},
	{"V_CMPSX_NLE_F32",				0x7cb80000, VOPC},
	{"V_CMPSX_NEQ_F32",				0x7cba0000, VOPC},
	{"V_CMPSX_NLT_F32",				0x7cbc0000, VOPC},
	{"V_CMPSX_TRU_F32",				0x7cbe0000, VOPC},
	{"V_CMPS_F_F64",				0x7cc00000, VOPC},
	{"V_CMPS_LT_F64",				0x7cc20000, VOPC},
	{"V_CMPS_EQ_F64",				0x7cc40000, VOPC},
	{"V_CMPS_LE_F64",				0x7cc60000, VOPC},
	{"V_CMPS_GT_F64",				0x7cc80000, VOPC},
	{"V_CMPS_LG_F64",				0x7cca0000, VOPC},
	{"V_CMPS_GE_F64",				0x7ccc0000, VOPC},
	{"V_CMPS_O_F64",				0x7cce0000, VOPC},
	{"V_CMPS_U_F64",				0x7cd00000, VOPC},
	{"V_CMPS_NGE_F64",				0x7cd20000, VOPC},
	{"V_CMPS_NLG_F64",				0x7cd40000, VOPC},
	{"V_CMPS_NGT_F64",				0x7cd60000, VOPC},
	{"V_CMPS_NLE_F64",				0x7cd80000, VOPC},
	{"V_CMPS_NEQ_F64",				0x7cda0000, VOPC},
	{"V_CMPS_NLT_F64",				0x7cdc0000, VOPC},
	{"V_CMPS_TRU_F64",				0x7cde0000, VOPC},
	{"V_CMPSX_F_F64",				0x7ce00000, VOPC},
	{"V_CMPSX_LT_F64",				0x7ce20000, VOPC},
	{"V_CMPSX_EQ_F64",				0x7ce40000, VOPC},
	{"V_CMPSX_LE_F64",				0x7ce60000, VOPC},
	{"V_CMPSX_GT_F64",				0x7ce80000, VOPC},
	{"V_CMPSX_LG_F64",				0x7cea0000, VOPC},
	{"V_CMPSX_GE_F64",				0x7cec0000, VOPC},
	{"V_CMPSX_O_F64",				0x7cee0000, VOPC},
	{"V_CMPSX_U_F64",				0x7cf00000, VOPC},
	{"V_CMPSX_NGE_F64",				0x7cf20000, VOPC},
	{"V_CMPSX_NLG_F64",				0x7cf40000, VOPC},
	{"V_CMPSX_NGT_F64",				0x7cf60000, VOPC},
	{"V_CMPSX_NLE_F64",				0x7cf80000, VOPC},
	{"V_CMPSX_NEQ_F64",				0x7cfa0000, VOPC},
	{"V_CMPSX_NLT_F64",				0x7cfc0000, VOPC},
	{"V_CMPSX_TRU_F64",				0x7cfe0000, VOPC},
	{"V_CMP_F_I32",					0x7d000000, VOPC},
	{"V_CMP_LT_I32",				0x7d020000, VOPC},
	{"V_CMP_EQ_I32",				0x7d040000, VOPC},
	{"V_CMP_LE_I32",				0x7d060000, VOPC},
	{"V_CMP_GT_I32",				0x7d080000, VOPC},
	{"V_CMP_LG_I32",				0x7d0a0000, VOPC},
	{"V_CMP_GE_I32",				0x7d0c0000, VOPC},
	{"V_CMP_TRU_I32",				0x7d0e0000, VOPC},
	{"V_CMPX_F_I32",				0x7d200000, VOPC},
	{"V_CMPX_LT_I32",				0x7d220000, VOPC},
	{"V_CMPX_EQ_I32",				0x7d240000, VOPC},
	{"V_CMPX_LE_I32",				0x7d260000, VOPC},
	{"V_CMPX_GT_I32",				0x7d280000, VOPC},
	{"V_CMPX_LG_I32",				0x7d2a0000, VOPC},
	{"V_CMPX_GE_I32",				0x7d2c0000, VOPC},
	{"V_CMPX_TRU_I32",				0x7d2e0000, VOPC},
	{"V_CMP_F_I64",					0x7d400000, VOPC},
	{"V_CMP_LT_I64",				0x7d420000, VOPC},
	{"V_CMP_EQ_I64",				0x7d440000, VOPC},
	{"V_CMP_LE_I64",				0x7d460000, VOPC},
	{"V_CMP_GT_I64",				0x7d480000, VOPC},
	{"V_CMP_LG_I64",				0x7d4a0000, VOPC},
	{"V_CMP_GE_I64",				0x7d4c0000, VOPC},
	{"V_CMP_TRU_I64",				0x7d4e0000, VOPC},
	{"V_CMPX_F_I64",				0x7d600000, VOPC},
	{"V_CMPX_LT_I64",				0x7d620000, VOPC},
	{"V_CMPX_EQ_I64",				0x7d640000, VOPC},
	{"V_CMPX_LE_I64",				0x7d660000, VOPC},
	{"V_CMPX_GT_I64",				0x7d680000, VOPC},
	{"V_CMPX_LG_I64",				0x7d6a0000, VOPC},
	{"V_CMPX_GE_I64",				0x7d6c0000, VOPC},
	{"V_CMPX_TRU_I64",				0x7d6e0000, VOPC},
	{"V_CMP_F_U32",					0x7d800000, VOPC},
	{"V_CMP_LT_U32",				0x7d820000, VOPC},
	{"V_CMP_EQ_U32",				0x7d840000, VOPC},
	{"V_CMP_LE_U32",				0x7d860000, VOPC},
	{"V_CMP_GT_U32",				0x7d880000, VOPC},
	{"V_CMP_LG_U32",				0x7d8a0000, VOPC},
	{"V_CMP_GE_U32",				0x7d8c0000, VOPC},
	{"V_CMP_TRU_U32",				0x7d8e0000, VOPC},
	{"V_CMPX_F_U32",				0x7da00000, VOPC},
	{"V_CMPX_LT_U32",				0x7da20000, VOPC},
	{"V_CMPX_EQ_U32",				0x7da40000, VOPC},
	{"V_CMPX_LE_U32",				0x7da60000, VOPC},
	{"V_CMPX_GT_U32",				0x7da80000, VOPC},
	{"V_CMPX_LG_U32",				0x7daa0000, VOPC},
	{"V_CMPX_GE_U32",				0x7dac0000, VOPC},
	{"V_CMPX_TRU_U32",				0x7dae0000, VOPC},
	{"V_CMP_F_U64",					0x7dc00000, VOPC},
	{"V_CMP_LT_U64",				0x7dc20000, VOPC},
	{"V_CMP_EQ_U64",				0x7dc40000, VOPC},
	{"V_CMP_LE_U64",				0x7dc60000, VOPC},
	{"V_CMP_GT_U64",				0x7dc80000, VOPC},
	{"V_CMP_LG_U64",				0x7dca0000, VOPC},
	{"V_CMP_GE_U64",				0x7dcc0000, VOPC},
	{"V_CMP_TRU_U64",				0x7dce0000, VOPC},
	{"V_CMPX_F_U64",				0x7de00000, VOPC},
	{"V_CMPX_LT_U64",				0x7de20000, VOPC},
	{"V_CMPX_EQ_U64",				0x7de40000, VOPC},
	{"V_CMPX_LE_U64",				0x7de60000, VOPC},
	{"V_CMPX_GT_U64",				0x7de80000, VOPC},
	{"V_CMPX_LG_U64",				0x7dea0000, VOPC},
	{"V_CMPX_GE_U64",				0x7dec0000, VOPC},
	{"V_CMPX_TRU_U64",				0x7dee0000, VOPC},
	{"V_CMP_CLASS_F32",				0x7d100000, VOPC},
	{"V_CMPX_CLASS_F32",			0x7d300000, VOPC},
	{"V_CMP_CLASS_F64",				0x7d500000, VOPC},
	{"V_CMPX_CLASS_F64",			0x7d700000, VOPC},

	/*
	// VOP3a instructions
	{"V_MAD_LEGACY_F32",			0xD2800000, VOP3a}, 
	{"V_MAD_F32",					0xD2820000, VOP3a}, 
	{"V_MAD_I32_I24",				0xD2840000, VOP3a}, 
	{"V_MAD_U32_U24",				0xD2860000, VOP3a}, 
	{"V_CUBEID_F32",				0xD2880000, VOP3a}, 
	{"V_CUBESC_F32",				0xD28A0000, VOP3a}, 
	{"V_CUBETC_F32",				0xD28C0000, VOP3a}, 
	{"V_CUBEMA_F32",				0xD28E0000, VOP3a}, 
	{"V_BFE_U32",					0xD2900000, VOP3a}, 
	{"V_BFE_I32",					0xD2920000, VOP3a}, 
	{"V_BFI_B32",					0xD2940000, VOP3a}, 
	{"V_FMA_F32",					0xD2960000, VOP3a}, 
	{"V_FMA_F64",					0xD2980000, VOP3a}, 
	{"V_LERP_U8",					0xD29A0000, VOP3a}, 
	{"V_ALIGNBIT_B32",				0xD29C0000, VOP3a}, 
	{"V_ALIGNBYTE_B32",				0xD29E0000, VOP3a}, 
	{"V_MULLIT_F32",				0xD2A00000, VOP3a}, 
	{"V_MIN3_F32",					0xD2A20000, VOP3a}, 
	{"V_MIN3_I32",					0xD2A40000, VOP3a}, 
	{"V_MIN3_U32",					0xD2A60000, VOP3a}, 
	{"V_MAX3_F32",					0xD2A80000, VOP3a}, 
	{"V_MAX3_I32",					0xD2AA0000, VOP3a}, 
	{"V_MAX3_U32",					0xD2AC0000, VOP3a}, 
	{"V_MED3_F32",					0xD2AE0000, VOP3a}, 
	{"V_MED3_I32",					0xD2B00000, VOP3a}, 
	{"V_MED3_U32",					0xD2B20000, VOP3a}, 
	{"V_SAD_U8",					0xD2B40000, VOP3a}, 
	{"V_SAD_HI_U8",					0xD2B60000, VOP3a}, 
	{"V_SAD_U16",					0xD2B80000, VOP3a}, 
	{"V_SAD_U32",					0xD2BA0000, VOP3a}, 
	{"V_CVT_PK_U8_F32",				0xD2BC0000, VOP3a}, 
	{"V_DIV_FIXUP_F32",				0xD2BE0000, VOP3a}, 
	{"V_DIV_FIXUP_F64",				0xD2C00000, VOP3a}, 
	{"V_LSHL_B64",					0xD2C20000, VOP3a}, 
	{"V_LSHR_B64",					0xD2C40000, VOP3a}, 
	{"V_ASHR_I64",					0xD2C60000, VOP3a}, 
	{"V_ADD_F64",					0xD2C80000, VOP3a}, 
	{"V_MUL_F64",					0xD2CA0000, VOP3a}, 
	{"V_MIN_F64",					0xD2CC0000, VOP3a}, 
	{"V_MAX_F64",					0xD2CE0000, VOP3a}, 
	{"V_LDEXP_F64",					0xD2D00000, VOP3a}, 
	{"V_MUL_LO_U32",				0xD2D20000, VOP3a}, 
	{"V_MUL_HI_U32",				0xD2D40000, VOP3a}, 
	{"V_MUL_LO_I32",				0xD2D60000, VOP3a}, 
	{"V_MUL_HI_I32",				0xD2D80000, VOP3a}, 
	{"V_DIV_FMAS_F32",				0xD2DE0000, VOP3a}, 
	{"V_DIV_FMAS_F64",				0xD2E00000, VOP3a}, 
	{"V_MSAD_U8",					0xD2E20000, VOP3a}, 
	{"V_QSAD_U8",					0xD2E40000, VOP3a}, 
	{"V_MQSAD_U8",					0xD2E60000, VOP3a}, 
	{"V_TRIG_PREOP_F64",			0xD2E80000, VOP3a}
	*/

	// MUBUF instructions
	{"BUFFER_LOAD_FORMAT_X",		0xE0000000, MUBUF}, 
	{"BUFFER_LOAD_FORMAT_XY",		0xE0040000, MUBUF}, 
	{"BUFFER_LOAD_FORMAT_XYZ",		0xE0080000, MUBUF}, 
	{"BUFFER_LOAD_FORMAT_XYZW",		0xE00C0000, MUBUF}, 
	{"BUFFER_STORE_FORMAT_X",		0xE0100000, MUBUF}, 
	{"BUFFER_STORE_FORMAT_XY",		0xE0140000, MUBUF}, 
	{"BUFFER_STORE_FORMAT_XYZ",		0xE0180000, MUBUF}, 
	{"BUFFER_STORE_FORMAT_XYZW",	0xE01C0000, MUBUF}, 
	{"BUFFER_LOAD_UBYTE",			0xE0200000, MUBUF}, 
	{"BUFFER_LOAD_SBYTE",			0xE0240000, MUBUF}, 
	{"BUFFER_LOAD_USHORT",			0xE0280000, MUBUF}, 
	{"BUFFER_LOAD_SSHORT",			0xE02C0000, MUBUF}, 
	{"BUFFER_LOAD_DWORD",			0xE0300000, MUBUF}, 
	{"BUFFER_LOAD_DWORDX2",			0xE0340000, MUBUF}, 
	{"BUFFER_LOAD_DWORDX4",			0xE0380000, MUBUF}, 
	{"BUFFER_STORE_BYTE",			0xE0600000, MUBUF}, 
	{"BUFFER_STORE_SHORT",			0xE0680000, MUBUF}, 
	{"BUFFER_STORE_DWORD",			0xE0700000, MUBUF}, 
	{"BUFFER_STORE_DWORDX2",		0xE0740000, MUBUF}, 
	{"BUFFER_STORE_DWORDX4",		0xE0780000, MUBUF}, 
	{"BUFFER_ATOMIC_SWAP",			0xE0C00000, MUBUF}, 
	{"BUFFER_ATOMIC_CMPSWAP",		0xE0C40000, MUBUF}, 
	{"BUFFER_ATOMIC_ADD",			0xE0C80000, MUBUF}, 
	{"BUFFER_ATOMIC_SUB",			0xE0CC0000, MUBUF}, 
	{"BUFFER_ATOMIC_RSUB",			0xE0D00000, MUBUF}, 
	{"BUFFER_ATOMIC_SMIN",			0xE0D40000, MUBUF}, 
	{"BUFFER_ATOMIC_UMIN",			0xE0D80000, MUBUF}, 
	{"BUFFER_ATOMIC_SMAX",			0xE0DC0000, MUBUF}, 
	{"BUFFER_ATOMIC_UMAX",			0xE0E00000, MUBUF}, 
	{"BUFFER_ATOMIC_AND",			0xE0E40000, MUBUF}, 
	{"BUFFER_ATOMIC_OR",			0xE0E80000, MUBUF}, 
	{"BUFFER_ATOMIC_XOR",			0xE0EC0000, MUBUF}, 
	{"BUFFER_ATOMIC_INC",			0xE0F00000, MUBUF}, 
	{"BUFFER_ATOMIC_DEC",			0xE0F40000, MUBUF}, 
	{"BUFFER_ATOMIC_FCMPSWAP",		0xE0F80000, MUBUF}, 
	{"BUFFER_ATOMIC_FMIN",			0xE0FC0000, MUBUF}, 
	{"BUFFER_ATOMIC_FMAX",			0xE1000000, MUBUF}, 
	{"BUFFER_ATOMIC_SWAP_X2",		0xE1400000, MUBUF}, 
	{"BUFFER_ATOMIC_CMPSWAP_X2",	0xE1440000, MUBUF}, 
	{"BUFFER_ATOMIC_ADD_X2",		0xE1480000, MUBUF}, 
	{"BUFFER_ATOMIC_SUB_X2",		0xE14C0000, MUBUF}, 
	{"BUFFER_ATOMIC_RSUB_X2",		0xE1500000, MUBUF}, 
	{"BUFFER_ATOMIC_SMIN_X2",		0xE1540000, MUBUF}, 
	{"BUFFER_ATOMIC_UMIN_X2",		0xE1580000, MUBUF}, 
	{"BUFFER_ATOMIC_SMAX_X2",		0xE15C0000, MUBUF}, 
	{"BUFFER_ATOMIC_UMAX_X2",		0xE1600000, MUBUF}, 
	{"BUFFER_ATOMIC_AND_X2",		0xE1640000, MUBUF}, 
	{"BUFFER_ATOMIC_OR_X2",			0xE1680000, MUBUF}, 
	{"BUFFER_ATOMIC_XOR_X2",		0xE16C0000, MUBUF}, 
	{"BUFFER_ATOMIC_INC_X2",		0xE1700000, MUBUF}, 
	{"BUFFER_ATOMIC_DEC_X2",		0xE1740000, MUBUF}, 
	{"BUFFER_ATOMIC_FCMPSWAP_X2",	0xE1780000, MUBUF}, 
	{"BUFFER_ATOMIC_FMIN_X2",		0xE17C0000, MUBUF}, 
	{"BUFFER_ATOMIC_FMAX_X2",		0xE1800000, MUBUF}, 
	{"BUFFER_WBINVL1_SC",			0xE1C00000, MUBUF}, 
	{"BUFFER_WBINVL1",				0xE1C40000, MUBUF},

	// MTBUF instructions
	{"TBUFFER_LOAD_FORMAT_X",		0xE8000000, MTBUF}, 
	{"TBUFFER_LOAD_FORMAT_XY",		0xE8010000, MTBUF}, 
	{"TBUFFER_LOAD_FORMAT_XYZ",		0xE8020000, MTBUF}, 
	{"TBUFFER_LOAD_FORMAT_XYZW",	0xE8030000, MTBUF}, 
	{"TBUFFER_STORE_FORMAT_X",		0xE8040000, MTBUF}, 
	{"TBUFFER_STORE_FORMAT_XY",		0xE8050000, MTBUF}, 
	{"TBUFFER_STORE_FORMAT_XYZ",	0xE8060000, MTBUF}, 
	{"TBUFFER_STORE_FORMAT_XYZW",	0xE8070000, MTBUF},

	// MIMG instructions
	{"IMAGE_LOAD",					0xF0000000, MIMG}, 
	{"IMAGE_LOAD_MIP",				0xF0040000, MIMG}, 
	{"IMAGE_LOAD_PCK",				0xF0080000, MIMG}, 
	{"IMAGE_LOAD_PCK_SGN",			0xF00C0000, MIMG}, 
	{"IMAGE_LOAD_MIP_PCK",			0xF0100000, MIMG}, 
	{"IMAGE_LOAD_MIP_PCK_SGN",		0xF0140000, MIMG}, 
	{"IMAGE_STORE",					0xF0200000, MIMG}, 
	{"IMAGE_STORE_MIP",				0xF0240000, MIMG}, 
	{"IMAGE_STORE_PCK",				0xF0280000, MIMG}, 
	{"IMAGE_STORE_MIP_PCK",			0xF02C0000, MIMG}, 
	{"IMAGE_GET_RESINFO",			0xF0380000, MIMG}, 
	{"IMAGE_ATOMIC_SWAP",			0xF03C0000, MIMG}, 
	{"IMAGE_ATOMIC_CMPSWAP",		0xF0400000, MIMG}, 
	{"IMAGE_ATOMIC_ADD",			0xF0440000, MIMG}, 
	{"IMAGE_ATOMIC_SUB",			0xF0480000, MIMG}, 
	{"IMAGE_ATOMIC_RSUB",			0xF04C0000, MIMG}, 
	{"IMAGE_ATOMIC_SMIN",			0xF0500000, MIMG}, 
	{"IMAGE_ATOMIC_UMIN",			0xF0540000, MIMG}, 
	{"IMAGE_ATOMIC_SMAX",			0xF0580000, MIMG}, 
	{"IMAGE_ATOMIC_UMAX",			0xF05C0000, MIMG}, 
	{"IMAGE_ATOMIC_AND",			0xF0600000, MIMG}, 
	{"IMAGE_ATOMIC_OR",				0xF0640000, MIMG}, 
	{"IMAGE_ATOMIC_XOR",			0xF0680000, MIMG}, 
	{"IMAGE_ATOMIC_INC",			0xF06C0000, MIMG}, 
	{"IMAGE_ATOMIC_DEC",			0xF0700000, MIMG}, 
	{"IMAGE_ATOMIC_FCMPSWAP",		0xF0740000, MIMG}, 
	{"IMAGE_ATOMIC_FMIN",			0xF0780000, MIMG}, 
	{"IMAGE_ATOMIC_FMAX",			0xF07C0000, MIMG}, 
	{"IMAGE_SAMPLE",				0xF0800000, MIMG}, 
	{"IMAGE_SAMPLE_CL",				0xF0840000, MIMG}, 
	{"IMAGE_SAMPLE_D",				0xF0880000, MIMG}, 
	{"IMAGE_SAMPLE_D_CL",			0xF08C0000, MIMG}, 
	{"IMAGE_SAMPLE_L",				0xF0900000, MIMG}, 
	{"IMAGE_SAMPLE_B",				0xF0940000, MIMG}, 
	{"IMAGE_SAMPLE_B_CL",			0xF0980000, MIMG}, 
	{"IMAGE_SAMPLE_LZ",				0xF09C0000, MIMG}, 
	{"IMAGE_SAMPLE_C",				0xF0A00000, MIMG}, 
	{"IMAGE_SAMPLE_C_CL",			0xF0A40000, MIMG}, 
	{"IMAGE_SAMPLE_C_D",			0xF0A80000, MIMG}, 
	{"IMAGE_SAMPLE_C_D_CL",			0xF0AC0000, MIMG}, 
	{"IMAGE_SAMPLE_C_L",			0xF0B00000, MIMG}, 
	{"IMAGE_SAMPLE_C_B",			0xF0B40000, MIMG}, 
	{"IMAGE_SAMPLE_C_B_CL",			0xF0B80000, MIMG}, 
	{"IMAGE_SAMPLE_C_LZ",			0xF0BC0000, MIMG}, 
	{"IMAGE_SAMPLE_O",				0xF0C00000, MIMG}, 
	{"IMAGE_SAMPLE_CL_O",			0xF0C40000, MIMG}, 
	{"IMAGE_SAMPLE_D_O",			0xF0C80000, MIMG}, 
	{"IMAGE_SAMPLE_D_CL_O",			0xF0CC0000, MIMG}, 
	{"IMAGE_SAMPLE_L_O",			0xF0D00000, MIMG}, 
	{"IMAGE_SAMPLE_B_O",			0xF0D40000, MIMG}, 
	{"IMAGE_SAMPLE_B_CL_O",			0xF0D80000, MIMG}, 
	{"IMAGE_SAMPLE_LZ_O",			0xF0DC0000, MIMG}, 
	{"IMAGE_SAMPLE_C_O",			0xF0E00000, MIMG}, 
	{"IMAGE_SAMPLE_C_CL_O",			0xF0E40000, MIMG}, 
	{"IMAGE_SAMPLE_C_D_O",			0xF0E80000, MIMG}, 
	{"IMAGE_SAMPLE_C_D_CL_O",		0xF0EC0000, MIMG}, 
	{"IMAGE_SAMPLE_C_L_O",			0xF0F00000, MIMG}, 
	{"IMAGE_SAMPLE_C_B_O",			0xF0F40000, MIMG}, 
	{"IMAGE_SAMPLE_C_B_CL_O",		0xF0F80000, MIMG}, 
	{"IMAGE_SAMPLE_C_LZ_O",			0xF0FC0000, MIMG}, 
	{"IMAGE_GATHER4",				0xF1000000, MIMG}, 
	{"IMAGE_GATHER4_CL",			0xF1040000, MIMG}, 
	{"IMAGE_GATHER4_L",				0xF1080000, MIMG}, 
	{"IMAGE_GATHER4_B",				0xF10C0000, MIMG}, 
	{"IMAGE_GATHER4_B_CL",			0xF1100000, MIMG}, 
	{"IMAGE_GATHER4_LZ",			0xF1140000, MIMG}, 
	{"IMAGE_GATHER4_C",				0xF1180000, MIMG}, 
	{"IMAGE_GATHER4_C_CL",			0xF11C0000, MIMG}, 
	{"IMAGE_GATHER4_C_L",			0xF1300000, MIMG}, 
	{"IMAGE_GATHER4_C_B",			0xF1340000, MIMG}, 
	{"IMAGE_GATHER4_C_B_CL",		0xF1380000, MIMG}, 
	{"IMAGE_GATHER4_C_LZ",			0xF13C0000, MIMG}, 
	{"IMAGE_GATHER4_O",				0xF1300000, MIMG}, 
	{"IMAGE_GATHER4_CL_O",			0xF1440000, MIMG}, 
	{"IMAGE_GATHER4_L_O",			0xF1500000, MIMG}, 
	{"IMAGE_GATHER4_B_O",			0xF1540000, MIMG}, 
	{"IMAGE_GATHER4_B_CL_O",		0xF1580000, MIMG}, 
	{"IMAGE_GATHER4_LZ_O",			0xF15C0000, MIMG}, 
	{"IMAGE_GATHER4_C_O",			0xF1600000, MIMG}, 
	{"IMAGE_GATHER4_C_CL_O",		0xF1640000, MIMG}, 
	{"IMAGE_GATHER4_C_L_O",			0xF1700000, MIMG}, 
	{"IMAGE_GATHER4_C_B_O",			0xF1740000, MIMG}, 
	{"IMAGE_GATHER4_C_B_CL_O",		0xF1780000, MIMG}, 
	{"IMAGE_GATHER4_C_LZ_O",		0xF17C0000, MIMG}, 
	{"IMAGE_GET_LOD",				0xF1800000, MIMG}, 
	{"IMAGE_SAMPLE_CD",				0xF1A00000, MIMG}, 
	{"IMAGE_SAMPLE_CD_CL",			0xF1A40000, MIMG}, 
	{"IMAGE_SAMPLE_C_CD",			0xF1A80000, MIMG}, 
	{"IMAGE_SAMPLE_C_CD_CL",		0xF1AC0000, MIMG}, 
	{"IMAGE_SAMPLE_CD_O",			0xF1B00000, MIMG}, 
	{"IMAGE_SAMPLE_CD_CL_O",		0xF1B40000, MIMG}, 
	{"IMAGE_SAMPLE_C_CD_O",			0xF1B80000, MIMG}, 
	{"IMAGE_SAMPLE_C_CD_CL_O",		0xF1BC0000, MIMG}

};

const int isa_instr_count = sizeof(isa_instr_list) / sizeof(isa_instr);