/*========================== begin_copyright_notice ============================

Copyright (C) 2019-2021 Intel Corporation

SPDX-License-Identifier: MIT

============================= end_copyright_notice ===========================*/

#include "wa_def.h"

#define EHL_REV_ID_A0   SI_REV_ID(0,0)
#define EHL_REV_ID_B0   SI_REV_ID(1,1)


//******************* Main Wa Initializer for Device Id ********************
// Initialize COMMON/DESKTOP/MOBILE WA using PLATFORM_STEP_APPLICABLE() macro.

void InitEhlSwWaTable(PWA_TABLE pWaTable, PSKU_FEATURE_TABLE pSkuTable, PWA_INIT_PARAM pWaParam)
{

#ifdef __KCH
    // compilation issue with UTF: KCHASSERT(NULL != pWaParam);
#endif

    int iStepId_EHL = (int)pWaParam->usRevId;

    //=================================================================================================================
    //
    //              EHL SW WA for all platforms
    //
    //=================================================================================================================

    //=========================
    // IGC WA
    //=========================
    SI_WA_ENABLE(
        WaReturnZeroforRTReadOutsidePrimitive,
        "No Link provided",
        "No HWSightingLink provided",
        PLATFORM_ALL,
        SI_WA_UNTIL(iStepId_EHL, EHL_REV_ID_A0));
}

#ifdef __KCH
void InitEhlHASWaTable( PHW_DEVICE_EXTENSION pKchContext, PWA_TABLE pWaTable, PSKU_FEATURE_TABLE pSkuTable, PWA_INIT_PARAM pWaParam )
{
    //TODO Gen11LP: Add WA as needed
}
#endif // __KCH
