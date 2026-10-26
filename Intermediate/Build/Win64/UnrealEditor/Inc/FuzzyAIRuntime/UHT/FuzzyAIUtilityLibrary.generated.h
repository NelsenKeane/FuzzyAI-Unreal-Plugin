// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utility/FuzzyAIUtilityLibrary.h"

#ifdef FUZZYAIRUNTIME_FuzzyAIUtilityLibrary_generated_h
#error "FuzzyAIUtilityLibrary.generated.h already included, missing '#pragma once' in FuzzyAIUtilityLibrary.h"
#endif
#define FUZZYAIRUNTIME_FuzzyAIUtilityLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFuzzyAIContext;
struct FFuzzyAIInput;
struct FFuzzyAIResponse;

// ********** Begin Class UFuzzyAIUtilityLibrary ***************************************************
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIUtilityLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRecordDebugValue); \
	DECLARE_FUNCTION(execEvaluateResponse); \
	DECLARE_FUNCTION(execReadInput);


struct Z_Construct_UClass_UFuzzyAIUtilityLibrary_Statics;
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIUtilityLibrary_NoRegister();

#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIUtilityLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFuzzyAIUtilityLibrary(); \
	friend struct ::Z_Construct_UClass_UFuzzyAIUtilityLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUZZYAIRUNTIME_API UClass* ::Z_Construct_UClass_UFuzzyAIUtilityLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UFuzzyAIUtilityLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FuzzyAIRuntime"), Z_Construct_UClass_UFuzzyAIUtilityLibrary_NoRegister) \
	DECLARE_SERIALIZER(UFuzzyAIUtilityLibrary)


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIUtilityLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFuzzyAIUtilityLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFuzzyAIUtilityLibrary(UFuzzyAIUtilityLibrary&&) = delete; \
	UFuzzyAIUtilityLibrary(const UFuzzyAIUtilityLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFuzzyAIUtilityLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFuzzyAIUtilityLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFuzzyAIUtilityLibrary) \
	NO_API virtual ~UFuzzyAIUtilityLibrary();


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIUtilityLibrary_h_9_PROLOG
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIUtilityLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIUtilityLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIUtilityLibrary_h_12_INCLASS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIUtilityLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFuzzyAIUtilityLibrary;

// ********** End Class UFuzzyAIUtilityLibrary *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIUtilityLibrary_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
