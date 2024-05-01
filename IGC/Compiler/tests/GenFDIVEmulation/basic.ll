;=========================== begin_copyright_notice ============================
;
; Copyright (C) 2022 Intel Corporation
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
  ; CHECK:    [[CMP:%[A-z0-9]+]] = fcmp oeq float [[A:%[A-z0-9]*]], [[B:%[A-z0-9]*]]
  ; CHECK:    [[TMP1:%[A-z0-9]+]] = bitcast float [[B]] to i32
  ; CHECK:    [[TMP2:%[A-z0-9]+]] = and i32 [[TMP1]], 2139095040
  ; CHECK:    [[TMP4:%[A-z0-9]+]] = and i32 [[TMP1]], 8388607
  ; CHECK:    [[TMP3:%[A-z0-9]+]] = icmp eq i32 [[TMP2]], 0
  ; CHECK:    [[TMP6:%[A-z0-9]+]] = icmp eq i32 [[TMP4]], 0
  ; CHECK:    [[TMP7:%[A-z0-9]+]] = or i1 [[TMP3]], [[TMP6]]
  ; CHECK:    [[TMP8:%[A-z0-9]+]] = xor i1 [[TMP7]], true
  ; CHECK:    [[TMP9:%[A-z0-9]+]] = icmp eq i32 [[TMP2]], 0
  ; CHECK:    [[TMP10:%[A-z0-9]+]] = select i1 [[TMP9]], float 0x41F0000000000000, float 1.000000e+00
  ; CHECK:    [[TMP11:%[A-z0-9]+]] = icmp uge i32 [[TMP2]], 1677721600
  ; CHECK:    [[TMP12:%[A-z0-9]+]] = select i1 [[TMP11]], float 0x3DF0000000000000, float [[TMP10]]
  ; CHECK:    [[TMP13:%[A-z0-9]+]] = fmul float [[B]], [[TMP12]]
  ; CHECK:    [[TMP14:%[A-z0-9]+]] = fdiv float 1.000000e+00, [[TMP13]]
  ; CHECK:    [[TMP15:%[A-z0-9]+]] = fmul float [[TMP14]], [[A]]
  ; CHECK:    [[TMP16:%[A-z0-9]+]] = fmul float [[TMP15]], [[TMP12]]
  ; CHECK:    [[TMP17:%[A-z0-9]+]] = and i1 [[CMP]], [[TMP8]]
  ; CHECK:    [[TMP18:%[A-z0-9]+]] = select i1 [[TMP17]], float 1.000000e+00, float [[TMP16]]
  ; CHECK:    call void @use.f32(float [[TMP18]])
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
