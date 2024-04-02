;=========================== begin_copyright_notice ============================
;
; Copyright (C) 2024 Intel Corporation
;
; SPDX-License-Identifier: MIT
;
;============================ end_copyright_notice =============================
;
; RUN: igc_opt -debugify -GenFDIVEmulation -check-debugify -S < %s 2>&1 | FileCheck %s
; ------------------------------------------------
; GenFDIVEmulation
; ------------------------------------------------

; Debug-info related check
; CHECK-NOT: WARNING
; CHECK: CheckModuleDebugify: PASS

define void @test_fdiv(float %a, float %b) {
; CHECK-LABEL: @test_fdiv(
; CHECK:    [[TMP1:%[A-z0-9]*]] = fdiv float %a, %b
; CHECK:    call void @use.f32(float [[TMP1]])
; CHECK:    ret void
;
  %1 = fdiv float %a, %b
  call void @use.f32(float %1)
  ret void
}

define void @test_fdiv_arcp(float %a, float %b) {
; CHECK-LABEL: @test_fdiv_arcp(
; CHECK:    [[TMP1:%[A-z0-9]*]] = fdiv arcp float 1.000000e+00, [[B:%[A-z0-9]*]]
; CHECK:    [[TMP2:%[A-z0-9]*]] = fmul arcp float [[TMP1]], [[A:%[A-z0-9]*]]
; CHECK:    call void @use.f32(float [[TMP2]])
; CHECK:    ret void
;
  %1 = fdiv arcp float %a, %b
  call void @use.f32(float %1)
  ret void
}

define void @test_fdiv_half(half %a, half %b) {
; CHECK-LABEL: @test_fdiv_half(
; CHECK:    [[TMP1:%[A-z0-9]*]] = fpext half [[B:%[A-z0-9]*]] to float
; CHECK:    [[TMP2:%[A-z0-9]*]] = fdiv float 1.000000e+00, [[TMP1]]
; CHECK:    [[TMP3:%[A-z0-9]*]] = fpext half [[A:%[A-z0-9]*]] to float
; CHECK:    [[TMP4:%[A-z0-9]*]] = fmul float [[TMP2]], [[TMP3]]
; CHECK:    [[TMP5:%[A-z0-9]*]] = fptrunc float [[TMP4]] to half
; CHECK:    call void @use.f16(half [[TMP5]])
; CHECK:    ret void
;
  %1 = fdiv half %a, %b
  call void @use.f16(half %1)
  ret void
}

declare void @use.f32(float)
declare void @use.f16(half)
