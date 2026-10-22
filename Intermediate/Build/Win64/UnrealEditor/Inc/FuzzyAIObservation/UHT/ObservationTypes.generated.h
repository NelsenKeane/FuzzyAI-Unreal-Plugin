// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Observation/ObservationTypes.h"

#ifdef FUZZYAIOBSERVATION_ObservationTypes_generated_h
#error "ObservationTypes.generated.h already included, missing '#pragma once' in ObservationTypes.h"
#endif
#define FUZZYAIOBSERVATION_ObservationTypes_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFuzzyAIObservationContext ****************************************
struct Z_Construct_UScriptStruct_FFuzzyAIObservationContext_Statics;
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_ObservationTypes_h_31_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFuzzyAIObservationContext_Statics; \
	static class UScriptStruct* StaticStruct();


struct FFuzzyAIObservationContext;
// ********** End ScriptStruct FFuzzyAIObservationContext ******************************************

// ********** Begin ScriptStruct FFuzzyAIObservationResult *****************************************
struct Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics;
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_ObservationTypes_h_51_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFuzzyAIObservationResult_Statics; \
	static class UScriptStruct* StaticStruct();


struct FFuzzyAIObservationResult;
// ********** End ScriptStruct FFuzzyAIObservationResult *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_ObservationTypes_h

// ********** Begin Enum EFuzzyAIObservationValueType **********************************************
#define FOREACH_ENUM_EFUZZYAIOBSERVATIONVALUETYPE(op) \
	op(EFuzzyAIObservationValueType::Float) \
	op(EFuzzyAIObservationValueType::Integer) \
	op(EFuzzyAIObservationValueType::Boolean) \
	op(EFuzzyAIObservationValueType::Vector) \
	op(EFuzzyAIObservationValueType::Object) \
	op(EFuzzyAIObservationValueType::GameplayTag) 

enum class EFuzzyAIObservationValueType : uint8;
template<> struct TIsUEnumClass<EFuzzyAIObservationValueType> { enum { Value = true }; };
template<> FUZZYAIOBSERVATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EFuzzyAIObservationValueType>();
// ********** End Enum EFuzzyAIObservationValueType ************************************************

// ********** Begin Enum EFuzzyAIObservationSubject ************************************************
#define FOREACH_ENUM_EFUZZYAIOBSERVATIONSUBJECT(op) \
	op(EFuzzyAIObservationSubject::Self) \
	op(EFuzzyAIObservationSubject::Target) \
	op(EFuzzyAIObservationSubject::Custom) 

enum class EFuzzyAIObservationSubject : uint8;
template<> struct TIsUEnumClass<EFuzzyAIObservationSubject> { enum { Value = true }; };
template<> FUZZYAIOBSERVATION_NON_ATTRIBUTED_API UEnum* StaticEnum<EFuzzyAIObservationSubject>();
// ********** End Enum EFuzzyAIObservationSubject **************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
