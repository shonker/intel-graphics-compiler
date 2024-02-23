/*========================== begin_copyright_notice ============================

Copyright (C) 2023 Intel Corporation

SPDX-License-Identifier: MIT

============================= end_copyright_notice ===========================*/

// This test verifies if the compilation of a kernel with very long name doesn't crash
// REQUIRES: dg2-supported
// RUN: ocloc compile -file %s -device dg2

int fact(int n) {
  return n < 2 ? 1 : n*fact(n-1);
}

kernel void verylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelnameverylongkernelname(global int* out, int n)
{
    out[0] = fact(n);
}
