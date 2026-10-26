// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utility/FuzzyAIAction.h"

#ifdef FUZZYAIRUNTIME_FuzzyAIAction_generated_h
#error "FuzzyAIAction.generated.h already included, missing '#pragma once' in FuzzyAIAction.h"
#endif
#define FUZZYAIRUNTIME_FuzzyAIAction_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EFuzzyAIActionResult : uint8;
struct FFuzzyAIContext;

// ********** Begin Class UFuzzyAIAction ***********************************************************
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIAction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetActionContext); \
	DECLARE_FUNCTION(execIsActionActive); \
	DECLARE_FUNCTION(execFinishAction); \
	DECLARE_FUNCTION(execEnd); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execStart); \
	DECLARE_FUNCTION(execEvaluateScore); \
	DECLARE_FUNCTION(execCanContinue); \
	DECLARE_FUNCTION(execCanExecute);


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIAction_h_14_CALLBACK_WRAPPERS
struct Z_Construct_UClass_UFuzzyAIAction_Statics;
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIAction_NoRegister();

#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIAction_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFuzzyAIAction(); \
	friend struct ::Z_Construct_UClass_UFuzzyAIAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUZZYAIRUNTIME_API UClass* ::Z_Construct_UClass_UFuzzyAIAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UFuzzyAIAction, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/FuzzyAIRuntime"), Z_Construct_UClass_UFuzzyAIAction_NoRegister) \
	DECLARE_SERIALIZER(UFuzzyAIAction)


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIAction_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFuzzyAIAction(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFuzzyAIAction(UFuzzyAIAction&&) = delete; \
	UFuzzyAIAction(const UFuzzyAIAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFuzzyAIAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFuzzyAIAction); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFuzzyAIAction) \
	NO_API virtual ~UFuzzyAIAction();


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIAction_h_11_PROLOG
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIAction_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIAction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIAction_h_14_CALLBACK_WRAPPERS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIAction_h_14_INCLASS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIAction_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFuzzyAIAction;

// ********** End Class UFuzzyAIAction *************************************************************

// ********** Begin Class UFuzzyAIWaitAction *******************************************************
struct Z_Construct_UClass_UFuzzyAIWaitAction_Statics;
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIWaitAction_NoRegister();

#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIAction_h_71_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFuzzyAIWaitAction(); \
	friend struct ::Z_Construct_UClass_UFuzzyAIWaitAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUZZYAIRUNTIME_API UClass* ::Z_Construct_UClass_UFuzzyAIWaitAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UFuzzyAIWaitAction, UFuzzyAIAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FuzzyAIRuntime"), Z_Construct_UClass_UFuzzyAIWaitAction_NoRegister) \
	DECLARE_SERIALIZER(UFuzzyAIWaitAction)


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIAction_h_71_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFuzzyAIWaitAction(UFuzzyAIWaitAction&&) = delete; \
	UFuzzyAIWaitAction(const UFuzzyAIWaitAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFuzzyAIWaitAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFuzzyAIWaitAction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFuzzyAIWaitAction) \
	NO_API virtual ~UFuzzyAIWaitAction();


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIAction_h_68_PROLOG
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIAction_h_71_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIAction_h_71_INCLASS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIAction_h_71_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFuzzyAIWaitAction;

// ********** End Class UFuzzyAIWaitAction *********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIAction_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
