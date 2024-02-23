; LLVM IR generated by Intel SYCL Clang compiler (https://github.com/intel/llvm)

; SYCL source code for this test:
; void numbanks_stat(int a) {
;   static const int a_one [[intelfpga::numbanks(2)]] = 1;
;   int a_two = a_one + a;
; }
;
; void memory_stat(char b) {
;   static const char b_one [[intelfpga::memory("MLAB")]] = 2;
;   char b_two = b_one + b;
; }
;
; void annotate_stat(int c) {
;   static const int c_one [[clang::annotate("foobarbaz")]] = 3;
;   int c_two = c_one + c;
; }
;
; void force_pow2_depth_stat(int fp2d) {
;   static const int fp2d_stat [[intelfpga::force_pow2_depth(0)]] = 4;
;   int fp2d_loc = fp2d_stat + fp2d;
; }
;
; template <typename name, typename Func>
; __attribute__((sycl_kernel)) void kernel_single_task(Func kernelFunc) {
;   kernelFunc();
; }
;
; int main() {
;   kernel_single_task<class kernel_function>([]() {
;     numbanks_stat(128);
;     memory_stat(42);
;     annotate_stat(16);
;     force_pow2_depth_stat(25);
;   });
;   return 0;
; }

; LLVM IR compilation command:
; clang -cc1 -triple spir -disable-llvm-passes -fsycl-is-device -emit-llvm intel-fpga-local-var.cpp

; UNSUPPORTED: system-windows
; REQUIRES: llvm-spirv, regkeys, dg2-supported

; RUN: llvm-as %s -o %t.bc
; RUN: llvm-spirv %t.bc --spirv-ext=+SPV_INTEL_fpga_memory_attributes -o %t.spv
; RUN: ocloc compile -spirv_input -file %t.spv -device dg2 -options " -igc_opts 'ShaderDumpTranslationOnly=1'" 2>&1 | FileCheck %s --check-prefixes=CHECK-LLVM

target datalayout = "e-p:32:32-i64:64-v16:16-v24:32-v32:32-v48:64-v96:128-v192:256-v256:256-v512:512-v1024:1024"
target triple = "spir"

%class.anon = type { i8 }

; CHECK-LLVM: [[STR_NMB_STAT:@[0-9_.]+]] = {{.*}}{memory:DEFAULT}{numbanks:2}
; CHECK-LLVM: [[STR_MEM_STAT:@[0-9_.]+]] = {{.*}}{memory:MLAB}
; CHECK-LLVM: [[STR_ANN_STAT:@[0-9_.]+]] = {{.*}}foobarbaz
; CHECK-LLVM: [[STR_FP2_STAT:@[0-9_.]+]] = {{.*}}{memory:DEFAULT}{force_pow2_depth:0}
; CHECK-LLVM: @llvm.global.annotations
; CHECK-LLVM-SAME: _ZZ13numbanks_statiE5a_one{{.*}}[[STR_NMB_STAT]]{{.*}}_ZZ11memory_statcE5b_one{{.*}}[[STR_MEM_STAT]]{{.*}}_ZZ13annotate_statiE5c_one{{.*}}[[STR_ANN_STAT]]{{.*}}_ZZ21force_pow2_depth_statiE9fp2d_stat{{.*}}[[STR_FP2_STAT]]
@_ZZ13numbanks_statiE5a_one = internal addrspace(1) constant i32 1, align 4
@.str = private unnamed_addr constant [41 x i8] c"{memory:DEFAULT}{sizeinfo:4}{numbanks:2}\00", section "llvm.metadata"
@.str.1 = private unnamed_addr constant [28 x i8] c"intel-fpga-local-static.cpp\00", section "llvm.metadata"
@_ZZ11memory_statcE5b_one = internal addrspace(1) constant i8 2, align 1
@.str.2 = private unnamed_addr constant [26 x i8] c"{memory:MLAB}{sizeinfo:1}\00", section "llvm.metadata"
@_ZZ13annotate_statiE5c_one = internal addrspace(1) constant i32 3, align 4
@.str.3 = private unnamed_addr constant [10 x i8] c"foobarbaz\00", section "llvm.metadata"
@_ZZ21force_pow2_depth_statiE9fp2d_stat = internal addrspace(1) constant i32 4, align 4
@.str.4 = private unnamed_addr constant [49 x i8] c"{memory:DEFAULT}{sizeinfo:4}{force_pow2_depth:0}\00", section "llvm.metadata"
@llvm.global.annotations = appending global [4 x { i8*, i8*, i8*, i32 }] [{ i8*, i8*, i8*, i32 } { i8* addrspacecast (i8 addrspace(1)* bitcast (i32 addrspace(1)* @_ZZ13numbanks_statiE5a_one to i8 addrspace(1)*) to i8*), i8* getelementptr inbounds ([41 x i8], [41 x i8]* @.str, i32 0, i32 0), i8* getelementptr inbounds ([28 x i8], [28 x i8]* @.str.1, i32 0, i32 0), i32 2 }, { i8*, i8*, i8*, i32 } { i8* addrspacecast (i8 addrspace(1)* @_ZZ11memory_statcE5b_one to i8*), i8* getelementptr inbounds ([26 x i8], [26 x i8]* @.str.2, i32 0, i32 0), i8* getelementptr inbounds ([28 x i8], [28 x i8]* @.str.1, i32 0, i32 0), i32 7 }, { i8*, i8*, i8*, i32 } { i8* addrspacecast (i8 addrspace(1)* bitcast (i32 addrspace(1)* @_ZZ13annotate_statiE5c_one to i8 addrspace(1)*) to i8*), i8* getelementptr inbounds ([10 x i8], [10 x i8]* @.str.3, i32 0, i32 0), i8* getelementptr inbounds ([28 x i8], [28 x i8]* @.str.1, i32 0, i32 0), i32 12 }, { i8*, i8*, i8*, i32 } { i8* addrspacecast (i8 addrspace(1)* bitcast (i32 addrspace(1)* @_ZZ21force_pow2_depth_statiE9fp2d_stat to i8 addrspace(1)*) to i8*), i8* getelementptr inbounds ([49 x i8], [49 x i8]* @.str.4, i32 0, i32 0), i8* getelementptr inbounds ([28 x i8], [28 x i8]* @.str.1, i32 0, i32 0), i32 17 }], section "llvm.metadata"

; Function Attrs: norecurse nounwind
define spir_kernel void @_ZTSZ4mainE15kernel_function() #0 !kernel_arg_addr_space !4 !kernel_arg_access_qual !4 !kernel_arg_type !4 !kernel_arg_base_type !4 !kernel_arg_type_qual !4 {
entry:
  %0 = alloca %class.anon, align 1
  %1 = bitcast %class.anon* %0 to i8*
  call void @llvm.lifetime.start.p0i8(i64 1, i8* %1) #4
  call spir_func void @"_ZZ4mainENK3$_0clEv"(%class.anon* %0)
  %2 = bitcast %class.anon* %0 to i8*
  call void @llvm.lifetime.end.p0i8(i64 1, i8* %2) #4
  ret void
}

; Function Attrs: argmemonly nounwind willreturn
declare void @llvm.lifetime.start.p0i8(i64 immarg, i8* nocapture) #1

; Function Attrs: inlinehint norecurse nounwind
define internal spir_func void @"_ZZ4mainENK3$_0clEv"(%class.anon* %this) #2 align 2 {
entry:
  %this.addr = alloca %class.anon*, align 4
  store %class.anon* %this, %class.anon** %this.addr, align 4, !tbaa !5
  %this1 = load %class.anon*, %class.anon** %this.addr, align 4
  call spir_func void @_Z13numbanks_stati(i32 128)
  call spir_func void @_Z11memory_statc(i8 signext 42)
  call spir_func void @_Z13annotate_stati(i32 16)
  call spir_func void @_Z21force_pow2_depth_stati(i32 25)
  ret void
}

; Function Attrs: argmemonly nounwind willreturn
declare void @llvm.lifetime.end.p0i8(i64 immarg, i8* nocapture) #1

; CHECK-LLVM: void @_Z13numbanks_stati(i32 %a)
; Function Attrs: norecurse nounwind
define spir_func void @_Z13numbanks_stati(i32 %a) #3 {
entry:
  %a.addr = alloca i32, align 4
  %a_two = alloca i32, align 4
  store i32 %a, i32* %a.addr, align 4, !tbaa !9
  %0 = bitcast i32* %a_two to i8*
  call void @llvm.lifetime.start.p0i8(i64 4, i8* %0) #4
  %1 = load i32, i32* %a.addr, align 4, !tbaa !9
  %add = add nsw i32 1, %1
  store i32 %add, i32* %a_two, align 4, !tbaa !9
  %2 = bitcast i32* %a_two to i8*
  call void @llvm.lifetime.end.p0i8(i64 4, i8* %2) #4
  ret void
}

; CHECK-LLVM: void @_Z11memory_statc(i8 signext %b)
; Function Attrs: norecurse nounwind
define spir_func void @_Z11memory_statc(i8 signext %b) #3 {
entry:
  %b.addr = alloca i8, align 1
  %b_two = alloca i8, align 1
  store i8 %b, i8* %b.addr, align 1, !tbaa !11
  call void @llvm.lifetime.start.p0i8(i64 1, i8* %b_two) #4
  %0 = load i8, i8* %b.addr, align 1, !tbaa !11
  %conv = sext i8 %0 to i32
  %add = add nsw i32 2, %conv
  %conv1 = trunc i32 %add to i8
  store i8 %conv1, i8* %b_two, align 1, !tbaa !11
  call void @llvm.lifetime.end.p0i8(i64 1, i8* %b_two) #4
  ret void
}

; CHECK-LLVM: void @_Z13annotate_stati(i32 %c)
; Function Attrs: norecurse nounwind
define spir_func void @_Z13annotate_stati(i32 %c) #3 {
entry:
  %c.addr = alloca i32, align 4
  %c_two = alloca i32, align 4
  store i32 %c, i32* %c.addr, align 4, !tbaa !9
  %0 = bitcast i32* %c_two to i8*
  call void @llvm.lifetime.start.p0i8(i64 4, i8* %0) #4
  %1 = load i32, i32* %c.addr, align 4, !tbaa !9
  %add = add nsw i32 3, %1
  store i32 %add, i32* %c_two, align 4, !tbaa !9
  %2 = bitcast i32* %c_two to i8*
  call void @llvm.lifetime.end.p0i8(i64 4, i8* %2) #4
  ret void
}

; CHECK-LLVM: void @_Z21force_pow2_depth_stati(i32 %fp2d)
; Function Attrs: norecurse nounwind
define spir_func void @_Z21force_pow2_depth_stati(i32 %fp2d) #3 {
entry:
  %fp2d.addr = alloca i32, align 4
  %fp2d_loc = alloca i32, align 4
  store i32 %fp2d, i32* %fp2d.addr, align 4, !tbaa !9
  %0 = bitcast i32* %fp2d_loc to i8*
  call void @llvm.lifetime.start.p0i8(i64 4, i8* %0) #4
  %1 = load i32, i32* %fp2d.addr, align 4, !tbaa !9
  %add = add nsw i32 4, %1
  store i32 %add, i32* %fp2d_loc, align 4, !tbaa !9
  %2 = bitcast i32* %fp2d_loc to i8*
  call void @llvm.lifetime.end.p0i8(i64 4, i8* %2) #4
  ret void
}

attributes #0 = { norecurse nounwind "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "frame-pointer"="none" "less-precise-fpmad"="false" "min-legal-vector-width"="0" "no-infs-fp-math"="false" "no-jump-tables"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "sycl-module-id"="intel-fpga-local-static.cpp" "uniform-work-group-size"="true" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { argmemonly nounwind willreturn }
attributes #2 = { inlinehint norecurse nounwind "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "frame-pointer"="none" "less-precise-fpmad"="false" "min-legal-vector-width"="0" "no-infs-fp-math"="false" "no-jump-tables"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #3 = { norecurse nounwind "correctly-rounded-divide-sqrt-fp-math"="false" "disable-tail-calls"="false" "frame-pointer"="none" "less-precise-fpmad"="false" "min-legal-vector-width"="0" "no-infs-fp-math"="false" "no-jump-tables"="false" "no-nans-fp-math"="false" "no-signed-zeros-fp-math"="false" "no-trapping-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #4 = { nounwind }

!llvm.module.flags = !{!0}
!opencl.spir.version = !{!1}
!spirv.Source = !{!2}
!llvm.ident = !{!3}

!0 = !{i32 1, !"wchar_size", i32 4}
!1 = !{i32 1, i32 2}
!2 = !{i32 4, i32 100000}
!3 = !{!"clang version 11.0.0"}
!4 = !{}
!5 = !{!6, !6, i64 0}
!6 = !{!"any pointer", !7, i64 0}
!7 = !{!"omnipotent char", !8, i64 0}
!8 = !{!"Simple C++ TBAA"}
!9 = !{!10, !10, i64 0}
!10 = !{!"int", !7, i64 0}
!11 = !{!7, !7, i64 0}
