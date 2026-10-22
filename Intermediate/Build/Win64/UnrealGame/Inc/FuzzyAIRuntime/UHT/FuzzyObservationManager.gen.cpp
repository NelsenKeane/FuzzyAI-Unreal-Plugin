// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observation/FuzzyObservationManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFuzzyObservationManager() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyObservation_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyObservationManager();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyObservationManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_FuzzyAIRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFuzzyObservationManager *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyObservationManager;
UClass* UFuzzyObservationManager::GetPrivateStaticClass()
{
	using TClass = UFuzzyObservationManager;
	if (!Z_Registration_Info_UClass_UFuzzyObservationManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyObservationManager"),
			Z_Registration_Info_UClass_UFuzzyObservationManager.InnerSingleton,
			StaticRegisterNativesUFuzzyObservationManager,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UFuzzyObservationManager.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyObservationManager_NoRegister()
{
	return UFuzzyObservationManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyObservationManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Observation/FuzzyObservationManager.h" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservationManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Instances_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservationManager.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyObservationManager constinit property declarations *****************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Instances_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Instances;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFuzzyObservationManager constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyObservationManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyObservationManager_Statics

// ********** Begin Class UFuzzyObservationManager Property Definitions ****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFuzzyObservationManager_Statics::NewProp_Instances_Inner = { "Instances", nullptr, (EPropertyFlags)0x0104000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFuzzyObservation_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFuzzyObservationManager_Statics::NewProp_Instances = { "Instances", nullptr, (EPropertyFlags)0x0144008000002008, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyObservationManager, Instances), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Instances_MetaData), NewProp_Instances_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFuzzyObservationManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservationManager_Statics::NewProp_Instances_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservationManager_Statics::NewProp_Instances,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyObservationManager_Statics::PropPointers) < 2048);
// ********** End Class UFuzzyObservationManager Property Definitions ******************************
UObject* (*const Z_Construct_UClass_UFuzzyObservationManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyObservationManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyObservationManager_Statics::ClassParams = {
	&UFuzzyObservationManager::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFuzzyObservationManager_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyObservationManager_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyObservationManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyObservationManager_Statics::Class_MetaDataParams)
};
void UFuzzyObservationManager::StaticRegisterNativesUFuzzyObservationManager()
{
}
UClass* Z_Construct_UClass_UFuzzyObservationManager()
{
	if (!Z_Registration_Info_UClass_UFuzzyObservationManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyObservationManager.OuterSingleton, Z_Construct_UClass_UFuzzyObservationManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyObservationManager.OuterSingleton;
}
UFuzzyObservationManager::UFuzzyObservationManager(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyObservationManager);
UFuzzyObservationManager::~UFuzzyObservationManager() {}
// ********** End Class UFuzzyObservationManager ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservationManager_h__Script_FuzzyAIRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFuzzyObservationManager, UFuzzyObservationManager::StaticClass, TEXT("UFuzzyObservationManager"), &Z_Registration_Info_UClass_UFuzzyObservationManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyObservationManager), 1872435094U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservationManager_h__Script_FuzzyAIRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservationManager_h__Script_FuzzyAIRuntime_1582521088{
	TEXT("/Script/FuzzyAIRuntime"),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservationManager_h__Script_FuzzyAIRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservationManager_h__Script_FuzzyAIRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
