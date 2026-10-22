// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/FuzzyAIConfig.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFuzzyAIConfig() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIConfig();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIConfig_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyModelAsset_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyProfileDefinition_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyUtilityAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_FuzzyAIRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFuzzyAIConfig ***********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyAIConfig;
UClass* UFuzzyAIConfig::GetPrivateStaticClass()
{
	using TClass = UFuzzyAIConfig;
	if (!Z_Registration_Info_UClass_UFuzzyAIConfig.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyAIConfig"),
			Z_Registration_Info_UClass_UFuzzyAIConfig.InnerSingleton,
			StaticRegisterNativesUFuzzyAIConfig,
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
	return Z_Registration_Info_UClass_UFuzzyAIConfig.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyAIConfig_NoRegister()
{
	return UFuzzyAIConfig::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyAIConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional shared configuration for the unfinished decision pipeline. Contains no enemy state. */" },
#endif
		{ "IncludePath", "Core/FuzzyAIConfig.h" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional shared configuration for the unfinished decision pipeline. Contains no enemy state." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ProfileDefinition_MetaData[] = {
		{ "Category", "Profiling" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FuzzyModel_MetaData[] = {
		{ "Category", "Interpretation" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Actions_MetaData[] = {
		{ "Category", "Utility" },
		{ "ModuleRelativePath", "Public/Core/FuzzyAIConfig.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyAIConfig constinit property declarations ***************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ProfileDefinition;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FuzzyModel;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Actions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFuzzyAIConfig constinit property declarations *****************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyAIConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyAIConfig_Statics

// ********** Begin Class UFuzzyAIConfig Property Definitions **************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFuzzyAIConfig_Statics::NewProp_ProfileDefinition = { "ProfileDefinition", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIConfig, ProfileDefinition), Z_Construct_UClass_UFuzzyProfileDefinition_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ProfileDefinition_MetaData), NewProp_ProfileDefinition_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFuzzyAIConfig_Statics::NewProp_FuzzyModel = { "FuzzyModel", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIConfig, FuzzyModel), Z_Construct_UClass_UFuzzyModelAsset_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FuzzyModel_MetaData), NewProp_FuzzyModel_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFuzzyAIConfig_Statics::NewProp_Actions_Inner = { "Actions", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFuzzyUtilityAction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFuzzyAIConfig_Statics::NewProp_Actions = { "Actions", nullptr, (EPropertyFlags)0x0114000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIConfig, Actions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Actions_MetaData), NewProp_Actions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFuzzyAIConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIConfig_Statics::NewProp_ProfileDefinition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIConfig_Statics::NewProp_FuzzyModel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIConfig_Statics::NewProp_Actions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIConfig_Statics::NewProp_Actions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIConfig_Statics::PropPointers) < 2048);
// ********** End Class UFuzzyAIConfig Property Definitions ****************************************
UObject* (*const Z_Construct_UClass_UFuzzyAIConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyAIConfig_Statics::ClassParams = {
	&UFuzzyAIConfig::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFuzzyAIConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIConfig_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyAIConfig_Statics::Class_MetaDataParams)
};
void UFuzzyAIConfig::StaticRegisterNativesUFuzzyAIConfig()
{
}
UClass* Z_Construct_UClass_UFuzzyAIConfig()
{
	if (!Z_Registration_Info_UClass_UFuzzyAIConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyAIConfig.OuterSingleton, Z_Construct_UClass_UFuzzyAIConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyAIConfig.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyAIConfig);
UFuzzyAIConfig::~UFuzzyAIConfig() {}
// ********** End Class UFuzzyAIConfig *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIConfig_h__Script_FuzzyAIRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFuzzyAIConfig, UFuzzyAIConfig::StaticClass, TEXT("UFuzzyAIConfig"), &Z_Registration_Info_UClass_UFuzzyAIConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyAIConfig), 128511914U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIConfig_h__Script_FuzzyAIRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIConfig_h__Script_FuzzyAIRuntime_3947859215{
	TEXT("/Script/FuzzyAIRuntime"),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIConfig_h__Script_FuzzyAIRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Core_FuzzyAIConfig_h__Script_FuzzyAIRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
