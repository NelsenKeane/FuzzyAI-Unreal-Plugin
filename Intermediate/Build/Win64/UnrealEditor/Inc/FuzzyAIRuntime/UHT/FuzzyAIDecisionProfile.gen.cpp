// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utility/FuzzyAIDecisionProfile.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFuzzyAIDecisionProfile() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIAction_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIDecisionProfile();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIDecisionProfile_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIInterpretation_NoRegister();
UPackage* Z_Construct_UPackage__Script_FuzzyAIRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFuzzyAIDecisionProfile **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyAIDecisionProfile;
UClass* UFuzzyAIDecisionProfile::GetPrivateStaticClass()
{
	using TClass = UFuzzyAIDecisionProfile;
	if (!Z_Registration_Info_UClass_UFuzzyAIDecisionProfile.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyAIDecisionProfile"),
			Z_Registration_Info_UClass_UFuzzyAIDecisionProfile.InnerSingleton,
			StaticRegisterNativesUFuzzyAIDecisionProfile,
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
	return Z_Registration_Info_UClass_UFuzzyAIDecisionProfile.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyAIDecisionProfile_NoRegister()
{
	return UFuzzyAIDecisionProfile::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyAIDecisionProfile_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Utility/FuzzyAIDecisionProfile.h" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIDecisionProfile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interpretations_Inner_MetaData[] = {
		{ "Category", "Fuzzy AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIDecisionProfile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Interpretations_MetaData[] = {
		{ "Category", "Fuzzy AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIDecisionProfile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_Inner_MetaData[] = {
		{ "Category", "Fuzzy AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIDecisionProfile.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[] = {
		{ "Category", "Fuzzy AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyAIDecisionProfile.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyAIDecisionProfile constinit property declarations ******************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Interpretations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Interpretations;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFuzzyAIDecisionProfile constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyAIDecisionProfile>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyAIDecisionProfile_Statics

// ********** Begin Class UFuzzyAIDecisionProfile Property Definitions *****************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFuzzyAIDecisionProfile_Statics::NewProp_Interpretations_Inner = { "Interpretations", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFuzzyAIInterpretation_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interpretations_Inner_MetaData), NewProp_Interpretations_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFuzzyAIDecisionProfile_Statics::NewProp_Interpretations = { "Interpretations", nullptr, (EPropertyFlags)0x011400800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIDecisionProfile, Interpretations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Interpretations_MetaData), NewProp_Interpretations_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFuzzyAIDecisionProfile_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFuzzyAIAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_Inner_MetaData), NewProp_Actions_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFuzzyAIDecisionProfile_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x011400800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIDecisionProfile, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_MetaData), NewProp_Actions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFuzzyAIDecisionProfile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIDecisionProfile_Statics::NewProp_Interpretations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIDecisionProfile_Statics::NewProp_Interpretations,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIDecisionProfile_Statics::NewProp_Actions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIDecisionProfile_Statics::NewProp_Actions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIDecisionProfile_Statics::PropPointers) < 2048);
// ********** End Class UFuzzyAIDecisionProfile Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UFuzzyAIDecisionProfile_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIDecisionProfile_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyAIDecisionProfile_Statics::ClassParams = {
	&UFuzzyAIDecisionProfile::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFuzzyAIDecisionProfile_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIDecisionProfile_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIDecisionProfile_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyAIDecisionProfile_Statics::Class_MetaDataParams)
};
void UFuzzyAIDecisionProfile::StaticRegisterNativesUFuzzyAIDecisionProfile()
{
}
UClass* Z_Construct_UClass_UFuzzyAIDecisionProfile()
{
	if (!Z_Registration_Info_UClass_UFuzzyAIDecisionProfile.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyAIDecisionProfile.OuterSingleton, Z_Construct_UClass_UFuzzyAIDecisionProfile_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyAIDecisionProfile.OuterSingleton;
}
UFuzzyAIDecisionProfile::UFuzzyAIDecisionProfile(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyAIDecisionProfile);
UFuzzyAIDecisionProfile::~UFuzzyAIDecisionProfile() {}
// ********** End Class UFuzzyAIDecisionProfile ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIDecisionProfile_h__Script_FuzzyAIRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFuzzyAIDecisionProfile, UFuzzyAIDecisionProfile::StaticClass, TEXT("UFuzzyAIDecisionProfile"), &Z_Registration_Info_UClass_UFuzzyAIDecisionProfile, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyAIDecisionProfile), 3531750033U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIDecisionProfile_h__Script_FuzzyAIRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIDecisionProfile_h__Script_FuzzyAIRuntime_2425944385{
	TEXT("/Script/FuzzyAIRuntime"),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIDecisionProfile_h__Script_FuzzyAIRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyAIDecisionProfile_h__Script_FuzzyAIRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
