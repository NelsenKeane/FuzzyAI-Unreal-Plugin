// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interpretation/FuzzyInterpreter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFuzzyInterpreter() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyInterpreter();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyInterpreter_NoRegister();
UPackage* Z_Construct_UPackage__Script_FuzzyAIRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFuzzyInterpreter ********************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyInterpreter;
UClass* UFuzzyInterpreter::GetPrivateStaticClass()
{
	using TClass = UFuzzyInterpreter;
	if (!Z_Registration_Info_UClass_UFuzzyInterpreter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyInterpreter"),
			Z_Registration_Info_UClass_UFuzzyInterpreter.InnerSingleton,
			StaticRegisterNativesUFuzzyInterpreter,
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
	return Z_Registration_Info_UClass_UFuzzyInterpreter.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyInterpreter_NoRegister()
{
	return UFuzzyInterpreter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyInterpreter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Per-enemy adapter boundary. No fuzzylite dependency or native engine handle exists yet. */" },
#endif
		{ "IncludePath", "Interpretation/FuzzyInterpreter.h" },
		{ "ModuleRelativePath", "Public/Interpretation/FuzzyInterpreter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Per-enemy adapter boundary. No fuzzylite dependency or native engine handle exists yet." },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyInterpreter constinit property declarations ************************
// ********** End Class UFuzzyInterpreter constinit property declarations **************************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyInterpreter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyInterpreter_Statics
UObject* (*const Z_Construct_UClass_UFuzzyInterpreter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyInterpreter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyInterpreter_Statics::ClassParams = {
	&UFuzzyInterpreter::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyInterpreter_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyInterpreter_Statics::Class_MetaDataParams)
};
void UFuzzyInterpreter::StaticRegisterNativesUFuzzyInterpreter()
{
}
UClass* Z_Construct_UClass_UFuzzyInterpreter()
{
	if (!Z_Registration_Info_UClass_UFuzzyInterpreter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyInterpreter.OuterSingleton, Z_Construct_UClass_UFuzzyInterpreter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyInterpreter.OuterSingleton;
}
UFuzzyInterpreter::UFuzzyInterpreter(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyInterpreter);
UFuzzyInterpreter::~UFuzzyInterpreter() {}
// ********** End Class UFuzzyInterpreter **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Interpretation_FuzzyInterpreter_h__Script_FuzzyAIRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFuzzyInterpreter, UFuzzyInterpreter::StaticClass, TEXT("UFuzzyInterpreter"), &Z_Registration_Info_UClass_UFuzzyInterpreter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyInterpreter), 1555724452U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Interpretation_FuzzyInterpreter_h__Script_FuzzyAIRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Interpretation_FuzzyInterpreter_h__Script_FuzzyAIRuntime_810234106{
	TEXT("/Script/FuzzyAIRuntime"),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Interpretation_FuzzyInterpreter_h__Script_FuzzyAIRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Interpretation_FuzzyInterpreter_h__Script_FuzzyAIRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
