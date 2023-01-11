;=========================== begin_copyright_notice ============================
;
; Copyright (C) 2021 Intel Corporation
;
; SPDX-License-Identifier: MIT
;
;============================ end_copyright_notice =============================

; RUN: igc_opt -S --inpuths --platformskl --igc-merge-urb-reads %s | FileCheck %s
;
; Verify that two URBRead calls to the same offset are merged
;
define void @entry(i32 %vertexIndex, i32 %index) #0 {
Label-1:
  %read0 = call <8 x float> @llvm.genx.GenISA.URBRead(i32 %vertexIndex, i32 0)
  %read0.0 = extractelement <8 x float> %read0, i32 0
  %read1 = call <8 x float> @llvm.genx.GenISA.URBRead(i32 %vertexIndex, i32 0)
  %read1.index = extractelement <8 x float> %read1, i32 %index
; CHECK: [[URBREADRESULT:%[a-zA-Z0-9_.%-]+]] = call <8 x float> @llvm.genx.GenISA.URBRead(i32 %vertexIndex, i32 0)
; CHECK-NEXT: [[ARGONE:%[a-zA-Z0-9_.%-]+]] = extractelement <8 x float> [[URBREADRESULT]], i32 0
; CHECK-NEXT: [[ARGTWO:%[a-zA-Z0-9_.%-]+]] = extractelement <8 x float> [[URBREADRESULT]], i32 %index
  %dummy = call float @foo(float %read0.0, float %read1.index)
; CHECK-NEXT: %dummy = call float @foo(float [[ARGONE]], float [[ARGTWO]])
; CHECK-NOT: call <8 x float> @llvm.genx.GenISA.URBRead({{.*}})
  ret void
}

; Function Attrs: nounwind readnone
declare <8 x float> @llvm.genx.GenISA.URBRead(i32, i32) #2
; Function Attrs: nounwind
declare float @foo(float, float) #1

attributes #0 = { "null-pointer-is-valid"="true" }
attributes #1 = { nounwind }
attributes #2 = { nounwind readnone }