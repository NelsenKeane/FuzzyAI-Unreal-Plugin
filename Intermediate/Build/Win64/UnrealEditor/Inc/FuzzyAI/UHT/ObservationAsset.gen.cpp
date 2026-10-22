// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observation/ObservationAsset.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeObservationAsset() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
FUZZYAI_API UClass* Z_Construct_UClass_UFuzzyAIObservationAsset();
FUZZYAI_API UClass* Z_Construct_UClass_UFuzzyAIObservationAsset_NoRegister();
UPackage* Z_Construct_UPackage__Script_FuzzyAI();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFuzzyAIObservationAsset *************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyAIObservationAsset;
UClass* UFuzzyAIObservationAsset::GetPrivateStaticClass()
{
	using TClass = UFuzzyAIObservationAsset;
	if (!Z_Registration_Info_UClass_UFuzzyAIObservationAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyAIObservationAsset"),
			Z_Registration_Info_UClass_UFuzzyAIObservationAsset.InnerSingleton,
			StaticRegisterNativesUFuzzyAIObservationAsset,
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
	return Z_Registration_Info_UClass_UFuzzyAIObservationAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyAIObservationAsset_NoRegister()
{
	return UFuzzyAIObservationAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyAIObservationAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Observation/ObservationAsset.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Observation/ObservationAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyAIObservationAsset constinit property declarations *****************
// ********** End Class UFuzzyAIObservationAsset constinit property declarations *******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyAIObservationAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyAIObservationAsset_Statics
UObject* (*const Z_Construct_UClass_UFuzzyAIObservationAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIObservationAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyAIObservationAsset_Statics::ClassParams = {
	&UFuzzyAIObservationAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIObservationAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyAIObservationAsset_Statics::Class_MetaDataParams)
};
void UFuzzyAIObservationAsset::StaticRegisterNativesUFuzzyAIObservationAsset()
{
}
UClass* Z_Construct_UClass_UFuzzyAIObservationAsset()
{
	if (!Z_Registration_Info_UClass_UFuzzyAIObservationAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyAIObservationAsset.OuterSingleton, Z_Construct_UClass_UFuzzyAIObservationAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyAIObservationAsset.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyAIObservationAsset);
UFuzzyAIObservationAsset::~UFuzzyAIObservationAsset() {}
// ********** End Class UFuzzyAIObservationAsset ***************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAI_Public_Observation_ObservationAsset_h__Script_FuzzyAI_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFuzzyAIObservationAsset, UFuzzyAIObservationAsset::StaticClass, TEXT("UFuzzyAIObservationAsset"), &Z_Registration_Info_UClass_UFuzzyAIObservationAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyAIObservationAsset), 1075209647U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAI_Public_Observation_ObservationAsset_h__Script_FuzzyAI_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAI_Public_Observation_ObservationAsset_h__Script_FuzzyAI_3269669145{
	TEXT("/Script/FuzzyAI"),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAI_Public_Observation_ObservationAsset_h__Script_FuzzyAI_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAI_Public_Observation_ObservationAsset_h__Script_FuzzyAI_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
