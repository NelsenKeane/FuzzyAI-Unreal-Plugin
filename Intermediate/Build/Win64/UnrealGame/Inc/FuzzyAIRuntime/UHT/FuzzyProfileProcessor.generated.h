// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Profiling/FuzzyProfileProcessor.h"

#ifdef FUZZYAIRUNTIME_FuzzyProfileProcessor_generated_h
#error "FuzzyProfileProcessor.generated.h already included, missing '#pragma once' in FuzzyProfileProcessor.h"
#endif
#define FUZZYAIRUNTIME_FuzzyProfileProcessor_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UFuzzyProfileProcessor ***************************************************
struct Z_Construct_UClass_UFuzzyProfileProcessor_Statics;
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyProfileProcessor_NoRegister();

#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Profiling_FuzzyProfileProcessor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFuzzyProfileProcessor(); \
	friend struct ::Z_Construct_UClass_UFuzzyProfileProcessor_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUZZYAIRUNTIME_API UClass* ::Z_Construct_UClass_UFuzzyProfileProcessor_NoRegister(); \
public: \
	DECLARE_CLASS2(UFuzzyProfileProcessor, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FuzzyAIRuntime"), Z_Construct_UClass_UFuzzyProfileProcessor_NoRegister) \
	DECLARE_SERIALIZER(UFuzzyProfileProcessor)


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Profiling_FuzzyProfileProcessor_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFuzzyProfileProcessor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFuzzyProfileProcessor(UFuzzyProfileProcessor&&) = delete; \
	UFuzzyProfileProcessor(const UFuzzyProfileProcessor&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFuzzyProfileProcessor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFuzzyProfileProcessor); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFuzzyProfileProcessor) \
	NO_API virtual ~UFuzzyProfileProcessor();


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Profiling_FuzzyProfileProcessor_h_11_PROLOG
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Profiling_FuzzyProfileProcessor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Profiling_FuzzyProfileProcessor_h_14_INCLASS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Profiling_FuzzyProfileProcessor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFuzzyProfileProcessor;

// ********** End Class UFuzzyProfileProcessor *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Profiling_FuzzyProfileProcessor_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
