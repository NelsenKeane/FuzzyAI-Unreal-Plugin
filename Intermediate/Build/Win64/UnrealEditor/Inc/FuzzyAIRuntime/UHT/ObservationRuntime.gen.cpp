// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observation/ObservationRuntime.h"
#include "Observation/ObservationRuntimeTypes.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeObservationRuntime() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIObservationRuntime();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyAIObservationRuntime_NoRegister();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIObservationEntry();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIObservationRecord();
UPackage* Z_Construct_UPackage__Script_FuzzyAIRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFuzzyAIObservationRuntime ***********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyAIObservationRuntime;
UClass* UFuzzyAIObservationRuntime::GetPrivateStaticClass()
{
	using TClass = UFuzzyAIObservationRuntime;
	if (!Z_Registration_Info_UClass_UFuzzyAIObservationRuntime.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyAIObservationRuntime"),
			Z_Registration_Info_UClass_UFuzzyAIObservationRuntime.InnerSingleton,
			StaticRegisterNativesUFuzzyAIObservationRuntime,
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
	return Z_Registration_Info_UClass_UFuzzyAIObservationRuntime.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyAIObservationRuntime_NoRegister()
{
	return UFuzzyAIObservationRuntime::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyAIObservationRuntime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Per-enemy state. Scheduling and notifications are coordinated by FuzzyAIComponent. */" },
#endif
		{ "IncludePath", "Observation/ObservationRuntime.h" },
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntime.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per-enemy state. Scheduling and notifications are coordinated by FuzzyAIComponent." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Entries_MetaData[] = {
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntime.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Records_MetaData[] = {
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntime.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastNotified_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Compare against the last notification so small changes can accumulate past tolerance.\n" },
#endif
		{ "ModuleRelativePath", "Public/Observation/ObservationRuntime.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Compare against the last notification so small changes can accumulate past tolerance." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyAIObservationRuntime constinit property declarations ***************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Entries_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Entries;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Records_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Records_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Records;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastNotified_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LastNotified_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LastNotified;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFuzzyAIObservationRuntime constinit property declarations *****************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyAIObservationRuntime>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyAIObservationRuntime_Statics

// ********** Begin Class UFuzzyAIObservationRuntime Property Definitions **************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFuzzyAIObservationRuntime_Statics::NewProp_Entries_Inner = { "Entries", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFuzzyAIObservationEntry, METADATA_PARAMS(0, nullptr) }; // 3358307648
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFuzzyAIObservationRuntime_Statics::NewProp_Entries = { "Entries", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIObservationRuntime, Entries), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Entries_MetaData), NewProp_Entries_MetaData) }; // 3358307648
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFuzzyAIObservationRuntime_Statics::NewProp_Records_ValueProp = { "Records", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFuzzyAIObservationRecord, METADATA_PARAMS(0, nullptr) }; // 3864767520
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFuzzyAIObservationRuntime_Statics::NewProp_Records_Key_KeyProp = { "Records_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFuzzyAIObservationRuntime_Statics::NewProp_Records = { "Records", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIObservationRuntime, Records), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Records_MetaData), NewProp_Records_MetaData) }; // 3864767520
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFuzzyAIObservationRuntime_Statics::NewProp_LastNotified_ValueProp = { "LastNotified", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFuzzyAIObservationRecord, METADATA_PARAMS(0, nullptr) }; // 3864767520
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFuzzyAIObservationRuntime_Statics::NewProp_LastNotified_Key_KeyProp = { "LastNotified_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFuzzyAIObservationRuntime_Statics::NewProp_LastNotified = { "LastNotified", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyAIObservationRuntime, LastNotified), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastNotified_MetaData), NewProp_LastNotified_MetaData) }; // 3864767520
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFuzzyAIObservationRuntime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIObservationRuntime_Statics::NewProp_Entries_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIObservationRuntime_Statics::NewProp_Entries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIObservationRuntime_Statics::NewProp_Records_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIObservationRuntime_Statics::NewProp_Records_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIObservationRuntime_Statics::NewProp_Records,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIObservationRuntime_Statics::NewProp_LastNotified_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIObservationRuntime_Statics::NewProp_LastNotified_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyAIObservationRuntime_Statics::NewProp_LastNotified,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIObservationRuntime_Statics::PropPointers) < 2048);
// ********** End Class UFuzzyAIObservationRuntime Property Definitions ****************************
UObject* (*const Z_Construct_UClass_UFuzzyAIObservationRuntime_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIObservationRuntime_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyAIObservationRuntime_Statics::ClassParams = {
	&UFuzzyAIObservationRuntime::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UFuzzyAIObservationRuntime_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIObservationRuntime_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyAIObservationRuntime_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyAIObservationRuntime_Statics::Class_MetaDataParams)
};
void UFuzzyAIObservationRuntime::StaticRegisterNativesUFuzzyAIObservationRuntime()
{
}
UClass* Z_Construct_UClass_UFuzzyAIObservationRuntime()
{
	if (!Z_Registration_Info_UClass_UFuzzyAIObservationRuntime.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyAIObservationRuntime.OuterSingleton, Z_Construct_UClass_UFuzzyAIObservationRuntime_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyAIObservationRuntime.OuterSingleton;
}
UFuzzyAIObservationRuntime::UFuzzyAIObservationRuntime(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyAIObservationRuntime);
UFuzzyAIObservationRuntime::~UFuzzyAIObservationRuntime() {}
// ********** End Class UFuzzyAIObservationRuntime *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationRuntime_h__Script_FuzzyAIRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFuzzyAIObservationRuntime, UFuzzyAIObservationRuntime::StaticClass, TEXT("UFuzzyAIObservationRuntime"), &Z_Registration_Info_UClass_UFuzzyAIObservationRuntime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyAIObservationRuntime), 1434209718U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationRuntime_h__Script_FuzzyAIRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationRuntime_h__Script_FuzzyAIRuntime_3838591291{
	TEXT("/Script/FuzzyAIRuntime"),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationRuntime_h__Script_FuzzyAIRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_ObservationRuntime_h__Script_FuzzyAIRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
