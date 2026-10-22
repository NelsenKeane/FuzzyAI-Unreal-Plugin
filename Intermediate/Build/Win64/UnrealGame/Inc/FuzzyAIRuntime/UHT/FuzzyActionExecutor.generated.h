// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Execution/FuzzyActionExecutor.h"

#ifdef FUZZYAIRUNTIME_FuzzyActionExecutor_generated_h
#error "FuzzyActionExecutor.generated.h already included, missing '#pragma once' in FuzzyActionExecutor.h"
#endif
#define FUZZYAIRUNTIME_FuzzyActionExecutor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFuzzyAIDecisionContext;
struct FFuzzyAIStageResult;
struct FGameplayTag;

// ********** Begin Class UFuzzyActionExecutor *****************************************************
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Execution_FuzzyActionExecutor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCancelAction); \
	DECLARE_FUNCTION(execExecuteAction);


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Execution_FuzzyActionExecutor_h_12_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UFuzzyActionExecutor_Statics;
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyActionExecutor_NoRegister();

#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Execution_FuzzyActionExecutor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFuzzyActionExecutor(); \
	friend struct ::Z_Construct_UClass_UFuzzyActionExecutor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUZZYAIRUNTIME_API UClass* ::Z_Construct_UClass_UFuzzyActionExecutor_NoRegister(); \
public: \
	DECLARE_CLASS2(UFuzzyActionExecutor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FuzzyAIRuntime"), Z_Construct_UClass_UFuzzyActionExecutor_NoRegister) \
	DECLARE_SERIALIZER(UFuzzyActionExecutor)


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Execution_FuzzyActionExecutor_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFuzzyActionExecutor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFuzzyActionExecutor(UFuzzyActionExecutor&&) = delete; \
	UFuzzyActionExecutor(const UFuzzyActionExecutor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFuzzyActionExecutor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFuzzyActionExecutor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFuzzyActionExecutor) \
	NO_API virtual ~UFuzzyActionExecutor();


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Execution_FuzzyActionExecutor_h_9_PROLOG
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Execution_FuzzyActionExecutor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Execution_FuzzyActionExecutor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Execution_FuzzyActionExecutor_h_12_CALLBACK_WRAPPERS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Execution_FuzzyActionExecutor_h_12_INCLASS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Execution_FuzzyActionExecutor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFuzzyActionExecutor;

// ********** End Class UFuzzyActionExecutor *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Execution_FuzzyActionExecutor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
