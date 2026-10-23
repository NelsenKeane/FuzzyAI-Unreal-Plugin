// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Observation/FuzzyObservationManager.h"

#ifdef FUZZYAIRUNTIME_FuzzyObservationManager_generated_h
#error "FuzzyObservationManager.generated.h already included, missing '#pragma once' in FuzzyObservationManager.h"
#endif
#define FUZZYAIRUNTIME_FuzzyObservationManager_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFuzzyObservationManager *************************************************
struct Z_Construct_UClass_UFuzzyObservationManager_Statics;
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyObservationManager_NoRegister();

#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservationManager_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFuzzyObservationManager(); \
	friend struct ::Z_Construct_UClass_UFuzzyObservationManager_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUZZYAIRUNTIME_API UClass* ::Z_Construct_UClass_UFuzzyObservationManager_NoRegister(); \
public: \
	DECLARE_CLASS2(UFuzzyObservationManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FuzzyAIRuntime"), Z_Construct_UClass_UFuzzyObservationManager_NoRegister) \
	DECLARE_SERIALIZER(UFuzzyObservationManager)


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservationManager_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFuzzyObservationManager(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFuzzyObservationManager(UFuzzyObservationManager&&) = delete; \
	UFuzzyObservationManager(const UFuzzyObservationManager&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFuzzyObservationManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFuzzyObservationManager); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFuzzyObservationManager) \
	NO_API virtual ~UFuzzyObservationManager();


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservationManager_h_10_PROLOG
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservationManager_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservationManager_h_13_INCLASS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservationManager_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFuzzyObservationManager;

// ********** End Class UFuzzyObservationManager ***************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservationManager_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
