;=========================== begin_copyright_notice ============================
;
; Copyright (C) 2024 Intel Corporation
;
; SPDX-License-Identifier: MIT
;
;============================ end_copyright_notice =============================

; Check that SYCL bindless image and sampler are passed via kernel arguments.

; RUN: igc_opt %s -S -o - -igc-conv-ocl-to-common | FileCheck %s

%"struct.sycl::_V1::ext::oneapi::experimental::sampled_image_handle" = type { i64 }
%spirv.Image._void_1_0_0_0_0_0_0 = type opaque

define spir_kernel void @_ZTS14image_addition(%"struct.sycl::_V1::ext::oneapi::experimental::sampled_image_handle"* %imgHandle1, %"struct.sycl::_V1::ext::oneapi::experimental::sampled_image_handle"* %imgHandle2) {
entry:
  %0 = bitcast %"struct.sycl::_V1::ext::oneapi::experimental::sampled_image_handle"* %imgHandle1 to i64*
  %__SYCLKernel.1.copyload = load i64, i64* %0, align 8
  %1 = bitcast %"struct.sycl::_V1::ext::oneapi::experimental::sampled_image_handle"* %imgHandle2 to i64*
  %__SYCLKernel.3.copyload = load i64, i64* %1, align 8
  %astype = inttoptr i64 %__SYCLKernel.1.copyload to %spirv.Image._void_1_0_0_0_0_0_0 addrspace(1)*
  %2 = ptrtoint %spirv.Image._void_1_0_0_0_0_0_0 addrspace(1)* %astype to i64
  %3 = ptrtoint %spirv.Image._void_1_0_0_0_0_0_0 addrspace(1)* %astype to i64
  %conv = trunc i64 %2 to i32
  %sampler_offset = add i64 %3, 128
  %4 = or i64 %sampler_offset, 1
  %conv2 = trunc i64 %4 to i32

; CHECK: [[OR:%.*]] = or i64 %sampler_offset, 1
; CHECK: %bindless_img = inttoptr i64 %__SYCLKernel.1.copyload to float addrspace(393216)*
; CHECK-NEXT: %bindless_sampler = inttoptr i64 [[OR]] to float addrspace(655360)*
; CHECK-NEXT: %call1 = call <4 x float> @llvm.genx.GenISA.sampleLptr.v4f32.f32.p196608f32.p393216f32.p655360f32(float 0.000000e+00, float %CoordX, float %CoordY, float 0.000000e+00, float 0.000000e+00, float addrspace(196608)* undef, float addrspace(393216)* %bindless_img, float addrspace(655360)* %bindless_sampler, i32 0, i32 0, i32 0)

  %call = call spir_func <4 x float> @__builtin_IB_OCL_2d_sample_l(i32 %conv, i32 %conv2, <2 x float> zeroinitializer, float 0.000000e+00)
  %astype3 = inttoptr i64 %__SYCLKernel.3.copyload to %spirv.Image._void_1_0_0_0_0_0_0 addrspace(1)*
  %5 = ptrtoint %spirv.Image._void_1_0_0_0_0_0_0 addrspace(1)* %astype3 to i64
  %6 = ptrtoint %spirv.Image._void_1_0_0_0_0_0_0 addrspace(1)* %astype3 to i64
  %conv3 = trunc i64 %5 to i32
  %sampler_offset23 = add i64 %6, 128
  %7 = or i64 %sampler_offset23, 1
  %conv4 = trunc i64 %7 to i32

; CHECK: [[OR2:%.*]] = or i64 %sampler_offset{{.*}}, 1
; CHECK: [[IMG2:%bindless_img[0-9]+]] = inttoptr i64 %__SYCLKernel.3.copyload to float addrspace(393216)*
; CHECK-NEXT: [[SAMPLER2:%bindless_sampler[0-9]+]] = inttoptr i64 [[OR2]] to float addrspace(655360)*
; CHECK-NEXT: %call26 = call <4 x float> @llvm.genx.GenISA.sampleLptr.v4f32.f32.p196608f32.p393216f32.p655360f32(float 0.000000e+00, float %CoordX2, float %CoordY3, float 0.000000e+00, float 0.000000e+00, float addrspace(196608)* undef, float addrspace(393216)* [[IMG2]], float addrspace(655360)* [[SAMPLER2]], i32 0, i32 0, i32 0)

  %call2 = call spir_func <4 x float> @__builtin_IB_OCL_2d_sample_l(i32 %conv3, i32 %conv4, <2 x float> zeroinitializer, float 0.000000e+00)
  ret void
}

declare spir_func <4 x float> @__builtin_IB_OCL_2d_sample_l(i32, i32, <2 x float>, float)

!igc.functions = !{!0}
!IGCMetadata = !{!2}

!0 = !{void (%"struct.sycl::_V1::ext::oneapi::experimental::sampled_image_handle"*, %"struct.sycl::_V1::ext::oneapi::experimental::sampled_image_handle"*)* @_ZTS14image_addition, !1}
!1 = !{}
!2 = !{!"ModuleMD", !3, !13}
!3 = !{!"FuncMD", !4, !5}
!4 = !{!"FuncMDMap[0]", void (%"struct.sycl::_V1::ext::oneapi::experimental::sampled_image_handle"*, %"struct.sycl::_V1::ext::oneapi::experimental::sampled_image_handle"*)* @_ZTS14image_addition}
!5 = !{!"FuncMDValue[0]", !6}
!6 = !{!"resAllocMD", !7}
!7 = !{!"argAllocMDList", !8, !12}
!8 = !{!"argAllocMDListVec[0]", !9, !10, !11}
!9 = !{!"type", i32 0}
!10 = !{!"extensionType", i32 -1}
!11 = !{!"indexType", i32 -1}
!12 = !{!"argAllocMDListVec[1]", !9, !10, !11}
!13 = !{!"UseBindlessImage", i1 true}
