// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Core/FuzzyAIComponent.h"

#ifdef FUZZYAIRUNTIME_FuzzyAIComponent_generated_h
#error "FuzzyAIComponent.generated.h already included, missing '#pragma once' in FuzzyAIComponent.h"
#endif
#define FUZZYAIRUNTIME_FuzzyAIComponent_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UFuzzyObservation;
class UFuzzyObservationStore;
struct FFuzzyAIObservationRecord;
struct FFuzzyAIObservedEvent;
struct FFuzzyAIRememberedObservation;
struct FFuzzyAITargetLocationKnowledge;

// ********** Begin Delegate FFuzzyAIObservationChanged ********************************************
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIComponent_h_18_DELEGATE \
FUZZYAIRUNTIME_API void FFuzzyAIObservationChanged_DelegateWrapper(const FMulticastScriptDelegate& FuzzyAIObservationChanged, FName Key, FFuzzyAIObservationRecord const& Previous, FFuzzyAIObservationRecord const& Current, bool bHadPrevious);


// ********** End Delegate FFuzzyAIObservationChanged **********************************************

// ********** Begin Delegate FFuzzyAIObservationsChanged *******************************************
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIComponent_h_19_DELEGATE \
FUZZYAIRUNTIME_API void FFuzzyAIObservationsChanged_DelegateWrapper(const FMulticastScriptDelegate& FuzzyAIObservationsChanged, TArray<FName> const& ChangedKeys);


// ********** End Delegate FFuzzyAIObservationsChanged *********************************************

// ********** Begin Delegate FFuzzyAIObservedEventRecorded *****************************************
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIComponent_h_20_DELEGATE \
FUZZYAIRUNTIME_API void FFuzzyAIObservedEventRecorded_DelegateWrapper(const FMulticastScriptDelegate& FuzzyAIObservedEventRecorded, FFuzzyAIObservedEvent const& Event);


// ********** End Delegate FFuzzyAIObservedEventRecorded *******************************************

// ********** Begin Class UFuzzyAIComponent ********************************************************
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execHandleTargetDestroyed); \
	DECLARE_FUNCTION(execClearMemory); \
	DECLARE_FUNCTION(execGetObservedEvents); \
	DECLARE_FUNCTION(execRecordObservedEvent); \
	DECLARE_FUNCTION(execGetTargetLocationKnowledge); \
	DECLARE_FUNCTION(execGetMemorySnapshot); \
	DECLARE_FUNCTION(execTryGetRememberedObservation); \
	DECLARE_FUNCTION(execGetObservationSnapshot); \
	DECLARE_FUNCTION(execTryGetObservation); \
	DECLARE_FUNCTION(execSetObservationSubjects); \
	DECLARE_FUNCTION(execUpdateTargetSighting); \
	DECLARE_FUNCTION(execSetTargetVisibility); \
	DECLARE_FUNCTION(execGetTarget); \
	DECLARE_FUNCTION(execSetTarget); \
	DECLARE_FUNCTION(execGetRuntimeObservationInstances); \
	DECLARE_FUNCTION(execGetObservationStore); \
	DECLARE_FUNCTION(execRequestObservationInstanceRefresh); \
	DECLARE_FUNCTION(execNotifyObservationSourceChanged); \
	DECLARE_FUNCTION(execRequestObservationRefresh); \
	DECLARE_FUNCTION(execRefreshAllObservations); \
	DECLARE_FUNCTION(execGetConfigurationErrors); \
	DECLARE_FUNCTION(execIsObserving); \
	DECLARE_FUNCTION(execStopAI); \
	DECLARE_FUNCTION(execStartAI);


struct Z_Construct_UClass_UFuzzyAIComponent_Statics;
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIComponent_NoRegister();

#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFuzzyAIComponent(); \
	friend struct ::Z_Construct_UClass_UFuzzyAIComponent_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend FUZZYAIRUNTIME_API UClass* ::Z_Construct_UClass_UFuzzyAIComponent_NoRegister(); \
public: \
	DECLARE_CLASS2(UFuzzyAIComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FuzzyAIRuntime"), Z_Construct_UClass_UFuzzyAIComponent_NoRegister) \
	DECLARE_SERIALIZER(UFuzzyAIComponent)


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIComponent_h_26_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UFuzzyAIComponent(UFuzzyAIComponent&&) = delete; \
	UFuzzyAIComponent(const UFuzzyAIComponent&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFuzzyAIComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFuzzyAIComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFuzzyAIComponent) \
	NO_API virtual ~UFuzzyAIComponent();


#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIComponent_h_23_PROLOG
#define FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIComponent_h_26_INCLASS_NO_PURE_DECLS \
	FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UFuzzyAIComponent;

// ********** End Class UFuzzyAIComponent **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIComponent_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
