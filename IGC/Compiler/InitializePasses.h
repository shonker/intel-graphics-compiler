/*========================== begin_copyright_notice ============================

Copyright (C) 2017-2024 Intel Corporation

SPDX-License-Identifier: MIT

============================= end_copyright_notice ===========================*/

#pragma once

#include "llvm/Config/llvm-config.h"

namespace llvm {
    class PassRegistry;
}

// The following declarations are placed according to alphabetic order for simplicity
void initializeAddImplicitArgsPass(llvm::PassRegistry&);
void initializeAddressSpaceAliasAnalysisPass(llvm::PassRegistry&);
void initializeAnnotateUniformAllocasPass(llvm::PassRegistry&);
void initializeAtomicOptPassPass(llvm::PassRegistry&);
void initializeAggregateArgumentsAnalysisPass(llvm::PassRegistry&);
void initializeAlignmentAnalysisPass(llvm::PassRegistry&);
void initializePreBIImportAnalysisPass(llvm::PassRegistry&);
void initializeBIImportPass(llvm::PassRegistry&);
void initializeBlockCoalescingPass(llvm::PassRegistry&);
void initializeBlockMemOpAddrScalarizationPassPass(llvm::PassRegistry&);
void initializeBreakConstantExprPass(llvm::PassRegistry&);
void initializeBuiltinCallGraphAnalysisPass(llvm::PassRegistry&);
void initializeBuiltinsConverterPass(llvm::PassRegistry&);
void initializeCastToGASAnalysisPass(llvm::PassRegistry&);
void initializeCastToGASInfoPass(llvm::PassRegistry&);
void initializeCastToGASInfoWrapperPass(llvm::PassRegistry&);
void initializeClearTessFactorsPass(llvm::PassRegistry&);
void initializeCleanPHINodePass(llvm::PassRegistry&);
void initializeCoalescingEnginePass(llvm::PassRegistry&);
void initializeCodeGenContextWrapperPass(llvm::PassRegistry&);
void initializeCodeGenPatternMatchPass(llvm::PassRegistry&);
void initializeConstantCoalescingPass(llvm::PassRegistry&);
void initializeCorrectlyRoundedDivSqrtPass(llvm::PassRegistry&);
void initializeCrossPhaseConstPropPass(llvm::PassRegistry&);
void initializeCustomLoopVersioningPass(llvm::PassRegistry&);
void initializeCustomSafeOptPassPass(llvm::PassRegistry&);
void initializeCustomUnsafeOptPassPass(llvm::PassRegistry&);
void initializeHoistFMulInLoopPassPass(llvm::PassRegistry&);
void initializeHandleFRemInstructionsPass(llvm::PassRegistry&);
void initializeDeSSAPass(llvm::PassRegistry&);
void initializeDetectCSWalkOrderPass(llvm::PassRegistry&);
void initializeDeviceEnqueueFuncsAnalysisPass(llvm::PassRegistry&);
void initializeDeviceEnqueueFuncsResolutionPass(llvm::PassRegistry&);
void initializeDisableLoopUnrollOnRetryPass(llvm::PassRegistry&);
void initializeDpasScanPass(llvm::PassRegistry&);
void initializeDynamicTextureFoldingPass(llvm::PassRegistry&);
void initializeEarlyOutPatternsPass(llvm::PassRegistry&);
void initializeExtensionArgAnalysisPass(llvm::PassRegistry&);
void initializeExtensionFuncsAnalysisPass(llvm::PassRegistry&);
void initializeExtensionFuncsResolutionPass(llvm::PassRegistry&);
void initializeErrorCheckPass(llvm::PassRegistry&);
void initializePoisonFP64KernelsPass(llvm::PassRegistry&);
void initializeReduceOptPassPass(llvm::PassRegistry&);
void initializeTypesLegalizationPassPass(llvm::PassRegistry&);
void initializeGASResolvingPass(llvm::PassRegistry&);
void initializeGASRetValuePropagatorPass(llvm::PassRegistry&);
void initializeStaticGASResolutionPass(llvm::PassRegistry&);
void initializeLowerGPCallArgPass(llvm::PassRegistry&);
void initializeGenerateBlockMemOpsPassPass(llvm::PassRegistry&);
void initializeGenericAddressAnalysisPass(llvm::PassRegistry&);
void initializeGenericAddressDynamicResolutionPass(llvm::PassRegistry&);
void initializeGenFDIVEmulationPass(llvm::PassRegistry&);
void initializeGenIRLoweringPass(llvm::PassRegistry&);
void initializeGEPLoopStrengthReductionPass(llvm::PassRegistry&);
void initializeGEPLoweringPass(llvm::PassRegistry&);
void initializeGenSpecificPatternPass(llvm::PassRegistry&);
void initializeGreedyLiveRangeReductionPass(llvm::PassRegistry&);
void initializeClampICBOOBAccessPass(llvm::PassRegistry&);
void initializeIGCIndirectICBPropagaionPass(llvm::PassRegistry&);
void initializeGenUpdateCBPass(llvm::PassRegistry&);
void initializeGenStrengthReductionPass(llvm::PassRegistry&);
void initializeGenOptLegalizerPass(llvm::PassRegistry&);
void initializeNanHandlingPass(llvm::PassRegistry&);
void initializeFixResourcePtrPass(llvm::PassRegistry&);
void initializeFlattenSmallSwitchPass(llvm::PassRegistry&);
void initializeSplitIndirectEEtoSelPass(llvm::PassRegistry&);
void initializeGenXFunctionGroupAnalysisPass(llvm::PassRegistry&);
void initializeGenXCodeGenModulePass(llvm::PassRegistry&);
void initializeEstimateFunctionSizePass(llvm::PassRegistry&);
void initializeSubroutineInlinerPass(llvm::PassRegistry&);
void initializeHandleLoadStoreInstructionsPass(llvm::PassRegistry&);
void initializeIGCConstPropPass(llvm::PassRegistry&);
void initializeJointMatrixFuncsResolutionPassPass(llvm::PassRegistry&);
void initializeGatingSimilarSamplesPass(llvm::PassRegistry&);
void initializeInsertGenericPtrArithmeticMetadataPass(llvm::PassRegistry&);
void initializeImageFuncResolutionPass(llvm::PassRegistry&);
void initializeImageFuncsAnalysisPass(llvm::PassRegistry&);
void initializeImage3dToImage2darrayPass(llvm::PassRegistry&);
void initializeInlineLocalsResolutionPass(llvm::PassRegistry&);
void initializeInlineUnmaskedFunctionsPassPass(llvm::PassRegistry&);
void initializeInsertBranchOptPass(llvm::PassRegistry&);
void initializeHFOptPass(llvm::PassRegistry&);
void initializeLayoutPass(llvm::PassRegistry&);
void initializeLdShrinkPass(llvm::PassRegistry&);
void initializeLegalizationPass(llvm::PassRegistry&);
void initializeLegalizeResourcePointerPass(llvm::PassRegistry&);
void initializeLegalizeFunctionSignaturesPass(llvm::PassRegistry&);
void initializeLiveVarsAnalysisPass(llvm::PassRegistry&);
void initializeLogicalAndToBranchPass(llvm::PassRegistry&);
void initializeLowerByValAttributePass(llvm::PassRegistry&);
void initializeLowerGEPForPrivMemPass(llvm::PassRegistry&);
void initializeLowerImplicitArgIntrinsicsPass(llvm::PassRegistry&);
void initializeLowPrecisionOptPass(llvm::PassRegistry&);
void initializeMarkReadOnlyLoadPass(llvm::PassRegistry&);
void initializeMetaDataUtilsWrapperInitializerPass(llvm::PassRegistry&);
void initializeMetaDataUtilsWrapperPass(llvm::PassRegistry&);
void initializeOpenCLPrintfAnalysisPass(llvm::PassRegistry&);
void initializeOpenCLPrintfResolutionPass(llvm::PassRegistry&);
void initializePeepholeTypeLegalizerPass(llvm::PassRegistry&);
void initializePositionDepAnalysisPass(llvm::PassRegistry&);
void initializePrivateMemoryResolutionPass(llvm::PassRegistry&);
void initializePrivateMemoryToSLMPass(llvm::PassRegistry&);
void initializePrivateMemoryUsageAnalysisPass(llvm::PassRegistry&);
void initializeProcessFuncAttributesPass(llvm::PassRegistry&);
void initializeProcessBuiltinMetaDataPass(llvm::PassRegistry&);
void initializeInsertDummyKernelForSymbolTablePass(llvm::PassRegistry&);
void initializeProgramScopeConstantAnalysisPass(llvm::PassRegistry&);
void initializeProgramScopeConstantResolutionPass(llvm::PassRegistry&);
void initializePromoteResourceToDirectASPass(llvm::PassRegistry&);
void initializePromoteStatelessToBindlessPass(llvm::PassRegistry&);
void initializePruneUnusedArgumentsPass(llvm::PassRegistry&);
void initializePullConstantHeuristicsPass(llvm::PassRegistry&);
void initializeScalarizerCodeGenPass(llvm::PassRegistry&);
void initializeReduceLocalPointersPass(llvm::PassRegistry&);
void initializeReplaceUnsupportedIntrinsicsPass(llvm::PassRegistry&);
void initializePreCompiledFuncImportPass(llvm::PassRegistry&);
void initializePurgeMetaDataUtilsPass(llvm::PassRegistry&);
void initializeRemoveNonPositionOutputPass(llvm::PassRegistry&);
void initializeResolveAggregateArgumentsPass(llvm::PassRegistry&);
void initializeResolveOCLAtomicsPass(llvm::PassRegistry&);
void initializeResolveSampledImageBuiltinsPass(llvm::PassRegistry&);
void initializeResourceAllocatorPass(llvm::PassRegistry&);
void initializeRewriteLocalSizePass(llvm::PassRegistry&);
void initializeFPRoundingModeCoalescingPass(llvm::PassRegistry&);
void initializeRuntimeValueLegalizationPassPass(llvm::PassRegistry&);
void initializeRuntimeValueVectorExtractPassPass(llvm::PassRegistry&);
void initializeSampleCmpToDiscardPass(llvm::PassRegistry&);
void initializeSamplerPerfOptPassPass(llvm::PassRegistry&);
void initializeScalarArgAsPointerAnalysisPass(llvm::PassRegistry&);
void initializeScalarizeFunctionPass(llvm::PassRegistry&);
void initializeSimd32ProfitabilityAnalysisPass(llvm::PassRegistry&);
void initializeSetFastMathFlagsPass(llvm::PassRegistry&);
void initializeSPIRMetaDataTranslationPass(llvm::PassRegistry&);
void initializeStatelessToStatefulPass(llvm::PassRegistry&);
void initializeSubGroupFuncsResolutionPass(llvm::PassRegistry&);
void initializeTransformUnmaskedFunctionsPassPass(llvm::PassRegistry&);
void initializeIndirectCallOptimizationPass(llvm::PassRegistry&);
void initializePromoteInt8TypePass(llvm::PassRegistry&);
void initializeDpasFuncsResolutionPass(llvm::PassRegistry&);
void initializeLSCFuncsResolutionPass(llvm::PassRegistry&);
void initializeConvertMSAAPayloadTo16BitPass(llvm::PassRegistry&);
void initializeInterfaceOptimizationPass(llvm::PassRegistry&);
void initializeMSAAInsertDiscardPass(llvm::PassRegistry&);
void initializeResolveOCLRaytracingBuiltinsPass(llvm::PassRegistry&);
void initializeRayTracingIntrinsicLoweringPassPass(llvm::PassRegistry&);
void initializePromoteToScratchPassPass(llvm::PassRegistry&);
void initializePrepareLoadsStoresPassPass(llvm::PassRegistry&);
void initializeRayTracingPredicatedStackIDReleasePassPass(llvm::PassRegistry&);
void initializeEarlyRematPassPass(llvm::PassRegistry&);
void initializeLateRematPassPass(llvm::PassRegistry&);
void initializeRayInfoCSEPassPass(llvm::PassRegistry&);
void initializeLowerIntersectionAnyHitPass(llvm::PassRegistry&);
void initializeLSCCacheOptimizationPassPass(llvm::PassRegistry&);
void initializeBindlessKernelArgLoweringPassPass(llvm::PassRegistry&);
void initializeSplitPreparePassPass(llvm::PassRegistry&);
void initializeSplitAsyncPassPass(llvm::PassRegistry&);
void initializePrepareSyncRTHelpersPass(llvm::PassRegistry&);
void initializeSyncHandlingPassPass(llvm::PassRegistry&);
void initializeBindlessInlineDataPassPass(llvm::PassRegistry&);
void initializeRayTracingConstantCoalescingPassPass(llvm::PassRegistry&);
void initializeStackIDSchedulingPassPass(llvm::PassRegistry&);
void initializeRayTracingFinalizePassPass(llvm::PassRegistry&);
void initializePayloadSinkingPassPass(llvm::PassRegistry&);
void initializeDeadPayloadStoreEliminationPassPass(llvm::PassRegistry&);
void initializeInlineMergeCallsPassPass(llvm::PassRegistry&);
void initializeLowerGlobalRootSignaturePassPass(llvm::PassRegistry&);
void initializeRayTracingPrintfPostProcessPass(llvm::PassRegistry&);
void initializeRayTracingIntrinsicAnalysisPass(llvm::PassRegistry&);
void initializeRayTracingIntrinsicResolutionPass(llvm::PassRegistry&);
void initializeTraceRayInlinePrepPassPass(llvm::PassRegistry&);
void initializeTraceRayInlineLatencySchedulerPassPass(llvm::PassRegistry&);
void initializeTraceRayInlineLoweringPassPass(llvm::PassRegistry&);
void initializeRayTracingAddressSpaceAAWrapperPassPass(llvm::PassRegistry&);
void initializeRayTracingMemDSEPassPass(llvm::PassRegistry&);
void initializeOverrideTMaxPassPass(llvm::PassRegistry&);
void initializeTranslateToProgrammableOffsetsPassPass(llvm::PassRegistry&);
void initializeDynamicRayManagementPassPass(llvm::PassRegistry&);
void initializeVectorBitCastOptPass(llvm::PassRegistry&);
void initializeVectorPreProcessPass(llvm::PassRegistry&);
void initializeVectorProcessPass(llvm::PassRegistry&);
void initializeVerificationPassPass(llvm::PassRegistry&);
void initializeWGFuncResolutionPass(llvm::PassRegistry&);
void initializeWIAnalysisPass(llvm::PassRegistry&);
void initializeWIFuncResolutionPass(llvm::PassRegistry&);
void initializeWIFuncsAnalysisPass(llvm::PassRegistry&);
void initializeWorkaroundAnalysisPass(llvm::PassRegistry&);
void initializeCPSMSAAOMaskWAPass(llvm::PassRegistry&);
void initializeWAFMinFMaxPass(llvm::PassRegistry&);
void initializePingPongTexturesAnalysisPass(llvm::PassRegistry&);
void initializePingPongTexturesOptPass(llvm::PassRegistry&);
void initializeSampleMultiversioningPass(llvm::PassRegistry&);
void initializeLoopCanonicalizationPass(llvm::PassRegistry&);
void initializeLoopSplitWidePHIsPass(llvm::PassRegistry&);
void initializeLoopHoistConstantPass(llvm::PassRegistry&);
void initializeSpecialCasesDisableLICMPass(llvm::PassRegistry&);
void initializeMemOptPass(llvm::PassRegistry&);
void initializeLdStCombinePass(llvm::PassRegistry&);
void initializeBIFTransformsPass(llvm::PassRegistry&);
void initializeThreadCombiningPass(llvm::PassRegistry&);
void initializeRegisterPressureEstimatePass(llvm::PassRegistry&);
void initializeLivenessAnalysisPass(llvm::PassRegistry&);
void initializeRegisterEstimatorPass(llvm::PassRegistry&);
void initializeVariableReuseAnalysisPass(llvm::PassRegistry &);
void initializeResourceLoopAnalysisPass(llvm::PassRegistry &);
void initializeTranslationTablePass(llvm::PassRegistry&);
void initializeTrivialLocalMemoryOpsEliminationPass(llvm::PassRegistry&);
void initializeSLMConstPropPass(llvm::PassRegistry&);
void initializeBlendToDiscardPass(llvm::PassRegistry&);
void initializeCheckInstrTypesPass(llvm::PassRegistry&);
void initializeInstrStatisticPass(llvm::PassRegistry&);
void initializeHalfPromotionPass(llvm::PassRegistry&);
void initializeCapLoopIterationsPass(llvm::PassRegistry&);
void initializeFCmpPaternMatchPass(llvm::PassRegistry&);
void initializeCodeAssumptionPass(llvm::PassRegistry&);
void initializeIGCInstructionCombiningPassPass(llvm::PassRegistry&);
void initializeIntDivConstantReductionPass(llvm::PassRegistry&);
void initializeIntDivRemCombinePass(llvm::PassRegistry&);
void initializeGenRotatePass(llvm::PassRegistry&);
void initializeSynchronizationObjectCoalescingPass(llvm::PassRegistry&);
void initializeMoveStaticAllocasPass(llvm::PassRegistry&);
void initializeNamedBarriersResolutionPass(llvm::PassRegistry&);
void initializeUndefinedReferencesPassPass(llvm::PassRegistry&);
void initializeUnreachableHandlingPass(llvm::PassRegistry&);
void initializeBreakdownIntrinsicPassPass(llvm::PassRegistry&);
void initializeCatchAllLineNumberPass(llvm::PassRegistry&);
void initializeDebugInfoPassPass(llvm::PassRegistry&);
void initializeIGCLivenessAnalysisPass(llvm::PassRegistry&);
void initializeIGCRegisterPressurePrinterPass(llvm::PassRegistry&);
void initializeIGCFunctionExternalRegPressureAnalysisPass(llvm::PassRegistry&);
void initializePromoteConstantStructsPass(llvm::PassRegistry&);
void initializeLowerInvokeSIMDPass(llvm::PassRegistry&);
void initializeRemoveCodeAssumptionsPass(llvm::PassRegistry&);
void initializePromoteBoolsPass(llvm::PassRegistry&);
void initializeResolveConstExprCallsPass(llvm::PassRegistry&);
void initializeHandleSpirvDecorationMetadataPass(llvm::PassRegistry&);
void initializeNontemporalLoadsAndStoresInAssertPass(llvm::PassRegistry&);
void initializeHandleDevicelibAssertPass(llvm::PassRegistry&);
void initializeStackOverflowDetectionPassPass(llvm::PassRegistry &);
void initializeBufferBoundsCheckingPass(llvm::PassRegistry&);
void initializeBufferBoundsCheckingPatcherPass(llvm::PassRegistry&);
void initializeBfloatFuncsResolutionPass(llvm::PassRegistry &);
