/*========================== begin_copyright_notice ============================

Copyright (C) 2017-2021 Intel Corporation

SPDX-License-Identifier: MIT

============================= end_copyright_notice ===========================*/

/*
 * !!! DO NOT EDIT THIS FILE !!!
 *
 * This file was automagically crafted by GED's model parser.
 */

#include <cstddef>
#include "ged_enumerations_internal.h"

#ifndef GED_ACCESS_MODE_HIDDEN
const char* AccessModeEnumeration[3] =
{
    "Align1", // 0
    "Align16", // 1
    NULL // 2
}; // AccessModeEnumeration[]
#endif // GED_ACCESS_MODE_HIDDEN

#ifndef GED_ACC_WR_CTRL_HIDDEN
const char* AccWrCtrlEnumeration[3] =
{
    "", // 0
    "AccWrEn", // 1
    NULL // 2
}; // AccWrCtrlEnumeration[]
#endif // GED_ACC_WR_CTRL_HIDDEN

#ifndef GED_ADDR_MODE_HIDDEN
const char* AddrModeEnumeration[3] =
{
    "Direct", // 0
    "Indirect", // 1
    NULL // 2
}; // AddrModeEnumeration[]
#endif // GED_ADDR_MODE_HIDDEN

#ifndef GED_ARCH_REG_HIDDEN
const char* ArchRegEnumeration[17] =
{
    "null", // 0
    "a0", // 1
    "acc", // 2
    "f", // 3
    "ce", // 4
    "msg", // 5
    "sp", // 6
    "sr0", // 7
    "cr0", // 8
    "n0", // 9
    "ip", // 10
    "tdr", // 11
    "tm0", // 12
    "fc", // 13
    "dbg0", // 14
    "n", // 15
    NULL // 16
}; // ArchRegEnumeration[]
#endif // GED_ARCH_REG_HIDDEN

#ifndef GED_ATOMIC_OPERATION_TYPE_HIDDEN
const char* AtomicOperationTypeEnumeration[16] =
{
    "AOP_AND", // 0
    "AOP_OR", // 1
    "AOP_XOR", // 2
    "AOP_MOV", // 3
    "AOP_INC", // 4
    "AOP_DEC", // 5
    "AOP_ADD", // 6
    "AOP_SUB", // 7
    "AOP_REVSUB", // 8
    "AOP_IMAX", // 9
    "AOP_IMIN", // 10
    "AOP_UMAX", // 11
    "AOP_UMIN", // 12
    "AOP_CMPWR", // 13
    "AOP_PREDEC", // 14
    NULL // 15
}; // AtomicOperationTypeEnumeration[]
#endif // GED_ATOMIC_OPERATION_TYPE_HIDDEN

#ifndef GED_BLOCK_SIZE_HIDDEN
const char* BlockSizeEnumeration[6] =
{
    "OW1L", // 0
    "OW1H", // 1
    "OW2", // 2
    "OW4", // 3
    "OW8", // 4
    NULL // 5
}; // BlockSizeEnumeration[]
#endif // GED_BLOCK_SIZE_HIDDEN

#ifndef GED_BRANCH_CTRL_HIDDEN
const char* BranchCtrlEnumeration[3] =
{
    "", // 0
    "Branch", // 1
    NULL // 2
}; // BranchCtrlEnumeration[]
#endif // GED_BRANCH_CTRL_HIDDEN

#ifndef GED_CHANNEL_MASK_HIDDEN
const char* ChannelMaskEnumeration[6] =
{
    "R", // 0
    "", // 1
    "B", // 2
    "G", // 3
    "A", // 4
    NULL // 5
}; // ChannelMaskEnumeration[]
#endif // GED_CHANNEL_MASK_HIDDEN

#ifndef GED_CHANNEL_MODE_HIDDEN
const char* ChannelModeEnumeration[3] =
{
    "Oword", // 0
    "Dword", // 1
    NULL // 2
}; // ChannelModeEnumeration[]
#endif // GED_CHANNEL_MODE_HIDDEN

#ifndef GED_CHANNEL_OFFSET_HIDDEN
const char* ChannelOffsetEnumeration[9] =
{
    "M0", // 0
    "M4", // 1
    "M8", // 2
    "M12", // 3
    "M16", // 4
    "M20", // 5
    "M24", // 6
    "M28", // 7
    NULL // 8
}; // ChannelOffsetEnumeration[]
#endif // GED_CHANNEL_OFFSET_HIDDEN

#ifndef GED_COND_MODIFIER_HIDDEN
const char* CondModifierEnumeration[10] =
{
    "", // 0
    "z", // 1
    "nz", // 2
    "g", // 3
    "ge", // 4
    "l", // 5
    "le", // 6
    "o", // 7
    "u", // 8
    NULL // 9
}; // CondModifierEnumeration[]
#endif // GED_COND_MODIFIER_HIDDEN

#ifndef GED_DATA_TYPE_HIDDEN
const char* DataTypeEnumeration[20] =
{
    "ud", // 0
    "d", // 1
    "uw", // 2
    "w", // 3
    "ub", // 4
    "b", // 5
    "df", // 6
    "f", // 7
    "uq", // 8
    "q", // 9
    "hf", // 10
    "uv", // 11
    "vf", // 12
    "v", // 13
    "nf", // 14
    "bf", // 15
    "qf", // 16
    "bf8", // 17
    "tf32", // 18
    NULL // 19
}; // DataTypeEnumeration[]
#endif // GED_DATA_TYPE_HIDDEN

#ifndef GED_DEBUG_CTRL_HIDDEN
const char* DebugCtrlEnumeration[3] =
{
    "", // 0
    "Breakpoint", // 1
    NULL // 2
}; // DebugCtrlEnumeration[]
#endif // GED_DEBUG_CTRL_HIDDEN

#ifndef GED_DEP_CTRL_HIDDEN
const char* DepCtrlEnumeration[5] =
{
    "", // 0
    "NoDDClr", // 1
    "NoDDChk", // 2
    "NoDDClr, NoDDChk", // 3
    NULL // 4
}; // DepCtrlEnumeration[]
#endif // GED_DEP_CTRL_HIDDEN

#ifndef GED_DPADDR_REG_SIZE_HIDDEN
const char* DPAddrRegSizeEnumeration[7] =
{
    "1_REG", // 0
    "2_REG", // 1
    "3_REG", // 2
    "4_REG", // 3
    "6_REG", // 4
    "8_REG", // 5
    NULL // 6
}; // DPAddrRegSizeEnumeration[]
#endif // GED_DPADDR_REG_SIZE_HIDDEN

#ifndef GED_DP_ADDR_SIZE_HIDDEN
const char* DpAddrSizeEnumeration[4] =
{
    "A16", // 0
    "A32", // 1
    "A64", // 2
    NULL // 3
}; // DpAddrSizeEnumeration[]
#endif // GED_DP_ADDR_SIZE_HIDDEN

#ifndef GED_DP_ADDR_SURFACE_TYPE_HIDDEN
const char* DpAddrSurfaceTypeEnumeration[5] =
{
    "FLAT", // 0
    "BSS", // 1
    "SS", // 2
    "BTI", // 3
    NULL // 4
}; // DpAddrSurfaceTypeEnumeration[]
#endif // GED_DP_ADDR_SURFACE_TYPE_HIDDEN

#ifndef GED_DPCACHE_LOAD_HIDDEN
const char* DPCacheLoadEnumeration[11] =
{
    "USE_DEFAULT", // 0
    "L1UC_L3UC", // 1
    "L1UC_L3C", // 2
    "L1UC_L3CC", // 3
    "L1C_L3UC", // 4
    "L1C_L3C", // 5
    "L1C_L3CC", // 6
    "L1S_L3UC", // 7
    "L1S_L3C", // 8
    "L1IAR_L3IAR", // 9
    NULL // 10
}; // DPCacheLoadEnumeration[]
#endif // GED_DPCACHE_LOAD_HIDDEN

#ifndef GED_DPCACHE_STORE_HIDDEN
const char* DPCacheStoreEnumeration[9] =
{
    "DEFAULT", // 0
    "L1UC_L3UC", // 1
    "L1UC_L3WB", // 2
    "L1WT_L3UC", // 3
    "L1WT_L3WB", // 4
    "L1S_L3UC", // 5
    "L1S_L3WB", // 6
    "L1WB_L3WB", // 7
    NULL // 8
}; // DPCacheStoreEnumeration[]
#endif // GED_DPCACHE_STORE_HIDDEN

#ifndef GED_DPCMASK_HIDDEN
const char* DPCmaskEnumeration[15] =
{
    "X", // 0
    "Y", // 1
    "XY", // 2
    "Z", // 3
    "XZ", // 4
    "YZ", // 5
    "XYZ", // 6
    "W", // 7
    "XW", // 8
    "YW", // 9
    "ZW", // 10
    "XYW", // 11
    "YZW", // 12
    "XYZW", // 13
    NULL // 14
}; // DPCmaskEnumeration[]
#endif // GED_DPCMASK_HIDDEN

#ifndef GED_DP_DATA_SIZE_HIDDEN
const char* DpDataSizeEnumeration[8] =
{
    "D8", // 0
    "D16", // 1
    "D32", // 2
    "D64", // 3
    "D8U32", // 4
    "D16U32", // 5
    "D16BF32", // 6
    NULL // 7
}; // DpDataSizeEnumeration[]
#endif // GED_DP_DATA_SIZE_HIDDEN

#ifndef GED_DP_FENCE_SCOPE_HIDDEN
const char* DpFenceScopeEnumeration[8] =
{
    "Threadgroup", // 0
    "Local", // 1
    "Tile", // 2
    "GPU", // 3
    "AllGPU", // 4
    "System_Release", // 5
    "System_Acquire", // 6
    NULL // 7
}; // DpFenceScopeEnumeration[]
#endif // GED_DP_FENCE_SCOPE_HIDDEN

#ifndef GED_DP_FLUSH_TYPE_HIDDEN
const char* DpFlushTypeEnumeration[7] =
{
    "Evict", // 0
    "Invalidate", // 1
    "Discard", // 2
    "Clean", // 3
    "DGT_L3OnlyFlush", // 4
    "None", // 5
    NULL // 6
}; // DpFlushTypeEnumeration[]
#endif // GED_DP_FLUSH_TYPE_HIDDEN

#ifndef GED_DPONE_ADDR_REG_HIDDEN
const char* DPOneAddrRegEnumeration[2] =
{
    "1_REG", // 0
    NULL // 1
}; // DPOneAddrRegEnumeration[]
#endif // GED_DPONE_ADDR_REG_HIDDEN

#ifndef GED_DP_OPCODE_HIDDEN
const char* DpOpcodeEnumeration[33] =
{
    "LOAD", // 0
    "LOAD_CMASK", // 1
    "STORE", // 2
    "STORE_CMASK", // 3
    "ATOMIC_INCREMENT", // 4
    "ATOMIC_DECREMENT", // 5
    "ATOMIC_LOAD", // 6
    "ATOMIC_STORE", // 7
    "ATOMIC_ADD", // 8
    "ATOMIC_SUB", // 9
    "ATOMIC_MIN", // 10
    "ATOMIC_MAX", // 11
    "ATOMIC_UMIN", // 12
    "ATOMIC_UMAX", // 13
    "ATOMIC_COMPARE_EXCHANGE", // 14
    "ATOMIC_FLOAT_ADD", // 15
    "ATOMIC_FLOAT_SUB", // 16
    "ATOMIC_FLOAT_MIN", // 17
    "ATOMIC_FLOAT_MAX", // 18
    "ATOMIC_FLOAT_COMPARE_EXCHANGE", // 19
    "ATOMIC_AND", // 20
    "ATOMIC_OR", // 21
    "ATOMIC_XOR", // 22
    "STORE_UNCOMPRESSED", // 23
    "FENCE", // 24
    "LOAD_2D_BLOCK", // 25
    "STORE_2D_BLOCK", // 26
    "LOAD_STATUS", // 27
    "RSI", // 28
    "APPENDCOUNTER_ATOMIC_ADD", // 29
    "APPENDCOUNTER_ATOMIC_SUB", // 30
    "APPENDCOUNTER_ATOMIC_STORE", // 31
    NULL // 32
}; // DpOpcodeEnumeration[]
#endif // GED_DP_OPCODE_HIDDEN

#ifndef GED_DP_TRANSPOSE_HIDDEN
const char* DpTransposeEnumeration[3] =
{
    "SIMT", // 0
    "SIMD", // 1
    NULL // 2
}; // DpTransposeEnumeration[]
#endif // GED_DP_TRANSPOSE_HIDDEN

#ifndef GED_DP_VECT_SIZE_HIDDEN
const char* DpVectSizeEnumeration[9] =
{
    "V1", // 0
    "V2", // 1
    "V3", // 2
    "V4", // 3
    "V8", // 4
    "V16", // 5
    "V32", // 6
    "V64", // 7
    NULL // 8
}; // DpVectSizeEnumeration[]
#endif // GED_DP_VECT_SIZE_HIDDEN

#ifndef GED_DST_CHAN_EN_HIDDEN
const char* DstChanEnEnumeration[17] =
{
    "", // 0
    "x", // 1
    "y", // 2
    "xy", // 3
    "z", // 4
    "xz", // 5
    "yz", // 6
    "xyz", // 7
    "w", // 8
    "xw", // 9
    "yw", // 10
    "xyw", // 11
    "zw", // 12
    "xzw", // 13
    "yzw", // 14
    "xyzw", // 15
    NULL // 16
}; // DstChanEnEnumeration[]
#endif // GED_DST_CHAN_EN_HIDDEN

#ifndef GED_EOT_HIDDEN
const char* EOTEnumeration[3] =
{
    "", // 0
    "EOT", // 1
    NULL // 2
}; // EOTEnumeration[]
#endif // GED_EOT_HIDDEN

#ifndef GED_EXEC_MASK_OFFSET_CTRL_HIDDEN
const char* ExecMaskOffsetCtrlEnumeration[15] =
{
    "N1", // 0
    "N2", // 1
    "N3", // 2
    "N4", // 3
    "N5", // 4
    "N6", // 5
    "N7", // 6
    "N8", // 7
    "Q1", // 8
    "Q2", // 9
    "Q3", // 10
    "Q4", // 11
    "H1", // 12
    "H2", // 13
    NULL // 14
}; // ExecMaskOffsetCtrlEnumeration[]
#endif // GED_EXEC_MASK_OFFSET_CTRL_HIDDEN

#ifndef GED_EXECUTION_DATA_TYPE_HIDDEN
const char* ExecutionDataTypeEnumeration[3] =
{
    "Integer", // 0
    "Float", // 1
    NULL // 2
}; // ExecutionDataTypeEnumeration[]
#endif // GED_EXECUTION_DATA_TYPE_HIDDEN

#ifndef GED_FUSION_CTRL_HIDDEN
const char* FusionCtrlEnumeration[3] =
{
    "", // 0
    "Serialized", // 1
    NULL // 2
}; // FusionCtrlEnumeration[]
#endif // GED_FUSION_CTRL_HIDDEN

#ifndef GED_HEADER_PRESENT_HIDDEN
const char* HeaderPresentEnumeration[3] =
{
    "no", // 0
    "yes", // 1
    NULL // 2
}; // HeaderPresentEnumeration[]
#endif // GED_HEADER_PRESENT_HIDDEN

#ifndef GED_MASK_CTRL_HIDDEN
const char* MaskCtrlEnumeration[3] =
{
    "", // 0
    "NoMask", // 1
    NULL // 2
}; // MaskCtrlEnumeration[]
#endif // GED_MASK_CTRL_HIDDEN

#ifndef GED_MATH_FC_HIDDEN
const char* MathFCEnumeration[15] =
{
    "INV", // 0
    "LOG", // 1
    "EXP", // 2
    "SQRT", // 3
    "RSQ", // 4
    "SIN", // 5
    "COS", // 6
    "FDIV", // 7
    "POW", // 8
    "INT DIV BOTH", // 9
    "INT DIV QUOTIENT", // 10
    "INT DIV REMAINDER", // 11
    "INVM", // 12
    "RSQRTM", // 13
    NULL // 14
}; // MathFCEnumeration[]
#endif // GED_MATH_FC_HIDDEN

#ifndef GED_MATH_MACRO_EXT_HIDDEN
const char* MathMacroExtEnumeration[10] =
{
    "mme0", // 0
    "mme1", // 1
    "mme2", // 2
    "mme3", // 3
    "mme4", // 4
    "mme5", // 5
    "mme6", // 6
    "mme7", // 7
    "nomme", // 8
    NULL // 9
}; // MathMacroExtEnumeration[]
#endif // GED_MATH_MACRO_EXT_HIDDEN

#ifndef GED_MESSAGE_TYPE_HIDDEN
const char* MessageTypeEnumeration[78] =
{
    "MSD0R_HWB", // 0
    "MSD0W_HWB", // 1
    "MT0R_OWB", // 2
    "MT0R_OWAB", // 3
    "MT0R_OWDB", // 4
    "MT0R_DWS", // 5
    "MT0R_BS", // 6
    "MT0_MEMFENCE", // 7
    "MT0W_OWB", // 8
    "MT0W_OWDB", // 9
    "MT0W_DWS", // 10
    "MT0W_BS", // 11
    "MT1R_T", // 12
    "MT1R_US", // 13
    "MT1A_UI", // 14
    "MT1A_UI4x2", // 15
    "MT1R_MB", // 16
    "MT1R_TS", // 17
    "MT1A_TA", // 18
    "MT1A_TA4x2", // 19
    "MT1W_US", // 20
    "MT1W_MB", // 21
    "MT1A_TC", // 22
    "MT1A_TC4x2", // 23
    "MT1W_TS", // 24
    "MT1R_A64_SB", // 25
    "MT1R_A64_US", // 26
    "MT1A_A64_UI", // 27
    "MT1A_A64_UI4x2", // 28
    "MT1R_A64_B", // 29
    "MT1W_A64_B", // 30
    "MT1W_A64_US", // 31
    "MT1W_A64_SB", // 32
    "MT2R_US", // 33
    "MT2R_A64_SB", // 34
    "MT2R_A64_US", // 35
    "MT2R_BS", // 36
    "MT2W_US", // 37
    "MT2W_A64_US", // 38
    "MT2W_A64_SB", // 39
    "MT2W_BS", // 40
    "MT_CC_OWB", // 41
    "MT_CC_OWUB", // 42
    "MT_CC_OWDB", // 43
    "MT_CC_DWS", // 44
    "MT_SC_OWUB", // 45
    "MT_SC_MB", // 46
    "MT_RSI", // 47
    "MT_RTW", // 48
    "MT_RTR", // 49
    "MT1A_UHI", // 50
    "MT1A_TAH", // 51
    "MT1A_TCH", // 52
    "MT1A_A64_UHI", // 53
    "MT1A_UF", // 54
    "MT1A_UHF", // 55
    "MT1A_A64_UF", // 56
    "MT1A_A64_UHF", // 57
    "MT_US_CCS_OP", // 58
    "MT_US_UCW", // 59
    "MT_TS_CCS_OP", // 60
    "MT_TS_UCW", // 61
    "MT_A64_CCS_PG_OP", // 62
    "MT_A64_US_CCS_OP", // 63
    "MT_A64_US_UCW", // 64
    "MT_BTD_SPAWN", // 65
    "MTR_MB", // 66
    "MTRR_TS", // 67
    "MTRA_TA", // 68
    "MT_MEMFENCE", // 69
    "MTW_MB", // 70
    "MTRW_TS", // 71
    "MT0R_US", // 72
    "MT0A_UI", // 73
    "MT0W_US", // 74
    "MT1A_UF4x2", // 75
    "MT1A_A64_UF4x2", // 76
    NULL // 77
}; // MessageTypeEnumeration[]
#endif // GED_MESSAGE_TYPE_HIDDEN

#ifndef GED_NO_SRC_DEP_SET_HIDDEN
const char* NoSrcDepSetEnumeration[3] =
{
    "", // 0
    "NoSrcDepSet", // 1
    NULL // 2
}; // NoSrcDepSetEnumeration[]
#endif // GED_NO_SRC_DEP_SET_HIDDEN

#ifndef GED_OPCODE_HIDDEN
const char* OpcodeEnumeration[83] =
{
    "stub", // 0
    "illegal", // 1
    "mov", // 2
    "sel", // 3
    "movi", // 4
    "not", // 5
    "and", // 6
    "or", // 7
    "xor", // 8
    "shr", // 9
    "shl", // 10
    "smov", // 11
    "asr", // 12
    "cmp", // 13
    "cmpn", // 14
    "csel", // 15
    "bfrev", // 16
    "bfe", // 17
    "bfi1", // 18
    "bfi2", // 19
    "jmpi", // 20
    "brd", // 21
    "if", // 22
    "brc", // 23
    "else", // 24
    "endif", // 25
    "while", // 26
    "break", // 27
    "cont", // 28
    "halt", // 29
    "calla", // 30
    "call", // 31
    "ret", // 32
    "goto", // 33
    "join", // 34
    "wait", // 35
    "send", // 36
    "sendc", // 37
    "sends", // 38
    "sendsc", // 39
    "math", // 40
    "add", // 41
    "mul", // 42
    "avg", // 43
    "frc", // 44
    "rndu", // 45
    "rndd", // 46
    "rnde", // 47
    "rndz", // 48
    "mac", // 49
    "mach", // 50
    "lzd", // 51
    "fbh", // 52
    "fbl", // 53
    "cbit", // 54
    "addc", // 55
    "subb", // 56
    "sad2", // 57
    "sada2", // 58
    "dp4", // 59
    "dph", // 60
    "dp3", // 61
    "dp2", // 62
    "line", // 63
    "pln", // 64
    "mad", // 65
    "lrp", // 66
    "madm", // 67
    "nop", // 68
    "ror", // 69
    "rol", // 70
    "dp4a", // 71
    "sync", // 72
    "add3", // 73
    "dpas", // 74
    "dpasw", // 75
    "bfn", // 76
    "macl", // 77
    "srnd", // 78
    "f32to16", // 79
    "f16to32", // 80
    "dim", // 81
    NULL // 82
}; // OpcodeEnumeration[]
#endif // GED_OPCODE_HIDDEN

#ifndef GED_PRECISION_HIDDEN
const char* PrecisionEnumeration[14] =
{
    "u8", // 0
    "u4", // 1
    "u2", // 2
    "u1", // 3
    "s8", // 4
    "s4", // 5
    "s2", // 6
    "s1", // 7
    "f16", // 8
    "bf16", // 9
    "bf8", // 10
    "df", // 11
    "tf32", // 12
    NULL // 13
}; // PrecisionEnumeration[]
#endif // GED_PRECISION_HIDDEN

#ifndef GED_PRED_CTRL_HIDDEN
const char* PredCtrlEnumeration[21] =
{
    "", // 0
    "", // 1
    "anyv", // 2
    "allv", // 3
    "any2h", // 4
    "all2h", // 5
    "any4h", // 6
    "all4h", // 7
    "any8h", // 8
    "all8h", // 9
    "any16h", // 10
    "all16h", // 11
    "any32h", // 12
    "all32h", // 13
    "x", // 14
    "y", // 15
    "z", // 16
    "w", // 17
    "any", // 18
    "all", // 19
    NULL // 20
}; // PredCtrlEnumeration[]
#endif // GED_PRED_CTRL_HIDDEN

#ifndef GED_PRED_INV_HIDDEN
const char* PredInvEnumeration[3] =
{
    "+", // 0
    "-", // 1
    NULL // 2
}; // PredInvEnumeration[]
#endif // GED_PRED_INV_HIDDEN

#ifndef GED_REG_FILE_HIDDEN
const char* RegFileEnumeration[4] =
{
    "ARF", // 0
    "GRF", // 1
    "IMM", // 2
    NULL // 3
}; // RegFileEnumeration[]
#endif // GED_REG_FILE_HIDDEN

#ifndef GED_REP_CTRL_HIDDEN
const char* RepCtrlEnumeration[3] =
{
    "", // 0
    "", // 1
    NULL // 2
}; // RepCtrlEnumeration[]
#endif // GED_REP_CTRL_HIDDEN

#ifndef GED_RETURN_DATA_CONTROL_HIDDEN
const char* ReturnDataControlEnumeration[3] =
{
    "", // 0
    "", // 1
    NULL // 2
}; // ReturnDataControlEnumeration[]
#endif // GED_RETURN_DATA_CONTROL_HIDDEN

#ifndef GED_SATURATE_HIDDEN
const char* SaturateEnumeration[3] =
{
    "", // 0
    "sat", // 1
    NULL // 2
}; // SaturateEnumeration[]
#endif // GED_SATURATE_HIDDEN

#ifndef GED_SFID_HIDDEN
const char* SFIDEnumeration[23] =
{
    "NULL", // 0
    "SAMPLER", // 1
    "GATEWAY", // 2
    "DP_DC2", // 3
    "DP_RC", // 4
    "URB", // 5
    "SPAWNER", // 6
    "VME", // 7
    "DP_DCRO", // 8
    "DP_DC0", // 9
    "PI", // 10
    "DP_DC1", // 11
    "CRE", // 12
    "UGML", // 13
    "BTD", // 14
    "RTA", // 15
    "TGM", // 16
    "SLM", // 17
    "UGM", // 18
    "DP_CONST", // 19
    "DP_SAMPLER", // 20
    "DP_CC", // 21
    NULL // 22
}; // SFIDEnumeration[]
#endif // GED_SFID_HIDDEN

#ifndef GED_SIMDMODE_HIDDEN
const char* SIMDModeEnumeration[4] =
{
    "SIMD4x2", // 0
    "SIMD16", // 1
    "SIMD8", // 2
    NULL // 3
}; // SIMDModeEnumeration[]
#endif // GED_SIMDMODE_HIDDEN

#ifndef GED_SLOT_GROUP_HIDDEN
const char* SlotGroupEnumeration[4] =
{
    "SIMD4x2", // 0
    "low_8", // 1
    "high_8", // 2
    NULL // 3
}; // SlotGroupEnumeration[]
#endif // GED_SLOT_GROUP_HIDDEN

#ifndef GED_SRC_MOD_HIDDEN
const char* SrcModEnumeration[5] =
{
    "", // 0
    "(abs)", // 1
    "-", // 2
    "-(abs)", // 3
    NULL // 4
}; // SrcModEnumeration[]
#endif // GED_SRC_MOD_HIDDEN

#ifndef GED_SUB_BYTE_PRECISION_HIDDEN
const char* SubBytePrecisionEnumeration[8] =
{
    "None", // 0
    "s4", // 1
    "s2", // 2
    "s1", // 3
    "u4", // 4
    "u2", // 5
    "u1", // 6
    NULL // 7
}; // SubBytePrecisionEnumeration[]
#endif // GED_SUB_BYTE_PRECISION_HIDDEN

#ifndef GED_SUB_FUNC_ID_HIDDEN
const char* SubFuncIDEnumeration[8] =
{
    "GetTimeStamp", // 0
    "BarrierMsg", // 1
    "OpenGateway", // 2
    "CloseGateway", // 3
    "ForwardMsg", // 4
    "UpdateGateState", // 5
    "MMIOReadWrite", // 6
    NULL // 7
}; // SubFuncIDEnumeration[]
#endif // GED_SUB_FUNC_ID_HIDDEN

#ifndef GED_SWIZZLE_HIDDEN
const char* SwizzleEnumeration[5] =
{
    "x", // 0
    "y", // 1
    "z", // 2
    "w", // 3
    NULL // 4
}; // SwizzleEnumeration[]
#endif // GED_SWIZZLE_HIDDEN

#ifndef GED_SYNC_FC_HIDDEN
const char* SyncFCEnumeration[9] =
{
    "nop", // 0
    "grfsb", // 1
    "allrd", // 2
    "allwr", // 3
    "bar", // 4
    "host", // 5
    "fence", // 6
    "flush", // 7
    NULL // 8
}; // SyncFCEnumeration[]
#endif // GED_SYNC_FC_HIDDEN

#ifndef GED_THREAD_CTRL_HIDDEN
const char* ThreadCtrlEnumeration[5] =
{
    "", // 0
    "Atomic", // 1
    "NoPreempt", // 2
    "Switch", // 3
    NULL // 4
}; // ThreadCtrlEnumeration[]
#endif // GED_THREAD_CTRL_HIDDEN
