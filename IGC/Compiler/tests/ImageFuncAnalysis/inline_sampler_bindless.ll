;=========================== begin_copyright_notice ============================
;
; Copyright (C) 2024 Intel Corporation
;
; SPDX-License-Identifier: MIT
;
;============================ end_copyright_notice =============================

; Check new implicit arg is added for bindless inline sampler.

; RUN: igc_opt -igc-image-func-analysis -S %s -o - | FileCheck %s

source_filename = "inline_sampler_bindless.ll"

define spir_kernel void @test() {
entry:
  %0 = trunc i64 16 to i32
  %1 = call spir_func i32 @__builtin_IB_get_snap_wa_reqd(i32 %0)
  ret void
}

declare spir_func i32 @__builtin_IB_get_snap_wa_reqd(i32)

; CHECK: = !{i32 32, [[ARG_NUM:![0-9]+]]}
; CHECK-NEXT: [[ARG_NUM]] = !{!"explicit_arg_num", i32 16}

!igc.functions = !{!0}
!IGCMetadata = !{!2}

!0 = !{void ()* @test, !1}
!1 = !{}
!2 = !{!"ModuleMD", !3, !6, !7}
!3 = !{!"compOpt", !4, !5}
!4 = !{!"UseBindlessMode", i1 true}
!5 = !{!"UseLegacyBindlessMode", i1 false}
!6 = !{!"UseBindlessImage", i1 true}
!7 = !{!"enableRangeReduce", i1 false}
