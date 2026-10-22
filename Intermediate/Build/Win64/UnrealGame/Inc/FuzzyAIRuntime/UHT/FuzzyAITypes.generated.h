// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/FuzzyAITypes.h"

#ifdef FUZZYAIRUNTIME_FuzzyAITypes_generated_h
#error "FuzzyAITypes.generated.h already included, missing '#pragma once' in FuzzyAITypes.h"
#endif
#define FUZZYAIRUNTIME_FuzzyAITypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFuzzyAIStageResult ***********************************************
struct Z_Construct_UScriptStruct_FFuzzyAIStageResult_Statics;
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAITypes_h_22_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFuzzyAIStageResult_Statics; \
	static class UScriptStruct* StaticStruct();


struct FFuzzyAIStageResult;
// ********** End ScriptStruct FFuzzyAIStageResult *************************************************

// ********** Begin ScriptStruct FFuzzyAIDecisionContext *******************************************
struct Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics;
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAITypes_h_37_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFuzzyAIDecisionContext_Statics; \
	static class UScriptStruct* StaticStruct();


struct FFuzzyAIDecisionContext;
// ********** End ScriptStruct FFuzzyAIDecisionContext *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAITypes_h

// ********** Begin Enum EFuzzyAIStageStatus *******************************************************
#define FOREACH_ENUM_EFUZZYAISTAGESTATUS(op) \
	op(EFuzzyAIStageStatus::NotRun) \
	op(EFuzzyAIStageStatus::NotReady) \
	op(EFuzzyAIStageStatus::NotConfigured) \
	op(EFuzzyAIStageStatus::NotImplemented) \
	op(EFuzzyAIStageStatus::Succeeded) \
	op(EFuzzyAIStageStatus::Failed) 

enum class EFuzzyAIStageStatus : uint8;
template<> struct TIsUEnumClass<EFuzzyAIStageStatus> { enum { Value = true }; };
template<> FUZZYAIRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EFuzzyAIStageStatus>();
// ********** End Enum EFuzzyAIStageStatus *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
