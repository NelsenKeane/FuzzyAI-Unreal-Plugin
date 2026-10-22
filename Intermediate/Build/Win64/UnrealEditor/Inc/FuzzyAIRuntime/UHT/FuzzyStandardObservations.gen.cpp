// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observation/Sensors/FuzzyStandardObservations.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFuzzyStandardObservations() {}

// ********** Begin Cross Module References ********************************************************
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyDistanceObservation();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyDistanceObservation_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyLineOfSightObservation();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyLineOfSightObservation_NoRegister();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyObservation();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyTargetLocationObservation();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyTargetLocationObservation_NoRegister();
UPackage* Z_Construct_UPackage__Script_FuzzyAIRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFuzzyDistanceObservation ************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyDistanceObservation;
UClass* UFuzzyDistanceObservation::GetPrivateStaticClass()
{
	using TClass = UFuzzyDistanceObservation;
	if (!Z_Registration_Info_UClass_UFuzzyDistanceObservation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyDistanceObservation"),
			Z_Registration_Info_UClass_UFuzzyDistanceObservation.InnerSingleton,
			StaticRegisterNativesUFuzzyDistanceObservation,
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
	return Z_Registration_Info_UClass_UFuzzyDistanceObservation.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyDistanceObservation_NoRegister()
{
	return UFuzzyDistanceObservation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyDistanceObservation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Observation/Sensors/FuzzyStandardObservations.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Observation/Sensors/FuzzyStandardObservations.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyDistanceObservation constinit property declarations ****************
// ********** End Class UFuzzyDistanceObservation constinit property declarations ******************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyDistanceObservation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyDistanceObservation_Statics
UObject* (*const Z_Construct_UClass_UFuzzyDistanceObservation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFuzzyObservation,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyDistanceObservation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyDistanceObservation_Statics::ClassParams = {
	&UFuzzyDistanceObservation::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyDistanceObservation_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyDistanceObservation_Statics::Class_MetaDataParams)
};
void UFuzzyDistanceObservation::StaticRegisterNativesUFuzzyDistanceObservation()
{
}
UClass* Z_Construct_UClass_UFuzzyDistanceObservation()
{
	if (!Z_Registration_Info_UClass_UFuzzyDistanceObservation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyDistanceObservation.OuterSingleton, Z_Construct_UClass_UFuzzyDistanceObservation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyDistanceObservation.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyDistanceObservation);
UFuzzyDistanceObservation::~UFuzzyDistanceObservation() {}
// ********** End Class UFuzzyDistanceObservation **************************************************

// ********** Begin Class UFuzzyLineOfSightObservation *********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyLineOfSightObservation;
UClass* UFuzzyLineOfSightObservation::GetPrivateStaticClass()
{
	using TClass = UFuzzyLineOfSightObservation;
	if (!Z_Registration_Info_UClass_UFuzzyLineOfSightObservation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyLineOfSightObservation"),
			Z_Registration_Info_UClass_UFuzzyLineOfSightObservation.InnerSingleton,
			StaticRegisterNativesUFuzzyLineOfSightObservation,
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
	return Z_Registration_Info_UClass_UFuzzyLineOfSightObservation.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyLineOfSightObservation_NoRegister()
{
	return UFuzzyLineOfSightObservation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyLineOfSightObservation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Observation/Sensors/FuzzyStandardObservations.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Observation/Sensors/FuzzyStandardObservations.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyLineOfSightObservation constinit property declarations *************
// ********** End Class UFuzzyLineOfSightObservation constinit property declarations ***************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyLineOfSightObservation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyLineOfSightObservation_Statics
UObject* (*const Z_Construct_UClass_UFuzzyLineOfSightObservation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFuzzyObservation,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyLineOfSightObservation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyLineOfSightObservation_Statics::ClassParams = {
	&UFuzzyLineOfSightObservation::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyLineOfSightObservation_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyLineOfSightObservation_Statics::Class_MetaDataParams)
};
void UFuzzyLineOfSightObservation::StaticRegisterNativesUFuzzyLineOfSightObservation()
{
}
UClass* Z_Construct_UClass_UFuzzyLineOfSightObservation()
{
	if (!Z_Registration_Info_UClass_UFuzzyLineOfSightObservation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyLineOfSightObservation.OuterSingleton, Z_Construct_UClass_UFuzzyLineOfSightObservation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyLineOfSightObservation.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyLineOfSightObservation);
UFuzzyLineOfSightObservation::~UFuzzyLineOfSightObservation() {}
// ********** End Class UFuzzyLineOfSightObservation ***********************************************

// ********** Begin Class UFuzzyTargetLocationObservation ******************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyTargetLocationObservation;
UClass* UFuzzyTargetLocationObservation::GetPrivateStaticClass()
{
	using TClass = UFuzzyTargetLocationObservation;
	if (!Z_Registration_Info_UClass_UFuzzyTargetLocationObservation.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyTargetLocationObservation"),
			Z_Registration_Info_UClass_UFuzzyTargetLocationObservation.InnerSingleton,
			StaticRegisterNativesUFuzzyTargetLocationObservation,
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
	return Z_Registration_Info_UClass_UFuzzyTargetLocationObservation.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyTargetLocationObservation_NoRegister()
{
	return UFuzzyTargetLocationObservation::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyTargetLocationObservation_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Observation/Sensors/FuzzyStandardObservations.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Observation/Sensors/FuzzyStandardObservations.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyTargetLocationObservation constinit property declarations **********
// ********** End Class UFuzzyTargetLocationObservation constinit property declarations ************
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyTargetLocationObservation>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyTargetLocationObservation_Statics
UObject* (*const Z_Construct_UClass_UFuzzyTargetLocationObservation_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFuzzyObservation,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyTargetLocationObservation_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyTargetLocationObservation_Statics::ClassParams = {
	&UFuzzyTargetLocationObservation::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyTargetLocationObservation_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyTargetLocationObservation_Statics::Class_MetaDataParams)
};
void UFuzzyTargetLocationObservation::StaticRegisterNativesUFuzzyTargetLocationObservation()
{
}
UClass* Z_Construct_UClass_UFuzzyTargetLocationObservation()
{
	if (!Z_Registration_Info_UClass_UFuzzyTargetLocationObservation.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyTargetLocationObservation.OuterSingleton, Z_Construct_UClass_UFuzzyTargetLocationObservation_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyTargetLocationObservation.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyTargetLocationObservation);
UFuzzyTargetLocationObservation::~UFuzzyTargetLocationObservation() {}
// ********** End Class UFuzzyTargetLocationObservation ********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_Sensors_FuzzyStandardObservations_h__Script_FuzzyAIRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFuzzyDistanceObservation, UFuzzyDistanceObservation::StaticClass, TEXT("UFuzzyDistanceObservation"), &Z_Registration_Info_UClass_UFuzzyDistanceObservation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyDistanceObservation), 1962000531U) },
		{ Z_Construct_UClass_UFuzzyLineOfSightObservation, UFuzzyLineOfSightObservation::StaticClass, TEXT("UFuzzyLineOfSightObservation"), &Z_Registration_Info_UClass_UFuzzyLineOfSightObservation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyLineOfSightObservation), 2309549521U) },
		{ Z_Construct_UClass_UFuzzyTargetLocationObservation, UFuzzyTargetLocationObservation::StaticClass, TEXT("UFuzzyTargetLocationObservation"), &Z_Registration_Info_UClass_UFuzzyTargetLocationObservation, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyTargetLocationObservation), 1290297254U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_Sensors_FuzzyStandardObservations_h__Script_FuzzyAIRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_Sensors_FuzzyStandardObservations_h__Script_FuzzyAIRuntime_1827697157{
	TEXT("/Script/FuzzyAIRuntime"),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_Sensors_FuzzyStandardObservations_h__Script_FuzzyAIRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_Sensors_FuzzyStandardObservations_h__Script_FuzzyAIRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
