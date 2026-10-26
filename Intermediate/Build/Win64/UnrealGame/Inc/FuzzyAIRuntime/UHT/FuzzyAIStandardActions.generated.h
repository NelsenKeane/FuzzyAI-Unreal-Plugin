// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utility/FuzzyAIStandardActions.h"

#ifdef FUZZYAIRUNTIME_FuzzyAIStandardActions_generated_h
#error "FuzzyAIStandardActions.generated.h already included, missing '#pragma once' in FuzzyAIStandardActions.h"
#endif
#define FUZZYAIRUNTIME_FuzzyAIStandardActions_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFuzzyAIMoveAction *******************************************************
struct Z_Construct_UClass_UFuzzyAIMoveAction_Statics;
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIMoveAction_NoRegister();

#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIStandardActions_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFuzzyAIMoveAction(); \
	friend struct ::Z_Construct_UClass_UFuzzyAIMoveAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUZZYAIRUNTIME_API UClass* ::Z_Construct_UClass_UFuzzyAIMoveAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UFuzzyAIMoveAction, UFuzzyAIAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FuzzyAIRuntime"), Z_Construct_UClass_UFuzzyAIMoveAction_NoRegister) \
	DECLARE_SERIALIZER(UFuzzyAIMoveAction)


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIStandardActions_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFuzzyAIMoveAction(UFuzzyAIMoveAction&&) = delete; \
	UFuzzyAIMoveAction(const UFuzzyAIMoveAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFuzzyAIMoveAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFuzzyAIMoveAction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFuzzyAIMoveAction) \
	NO_API virtual ~UFuzzyAIMoveAction();


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIStandardActions_h_20_PROLOG
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIStandardActions_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIStandardActions_h_23_INCLASS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIStandardActions_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFuzzyAIMoveAction;

// ********** End Class UFuzzyAIMoveAction *********************************************************

// ********** Begin Class UFuzzyAIAbilityAction ****************************************************
struct Z_Construct_UClass_UFuzzyAIAbilityAction_Statics;
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIAbilityAction_NoRegister();

#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIStandardActions_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFuzzyAIAbilityAction(); \
	friend struct ::Z_Construct_UClass_UFuzzyAIAbilityAction_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUZZYAIRUNTIME_API UClass* ::Z_Construct_UClass_UFuzzyAIAbilityAction_NoRegister(); \
public: \
	DECLARE_CLASS2(UFuzzyAIAbilityAction, UFuzzyAIAction, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FuzzyAIRuntime"), Z_Construct_UClass_UFuzzyAIAbilityAction_NoRegister) \
	DECLARE_SERIALIZER(UFuzzyAIAbilityAction)


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIStandardActions_h_47_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFuzzyAIAbilityAction(UFuzzyAIAbilityAction&&) = delete; \
	UFuzzyAIAbilityAction(const UFuzzyAIAbilityAction&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFuzzyAIAbilityAction); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFuzzyAIAbilityAction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFuzzyAIAbilityAction) \
	NO_API virtual ~UFuzzyAIAbilityAction();


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIStandardActions_h_44_PROLOG
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIStandardActions_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIStandardActions_h_47_INCLASS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIStandardActions_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFuzzyAIAbilityAction;

// ********** End Class UFuzzyAIAbilityAction ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIStandardActions_h

// ********** Begin Enum EFuzzyAIMoveMode **********************************************************
#define FOREACH_ENUM_EFUZZYAIMOVEMODE(op) \
	op(EFuzzyAIMoveMode::Approach) \
	op(EFuzzyAIMoveMode::Retreat) \
	op(EFuzzyAIMoveMode::StrafeLeft) \
	op(EFuzzyAIMoveMode::StrafeRight) 

enum class EFuzzyAIMoveMode : uint8;
template<> struct TIsUEnumClass<EFuzzyAIMoveMode> { enum { Value = true }; };
template<> FUZZYAIRUNTIME_NON_ATTRIBUTED_API UEnum* StaticEnum<EFuzzyAIMoveMode>();
// ********** End Enum EFuzzyAIMoveMode ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
