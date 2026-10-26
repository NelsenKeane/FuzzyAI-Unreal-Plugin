// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Observation/FuzzyObservation.h"

#ifdef FUZZYAIRUNTIME_FuzzyObservation_generated_h
#error "FuzzyObservation.generated.h already included, missing '#pragma once' in FuzzyObservation.h"
#endif
#define FUZZYAIRUNTIME_FuzzyObservation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UFuzzyObservationStore;
struct FFuzzyAIObservationContext;
struct FFuzzyAIObservedEvent;
struct FGameplayTag;

// ********** Begin Class UFuzzyObservation ********************************************************
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservation_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnContextChanged); \
	DECLARE_FUNCTION(execOnShutdown); \
	DECLARE_FUNCTION(execOnInitialize); \
	DECLARE_FUNCTION(execGetOutputKey); \
	DECLARE_FUNCTION(execGetObservationStore); \
	DECLARE_FUNCTION(execRecordObservedEvent); \
	DECLARE_FUNCTION(execRequestRefresh); \
	DECLARE_FUNCTION(execGetObservationContext); \
	DECLARE_FUNCTION(execSample);


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservation_h_18_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UFuzzyObservation_Statics;
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyObservation_NoRegister();

#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservation_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFuzzyObservation(); \
	friend struct ::Z_Construct_UClass_UFuzzyObservation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUZZYAIRUNTIME_API UClass* ::Z_Construct_UClass_UFuzzyObservation_NoRegister(); \
public: \
	DECLARE_CLASS2(UFuzzyObservation, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FuzzyAIRuntime"), Z_Construct_UClass_UFuzzyObservation_NoRegister) \
	DECLARE_SERIALIZER(UFuzzyObservation)


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservation_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFuzzyObservation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFuzzyObservation(UFuzzyObservation&&) = delete; \
	UFuzzyObservation(const UFuzzyObservation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFuzzyObservation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFuzzyObservation); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFuzzyObservation) \
	NO_API virtual ~UFuzzyObservation();


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservation_h_15_PROLOG
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservation_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservation_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservation_h_18_CALLBACK_WRAPPERS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservation_h_18_INCLASS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservation_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFuzzyObservation;

// ********** End Class UFuzzyObservation **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
