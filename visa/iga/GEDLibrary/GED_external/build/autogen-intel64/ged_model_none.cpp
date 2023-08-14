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
#include "ged_model_none.h"

namespace GED_MODEL_NS_NONE
{

/*!
 * Top level decoding table in the decoding chain for the format EU_INSTRUCTION_STUB.
 * The indices for the table are the GED_INS_FIELD enumerator values.
 */
static ged_ins_decoding_table_t EU_INSTRUCTION_STUBDecoding = DecodingTable542;

/*!
 * Top level encoding masks table in the encoding chain for the format EU_INSTRUCTION_STUB.
 * The table is a list of encoding masks entries terminated by a NO_MASKS entry.
 */
static ged_instruction_masks_table_t EU_INSTRUCTION_STUBEncodingMasks = EncodingMasksTable0;
OpcodeTables Opcodes[128] =
{
    EU_INSTRUCTION_STUBDecoding, EU_INSTRUCTION_STUBEncodingMasks, NULL, NULL, NULL, // 0
    NULL, NULL, NULL, NULL, NULL, // 1
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
    NULL, NULL, NULL, NULL, NULL, // 32
    NULL, NULL, NULL, NULL, NULL, // 33
    NULL, NULL, NULL, NULL, NULL, // 34
    NULL, NULL, NULL, NULL, NULL, // 35
    NULL, NULL, NULL, NULL, NULL, // 36
    NULL, NULL, NULL, NULL, NULL, // 37
    NULL, NULL, NULL, NULL, NULL, // 38
    NULL, NULL, NULL, NULL, NULL, // 39
    NULL, NULL, NULL, NULL, NULL, // 40
    NULL, NULL, NULL, NULL, NULL, // 41
    NULL, NULL, NULL, NULL, NULL, // 42
    NULL, NULL, NULL, NULL, NULL, // 43
    NULL, NULL, NULL, NULL, NULL, // 44
    NULL, NULL, NULL, NULL, NULL, // 45
    NULL, NULL, NULL, NULL, NULL, // 46
    NULL, NULL, NULL, NULL, NULL, // 47
    NULL, NULL, NULL, NULL, NULL, // 48
    NULL, NULL, NULL, NULL, NULL, // 49
    NULL, NULL, NULL, NULL, NULL, // 50
    NULL, NULL, NULL, NULL, NULL, // 51
    NULL, NULL, NULL, NULL, NULL, // 52
    NULL, NULL, NULL, NULL, NULL, // 53
    NULL, NULL, NULL, NULL, NULL, // 54
    NULL, NULL, NULL, NULL, NULL, // 55
    NULL, NULL, NULL, NULL, NULL, // 56
    NULL, NULL, NULL, NULL, NULL, // 57
    NULL, NULL, NULL, NULL, NULL, // 58
    NULL, NULL, NULL, NULL, NULL, // 59
    NULL, NULL, NULL, NULL, NULL, // 60
    NULL, NULL, NULL, NULL, NULL, // 61
    NULL, NULL, NULL, NULL, NULL, // 62
    NULL, NULL, NULL, NULL, NULL, // 63
    NULL, NULL, NULL, NULL, NULL, // 64
    NULL, NULL, NULL, NULL, NULL, // 65
    NULL, NULL, NULL, NULL, NULL, // 66
    NULL, NULL, NULL, NULL, NULL, // 67
    NULL, NULL, NULL, NULL, NULL, // 68
    NULL, NULL, NULL, NULL, NULL, // 69
    NULL, NULL, NULL, NULL, NULL, // 70
    NULL, NULL, NULL, NULL, NULL, // 71
    NULL, NULL, NULL, NULL, NULL, // 72
    NULL, NULL, NULL, NULL, NULL, // 73
    NULL, NULL, NULL, NULL, NULL, // 74
    NULL, NULL, NULL, NULL, NULL, // 75
    NULL, NULL, NULL, NULL, NULL, // 76
    NULL, NULL, NULL, NULL, NULL, // 77
    NULL, NULL, NULL, NULL, NULL, // 78
    NULL, NULL, NULL, NULL, NULL, // 79
    NULL, NULL, NULL, NULL, NULL, // 80
    NULL, NULL, NULL, NULL, NULL, // 81
    NULL, NULL, NULL, NULL, NULL, // 82
    NULL, NULL, NULL, NULL, NULL, // 83
    NULL, NULL, NULL, NULL, NULL, // 84
    NULL, NULL, NULL, NULL, NULL, // 85
    NULL, NULL, NULL, NULL, NULL, // 86
    NULL, NULL, NULL, NULL, NULL, // 87
    NULL, NULL, NULL, NULL, NULL, // 88
    NULL, NULL, NULL, NULL, NULL, // 89
    NULL, NULL, NULL, NULL, NULL, // 90
    NULL, NULL, NULL, NULL, NULL, // 91
    NULL, NULL, NULL, NULL, NULL, // 92
    NULL, NULL, NULL, NULL, NULL, // 93
    NULL, NULL, NULL, NULL, NULL, // 94
    NULL, NULL, NULL, NULL, NULL, // 95
    NULL, NULL, NULL, NULL, NULL, // 96
    NULL, NULL, NULL, NULL, NULL, // 97
    NULL, NULL, NULL, NULL, NULL, // 98
    NULL, NULL, NULL, NULL, NULL, // 99
    NULL, NULL, NULL, NULL, NULL, // 100
    NULL, NULL, NULL, NULL, NULL, // 101
    NULL, NULL, NULL, NULL, NULL, // 102
    NULL, NULL, NULL, NULL, NULL, // 103
    NULL, NULL, NULL, NULL, NULL, // 104
    NULL, NULL, NULL, NULL, NULL, // 105
    NULL, NULL, NULL, NULL, NULL, // 106
    NULL, NULL, NULL, NULL, NULL, // 107
    NULL, NULL, NULL, NULL, NULL, // 108
    NULL, NULL, NULL, NULL, NULL, // 109
    NULL, NULL, NULL, NULL, NULL, // 110
    NULL, NULL, NULL, NULL, NULL, // 111
    NULL, NULL, NULL, NULL, NULL, // 112
    NULL, NULL, NULL, NULL, NULL, // 113
    NULL, NULL, NULL, NULL, NULL, // 114
    NULL, NULL, NULL, NULL, NULL, // 115
    NULL, NULL, NULL, NULL, NULL, // 116
    NULL, NULL, NULL, NULL, NULL, // 117
    NULL, NULL, NULL, NULL, NULL, // 118
    NULL, NULL, NULL, NULL, NULL, // 119
    NULL, NULL, NULL, NULL, NULL, // 120
    NULL, NULL, NULL, NULL, NULL, // 121
    NULL, NULL, NULL, NULL, NULL, // 122
    NULL, NULL, NULL, NULL, NULL, // 123
    NULL, NULL, NULL, NULL, NULL, // 124
    NULL, NULL, NULL, NULL, NULL, // 125
    NULL, NULL, NULL, NULL, NULL, // 126
    NULL, NULL, NULL, NULL, NULL // 127
}; // Opcodes[]
} // namespace GED_MODEL_NS_NONE
