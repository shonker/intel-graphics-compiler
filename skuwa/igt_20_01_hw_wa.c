/*========================== begin_copyright_notice ============================

Copyright (C) 2022-2024 Intel Corporation

SPDX-License-Identifier: MIT

============================= end_copyright_notice ===========================*/

// This is an auto-generated file. Please do not edit!
// If changes are needed here please reach out to the codeowners, thanks.


#include "wa_def.h"
#include "igt_20_01_rev_id.h"


void InitGt_20_01HwWaTable(PWA_TABLE pWaTable, PSKU_FEATURE_TABLE pSkuTable, PWA_INIT_PARAM pWaParam)
{
        int iStepId_GT_20_01 = (int)pWaParam->usRenderRevID;


    SI_WA_ENABLE(
        Wa_16012383669,
        "No Link Provided",
        "No HWSightingLink provided",
        PLATFORM_ALL,
        SI_WA_BETWEEN(iStepId_GT_20_01, GT_20_01_REV_ID_A0, FUTURE_PROJECT));


    SI_WA_ENABLE(
        Wa_14017715663,
        "No Link Provided",
        "No HWSightingLink provided",
        PLATFORM_ALL,
        SI_WA_BETWEEN(iStepId_GT_20_01, GT_20_01_REV_ID_A0, FUTURE_PROJECT));


    SI_WA_ENABLE(
        Wa_22016140776,
        "No Link Provided",
        "No HWSightingLink provided",
        PLATFORM_ALL,
        SI_WA_BETWEEN(iStepId_GT_20_01, GT_20_01_REV_ID_A0, FUTURE_PROJECT));


    SI_WA_ENABLE(
        Wa_14020375314,
        "No Link Provided",
        "No HWSightingLink provided",
        PLATFORM_ALL,
        SI_WA_BETWEEN(iStepId_GT_20_01, GT_20_01_REV_ID_A0, FUTURE_PROJECT));


}
