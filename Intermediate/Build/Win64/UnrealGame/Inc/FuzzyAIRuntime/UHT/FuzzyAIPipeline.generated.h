// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/FuzzyAIPipeline.h"

#ifdef FUZZYAIRUNTIME_FuzzyAIPipeline_generated_h
#error "FuzzyAIPipeline.generated.h already included, missing '#pragma once' in FuzzyAIPipeline.h"
#endif
#define FUZZYAIRUNTIME_FuzzyAIPipeline_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFuzzyAIPipeline *********************************************************
struct Z_Construct_UClass_UFuzzyAIPipeline_Statics;
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIPipeline_NoRegister();

#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIPipeline_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFuzzyAIPipeline(); \
	friend struct ::Z_Construct_UClass_UFuzzyAIPipeline_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUZZYAIRUNTIME_API UClass* ::Z_Construct_UClass_UFuzzyAIPipeline_NoRegister(); \
public: \
	DECLARE_CLASS2(UFuzzyAIPipeline, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FuzzyAIRuntime"), Z_Construct_UClass_UFuzzyAIPipeline_NoRegister) \
	DECLARE_SERIALIZER(UFuzzyAIPipeline)


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIPipeline_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFuzzyAIPipeline(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFuzzyAIPipeline(UFuzzyAIPipeline&&) = delete; \
	UFuzzyAIPipeline(const UFuzzyAIPipeline&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFuzzyAIPipeline); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFuzzyAIPipeline); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFuzzyAIPipeline) \
	NO_API virtual ~UFuzzyAIPipeline();


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIPipeline_h_13_PROLOG
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIPipeline_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIPipeline_h_16_INCLASS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIPipeline_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFuzzyAIPipeline;

// ********** End Class UFuzzyAIPipeline ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIPipeline_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
