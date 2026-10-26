// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observation/Sensors/FuzzyAttributeObservation.h"
#include "AttributeSet.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFuzzyAttributeObservation() {}

// ********** Begin Cross Module References ********************************************************
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAttributeObservation();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAttributeObservation_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyObservation();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIAttributeBinding();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttribute();
UPackage* Z_Construct_UPackage__Script_FuzzyAIRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin ScriptStruct FFuzzyAIAttributeBinding ******************************************
struct Z_Construct_UScriptStruct_FFuzzyAIAttributeBinding_Statics
{
	static inline consteval int32 GetStructSize() { return sizeof(FFuzzyAIAttributeBinding); }
	static inline consteval int16 GetStructAlignment() { return alignof(FFuzzyAIAttributeBinding); }
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Observation/Sensors/FuzzyAttributeObservation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OutputIndex_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/Observation/Sensors/FuzzyAttributeObservation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Attribute_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/Observation/Sensors/FuzzyAttributeObservation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bNormalize_MetaData[] = {
		{ "Category", "Attribute" },
		{ "ModuleRelativePath", "Public/Observation/Sensors/FuzzyAttributeObservation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaximumAttribute_MetaData[] = {
		{ "Category", "Attribute" },
		{ "EditCondition", "bNormalize" },
		{ "ModuleRelativePath", "Public/Observation/Sensors/FuzzyAttributeObservation.h" },
	};
#endif // WITH_METADATA

// ********** Begin ScriptStruct FFuzzyAIAttributeBinding constinit property declarations **********
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutputIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Attribute;
	static void NewProp_bNormalize_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bNormalize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaximumAttribute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End ScriptStruct FFuzzyAIAttributeBinding constinit property declarations ************
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFuzzyAIAttributeBinding>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
}; // struct Z_Construct_UScriptStruct_FFuzzyAIAttributeBinding_Statics
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_FFuzzyAIAttributeBinding;
class UScriptStruct* FFuzzyAIAttributeBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIAttributeBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_FFuzzyAIAttributeBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FFuzzyAIAttributeBinding, (UObject*)Z_Construct_UPackage__Script_FuzzyAIRuntime(), TEXT("FuzzyAIAttributeBinding"));
	}
	return Z_Registration_Info_UScriptStruct_FFuzzyAIAttributeBinding.OuterSingleton;
	}

// ********** Begin ScriptStruct FFuzzyAIAttributeBinding Property Definitions *********************
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFuzzyAIAttributeBinding_Statics::NewProp_OutputIndex = { "OutputIndex", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIAttributeBinding, OutputIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OutputIndex_MetaData), NewProp_OutputIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIAttributeBinding_Statics::NewProp_Attribute = { "Attribute", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIAttributeBinding, Attribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Attribute_MetaData), NewProp_Attribute_MetaData) }; // 4237305057
void Z_Construct_UScriptStruct_FFuzzyAIAttributeBinding_Statics::NewProp_bNormalize_SetBit(void* Obj)
{
	((FFuzzyAIAttributeBinding*)Obj)->bNormalize = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FFuzzyAIAttributeBinding_Statics::NewProp_bNormalize = { "bNormalize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FFuzzyAIAttributeBinding), &Z_Construct_UScriptStruct_FFuzzyAIAttributeBinding_Statics::NewProp_bNormalize_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bNormalize_MetaData), NewProp_bNormalize_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FFuzzyAIAttributeBinding_Statics::NewProp_MaximumAttribute = { "MaximumAttribute", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FFuzzyAIAttributeBinding, MaximumAttribute), Z_Construct_UScriptStruct_FGameplayAttribute, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaximumAttribute_MetaData), NewProp_MaximumAttribute_MetaData) }; // 4237305057
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFuzzyAIAttributeBinding_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIAttributeBinding_Statics::NewProp_OutputIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIAttributeBinding_Statics::NewProp_Attribute,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIAttributeBinding_Statics::NewProp_bNormalize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFuzzyAIAttributeBinding_Statics::NewProp_MaximumAttribute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIAttributeBinding_Statics::PropPointers) < 2048);
// ********** End ScriptStruct FFuzzyAIAttributeBinding Property Definitions ***********************
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFuzzyAIAttributeBinding_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
	nullptr,
	&NewStructOps,
	"FuzzyAIAttributeBinding",
	Z_Construct_UScriptStruct_FFuzzyAIAttributeBinding_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIAttributeBinding_Statics::PropPointers),
	sizeof(FFuzzyAIAttributeBinding),
	alignof(FFuzzyAIAttributeBinding),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFuzzyAIAttributeBinding_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FFuzzyAIAttributeBinding_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIAttributeBinding()
{
	if (!Z_Registration_Info_UScriptStruct_FFuzzyAIAttributeBinding.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_FFuzzyAIAttributeBinding.InnerSingleton, Z_Construct_UScriptStruct_FFuzzyAIAttributeBinding_Statics::StructParams);
	}
	return CastChecked<UScriptStruct>(Z_Registration_Info_UScriptStruct_FFuzzyAIAttributeBinding.InnerSingleton);
}
// ********** End ScriptStruct FFuzzyAIAttributeBinding ********************************************

// ********** Begin Class UFuzzyAttributeObservation ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyAttributeObservation;
UClass* UFuzzyAttributeObservation::GetPrivateStaticClass()
{
	using TClass = UFuzzyAttributeObservation;
	if (!Z_Registration_Info_UClass_UFuzzyAttributeObservation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyAttributeObservation"),
			Z_Registration_Info_UClass_UFuzzyAttributeObservation.InnerSingleton,
			StaticRegisterNativesUFuzzyAttributeObservation,
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
	return Z_Registration_Info_UClass_UFuzzyAttributeObservation.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyAttributeObservation_NoRegister()
{
	return UFuzzyAttributeObservation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyAttributeObservation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "GAS Attributes Observation" },
		{ "IncludePath", "Observation/Sensors/FuzzyAttributeObservation.h" },
		{ "ModuleRelativePath", "Public/Observation/Sensors/FuzzyAttributeObservation.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Bindings_MetaData[] = {
		{ "Category", "Attributes" },
		{ "ModuleRelativePath", "Public/Observation/Sensors/FuzzyAttributeObservation.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyAttributeObservation constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Bindings_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Bindings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFuzzyAttributeObservation constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyAttributeObservation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyAttributeObservation_Statics

// ********** Begin Class UFuzzyAttributeObservation Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFuzzyAttributeObservation_Statics::NewProp_Bindings_Inner = { "Bindings", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFuzzyAIAttributeBinding, METADATA_PARAMS(0, nullptr) }; // 3325259985
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFuzzyAttributeObservation_Statics::NewProp_Bindings = { "Bindings", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAttributeObservation, Bindings), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Bindings_MetaData), NewProp_Bindings_MetaData) }; // 3325259985
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFuzzyAttributeObservation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAttributeObservation_Statics::NewProp_Bindings_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAttributeObservation_Statics::NewProp_Bindings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAttributeObservation_Statics::PropPointers) < 2048);
// ********** End Class UFuzzyAttributeObservation Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UFuzzyAttributeObservation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFuzzyObservation,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAttributeObservation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyAttributeObservation_Statics::ClassParams = {
	&UFuzzyAttributeObservation::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFuzzyAttributeObservation_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAttributeObservation_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAttributeObservation_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyAttributeObservation_Statics::Class_MetaDataParams)
};
void UFuzzyAttributeObservation::StaticRegisterNativesUFuzzyAttributeObservation()
{
}
UClass* Z_Construct_UClass_UFuzzyAttributeObservation()
{
	if (!Z_Registration_Info_UClass_UFuzzyAttributeObservation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyAttributeObservation.OuterSingleton, Z_Construct_UClass_UFuzzyAttributeObservation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyAttributeObservation.OuterSingleton;
}
UFuzzyAttributeObservation::UFuzzyAttributeObservation(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyAttributeObservation);
UFuzzyAttributeObservation::~UFuzzyAttributeObservation() {}
// ********** End Class UFuzzyAttributeObservation *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_Sensors_FuzzyAttributeObservation_h__Script_FuzzyAIRuntime_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FFuzzyAIAttributeBinding::StaticStruct, Z_Construct_UScriptStruct_FFuzzyAIAttributeBinding_Statics::NewStructOps, TEXT("FuzzyAIAttributeBinding"),&Z_Registration_Info_UScriptStruct_FFuzzyAIAttributeBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FFuzzyAIAttributeBinding), 3325259985U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFuzzyAttributeObservation, UFuzzyAttributeObservation::StaticClass, TEXT("UFuzzyAttributeObservation"), &Z_Registration_Info_UClass_UFuzzyAttributeObservation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyAttributeObservation), 3635419194U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_Sensors_FuzzyAttributeObservation_h__Script_FuzzyAIRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_Sensors_FuzzyAttributeObservation_h__Script_FuzzyAIRuntime_1750208791{
	TEXT("/Script/FuzzyAIRuntime"),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_Sensors_FuzzyAttributeObservation_h__Script_FuzzyAIRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_Sensors_FuzzyAttributeObservation_h__Script_FuzzyAIRuntime_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_Sensors_FuzzyAttributeObservation_h__Script_FuzzyAIRuntime_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_Sensors_FuzzyAttributeObservation_h__Script_FuzzyAIRuntime_Statics::ScriptStructInfo),
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
