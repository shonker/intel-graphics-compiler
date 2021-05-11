/*===================== begin_copyright_notice ==================================

Copyright (c) 2017 Intel Corporation

Permission is hereby granted, free of charge, to any person obtaining a
copy of this software and associated documentation files (the
"Software"), to deal in the Software without restriction, including
without limitation the rights to use, copy, modify, merge, publish,
distribute, sublicense, and/or sell copies of the Software, and to
permit persons to whom the Software is furnished to do so, subject to
the following conditions:

The above copyright notice and this permission notice shall be included
in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY
CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,
TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.


======================= end_copyright_notice ==================================*/

/*
 * !!! DO NOT EDIT THIS FILE !!!
 *
 * This file was automagically crafted by GED's model parser.
 */


#ifndef GED_MODEL_8__1__H
#define GED_MODEL_8__1__H

#include "common/ged_ins_decoding_table.h"
#include "common/ged_compact_mapping_table.h"

namespace GED_MODEL_NS_8_1
{

/*!
 * This table maps every possible opcode value (even for non-existing opcodes) to its respective top level decoding, encoding
 * restrictions and mapping tables (where applicable). Tables that are not supported in this model (either no compaction, or opcodes
 * which are not supported at all) are mapped to NULL pointers.
 */
extern OpcodeTables Opcodes[128];
} // namespace GED_MODEL_NS_8_1
#endif // GED_MODEL_8__1__H
