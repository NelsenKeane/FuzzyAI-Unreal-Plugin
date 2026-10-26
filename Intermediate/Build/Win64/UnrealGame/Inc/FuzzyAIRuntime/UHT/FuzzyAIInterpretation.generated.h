// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utility/FuzzyAIInterpretation.h"

#ifdef FUZZYAIRUNTIME_FuzzyAIInterpretation_generated_h
#error "FuzzyAIInterpretation.generated.h already included, missing '#pragma once' in FuzzyAIInterpretation.h"
#endif
#define FUZZYAIRUNTIME_FuzzyAIInterpretation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFuzzyAIContext;

// ********** Begin Class UFuzzyAIInterpretation ***************************************************
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEvaluate);


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h_11_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UFuzzyAIInterpretation_Statics;
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIInterpretation_NoRegister();

#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFuzzyAIInterpretation(); \
	friend struct ::Z_Construct_UClass_UFuzzyAIInterpretation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUZZYAIRUNTIME_API UClass* ::Z_Construct_UClass_UFuzzyAIInterpretation_NoRegister(); \
public: \
	DECLARE_CLASS2(UFuzzyAIInterpretation, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FuzzyAIRuntime"), Z_Construct_UClass_UFuzzyAIInterpretation_NoRegister) \
	DECLARE_SERIALIZER(UFuzzyAIInterpretation)


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h_11_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFuzzyAIInterpretation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFuzzyAIInterpretation(UFuzzyAIInterpretation&&) = delete; \
	UFuzzyAIInterpretation(const UFuzzyAIInterpretation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFuzzyAIInterpretation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFuzzyAIInterpretation); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFuzzyAIInterpretation) \
	NO_API virtual ~UFuzzyAIInterpretation();


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h_8_PROLOG
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h_11_CALLBACK_WRAPPERS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h_11_INCLASS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFuzzyAIInterpretation;

// ********** End Class UFuzzyAIInterpretation *****************************************************

// ********** Begin ScriptStruct FFuzzyAIRule ******************************************************
struct Z_Construct_UScriptStruct_FFuzzyAIRule_Statics;
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h_23_GENERATED_BODY \
	friend struct ::Z_Construct_UScriptStruct_FFuzzyAIRule_Statics; \
	static class UScriptStruct* StaticStruct();


struct FFuzzyAIRule;
// ********** End ScriptStruct FFuzzyAIRule ********************************************************

// ********** Begin Class UFuzzyAIRuleInterpretation ***********************************************
struct Z_Construct_UClass_UFuzzyAIRuleInterpretation_Statics;
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIRuleInterpretation_NoRegister();

#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFuzzyAIRuleInterpretation(); \
	friend struct ::Z_Construct_UClass_UFuzzyAIRuleInterpretation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUZZYAIRUNTIME_API UClass* ::Z_Construct_UClass_UFuzzyAIRuleInterpretation_NoRegister(); \
public: \
	DECLARE_CLASS2(UFuzzyAIRuleInterpretation, UFuzzyAIInterpretation, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FuzzyAIRuntime"), Z_Construct_UClass_UFuzzyAIRuleInterpretation_NoRegister) \
	DECLARE_SERIALIZER(UFuzzyAIRuleInterpretation)


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFuzzyAIRuleInterpretation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFuzzyAIRuleInterpretation(UFuzzyAIRuleInterpretation&&) = delete; \
	UFuzzyAIRuleInterpretation(const UFuzzyAIRuleInterpretation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFuzzyAIRuleInterpretation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFuzzyAIRuleInterpretation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFuzzyAIRuleInterpretation) \
	NO_API virtual ~UFuzzyAIRuleInterpretation();


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h_30_PROLOG
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h_33_INCLASS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h_33_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFuzzyAIRuleInterpretation;

// ********** End Class UFuzzyAIRuleInterpretation *************************************************

// ********** Begin Class UFuzzyAIInputInterpretation **********************************************
struct Z_Construct_UClass_UFuzzyAIInputInterpretation_Statics;
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIInputInterpretation_NoRegister();

#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFuzzyAIInputInterpretation(); \
	friend struct ::Z_Construct_UClass_UFuzzyAIInputInterpretation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUZZYAIRUNTIME_API UClass* ::Z_Construct_UClass_UFuzzyAIInputInterpretation_NoRegister(); \
public: \
	DECLARE_CLASS2(UFuzzyAIInputInterpretation, UFuzzyAIInterpretation, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FuzzyAIRuntime"), Z_Construct_UClass_UFuzzyAIInputInterpretation_NoRegister) \
	DECLARE_SERIALIZER(UFuzzyAIInputInterpretation)


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h_44_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFuzzyAIInputInterpretation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFuzzyAIInputInterpretation(UFuzzyAIInputInterpretation&&) = delete; \
	UFuzzyAIInputInterpretation(const UFuzzyAIInputInterpretation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFuzzyAIInputInterpretation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFuzzyAIInputInterpretation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFuzzyAIInputInterpretation) \
	NO_API virtual ~UFuzzyAIInputInterpretation();


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h_41_PROLOG
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h_44_INCLASS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFuzzyAIInputInterpretation;

// ********** End Class UFuzzyAIInputInterpretation ************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIInterpretation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
