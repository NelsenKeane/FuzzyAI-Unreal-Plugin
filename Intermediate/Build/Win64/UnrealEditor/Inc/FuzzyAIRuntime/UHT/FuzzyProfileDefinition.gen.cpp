// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Profiling/FuzzyProfileDefinition.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFuzzyProfileDefinition() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyProfileDefinition();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyProfileDefinition_NoRegister();
UPackage* Z_Construct_UPackage__Script_FuzzyAIRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFuzzyProfileDefinition **************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyProfileDefinition;
UClass* UFuzzyProfileDefinition::GetPrivateStaticClass()
{
	using TClass = UFuzzyProfileDefinition;
	if (!Z_Registration_Info_UClass_UFuzzyProfileDefinition.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyProfileDefinition"),
			Z_Registration_Info_UClass_UFuzzyProfileDefinition.InnerSingleton,
			StaticRegisterNativesUFuzzyProfileDefinition,
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
	return Z_Registration_Info_UClass_UFuzzyProfileDefinition.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyProfileDefinition_NoRegister()
{
	return UFuzzyProfileDefinition::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyProfileDefinition_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Shared configuration only. Opportunity definitions and estimators belong in the processor. */" },
#endif
		{ "IncludePath", "Profiling/FuzzyProfileDefinition.h" },
		{ "ModuleRelativePath", "Public/Profiling/FuzzyProfileDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shared configuration only. Opportunity definitions and estimators belong in the processor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorMetricKeys_MetaData[] = {
		{ "Category", "Profile" },
		{ "ModuleRelativePath", "Public/Profiling/FuzzyProfileDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PerformanceMetricKeys_MetaData[] = {
		{ "Category", "Profile" },
		{ "ModuleRelativePath", "Public/Profiling/FuzzyProfileDefinition.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EvidenceWindowSeconds_MetaData[] = {
		{ "Category", "Profile" },
		{ "ClampMin", "0.01" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Provisional authoring settings; no rolling window or smoothing is implemented yet. */" },
#endif
		{ "ModuleRelativePath", "Public/Profiling/FuzzyProfileDefinition.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Provisional authoring settings; no rolling window or smoothing is implemented yet." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinimumSamples_MetaData[] = {
		{ "Category", "Profile" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/Profiling/FuzzyProfileDefinition.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyProfileDefinition constinit property declarations ******************
	static const UECodeGen_Private::FNamePropertyParams NewProp_BehaviorMetricKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_BehaviorMetricKeys;
	static const UECodeGen_Private::FNamePropertyParams NewProp_PerformanceMetricKeys_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PerformanceMetricKeys;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_EvidenceWindowSeconds;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MinimumSamples;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFuzzyProfileDefinition constinit property declarations ********************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyProfileDefinition>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyProfileDefinition_Statics

// ********** Begin Class UFuzzyProfileDefinition Property Definitions *****************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFuzzyProfileDefinition_Statics::NewProp_BehaviorMetricKeys_Inner = { "BehaviorMetricKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFuzzyProfileDefinition_Statics::NewProp_BehaviorMetricKeys = { "BehaviorMetricKeys", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyProfileDefinition, BehaviorMetricKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorMetricKeys_MetaData), NewProp_BehaviorMetricKeys_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFuzzyProfileDefinition_Statics::NewProp_PerformanceMetricKeys_Inner = { "PerformanceMetricKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFuzzyProfileDefinition_Statics::NewProp_PerformanceMetricKeys = { "PerformanceMetricKeys", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyProfileDefinition, PerformanceMetricKeys), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PerformanceMetricKeys_MetaData), NewProp_PerformanceMetricKeys_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFuzzyProfileDefinition_Statics::NewProp_EvidenceWindowSeconds = { "EvidenceWindowSeconds", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyProfileDefinition, EvidenceWindowSeconds), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EvidenceWindowSeconds_MetaData), NewProp_EvidenceWindowSeconds_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UFuzzyProfileDefinition_Statics::NewProp_MinimumSamples = { "MinimumSamples", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyProfileDefinition, MinimumSamples), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinimumSamples_MetaData), NewProp_MinimumSamples_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFuzzyProfileDefinition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyProfileDefinition_Statics::NewProp_BehaviorMetricKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyProfileDefinition_Statics::NewProp_BehaviorMetricKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyProfileDefinition_Statics::NewProp_PerformanceMetricKeys_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyProfileDefinition_Statics::NewProp_PerformanceMetricKeys,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyProfileDefinition_Statics::NewProp_EvidenceWindowSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyProfileDefinition_Statics::NewProp_MinimumSamples,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyProfileDefinition_Statics::PropPointers) < 2048);
// ********** End Class UFuzzyProfileDefinition Property Definitions *******************************
UObject* (*const Z_Construct_UClass_UFuzzyProfileDefinition_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyProfileDefinition_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyProfileDefinition_Statics::ClassParams = {
	&UFuzzyProfileDefinition::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFuzzyProfileDefinition_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyProfileDefinition_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyProfileDefinition_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyProfileDefinition_Statics::Class_MetaDataParams)
};
void UFuzzyProfileDefinition::StaticRegisterNativesUFuzzyProfileDefinition()
{
}
UClass* Z_Construct_UClass_UFuzzyProfileDefinition()
{
	if (!Z_Registration_Info_UClass_UFuzzyProfileDefinition.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyProfileDefinition.OuterSingleton, Z_Construct_UClass_UFuzzyProfileDefinition_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyProfileDefinition.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyProfileDefinition);
UFuzzyProfileDefinition::~UFuzzyProfileDefinition() {}
// ********** End Class UFuzzyProfileDefinition ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Profiling_FuzzyProfileDefinition_h__Script_FuzzyAIRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFuzzyProfileDefinition, UFuzzyProfileDefinition::StaticClass, TEXT("UFuzzyProfileDefinition"), &Z_Registration_Info_UClass_UFuzzyProfileDefinition, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyProfileDefinition), 1457529988U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Profiling_FuzzyProfileDefinition_h__Script_FuzzyAIRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Profiling_FuzzyProfileDefinition_h__Script_FuzzyAIRuntime_2808614396{
	TEXT("/Script/FuzzyAIRuntime"),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Profiling_FuzzyProfileDefinition_h__Script_FuzzyAIRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Profiling_FuzzyProfileDefinition_h__Script_FuzzyAIRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
