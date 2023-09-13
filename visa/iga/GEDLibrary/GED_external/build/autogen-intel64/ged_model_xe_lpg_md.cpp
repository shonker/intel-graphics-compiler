/*========================== begin_copyright_notice ============================

Copyright (C) 2017-2021 Intel Corporation

SPDX-License-Identifier: MIT

============================= end_copyright_notice ===========================*/

/*
 * !!! DO NOT EDIT THIS FILE !!!
 *
 * This file was automagically crafted by GED's model parser.
 */

#include "xcoder/ged_internal_api.h"
#include "ged_decoding_tables.h"
#include "ged_mapping_tables.h"
#include "ged_encoding_masks_tables.h"
#include "ged_model_xe_lpg_md.h"

namespace GED_MODEL_NS_XE_LPG_MD
{

/*!
 * Top level decoding table in the decoding chain for the format flowControl.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t flowControlDecoding = DecodingTable640;

/*!
 * Top level encoding masks table in the encoding chain for the format flowControl.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t flowControlEncodingMasks = EncodingMasksTable130;

/*!
 * Top level decoding table in the decoding chain for the format illegal.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t illegalDecoding = DecodingTable622;

/*!
 * Top level encoding masks table in the encoding chain for the format illegal.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t illegalEncodingMasks = EncodingMasksTable11;

/*!
 * Top level decoding table in the decoding chain for the format math.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t mathDecoding = DecodingTable641;

/*!
 * Top level encoding masks table in the encoding chain for the format math.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t mathEncodingMasks = EncodingMasksTable127;

/*!
 * Top level decoding table in the decoding chain for the format nop.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t nopDecoding = DecodingTable624;

/*!
 * Top level encoding masks table in the encoding chain for the format nop.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t nopEncodingMasks = EncodingMasksTable120;

/*!
 * Top level decoding table in the decoding chain for the format oneSourceCommon.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t oneSourceCommonDecoding = DecodingTable635;

/*!
 * Top level encoding masks table in the encoding chain for the format oneSourceCommon.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t oneSourceCommonEncodingMasks = EncodingMasksTable118;

/*!
 * Top level decoding table in the decoding chain for the format oneSourceCompact.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t oneSourceCompactDecoding = DecodingTable626;

/*!
 * Top level encoding masks table in the encoding chain for the format oneSourceCompact.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t oneSourceCompactEncodingMasks = EncodingMasksTable131;

/*!
 * Top level mapping table in the mapping chain for the compact instruction format oneSourceCompact.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_compact_mapping_table_t oneSourceCompactMapping = MappingTable50;

/*!
 * Top level decoding table in the decoding chain for the format send.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t sendDecoding = DecodingTable663;

/*!
 * Top level encoding masks table in the encoding chain for the format send.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t sendEncodingMasks = EncodingMasksTable141;

/*!
 * Top level decoding table in the decoding chain for the format sync.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t syncDecoding = DecodingTable628;

/*!
 * Top level encoding masks table in the encoding chain for the format sync.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t syncEncodingMasks = EncodingMasksTable119;

/*!
 * Top level decoding table in the decoding chain for the format threeSource.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t threeSourceDecoding = DecodingTable664;

/*!
 * Top level encoding masks table in the encoding chain for the format threeSource.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t threeSourceEncodingMasks = EncodingMasksTable173;

/*!
 * Top level decoding table in the decoding chain for the format threeSourceCompact.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t threeSourceCompactDecoding = DecodingTable630;

/*!
 * Top level encoding masks table in the encoding chain for the format threeSourceCompact.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t threeSourceCompactEncodingMasks = EncodingMasksTable131;

/*!
 * Top level mapping table in the mapping chain for the compact instruction format threeSourceCompact.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_compact_mapping_table_t threeSourceCompactMapping = MappingTable51;

/*!
 * Top level decoding table in the decoding chain for the format threeSourceMacro.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t threeSourceMacroDecoding = DecodingTable665;

/*!
 * Top level encoding masks table in the encoding chain for the format threeSourceMacro.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t threeSourceMacroEncodingMasks = EncodingMasksTable136;

/*!
 * Top level decoding table in the decoding chain for the format twoSourceCommon.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t twoSourceCommonDecoding = DecodingTable639;

/*!
 * Top level encoding masks table in the encoding chain for the format twoSourceCommon.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t twoSourceCommonEncodingMasks = EncodingMasksTable115;

/*!
 * Top level decoding table in the decoding chain for the format twoSourceCompact.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t twoSourceCompactDecoding = DecodingTable632;

/*!
 * Top level encoding masks table in the encoding chain for the format twoSourceCompact.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t twoSourceCompactEncodingMasks = EncodingMasksTable131;

/*!
 * Top level mapping table in the mapping chain for the compact instruction format twoSourceCompact.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_compact_mapping_table_t twoSourceCompactMapping = MappingTable52;
OpcodeTables Opcodes[128] =
{
    illegalDecoding, illegalEncodingMasks, NULL, NULL, NULL, // 0
    syncDecoding, syncEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 1
    NULL, NULL, NULL, NULL, NULL, // 2
    NULL, NULL, NULL, NULL, NULL, // 3
    NULL, NULL, NULL, NULL, NULL, // 4
    NULL, NULL, NULL, NULL, NULL, // 5
    NULL, NULL, NULL, NULL, NULL, // 6
    NULL, NULL, NULL, NULL, NULL, // 7
    NULL, NULL, NULL, NULL, NULL, // 8
    NULL, NULL, NULL, NULL, NULL, // 9
    NULL, NULL, NULL, NULL, NULL, // 10
    NULL, NULL, NULL, NULL, NULL, // 11
    NULL, NULL, NULL, NULL, NULL, // 12
    NULL, NULL, NULL, NULL, NULL, // 13
    NULL, NULL, NULL, NULL, NULL, // 14
    NULL, NULL, NULL, NULL, NULL, // 15
    NULL, NULL, NULL, NULL, NULL, // 16
    NULL, NULL, NULL, NULL, NULL, // 17
    NULL, NULL, NULL, NULL, NULL, // 18
    NULL, NULL, NULL, NULL, NULL, // 19
    NULL, NULL, NULL, NULL, NULL, // 20
    NULL, NULL, NULL, NULL, NULL, // 21
    NULL, NULL, NULL, NULL, NULL, // 22
    NULL, NULL, NULL, NULL, NULL, // 23
    NULL, NULL, NULL, NULL, NULL, // 24
    NULL, NULL, NULL, NULL, NULL, // 25
    NULL, NULL, NULL, NULL, NULL, // 26
    NULL, NULL, NULL, NULL, NULL, // 27
    NULL, NULL, NULL, NULL, NULL, // 28
    NULL, NULL, NULL, NULL, NULL, // 29
    NULL, NULL, NULL, NULL, NULL, // 30
    NULL, NULL, NULL, NULL, NULL, // 31
    flowControlDecoding, flowControlEncodingMasks, NULL, NULL, NULL, // 32
    flowControlDecoding, flowControlEncodingMasks, NULL, NULL, NULL, // 33
    flowControlDecoding, flowControlEncodingMasks, NULL, NULL, NULL, // 34
    flowControlDecoding, flowControlEncodingMasks, NULL, NULL, NULL, // 35
    flowControlDecoding, flowControlEncodingMasks, NULL, NULL, NULL, // 36
    flowControlDecoding, flowControlEncodingMasks, NULL, NULL, NULL, // 37
    NULL, NULL, NULL, NULL, NULL, // 38
    flowControlDecoding, flowControlEncodingMasks, NULL, NULL, NULL, // 39
    flowControlDecoding, flowControlEncodingMasks, NULL, NULL, NULL, // 40
    flowControlDecoding, flowControlEncodingMasks, NULL, NULL, NULL, // 41
    flowControlDecoding, flowControlEncodingMasks, NULL, NULL, NULL, // 42
    flowControlDecoding, flowControlEncodingMasks, NULL, NULL, NULL, // 43
    flowControlDecoding, flowControlEncodingMasks, NULL, NULL, NULL, // 44
    flowControlDecoding, flowControlEncodingMasks, NULL, NULL, NULL, // 45
    flowControlDecoding, flowControlEncodingMasks, NULL, NULL, NULL, // 46
    flowControlDecoding, flowControlEncodingMasks, NULL, NULL, NULL, // 47
    NULL, NULL, NULL, NULL, NULL, // 48
    sendDecoding, sendEncodingMasks, NULL, NULL, NULL, // 49
    sendDecoding, sendEncodingMasks, NULL, NULL, NULL, // 50
    NULL, NULL, NULL, NULL, NULL, // 51
    NULL, NULL, NULL, NULL, NULL, // 52
    NULL, NULL, NULL, NULL, NULL, // 53
    NULL, NULL, NULL, NULL, NULL, // 54
    NULL, NULL, NULL, NULL, NULL, // 55
    mathDecoding, mathEncodingMasks, NULL, NULL, NULL, // 56
    NULL, NULL, NULL, NULL, NULL, // 57
    NULL, NULL, NULL, NULL, NULL, // 58
    NULL, NULL, NULL, NULL, NULL, // 59
    NULL, NULL, NULL, NULL, NULL, // 60
    NULL, NULL, NULL, NULL, NULL, // 61
    NULL, NULL, NULL, NULL, NULL, // 62
    NULL, NULL, NULL, NULL, NULL, // 63
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 64
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 65
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 66
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 67
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 68
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 69
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 70
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 71
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 72
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 73
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 74
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 75
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 76
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 77
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 78
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 79
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 80
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 81
    threeSourceDecoding, threeSourceEncodingMasks, threeSourceCompactDecoding, threeSourceCompactEncodingMasks, threeSourceCompactMapping, // 82
    NULL, NULL, NULL, NULL, NULL, // 83
    NULL, NULL, NULL, NULL, NULL, // 84
    NULL, NULL, NULL, NULL, NULL, // 85
    NULL, NULL, NULL, NULL, NULL, // 86
    NULL, NULL, NULL, NULL, NULL, // 87
    threeSourceDecoding, threeSourceEncodingMasks, threeSourceCompactDecoding, threeSourceCompactEncodingMasks, threeSourceCompactMapping, // 88
    NULL, NULL, NULL, NULL, NULL, // 89
    NULL, NULL, NULL, NULL, NULL, // 90
    threeSourceDecoding, threeSourceEncodingMasks, threeSourceCompactDecoding, threeSourceCompactEncodingMasks, threeSourceCompactMapping, // 91
    NULL, NULL, NULL, NULL, NULL, // 92
    threeSourceMacroDecoding, threeSourceMacroEncodingMasks, NULL, NULL, NULL, // 93
    NULL, NULL, NULL, NULL, NULL, // 94
    NULL, NULL, NULL, NULL, NULL, // 95
    nopDecoding, nopEncodingMasks, NULL, NULL, NULL, // 96
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 97
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 98
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 99
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 100
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 101
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 102
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 103
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 104
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 105
    NULL, NULL, NULL, NULL, NULL, // 106
    threeSourceDecoding, threeSourceEncodingMasks, threeSourceCompactDecoding, threeSourceCompactEncodingMasks, threeSourceCompactMapping, // 107
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 108
    NULL, NULL, NULL, NULL, NULL, // 109
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 110
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 111
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 112
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 113
    threeSourceDecoding, threeSourceEncodingMasks, threeSourceCompactDecoding, threeSourceCompactEncodingMasks, threeSourceCompactMapping, // 114
    NULL, NULL, NULL, NULL, NULL, // 115
    NULL, NULL, NULL, NULL, NULL, // 116
    NULL, NULL, NULL, NULL, NULL, // 117
    NULL, NULL, NULL, NULL, NULL, // 118
    oneSourceCommonDecoding, oneSourceCommonEncodingMasks, oneSourceCompactDecoding, oneSourceCompactEncodingMasks, oneSourceCompactMapping, // 119
    threeSourceDecoding, threeSourceEncodingMasks, threeSourceCompactDecoding, threeSourceCompactEncodingMasks, threeSourceCompactMapping, // 120
    twoSourceCommonDecoding, twoSourceCommonEncodingMasks, twoSourceCompactDecoding, twoSourceCompactEncodingMasks, twoSourceCompactMapping, // 121
    threeSourceDecoding, threeSourceEncodingMasks, threeSourceCompactDecoding, threeSourceCompactEncodingMasks, threeSourceCompactMapping, // 122
    NULL, NULL, NULL, NULL, NULL, // 123
    NULL, NULL, NULL, NULL, NULL, // 124
    NULL, NULL, NULL, NULL, NULL, // 125
    NULL, NULL, NULL, NULL, NULL, // 126
    NULL, NULL, NULL, NULL, NULL // 127
}; // Opcodes[]
} // namespace GED_MODEL_NS_XE_LPG_MD