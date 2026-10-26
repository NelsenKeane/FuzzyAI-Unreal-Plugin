// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Observation/ObservationRuntimeTypes.h"

#ifdef FUZZYAIRUNTIME_ObservationRuntimeTypes_generated_h
#error "ObservationRuntimeTypes.generated.h already included, missing '#pragma once' in ObservationRuntimeTypes.h"
#endif
#define FUZZYAIRUNTIME_ObservationRuntimeTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFuzzyAIObservationSettings ***************************************
struct Z_Construct_UScriptStruct_FFuzzyAIObservationSettings_Statics;
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationRuntimeTypes_h_25_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFuzzyAIObservationSettings_Statics; \
	static class UScriptStruct* StaticStruct();


struct FFuzzyAIObservationSettings;
// ********** End ScriptStruct FFuzzyAIObservationSettings *****************************************

// ********** Begin ScriptStruct FFuzzyAIObservationOutput *****************************************
struct Z_Construct_UScriptStruct_FFuzzyAIObservationOutput_Statics;
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationRuntimeTypes_h_42_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFuzzyAIObservationOutput_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FFuzzyAIObservationSettings Super;


struct FFuzzyAIObservationOutput;
// ********** End ScriptStruct FFuzzyAIObservationOutput *******************************************

// ********** Begin ScriptStruct FFuzzyAIObservationRecord *****************************************
struct Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics;
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationRuntimeTypes_h_56_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFuzzyAIObservationRecord_Statics; \
	static class UScriptStruct* StaticStruct();


struct FFuzzyAIObservationRecord;
// ********** End ScriptStruct FFuzzyAIObservationRecord *******************************************

// ********** Begin ScriptStruct FFuzzyAIRememberedObservation *************************************
struct Z_Construct_UScriptStruct_FFuzzyAIRememberedObservation_Statics;
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationRuntimeTypes_h_91_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFuzzyAIRememberedObservation_Statics; \
	static class UScriptStruct* StaticStruct();


struct FFuzzyAIRememberedObservation;
// ********** End ScriptStruct FFuzzyAIRememberedObservation ***************************************

// ********** Begin ScriptStruct FFuzzyAIObservedEvent *********************************************
struct Z_Construct_UScriptStruct_FFuzzyAIObservedEvent_Statics;
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationRuntimeTypes_h_106_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFuzzyAIObservedEvent_Statics; \
	static class UScriptStruct* StaticStruct();


struct FFuzzyAIObservedEvent;
// ********** End ScriptStruct FFuzzyAIObservedEvent ***********************************************

// ********** Begin ScriptStruct FFuzzyAITargetLocationKnowledge ***********************************
struct Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics;
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationRuntimeTypes_h_130_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFuzzyAITargetLocationKnowledge_Statics; \
	static class UScriptStruct* StaticStruct();


struct FFuzzyAITargetLocationKnowledge;
// ********** End ScriptStruct FFuzzyAITargetLocationKnowledge *************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationRuntimeTypes_h

// ********** Begin Enum EFuzzyAIObservationUpdatePolicy *******************************************
#define FOREACH_ENUM_EFUZZYAIOBSERVATIONUPDATEPOLICY(op) \
	op(EFuzzyAIObservationUpdatePolicy::Interval) \
	op(EFuzzyAIObservationUpdatePolicy::SourceEvent) \
	op(EFuzzyAIObservationUpdatePolicy::EveryFrame) \
	op(EFuzzyAIObservationUpdatePolicy::Manual) 

enum class EFuzzyAIObservationUpdatePolicy : uint8;
template<> struct TIsUEnumClass<EFuzzyAIObservationUpdatePolicy> { enum { Value = true }; };
template<> FUZZYAIRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EFuzzyAIObservationUpdatePolicy>();
// ********** End Enum EFuzzyAIObservationUpdatePolicy *********************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
