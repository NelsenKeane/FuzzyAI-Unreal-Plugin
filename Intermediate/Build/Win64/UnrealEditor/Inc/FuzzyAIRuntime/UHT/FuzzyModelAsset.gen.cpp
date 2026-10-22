// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interpretation/FuzzyModelAsset.h"
#include "Interpretation/FuzzyInterpretationTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFuzzyModelAsset() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyModelAsset();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyModelAsset_NoRegister();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIInputBinding();
UPackage* Z_Construct_UPackage__Script_FuzzyAIRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFuzzyModelAsset *********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyModelAsset;
UClass* UFuzzyModelAsset::GetPrivateStaticClass()
{
	using TClass = UFuzzyModelAsset;
	if (!Z_Registration_Info_UClass_UFuzzyModelAsset.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyModelAsset"),
			Z_Registration_Info_UClass_UFuzzyModelAsset.InnerSingleton,
			StaticRegisterNativesUFuzzyModelAsset,
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
	return Z_Registration_Info_UClass_UFuzzyModelAsset.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyModelAsset_NoRegister()
{
	return UFuzzyModelAsset::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyModelAsset_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Model authoring template. Text is stored, not imported, parsed or executed yet. */" },
#endif
		{ "IncludePath", "Interpretation/FuzzyModelAsset.h" },
		{ "ModuleRelativePath", "Public/Interpretation/FuzzyModelAsset.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Model authoring template. Text is stored, not imported, parsed or executed yet." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FLLText_MetaData[] = {
		{ "Category", "Model" },
		{ "ModuleRelativePath", "Public/Interpretation/FuzzyModelAsset.h" },
		{ "MultiLine", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Inputs_MetaData[] = {
		{ "Category", "Model" },
		{ "ModuleRelativePath", "Public/Interpretation/FuzzyModelAsset.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyModelAsset constinit property declarations *************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_FLLText;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Inputs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Inputs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFuzzyModelAsset constinit property declarations ***************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyModelAsset>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyModelAsset_Statics

// ********** Begin Class UFuzzyModelAsset Property Definitions ************************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFuzzyModelAsset_Statics::NewProp_FLLText = { "FLLText", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyModelAsset, FLLText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FLLText_MetaData), NewProp_FLLText_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFuzzyModelAsset_Statics::NewProp_Inputs_Inner = { "Inputs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFuzzyAIInputBinding, METADATA_PARAMS(0, nullptr) }; // 3116845412
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFuzzyModelAsset_Statics::NewProp_Inputs = { "Inputs", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyModelAsset, Inputs), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Inputs_MetaData), NewProp_Inputs_MetaData) }; // 3116845412
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFuzzyModelAsset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyModelAsset_Statics::NewProp_FLLText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyModelAsset_Statics::NewProp_Inputs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyModelAsset_Statics::NewProp_Inputs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyModelAsset_Statics::PropPointers) < 2048);
// ********** End Class UFuzzyModelAsset Property Definitions **************************************
UObject* (*const Z_Construct_UClass_UFuzzyModelAsset_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyModelAsset_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyModelAsset_Statics::ClassParams = {
	&UFuzzyModelAsset::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFuzzyModelAsset_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyModelAsset_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyModelAsset_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyModelAsset_Statics::Class_MetaDataParams)
};
void UFuzzyModelAsset::StaticRegisterNativesUFuzzyModelAsset()
{
}
UClass* Z_Construct_UClass_UFuzzyModelAsset()
{
	if (!Z_Registration_Info_UClass_UFuzzyModelAsset.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyModelAsset.OuterSingleton, Z_Construct_UClass_UFuzzyModelAsset_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyModelAsset.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyModelAsset);
UFuzzyModelAsset::~UFuzzyModelAsset() {}
// ********** End Class UFuzzyModelAsset ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Interpretation_FuzzyModelAsset_h__Script_FuzzyAIRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFuzzyModelAsset, UFuzzyModelAsset::StaticClass, TEXT("UFuzzyModelAsset"), &Z_Registration_Info_UClass_UFuzzyModelAsset, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyModelAsset), 824454479U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Interpretation_FuzzyModelAsset_h__Script_FuzzyAIRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Interpretation_FuzzyModelAsset_h__Script_FuzzyAIRuntime_2928569600{
	TEXT("/Script/FuzzyAIRuntime"),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Interpretation_FuzzyModelAsset_h__Script_FuzzyAIRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Interpretation_FuzzyModelAsset_h__Script_FuzzyAIRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
