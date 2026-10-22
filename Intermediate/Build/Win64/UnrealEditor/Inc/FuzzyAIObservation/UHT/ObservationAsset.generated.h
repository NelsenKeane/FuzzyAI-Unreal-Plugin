// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Observation/ObservationAsset.h"

#ifdef FUZZYAIOBSERVATION_ObservationAsset_generated_h
#error "ObservationAsset.generated.h already included, missing '#pragma once' in ObservationAsset.h"
#endif
#define FUZZYAIOBSERVATION_ObservationAsset_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FFuzzyAIObservationContext;
struct FFuzzyAIObservationResult;

// ********** Begin Class UFuzzyAIObservationAsset *************************************************
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_ObservationAsset_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSubjectActor); \
	DECLARE_FUNCTION(execReadObservation); \
	DECLARE_FUNCTION(execObserve);


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_ObservationAsset_h_12_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UFuzzyAIObservationAsset_Statics;
FUZZYAIOBSERVATION_API UClass* Z_Construct_UClass_UFuzzyAIObservationAsset_NoRegister();

#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_ObservationAsset_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFuzzyAIObservationAsset(); \
	friend struct ::Z_Construct_UClass_UFuzzyAIObservationAsset_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUZZYAIOBSERVATION_API UClass* ::Z_Construct_UClass_UFuzzyAIObservationAsset_NoRegister(); \
public: \
	DECLARE_CLASS2(UFuzzyAIObservationAsset, UDataAsset, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FuzzyAIObservation"), Z_Construct_UClass_UFuzzyAIObservationAsset_NoRegister) \
	DECLARE_SERIALIZER(UFuzzyAIObservationAsset)


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_ObservationAsset_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFuzzyAIObservationAsset(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFuzzyAIObservationAsset(UFuzzyAIObservationAsset&&) = delete; \
	UFuzzyAIObservationAsset(const UFuzzyAIObservationAsset&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFuzzyAIObservationAsset); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFuzzyAIObservationAsset); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFuzzyAIObservationAsset) \
	NO_API virtual ~UFuzzyAIObservationAsset();


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_ObservationAsset_h_9_PROLOG
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_ObservationAsset_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_ObservationAsset_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_ObservationAsset_h_12_CALLBACK_WRAPPERS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_ObservationAsset_h_12_INCLASS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_ObservationAsset_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFuzzyAIObservationAsset;

// ********** End Class UFuzzyAIObservationAsset ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_ObservationAsset_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
