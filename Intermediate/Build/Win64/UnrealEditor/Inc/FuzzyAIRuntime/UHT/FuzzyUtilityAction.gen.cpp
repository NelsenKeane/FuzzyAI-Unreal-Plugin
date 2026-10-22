// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Utility/FuzzyUtilityAction.h"
#include "GameplayTagContainer.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFuzzyUtilityAction() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyUtilityAction();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyUtilityAction_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyUtilityConsideration_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_FuzzyAIRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFuzzyUtilityAction ******************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyUtilityAction;
UClass* UFuzzyUtilityAction::GetPrivateStaticClass()
{
	using TClass = UFuzzyUtilityAction;
	if (!Z_Registration_Info_UClass_UFuzzyUtilityAction.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyUtilityAction"),
			Z_Registration_Info_UClass_UFuzzyUtilityAction.InnerSingleton,
			StaticRegisterNativesUFuzzyUtilityAction,
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
	return Z_Registration_Info_UClass_UFuzzyUtilityAction.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyUtilityAction_NoRegister()
{
	return UFuzzyUtilityAction::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyUtilityAction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Describes a candidate action. Actual GAS/movement activation belongs to the executor. */" },
#endif
		{ "IncludePath", "Utility/FuzzyUtilityAction.h" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyUtilityAction.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Describes a candidate action. Actual GAS/movement activation belongs to the executor." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActionTag_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyUtilityAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "Category", "Action" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyUtilityAction.h" },
		{ "MultiLine", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Considerations_Inner_MetaData[] = {
		{ "Category", "Action" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyUtilityAction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Considerations_MetaData[] = {
		{ "Category", "Action" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Utility/FuzzyUtilityAction.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyUtilityAction constinit property declarations **********************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionTag;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Description;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Considerations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Considerations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFuzzyUtilityAction constinit property declarations ************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyUtilityAction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyUtilityAction_Statics

// ********** Begin Class UFuzzyUtilityAction Property Definitions *********************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFuzzyUtilityAction_Statics::NewProp_ActionTag = { "ActionTag", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyUtilityAction, ActionTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActionTag_MetaData), NewProp_ActionTag_MetaData) }; // 517357616
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UFuzzyUtilityAction_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyUtilityAction, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFuzzyUtilityAction_Statics::NewProp_Considerations_Inner = { "Considerations", nullptr, (EPropertyFlags)0x0106000000080008, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UFuzzyUtilityConsideration_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Considerations_Inner_MetaData), NewProp_Considerations_Inner_MetaData) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFuzzyUtilityAction_Statics::NewProp_Considerations = { "Considerations", nullptr, (EPropertyFlags)0x011400800000001d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyUtilityAction, Considerations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Considerations_MetaData), NewProp_Considerations_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFuzzyUtilityAction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyUtilityAction_Statics::NewProp_ActionTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyUtilityAction_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyUtilityAction_Statics::NewProp_Considerations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyUtilityAction_Statics::NewProp_Considerations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyUtilityAction_Statics::PropPointers) < 2048);
// ********** End Class UFuzzyUtilityAction Property Definitions ***********************************
UObject* (*const Z_Construct_UClass_UFuzzyUtilityAction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyUtilityAction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyUtilityAction_Statics::ClassParams = {
	&UFuzzyUtilityAction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFuzzyUtilityAction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyUtilityAction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyUtilityAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyUtilityAction_Statics::Class_MetaDataParams)
};
void UFuzzyUtilityAction::StaticRegisterNativesUFuzzyUtilityAction()
{
}
UClass* Z_Construct_UClass_UFuzzyUtilityAction()
{
	if (!Z_Registration_Info_UClass_UFuzzyUtilityAction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyUtilityAction.OuterSingleton, Z_Construct_UClass_UFuzzyUtilityAction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyUtilityAction.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyUtilityAction);
UFuzzyUtilityAction::~UFuzzyUtilityAction() {}
// ********** End Class UFuzzyUtilityAction ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyUtilityAction_h__Script_FuzzyAIRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFuzzyUtilityAction, UFuzzyUtilityAction::StaticClass, TEXT("UFuzzyUtilityAction"), &Z_Registration_Info_UClass_UFuzzyUtilityAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyUtilityAction), 3764405539U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyUtilityAction_h__Script_FuzzyAIRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyUtilityAction_h__Script_FuzzyAIRuntime_1754600202{
	TEXT("/Script/FuzzyAIRuntime"),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyUtilityAction_h__Script_FuzzyAIRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Utility_FuzzyUtilityAction_h__Script_FuzzyAIRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
