// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Observation/Sensors/FuzzyAttributeObservation.h"

#ifdef FUZZYAIRUNTIME_FuzzyAttributeObservation_generated_h
#error "FuzzyAttributeObservation.generated.h already included, missing '#pragma once' in FuzzyAttributeObservation.h"
#endif
#define FUZZYAIRUNTIME_FuzzyAttributeObservation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin ScriptStruct FFuzzyAIAttributeBinding ******************************************
struct Z_Construct_UScriptStruct_FFuzzyAIAttributeBinding_Statics;
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_Sensors_FuzzyAttributeObservation_h_12_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFuzzyAIAttributeBinding_Statics; \
	static class UScriptStruct* StaticStruct();


struct FFuzzyAIAttributeBinding;
// ********** End ScriptStruct FFuzzyAIAttributeBinding ********************************************

// ********** Begin Class UFuzzyAttributeObservation ***********************************************
struct Z_Construct_UClass_UFuzzyAttributeObservation_Statics;
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAttributeObservation_NoRegister();

#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_Sensors_FuzzyAttributeObservation_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFuzzyAttributeObservation(); \
	friend struct ::Z_Construct_UClass_UFuzzyAttributeObservation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUZZYAIRUNTIME_API UClass* ::Z_Construct_UClass_UFuzzyAttributeObservation_NoRegister(); \
public: \
	DECLARE_CLASS2(UFuzzyAttributeObservation, UFuzzyObservation, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FuzzyAIRuntime"), Z_Construct_UClass_UFuzzyAttributeObservation_NoRegister) \
	DECLARE_SERIALIZER(UFuzzyAttributeObservation)


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_Sensors_FuzzyAttributeObservation_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFuzzyAttributeObservation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFuzzyAttributeObservation(UFuzzyAttributeObservation&&) = delete; \
	UFuzzyAttributeObservation(const UFuzzyAttributeObservation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFuzzyAttributeObservation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFuzzyAttributeObservation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFuzzyAttributeObservation) \
	NO_API virtual ~UFuzzyAttributeObservation();


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_Sensors_FuzzyAttributeObservation_h_19_PROLOG
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_Sensors_FuzzyAttributeObservation_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_Sensors_FuzzyAttributeObservation_h_22_INCLASS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_Sensors_FuzzyAttributeObservation_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFuzzyAttributeObservation;

// ********** End Class UFuzzyAttributeObservation *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_Sensors_FuzzyAttributeObservation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
