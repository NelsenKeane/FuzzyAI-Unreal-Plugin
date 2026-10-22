// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Observation/FuzzyObservationStore.h"

#ifdef FUZZYAIRUNTIME_FuzzyObservationStore_generated_h
#error "FuzzyObservationStore.generated.h already included, missing '#pragma once' in FuzzyObservationStore.h"
#endif
#define FUZZYAIRUNTIME_FuzzyObservationStore_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FFuzzyAIObservationRecord;
struct FFuzzyAIObservationResult;
struct FGameplayTag;

// ********** Begin Class UFuzzyObservationStore ***************************************************
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservationStore_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetWriteErrors); \
	DECLARE_FUNCTION(execGetSnapshot); \
	DECLARE_FUNCTION(execTryGetObservation); \
	DECLARE_FUNCTION(execGetGameplayTag); \
	DECLARE_FUNCTION(execGetObject); \
	DECLARE_FUNCTION(execGetVector); \
	DECLARE_FUNCTION(execGetBoolean); \
	DECLARE_FUNCTION(execGetInteger); \
	DECLARE_FUNCTION(execGetFloat); \
	DECLARE_FUNCTION(execInvalidate); \
	DECLARE_FUNCTION(execSetResult); \
	DECLARE_FUNCTION(execSetGameplayTag); \
	DECLARE_FUNCTION(execSetObject); \
	DECLARE_FUNCTION(execSetVector); \
	DECLARE_FUNCTION(execSetBoolean); \
	DECLARE_FUNCTION(execSetInteger); \
	DECLARE_FUNCTION(execSetFloat);


struct Z_Construct_UClass_UFuzzyObservationStore_Statics;
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyObservationStore_NoRegister();

#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservationStore_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFuzzyObservationStore(); \
	friend struct ::Z_Construct_UClass_UFuzzyObservationStore_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUZZYAIRUNTIME_API UClass* ::Z_Construct_UClass_UFuzzyObservationStore_NoRegister(); \
public: \
	DECLARE_CLASS2(UFuzzyObservationStore, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FuzzyAIRuntime"), Z_Construct_UClass_UFuzzyObservationStore_NoRegister) \
	DECLARE_SERIALIZER(UFuzzyObservationStore)


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservationStore_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFuzzyObservationStore(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFuzzyObservationStore(UFuzzyObservationStore&&) = delete; \
	UFuzzyObservationStore(const UFuzzyObservationStore&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFuzzyObservationStore); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFuzzyObservationStore); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFuzzyObservationStore) \
	NO_API virtual ~UFuzzyObservationStore();


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservationStore_h_8_PROLOG
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservationStore_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservationStore_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservationStore_h_11_INCLASS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservationStore_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFuzzyObservationStore;

// ********** End Class UFuzzyObservationStore *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservationStore_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
