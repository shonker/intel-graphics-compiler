/*========================== begin_copyright_notice ============================

Copyright (C) 2017-2021 Intel Corporation

SPDX-License-Identifier: MIT

============================= end_copyright_notice ===========================*/

/*
 * !!! DO NOT EDIT THIS FILE !!!
 *
 * This file was automagically crafted by GED's model parser.
 */


#ifndef GED_ENUM_INTERPRETERS_H
#define GED_ENUM_INTERPRETERS_H

#include "common/ged_types_internal.h"

/*!
 * This is an enumeration of all the reinterpreted string enumerations available for queries by GED. It is a consolidated list of all
 * interpreters from all supported models.
 *
 * @note        Some interpreters may not be available on all models.
 */
typedef enum
{
    GED_REINTERPRETED_ENUM_OperandWidth,       ///< The operand width, based on its data type.

    /*!
     * The numeric type in which to display an operand, based on its data type. Relevant only for immediate operands.
     */
    GED_REINTERPRETED_ENUM_OperandNumericType,

    /*!
     *
     *                 Nibble Control. This field is used in some instructions along with QtrCtrl. See the description of
     * ExecMaskOffsetCtrl.
     *                 NibCtrl is only used for SIMD4 instructions.
     *
     */
    GED_REINTERPRETED_ENUM_NibCtrl
} GED_REINTERPRETED_ENUM;
extern const ged_unsigned_table_t EnumInterpretersTable0[3];
extern const ged_unsigned_table_t EnumInterpretersTable1[3];
extern const ged_unsigned_table_t EnumInterpretersTable2[3];
extern const ged_unsigned_table_t EnumInterpretersTable3[3];
extern const ged_unsigned_table_t EnumInterpretersTable4[3];
extern const ged_unsigned_table_t EnumInterpretersTable5[3];
extern const ged_unsigned_table_t EnumInterpretersTable6[3];
extern const ged_unsigned_table_t EnumInterpretersTable7[3];
#endif // GED_ENUM_INTERPRETERS_H
