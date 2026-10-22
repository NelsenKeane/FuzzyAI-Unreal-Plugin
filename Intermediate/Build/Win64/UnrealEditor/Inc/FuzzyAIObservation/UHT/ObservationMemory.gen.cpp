// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observation/ObservationMemory.h"
#include "Observation/ObservationRuntimeTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeObservationMemory() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
FUZZYAIOBSERVATION_API UClass* Z_Construct_UClass_UFuzzyAIObservationMemory();
FUZZYAIOBSERVATION_API UClass* Z_Construct_UClass_UFuzzyAIObservationMemory_NoRegister();
FUZZYAIOBSERVATION_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIObservationRecord();
FUZZYAIOBSERVATION_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIObservedEvent();
FUZZYAIOBSERVATION_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIRememberedObservation();
UPackage* Z_Construct_UPackage__Script_FuzzyAIObservation();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFuzzyAIObservationMemory ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyAIObservationMemory;
UClass* UFuzzyAIObservationMemory::GetPrivateStaticClass()
{
	using TClass = UFuzzyAIObservationMemory;
	if (!Z_Registration_Info_UClass_UFuzzyAIObservationMemory.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyAIObservationMemory"),
			Z_Registration_Info_UClass_UFuzzyAIObservationMemory.InnerSingleton,
			StaticRegisterNativesUFuzzyAIObservationMemory,
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
	return Z_Registration_Info_UClass_UFuzzyAIObservationMemory.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyAIObservationMemory_NoRegister()
{
	return UFuzzyAIObservationMemory::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyAIObservationMemory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Local memory only; no shared player profile or inferred knowledge. */" },
#endif
		{ "IncludePath", "Observation/ObservationMemory.h" },
		{ "ModuleRelativePath", "Public/Observation/ObservationMemory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Local memory only; no shared player profile or inferred knowledge." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Records_MetaData[] = {
		{ "ModuleRelativePath", "Public/Observation/ObservationMemory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NotificationBaselines_MetaData[] = {
		{ "ModuleRelativePath", "Public/Observation/ObservationMemory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Events_MetaData[] = {
		{ "ModuleRelativePath", "Public/Observation/ObservationMemory.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyAIObservationMemory constinit property declarations ****************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Records_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Records;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NotificationBaselines_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NotificationBaselines;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Events_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Events;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFuzzyAIObservationMemory constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyAIObservationMemory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyAIObservationMemory_Statics

// ********** Begin Class UFuzzyAIObservationMemory Property Definitions ***************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFuzzyAIObservationMemory_Statics::NewProp_Records_Inner = { "Records", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFuzzyAIRememberedObservation, METADATA_PARAMS(0, nullptr) }; // 2908244308
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFuzzyAIObservationMemory_Statics::NewProp_Records = { "Records", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIObservationMemory, Records), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Records_MetaData), NewProp_Records_MetaData) }; // 2908244308
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFuzzyAIObservationMemory_Statics::NewProp_NotificationBaselines_Inner = { "NotificationBaselines", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFuzzyAIObservationRecord, METADATA_PARAMS(0, nullptr) }; // 3836740843
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFuzzyAIObservationMemory_Statics::NewProp_NotificationBaselines = { "NotificationBaselines", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIObservationMemory, NotificationBaselines), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NotificationBaselines_MetaData), NewProp_NotificationBaselines_MetaData) }; // 3836740843
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFuzzyAIObservationMemory_Statics::NewProp_Events_Inner = { "Events", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFuzzyAIObservedEvent, METADATA_PARAMS(0, nullptr) }; // 864637315
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFuzzyAIObservationMemory_Statics::NewProp_Events = { "Events", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIObservationMemory, Events), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Events_MetaData), NewProp_Events_MetaData) }; // 864637315
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFuzzyAIObservationMemory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIObservationMemory_Statics::NewProp_Records_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIObservationMemory_Statics::NewProp_Records,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIObservationMemory_Statics::NewProp_NotificationBaselines_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIObservationMemory_Statics::NewProp_NotificationBaselines,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIObservationMemory_Statics::NewProp_Events_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIObservationMemory_Statics::NewProp_Events,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIObservationMemory_Statics::PropPointers) < 2048);
// ********** End Class UFuzzyAIObservationMemory Property Definitions *****************************
UObject* (*const Z_Construct_UClass_UFuzzyAIObservationMemory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIObservation,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIObservationMemory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyAIObservationMemory_Statics::ClassParams = {
	&UFuzzyAIObservationMemory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFuzzyAIObservationMemory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIObservationMemory_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIObservationMemory_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyAIObservationMemory_Statics::Class_MetaDataParams)
};
void UFuzzyAIObservationMemory::StaticRegisterNativesUFuzzyAIObservationMemory()
{
}
UClass* Z_Construct_UClass_UFuzzyAIObservationMemory()
{
	if (!Z_Registration_Info_UClass_UFuzzyAIObservationMemory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyAIObservationMemory.OuterSingleton, Z_Construct_UClass_UFuzzyAIObservationMemory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyAIObservationMemory.OuterSingleton;
}
UFuzzyAIObservationMemory::UFuzzyAIObservationMemory(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyAIObservationMemory);
UFuzzyAIObservationMemory::~UFuzzyAIObservationMemory() {}
// ********** End Class UFuzzyAIObservationMemory **************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_ObservationMemory_h__Script_FuzzyAIObservation_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFuzzyAIObservationMemory, UFuzzyAIObservationMemory::StaticClass, TEXT("UFuzzyAIObservationMemory"), &Z_Registration_Info_UClass_UFuzzyAIObservationMemory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyAIObservationMemory), 3950076736U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_ObservationMemory_h__Script_FuzzyAIObservation_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_ObservationMemory_h__Script_FuzzyAIObservation_4166418537{
	TEXT("/Script/FuzzyAIObservation"),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_ObservationMemory_h__Script_FuzzyAIObservation_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIObservation_Public_Observation_ObservationMemory_h__Script_FuzzyAIObservation_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
