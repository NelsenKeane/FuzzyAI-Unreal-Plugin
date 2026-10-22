// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interpretation/FuzzyInterpretationTypes.h"

#ifdef FUZZYAIRUNTIME_FuzzyInterpretationTypes_generated_h
#error "FuzzyInterpretationTypes.generated.h already included, missing '#pragma once' in FuzzyInterpretationTypes.h"
#endif
#define FUZZYAIRUNTIME_FuzzyInterpretationTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFuzzyAIInputBinding **********************************************
struct Z_Construct_UScriptStruct_FFuzzyAIInputBinding_Statics;
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Interpretation_FuzzyInterpretationTypes_h_17_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFuzzyAIInputBinding_Statics; \
	static class UScriptStruct* StaticStruct();


struct FFuzzyAIInputBinding;
// ********** End ScriptStruct FFuzzyAIInputBinding ************************************************

// ********** Begin ScriptStruct FFuzzyAISemanticValue *********************************************
struct Z_Construct_UScriptStruct_FFuzzyAISemanticValue_Statics;
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Interpretation_FuzzyInterpretationTypes_h_33_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFuzzyAISemanticValue_Statics; \
	static class UScriptStruct* StaticStruct();


struct FFuzzyAISemanticValue;
// ********** End ScriptStruct FFuzzyAISemanticValue ***********************************************

// ********** Begin ScriptStruct FFuzzyAIInterpretationSnapshot ************************************
struct Z_Construct_UScriptStruct_FFuzzyAIInterpretationSnapshot_Statics;
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Interpretation_FuzzyInterpretationTypes_h_48_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFuzzyAIInterpretationSnapshot_Statics; \
	static class UScriptStruct* StaticStruct();


struct FFuzzyAIInterpretationSnapshot;
// ********** End ScriptStruct FFuzzyAIInterpretationSnapshot **************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Interpretation_FuzzyInterpretationTypes_h

// ********** Begin Enum EFuzzyAIInputSource *******************************************************
#define FOREACH_ENUM_EFUZZYAIINPUTSOURCE(op) \
	op(EFuzzyAIInputSource::Observation) \
	op(EFuzzyAIInputSource::BehaviorMetric) \
	op(EFuzzyAIInputSource::PerformanceMetric) 

enum class EFuzzyAIInputSource : uint8;
template<> struct TIsUEnumClass<EFuzzyAIInputSource> { enum { Value = true }; };
template<> FUZZYAIRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EFuzzyAIInputSource>();
// ********** End Enum EFuzzyAIInputSource *********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
