// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Observation/ObservationResultLibrary.h"

#ifdef FUZZYAIRUNTIME_ObservationResultLibrary_generated_h
#error "ObservationResultLibrary.generated.h already included, missing '#pragma once' in ObservationResultLibrary.h"
#endif
#define FUZZYAIRUNTIME_ObservationResultLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FFuzzyAIObservationResult;
struct FGameplayTag;

// ********** Begin Class UFuzzyAIObservationResultLibrary *****************************************
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationResultLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeInvalidResult); \
	DECLARE_FUNCTION(execMakeGameplayTagResult); \
	DECLARE_FUNCTION(execMakeObjectResult); \
	DECLARE_FUNCTION(execMakeVectorResult); \
	DECLARE_FUNCTION(execMakeBooleanResult); \
	DECLARE_FUNCTION(execMakeIntegerResult); \
	DECLARE_FUNCTION(execMakeFloatResult);


struct Z_Construct_UClass_UFuzzyAIObservationResultLibrary_Statics;
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIObservationResultLibrary_NoRegister();

#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationResultLibrary_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFuzzyAIObservationResultLibrary(); \
	friend struct ::Z_Construct_UClass_UFuzzyAIObservationResultLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUZZYAIRUNTIME_API UClass* ::Z_Construct_UClass_UFuzzyAIObservationResultLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UFuzzyAIObservationResultLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FuzzyAIRuntime"), Z_Construct_UClass_UFuzzyAIObservationResultLibrary_NoRegister) \
	DECLARE_SERIALIZER(UFuzzyAIObservationResultLibrary)


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationResultLibrary_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFuzzyAIObservationResultLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFuzzyAIObservationResultLibrary(UFuzzyAIObservationResultLibrary&&) = delete; \
	UFuzzyAIObservationResultLibrary(const UFuzzyAIObservationResultLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFuzzyAIObservationResultLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFuzzyAIObservationResultLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFuzzyAIObservationResultLibrary) \
	NO_API virtual ~UFuzzyAIObservationResultLibrary();


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationResultLibrary_h_8_PROLOG
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationResultLibrary_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationResultLibrary_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationResultLibrary_h_11_INCLASS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationResultLibrary_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFuzzyAIObservationResultLibrary;

// ********** End Class UFuzzyAIObservationResultLibrary *******************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationResultLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
