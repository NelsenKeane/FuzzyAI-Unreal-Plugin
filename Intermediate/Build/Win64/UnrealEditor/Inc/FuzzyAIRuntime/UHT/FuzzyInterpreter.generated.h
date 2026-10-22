// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interpretation/FuzzyInterpreter.h"

#ifdef FUZZYAIRUNTIME_FuzzyInterpreter_generated_h
#error "FuzzyInterpreter.generated.h already included, missing '#pragma once' in FuzzyInterpreter.h"
#endif
#define FUZZYAIRUNTIME_FuzzyInterpreter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFuzzyInterpreter ********************************************************
struct Z_Construct_UClass_UFuzzyInterpreter_Statics;
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyInterpreter_NoRegister();

#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Interpretation_FuzzyInterpreter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFuzzyInterpreter(); \
	friend struct ::Z_Construct_UClass_UFuzzyInterpreter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUZZYAIRUNTIME_API UClass* ::Z_Construct_UClass_UFuzzyInterpreter_NoRegister(); \
public: \
	DECLARE_CLASS2(UFuzzyInterpreter, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FuzzyAIRuntime"), Z_Construct_UClass_UFuzzyInterpreter_NoRegister) \
	DECLARE_SERIALIZER(UFuzzyInterpreter)


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Interpretation_FuzzyInterpreter_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFuzzyInterpreter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFuzzyInterpreter(UFuzzyInterpreter&&) = delete; \
	UFuzzyInterpreter(const UFuzzyInterpreter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFuzzyInterpreter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFuzzyInterpreter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFuzzyInterpreter) \
	NO_API virtual ~UFuzzyInterpreter();


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Interpretation_FuzzyInterpreter_h_12_PROLOG
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Interpretation_FuzzyInterpreter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Interpretation_FuzzyInterpreter_h_15_INCLASS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Interpretation_FuzzyInterpreter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFuzzyInterpreter;

// ********** End Class UFuzzyInterpreter **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Interpretation_FuzzyInterpreter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
