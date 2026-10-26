// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utility/FuzzyAIDebugTypes.h"

#ifdef FUZZYAIRUNTIME_FuzzyAIDebugTypes_generated_h
#error "FuzzyAIDebugTypes.generated.h already included, missing '#pragma once' in FuzzyAIDebugTypes.h"
#endif
#define FUZZYAIRUNTIME_FuzzyAIDebugTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFuzzyAIDebugEntry ************************************************
struct Z_Construct_UScriptStruct_FFuzzyAIDebugEntry_Statics;
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIDebugTypes_h_14_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFuzzyAIDebugEntry_Statics; \
	static class UScriptStruct* StaticStruct();


struct FFuzzyAIDebugEntry;
// ********** End ScriptStruct FFuzzyAIDebugEntry **************************************************

// ********** Begin ScriptStruct FFuzzyAIExecutionDebug ********************************************
struct Z_Construct_UScriptStruct_FFuzzyAIExecutionDebug_Statics;
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIDebugTypes_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFuzzyAIExecutionDebug_Statics; \
	static class UScriptStruct* StaticStruct();


struct FFuzzyAIExecutionDebug;
// ********** End ScriptStruct FFuzzyAIExecutionDebug **********************************************

// ********** Begin ScriptStruct FFuzzyAIExecutionEvent ********************************************
struct Z_Construct_UScriptStruct_FFuzzyAIExecutionEvent_Statics;
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIDebugTypes_h_52_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFuzzyAIExecutionEvent_Statics; \
	static class UScriptStruct* StaticStruct();


struct FFuzzyAIExecutionEvent;
// ********** End ScriptStruct FFuzzyAIExecutionEvent **********************************************

// ********** Begin ScriptStruct FFuzzyAIDecisionDebugSnapshot *************************************
struct Z_Construct_UScriptStruct_FFuzzyAIDecisionDebugSnapshot_Statics;
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIDebugTypes_h_62_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFuzzyAIDecisionDebugSnapshot_Statics; \
	static class UScriptStruct* StaticStruct();


struct FFuzzyAIDecisionDebugSnapshot;
// ********** End ScriptStruct FFuzzyAIDecisionDebugSnapshot ***************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIDebugTypes_h

// ********** Begin Enum EFuzzyAIDebugLayer ********************************************************
#define FOREACH_ENUM_EFUZZYAIDEBUGLAYER(op) \
	op(EFuzzyAIDebugLayer::Fuzzy) \
	op(EFuzzyAIDebugLayer::Utility) \
	op(EFuzzyAIDebugLayer::Execution) 

enum class EFuzzyAIDebugLayer : uint8;
template<> struct TIsUEnumClass<EFuzzyAIDebugLayer> { enum { Value = true }; };
template<> FUZZYAIRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EFuzzyAIDebugLayer>();
// ********** End Enum EFuzzyAIDebugLayer **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
