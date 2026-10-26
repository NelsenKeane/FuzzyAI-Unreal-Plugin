// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utility/FuzzyAITypes.h"

#ifdef FUZZYAIRUNTIME_FuzzyAITypes_generated_h
#error "FuzzyAITypes.generated.h already included, missing '#pragma once' in FuzzyAITypes.h"
#endif
#define FUZZYAIRUNTIME_FuzzyAITypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFuzzyAIContext ***************************************************
struct Z_Construct_UScriptStruct_FFuzzyAIContext_Statics;
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAITypes_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFuzzyAIContext_Statics; \
	static class UScriptStruct* StaticStruct();


struct FFuzzyAIContext;
// ********** End ScriptStruct FFuzzyAIContext *****************************************************

// ********** Begin ScriptStruct FFuzzyAIInput *****************************************************
struct Z_Construct_UScriptStruct_FFuzzyAIInput_Statics;
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAITypes_h_38_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFuzzyAIInput_Statics; \
	static class UScriptStruct* StaticStruct();


struct FFuzzyAIInput;
// ********** End ScriptStruct FFuzzyAIInput *******************************************************

// ********** Begin ScriptStruct FFuzzyAIResponse **************************************************
struct Z_Construct_UScriptStruct_FFuzzyAIResponse_Statics;
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAITypes_h_60_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFuzzyAIResponse_Statics; \
	static class UScriptStruct* StaticStruct();


struct FFuzzyAIResponse;
// ********** End ScriptStruct FFuzzyAIResponse ****************************************************

// ********** Begin ScriptStruct FFuzzyAIFactor ****************************************************
struct Z_Construct_UScriptStruct_FFuzzyAIFactor_Statics;
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAITypes_h_73_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFuzzyAIFactor_Statics; \
	static class UScriptStruct* StaticStruct();


struct FFuzzyAIFactor;
// ********** End ScriptStruct FFuzzyAIFactor ******************************************************

// ********** Begin ScriptStruct FFuzzyAIRequirement ***********************************************
struct Z_Construct_UScriptStruct_FFuzzyAIRequirement_Statics;
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAITypes_h_83_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFuzzyAIRequirement_Statics; \
	static class UScriptStruct* StaticStruct();


struct FFuzzyAIRequirement;
// ********** End ScriptStruct FFuzzyAIRequirement *************************************************

// ********** Begin ScriptStruct FFuzzyAIInterpretationValue ***************************************
struct Z_Construct_UScriptStruct_FFuzzyAIInterpretationValue_Statics;
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAITypes_h_93_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFuzzyAIInterpretationValue_Statics; \
	static class UScriptStruct* StaticStruct();


struct FFuzzyAIInterpretationValue;
// ********** End ScriptStruct FFuzzyAIInterpretationValue *****************************************

// ********** Begin ScriptStruct FFuzzyAIActionScore ***********************************************
struct Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics;
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAITypes_h_102_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFuzzyAIActionScore_Statics; \
	static class UScriptStruct* StaticStruct();


struct FFuzzyAIActionScore;
// ********** End ScriptStruct FFuzzyAIActionScore *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAITypes_h

// ********** Begin Enum EFuzzyAIInputSource *******************************************************
#define FOREACH_ENUM_EFUZZYAIINPUTSOURCE(op) \
	op(EFuzzyAIInputSource::Observation) \
	op(EFuzzyAIInputSource::Interpretation) \
	op(EFuzzyAIInputSource::EventCount) \
	op(EFuzzyAIInputSource::EventRate) \
	op(EFuzzyAIInputSource::EventRatio) \
	op(EFuzzyAIInputSource::Constant) 

enum class EFuzzyAIInputSource : uint8;
template<> struct TIsUEnumClass<EFuzzyAIInputSource> { enum { Value = true }; };
template<> FUZZYAIRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EFuzzyAIInputSource>();
// ********** End Enum EFuzzyAIInputSource *********************************************************

// ********** Begin Enum EFuzzyAICombine ***********************************************************
#define FOREACH_ENUM_EFUZZYAICOMBINE(op) \
	op(EFuzzyAICombine::Product) \
	op(EFuzzyAICombine::Minimum) \
	op(EFuzzyAICombine::Maximum) \
	op(EFuzzyAICombine::Average) 

enum class EFuzzyAICombine : uint8;
template<> struct TIsUEnumClass<EFuzzyAICombine> { enum { Value = true }; };
template<> FUZZYAIRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EFuzzyAICombine>();
// ********** End Enum EFuzzyAICombine *************************************************************

// ********** Begin Enum EFuzzyAIActionResult ******************************************************
#define FOREACH_ENUM_EFUZZYAIACTIONRESULT(op) \
	op(EFuzzyAIActionResult::Succeeded) \
	op(EFuzzyAIActionResult::Failed) \
	op(EFuzzyAIActionResult::Cancelled) 

enum class EFuzzyAIActionResult : uint8;
template<> struct TIsUEnumClass<EFuzzyAIActionResult> { enum { Value = true }; };
template<> FUZZYAIRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EFuzzyAIActionResult>();
// ********** End Enum EFuzzyAIActionResult ********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
