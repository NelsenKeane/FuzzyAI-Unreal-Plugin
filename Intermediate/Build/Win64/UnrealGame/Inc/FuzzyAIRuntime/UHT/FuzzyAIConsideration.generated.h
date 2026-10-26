// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utility/FuzzyAIConsideration.h"

#ifdef FUZZYAIRUNTIME_FuzzyAIConsideration_generated_h
#error "FuzzyAIConsideration.generated.h already included, missing '#pragma once' in FuzzyAIConsideration.h"
#endif
#define FUZZYAIRUNTIME_FuzzyAIConsideration_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UFuzzyObservationStore;
struct FFuzzyAIContext;
struct FFuzzyAIWeightedSample;

// ********** Begin Class UFuzzyAIConsideration ****************************************************
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEvaluateContext); \
	DECLARE_FUNCTION(execEvaluate);


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h_13_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UFuzzyAIConsideration_Statics;
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIConsideration_NoRegister();

#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFuzzyAIConsideration(); \
	friend struct ::Z_Construct_UClass_UFuzzyAIConsideration_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUZZYAIRUNTIME_API UClass* ::Z_Construct_UClass_UFuzzyAIConsideration_NoRegister(); \
public: \
	DECLARE_CLASS2(UFuzzyAIConsideration, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FuzzyAIRuntime"), Z_Construct_UClass_UFuzzyAIConsideration_NoRegister) \
	DECLARE_SERIALIZER(UFuzzyAIConsideration)


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFuzzyAIConsideration(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFuzzyAIConsideration(UFuzzyAIConsideration&&) = delete; \
	UFuzzyAIConsideration(const UFuzzyAIConsideration&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFuzzyAIConsideration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFuzzyAIConsideration); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFuzzyAIConsideration) \
	NO_API virtual ~UFuzzyAIConsideration();


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h_10_PROLOG
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h_13_CALLBACK_WRAPPERS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h_13_INCLASS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFuzzyAIConsideration;

// ********** End Class UFuzzyAIConsideration ******************************************************

// ********** Begin Class UFuzzyAIInputConsideration ***********************************************
struct Z_Construct_UClass_UFuzzyAIInputConsideration_Statics;
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIInputConsideration_NoRegister();

#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFuzzyAIInputConsideration(); \
	friend struct ::Z_Construct_UClass_UFuzzyAIInputConsideration_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUZZYAIRUNTIME_API UClass* ::Z_Construct_UClass_UFuzzyAIInputConsideration_NoRegister(); \
public: \
	DECLARE_CLASS2(UFuzzyAIInputConsideration, UFuzzyAIConsideration, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FuzzyAIRuntime"), Z_Construct_UClass_UFuzzyAIInputConsideration_NoRegister) \
	DECLARE_SERIALIZER(UFuzzyAIInputConsideration)


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFuzzyAIInputConsideration(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFuzzyAIInputConsideration(UFuzzyAIInputConsideration&&) = delete; \
	UFuzzyAIInputConsideration(const UFuzzyAIInputConsideration&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFuzzyAIInputConsideration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFuzzyAIInputConsideration); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFuzzyAIInputConsideration) \
	NO_API virtual ~UFuzzyAIInputConsideration();


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h_22_PROLOG
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h_25_INCLASS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFuzzyAIInputConsideration;

// ********** End Class UFuzzyAIInputConsideration *************************************************

// ********** Begin ScriptStruct FFuzzyAIWeightedSample ********************************************
struct Z_Construct_UScriptStruct_FFuzzyAIWeightedSample_Statics;
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h_35_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFuzzyAIWeightedSample_Statics; \
	static class UScriptStruct* StaticStruct();


struct FFuzzyAIWeightedSample;
// ********** End ScriptStruct FFuzzyAIWeightedSample **********************************************

// ********** Begin Class UFuzzyAIUncertainConsideration *******************************************
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSamples);


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h_44_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UFuzzyAIUncertainConsideration_Statics;
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIUncertainConsideration_NoRegister();

#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFuzzyAIUncertainConsideration(); \
	friend struct ::Z_Construct_UClass_UFuzzyAIUncertainConsideration_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUZZYAIRUNTIME_API UClass* ::Z_Construct_UClass_UFuzzyAIUncertainConsideration_NoRegister(); \
public: \
	DECLARE_CLASS2(UFuzzyAIUncertainConsideration, UFuzzyAIConsideration, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FuzzyAIRuntime"), Z_Construct_UClass_UFuzzyAIUncertainConsideration_NoRegister) \
	DECLARE_SERIALIZER(UFuzzyAIUncertainConsideration)


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFuzzyAIUncertainConsideration(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFuzzyAIUncertainConsideration(UFuzzyAIUncertainConsideration&&) = delete; \
	UFuzzyAIUncertainConsideration(const UFuzzyAIUncertainConsideration&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFuzzyAIUncertainConsideration); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFuzzyAIUncertainConsideration); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFuzzyAIUncertainConsideration) \
	NO_API virtual ~UFuzzyAIUncertainConsideration();


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h_41_PROLOG
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h_44_CALLBACK_WRAPPERS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h_44_INCLASS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFuzzyAIUncertainConsideration;

// ********** End Class UFuzzyAIUncertainConsideration *********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIConsideration_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
