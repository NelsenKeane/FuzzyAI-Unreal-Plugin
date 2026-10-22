// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Observation/FuzzyObservationStore.h"
#include "GameplayTagContainer.h"
#include "Observation/ObservationRuntimeTypes.h"
#include "Observation/ObservationTypes.h"
#include "UObject/Object.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeFuzzyObservationStore() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyObservationStore();
FUZZYAIRUNTIME_API UClass* Z_Construct_UClass_UFuzzyObservationStore_NoRegister();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIObservationEntry();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIObservationRecord();
FUZZYAIRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FFuzzyAIObservationResult();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
UPackage* Z_Construct_UPackage__Script_FuzzyAIRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UFuzzyObservationStore Function GetBoolean *******************************
struct Z_Construct_UFunction_UFuzzyObservationStore_GetBoolean_Statics
{
	struct FuzzyObservationStore_eventGetBoolean_Parms
	{
		FName Key;
		bool OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation Store" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservationStore.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetBoolean constinit property declarations ****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static void NewProp_OutValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetBoolean constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetBoolean Property Definitions ***************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFuzzyObservationStore_GetBoolean_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservationStore_eventGetBoolean_Parms, Key), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFuzzyObservationStore_GetBoolean_Statics::NewProp_OutValue_SetBit(void* Obj)
{
	((FuzzyObservationStore_eventGetBoolean_Parms*)Obj)->OutValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_GetBoolean_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyObservationStore_eventGetBoolean_Parms), &Z_Construct_UFunction_UFuzzyObservationStore_GetBoolean_Statics::NewProp_OutValue_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFuzzyObservationStore_GetBoolean_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FuzzyObservationStore_eventGetBoolean_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_GetBoolean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyObservationStore_eventGetBoolean_Parms), &Z_Construct_UFunction_UFuzzyObservationStore_GetBoolean_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyObservationStore_GetBoolean_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_GetBoolean_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_GetBoolean_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_GetBoolean_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_GetBoolean_Statics::PropPointers) < 2048);
// ********** End Function GetBoolean Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyObservationStore_GetBoolean_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyObservationStore, nullptr, "GetBoolean", 	Z_Construct_UFunction_UFuzzyObservationStore_GetBoolean_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_GetBoolean_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyObservationStore_GetBoolean_Statics::FuzzyObservationStore_eventGetBoolean_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_GetBoolean_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyObservationStore_GetBoolean_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyObservationStore_GetBoolean_Statics::FuzzyObservationStore_eventGetBoolean_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyObservationStore_GetBoolean()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyObservationStore_GetBoolean_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyObservationStore::execGetBoolean)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_GET_UBOOL_REF(Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetBoolean(Z_Param_Key,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UFuzzyObservationStore Function GetBoolean *********************************

// ********** Begin Class UFuzzyObservationStore Function GetFloat *********************************
struct Z_Construct_UFunction_UFuzzyObservationStore_GetFloat_Statics
{
	struct FuzzyObservationStore_eventGetFloat_Parms
	{
		FName Key;
		float OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation Store" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservationStore.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetFloat constinit property declarations ******************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetFloat constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetFloat Property Definitions *****************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFuzzyObservationStore_GetFloat_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservationStore_eventGetFloat_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_GetFloat_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservationStore_eventGetFloat_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFuzzyObservationStore_GetFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FuzzyObservationStore_eventGetFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_GetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyObservationStore_eventGetFloat_Parms), &Z_Construct_UFunction_UFuzzyObservationStore_GetFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyObservationStore_GetFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_GetFloat_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_GetFloat_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_GetFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_GetFloat_Statics::PropPointers) < 2048);
// ********** End Function GetFloat Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyObservationStore_GetFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyObservationStore, nullptr, "GetFloat", 	Z_Construct_UFunction_UFuzzyObservationStore_GetFloat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_GetFloat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyObservationStore_GetFloat_Statics::FuzzyObservationStore_eventGetFloat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_GetFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyObservationStore_GetFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyObservationStore_GetFloat_Statics::FuzzyObservationStore_eventGetFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyObservationStore_GetFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyObservationStore_GetFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyObservationStore::execGetFloat)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetFloat(Z_Param_Key,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UFuzzyObservationStore Function GetFloat ***********************************

// ********** Begin Class UFuzzyObservationStore Function GetGameplayTag ***************************
struct Z_Construct_UFunction_UFuzzyObservationStore_GetGameplayTag_Statics
{
	struct FuzzyObservationStore_eventGetGameplayTag_Parms
	{
		FName Key;
		FGameplayTag OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation Store" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservationStore.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetGameplayTag constinit property declarations ************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetGameplayTag constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetGameplayTag Property Definitions ***********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFuzzyObservationStore_GetGameplayTag_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservationStore_eventGetGameplayTag_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_GetGameplayTag_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservationStore_eventGetGameplayTag_Parms, OutValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_UFuzzyObservationStore_GetGameplayTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FuzzyObservationStore_eventGetGameplayTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_GetGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyObservationStore_eventGetGameplayTag_Parms), &Z_Construct_UFunction_UFuzzyObservationStore_GetGameplayTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyObservationStore_GetGameplayTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_GetGameplayTag_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_GetGameplayTag_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_GetGameplayTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_GetGameplayTag_Statics::PropPointers) < 2048);
// ********** End Function GetGameplayTag Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyObservationStore_GetGameplayTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyObservationStore, nullptr, "GetGameplayTag", 	Z_Construct_UFunction_UFuzzyObservationStore_GetGameplayTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_GetGameplayTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyObservationStore_GetGameplayTag_Statics::FuzzyObservationStore_eventGetGameplayTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_GetGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyObservationStore_GetGameplayTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyObservationStore_GetGameplayTag_Statics::FuzzyObservationStore_eventGetGameplayTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyObservationStore_GetGameplayTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyObservationStore_GetGameplayTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyObservationStore::execGetGameplayTag)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_GET_STRUCT_REF(FGameplayTag,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetGameplayTag(Z_Param_Key,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UFuzzyObservationStore Function GetGameplayTag *****************************

// ********** Begin Class UFuzzyObservationStore Function GetInteger *******************************
struct Z_Construct_UFunction_UFuzzyObservationStore_GetInteger_Statics
{
	struct FuzzyObservationStore_eventGetInteger_Parms
	{
		FName Key;
		int32 OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation Store" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservationStore.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetInteger constinit property declarations ****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetInteger constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetInteger Property Definitions ***************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFuzzyObservationStore_GetInteger_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservationStore_eventGetInteger_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_GetInteger_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservationStore_eventGetInteger_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFuzzyObservationStore_GetInteger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FuzzyObservationStore_eventGetInteger_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_GetInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyObservationStore_eventGetInteger_Parms), &Z_Construct_UFunction_UFuzzyObservationStore_GetInteger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyObservationStore_GetInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_GetInteger_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_GetInteger_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_GetInteger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_GetInteger_Statics::PropPointers) < 2048);
// ********** End Function GetInteger Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyObservationStore_GetInteger_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyObservationStore, nullptr, "GetInteger", 	Z_Construct_UFunction_UFuzzyObservationStore_GetInteger_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_GetInteger_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyObservationStore_GetInteger_Statics::FuzzyObservationStore_eventGetInteger_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_GetInteger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyObservationStore_GetInteger_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyObservationStore_GetInteger_Statics::FuzzyObservationStore_eventGetInteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyObservationStore_GetInteger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyObservationStore_GetInteger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyObservationStore::execGetInteger)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetInteger(Z_Param_Key,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UFuzzyObservationStore Function GetInteger *********************************

// ********** Begin Class UFuzzyObservationStore Function GetObject ********************************
struct Z_Construct_UFunction_UFuzzyObservationStore_GetObject_Statics
{
	struct FuzzyObservationStore_eventGetObject_Parms
	{
		FName Key;
		UObject* OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation Store" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservationStore.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetObject constinit property declarations *****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetObject constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetObject Property Definitions ****************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFuzzyObservationStore_GetObject_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservationStore_eventGetObject_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_GetObject_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservationStore_eventGetObject_Parms, OutValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFuzzyObservationStore_GetObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FuzzyObservationStore_eventGetObject_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_GetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyObservationStore_eventGetObject_Parms), &Z_Construct_UFunction_UFuzzyObservationStore_GetObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyObservationStore_GetObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_GetObject_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_GetObject_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_GetObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_GetObject_Statics::PropPointers) < 2048);
// ********** End Function GetObject Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyObservationStore_GetObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyObservationStore, nullptr, "GetObject", 	Z_Construct_UFunction_UFuzzyObservationStore_GetObject_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_GetObject_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyObservationStore_GetObject_Statics::FuzzyObservationStore_eventGetObject_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_GetObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyObservationStore_GetObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyObservationStore_GetObject_Statics::FuzzyObservationStore_eventGetObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyObservationStore_GetObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyObservationStore_GetObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyObservationStore::execGetObject)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_GET_OBJECT_REF(UObject,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetObject(Z_Param_Key,P_ARG_GC_BARRIER(Z_Param_Out_OutValue));
	P_NATIVE_END;
}
// ********** End Class UFuzzyObservationStore Function GetObject **********************************

// ********** Begin Class UFuzzyObservationStore Function GetSnapshot ******************************
struct Z_Construct_UFunction_UFuzzyObservationStore_GetSnapshot_Statics
{
	struct FuzzyObservationStore_eventGetSnapshot_Parms
	{
		TArray<FFuzzyAIObservationRecord> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation Store" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservationStore.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetSnapshot constinit property declarations ***************************
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetSnapshot constinit property declarations *****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetSnapshot Property Definitions **************************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_GetSnapshot_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FFuzzyAIObservationRecord, METADATA_PARAMS(0, nullptr) }; // 3864767520
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_GetSnapshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservationStore_eventGetSnapshot_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3864767520
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyObservationStore_GetSnapshot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_GetSnapshot_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_GetSnapshot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_GetSnapshot_Statics::PropPointers) < 2048);
// ********** End Function GetSnapshot Property Definitions ****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyObservationStore_GetSnapshot_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyObservationStore, nullptr, "GetSnapshot", 	Z_Construct_UFunction_UFuzzyObservationStore_GetSnapshot_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_GetSnapshot_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyObservationStore_GetSnapshot_Statics::FuzzyObservationStore_eventGetSnapshot_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_GetSnapshot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyObservationStore_GetSnapshot_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyObservationStore_GetSnapshot_Statics::FuzzyObservationStore_eventGetSnapshot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyObservationStore_GetSnapshot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyObservationStore_GetSnapshot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyObservationStore::execGetSnapshot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FFuzzyAIObservationRecord>*)Z_Param__Result=P_THIS->GetSnapshot();
	P_NATIVE_END;
}
// ********** End Class UFuzzyObservationStore Function GetSnapshot ********************************

// ********** Begin Class UFuzzyObservationStore Function GetVector ********************************
struct Z_Construct_UFunction_UFuzzyObservationStore_GetVector_Statics
{
	struct FuzzyObservationStore_eventGetVector_Parms
	{
		FName Key;
		FVector OutValue;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation Store" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservationStore.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetVector constinit property declarations *****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetVector constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetVector Property Definitions ****************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFuzzyObservationStore_GetVector_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservationStore_eventGetVector_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_GetVector_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservationStore_eventGetVector_Parms, OutValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFuzzyObservationStore_GetVector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FuzzyObservationStore_eventGetVector_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_GetVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyObservationStore_eventGetVector_Parms), &Z_Construct_UFunction_UFuzzyObservationStore_GetVector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyObservationStore_GetVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_GetVector_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_GetVector_Statics::NewProp_OutValue,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_GetVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_GetVector_Statics::PropPointers) < 2048);
// ********** End Function GetVector Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyObservationStore_GetVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyObservationStore, nullptr, "GetVector", 	Z_Construct_UFunction_UFuzzyObservationStore_GetVector_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_GetVector_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyObservationStore_GetVector_Statics::FuzzyObservationStore_eventGetVector_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_GetVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyObservationStore_GetVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyObservationStore_GetVector_Statics::FuzzyObservationStore_eventGetVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyObservationStore_GetVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyObservationStore_GetVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyObservationStore::execGetVector)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->GetVector(Z_Param_Key,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UFuzzyObservationStore Function GetVector **********************************

// ********** Begin Class UFuzzyObservationStore Function GetWriteErrors ***************************
struct Z_Construct_UFunction_UFuzzyObservationStore_GetWriteErrors_Statics
{
	struct FuzzyObservationStore_eventGetWriteErrors_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation Store" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservationStore.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function GetWriteErrors constinit property declarations ************************
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function GetWriteErrors constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function GetWriteErrors Property Definitions ***********************************
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_GetWriteErrors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_GetWriteErrors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservationStore_eventGetWriteErrors_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyObservationStore_GetWriteErrors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_GetWriteErrors_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_GetWriteErrors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_GetWriteErrors_Statics::PropPointers) < 2048);
// ********** End Function GetWriteErrors Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyObservationStore_GetWriteErrors_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyObservationStore, nullptr, "GetWriteErrors", 	Z_Construct_UFunction_UFuzzyObservationStore_GetWriteErrors_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_GetWriteErrors_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyObservationStore_GetWriteErrors_Statics::FuzzyObservationStore_eventGetWriteErrors_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_GetWriteErrors_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyObservationStore_GetWriteErrors_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyObservationStore_GetWriteErrors_Statics::FuzzyObservationStore_eventGetWriteErrors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyObservationStore_GetWriteErrors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyObservationStore_GetWriteErrors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyObservationStore::execGetWriteErrors)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetWriteErrors();
	P_NATIVE_END;
}
// ********** End Class UFuzzyObservationStore Function GetWriteErrors *****************************

// ********** Begin Class UFuzzyObservationStore Function Invalidate *******************************
struct Z_Construct_UFunction_UFuzzyObservationStore_Invalidate_Statics
{
	struct FuzzyObservationStore_eventInvalidate_Parms
	{
		FName Key;
		FString Reason;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation Store" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservationStore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Reason_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function Invalidate constinit property declarations ****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Reason;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function Invalidate constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function Invalidate Property Definitions ***************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFuzzyObservationStore_Invalidate_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservationStore_eventInvalidate_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_Invalidate_Statics::NewProp_Reason = { "Reason", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservationStore_eventInvalidate_Parms, Reason), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Reason_MetaData), NewProp_Reason_MetaData) };
void Z_Construct_UFunction_UFuzzyObservationStore_Invalidate_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FuzzyObservationStore_eventInvalidate_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_Invalidate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyObservationStore_eventInvalidate_Parms), &Z_Construct_UFunction_UFuzzyObservationStore_Invalidate_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyObservationStore_Invalidate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_Invalidate_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_Invalidate_Statics::NewProp_Reason,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_Invalidate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_Invalidate_Statics::PropPointers) < 2048);
// ********** End Function Invalidate Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyObservationStore_Invalidate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyObservationStore, nullptr, "Invalidate", 	Z_Construct_UFunction_UFuzzyObservationStore_Invalidate_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_Invalidate_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyObservationStore_Invalidate_Statics::FuzzyObservationStore_eventInvalidate_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_Invalidate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyObservationStore_Invalidate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyObservationStore_Invalidate_Statics::FuzzyObservationStore_eventInvalidate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyObservationStore_Invalidate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyObservationStore_Invalidate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyObservationStore::execInvalidate)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Reason);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Invalidate(Z_Param_Key,Z_Param_Reason);
	P_NATIVE_END;
}
// ********** End Class UFuzzyObservationStore Function Invalidate *********************************

// ********** Begin Class UFuzzyObservationStore Function SetBoolean *******************************
struct Z_Construct_UFunction_UFuzzyObservationStore_SetBoolean_Statics
{
	struct FuzzyObservationStore_eventSetBoolean_Parms
	{
		FName Key;
		bool Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation Store" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservationStore.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetBoolean constinit property declarations ****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static void NewProp_Value_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetBoolean constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetBoolean Property Definitions ***************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFuzzyObservationStore_SetBoolean_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservationStore_eventSetBoolean_Parms, Key), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFuzzyObservationStore_SetBoolean_Statics::NewProp_Value_SetBit(void* Obj)
{
	((FuzzyObservationStore_eventSetBoolean_Parms*)Obj)->Value = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_SetBoolean_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyObservationStore_eventSetBoolean_Parms), &Z_Construct_UFunction_UFuzzyObservationStore_SetBoolean_Statics::NewProp_Value_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFuzzyObservationStore_SetBoolean_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FuzzyObservationStore_eventSetBoolean_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_SetBoolean_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyObservationStore_eventSetBoolean_Parms), &Z_Construct_UFunction_UFuzzyObservationStore_SetBoolean_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyObservationStore_SetBoolean_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_SetBoolean_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_SetBoolean_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_SetBoolean_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_SetBoolean_Statics::PropPointers) < 2048);
// ********** End Function SetBoolean Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyObservationStore_SetBoolean_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyObservationStore, nullptr, "SetBoolean", 	Z_Construct_UFunction_UFuzzyObservationStore_SetBoolean_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_SetBoolean_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyObservationStore_SetBoolean_Statics::FuzzyObservationStore_eventSetBoolean_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_SetBoolean_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyObservationStore_SetBoolean_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyObservationStore_SetBoolean_Statics::FuzzyObservationStore_eventSetBoolean_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyObservationStore_SetBoolean()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyObservationStore_SetBoolean_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyObservationStore::execSetBoolean)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_GET_UBOOL(Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetBoolean(Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UFuzzyObservationStore Function SetBoolean *********************************

// ********** Begin Class UFuzzyObservationStore Function SetFloat *********************************
struct Z_Construct_UFunction_UFuzzyObservationStore_SetFloat_Statics
{
	struct FuzzyObservationStore_eventSetFloat_Parms
	{
		FName Key;
		float Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation Store" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservationStore.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetFloat constinit property declarations ******************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetFloat constinit property declarations ********************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetFloat Property Definitions *****************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFuzzyObservationStore_SetFloat_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservationStore_eventSetFloat_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_SetFloat_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservationStore_eventSetFloat_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFuzzyObservationStore_SetFloat_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FuzzyObservationStore_eventSetFloat_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_SetFloat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyObservationStore_eventSetFloat_Parms), &Z_Construct_UFunction_UFuzzyObservationStore_SetFloat_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyObservationStore_SetFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_SetFloat_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_SetFloat_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_SetFloat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_SetFloat_Statics::PropPointers) < 2048);
// ********** End Function SetFloat Property Definitions *******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyObservationStore_SetFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyObservationStore, nullptr, "SetFloat", 	Z_Construct_UFunction_UFuzzyObservationStore_SetFloat_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_SetFloat_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyObservationStore_SetFloat_Statics::FuzzyObservationStore_eventSetFloat_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_SetFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyObservationStore_SetFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyObservationStore_SetFloat_Statics::FuzzyObservationStore_eventSetFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyObservationStore_SetFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyObservationStore_SetFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyObservationStore::execSetFloat)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetFloat(Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UFuzzyObservationStore Function SetFloat ***********************************

// ********** Begin Class UFuzzyObservationStore Function SetGameplayTag ***************************
struct Z_Construct_UFunction_UFuzzyObservationStore_SetGameplayTag_Statics
{
	struct FuzzyObservationStore_eventSetGameplayTag_Parms
	{
		FName Key;
		FGameplayTag Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation Store" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservationStore.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetGameplayTag constinit property declarations ************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetGameplayTag constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetGameplayTag Property Definitions ***********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFuzzyObservationStore_SetGameplayTag_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservationStore_eventSetGameplayTag_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_SetGameplayTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservationStore_eventSetGameplayTag_Parms, Value), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 517357616
void Z_Construct_UFunction_UFuzzyObservationStore_SetGameplayTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FuzzyObservationStore_eventSetGameplayTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_SetGameplayTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyObservationStore_eventSetGameplayTag_Parms), &Z_Construct_UFunction_UFuzzyObservationStore_SetGameplayTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyObservationStore_SetGameplayTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_SetGameplayTag_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_SetGameplayTag_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_SetGameplayTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_SetGameplayTag_Statics::PropPointers) < 2048);
// ********** End Function SetGameplayTag Property Definitions *************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyObservationStore_SetGameplayTag_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyObservationStore, nullptr, "SetGameplayTag", 	Z_Construct_UFunction_UFuzzyObservationStore_SetGameplayTag_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_SetGameplayTag_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyObservationStore_SetGameplayTag_Statics::FuzzyObservationStore_eventSetGameplayTag_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_SetGameplayTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyObservationStore_SetGameplayTag_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyObservationStore_SetGameplayTag_Statics::FuzzyObservationStore_eventSetGameplayTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyObservationStore_SetGameplayTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyObservationStore_SetGameplayTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyObservationStore::execSetGameplayTag)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_GET_STRUCT(FGameplayTag,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetGameplayTag(Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UFuzzyObservationStore Function SetGameplayTag *****************************

// ********** Begin Class UFuzzyObservationStore Function SetInteger *******************************
struct Z_Construct_UFunction_UFuzzyObservationStore_SetInteger_Statics
{
	struct FuzzyObservationStore_eventSetInteger_Parms
	{
		FName Key;
		int32 Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation Store" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservationStore.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetInteger constinit property declarations ****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetInteger constinit property declarations ******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetInteger Property Definitions ***************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFuzzyObservationStore_SetInteger_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservationStore_eventSetInteger_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_SetInteger_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservationStore_eventSetInteger_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFuzzyObservationStore_SetInteger_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FuzzyObservationStore_eventSetInteger_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_SetInteger_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyObservationStore_eventSetInteger_Parms), &Z_Construct_UFunction_UFuzzyObservationStore_SetInteger_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyObservationStore_SetInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_SetInteger_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_SetInteger_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_SetInteger_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_SetInteger_Statics::PropPointers) < 2048);
// ********** End Function SetInteger Property Definitions *****************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyObservationStore_SetInteger_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyObservationStore, nullptr, "SetInteger", 	Z_Construct_UFunction_UFuzzyObservationStore_SetInteger_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_SetInteger_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyObservationStore_SetInteger_Statics::FuzzyObservationStore_eventSetInteger_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_SetInteger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyObservationStore_SetInteger_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyObservationStore_SetInteger_Statics::FuzzyObservationStore_eventSetInteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyObservationStore_SetInteger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyObservationStore_SetInteger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyObservationStore::execSetInteger)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_GET_PROPERTY(FIntProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetInteger(Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UFuzzyObservationStore Function SetInteger *********************************

// ********** Begin Class UFuzzyObservationStore Function SetObject ********************************
struct Z_Construct_UFunction_UFuzzyObservationStore_SetObject_Statics
{
	struct FuzzyObservationStore_eventSetObject_Parms
	{
		FName Key;
		UObject* Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation Store" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservationStore.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetObject constinit property declarations *****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetObject constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetObject Property Definitions ****************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFuzzyObservationStore_SetObject_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservationStore_eventSetObject_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_SetObject_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservationStore_eventSetObject_Parms, Value), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFuzzyObservationStore_SetObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FuzzyObservationStore_eventSetObject_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_SetObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyObservationStore_eventSetObject_Parms), &Z_Construct_UFunction_UFuzzyObservationStore_SetObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyObservationStore_SetObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_SetObject_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_SetObject_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_SetObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_SetObject_Statics::PropPointers) < 2048);
// ********** End Function SetObject Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyObservationStore_SetObject_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyObservationStore, nullptr, "SetObject", 	Z_Construct_UFunction_UFuzzyObservationStore_SetObject_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_SetObject_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyObservationStore_SetObject_Statics::FuzzyObservationStore_eventSetObject_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_SetObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyObservationStore_SetObject_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyObservationStore_SetObject_Statics::FuzzyObservationStore_eventSetObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyObservationStore_SetObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyObservationStore_SetObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyObservationStore::execSetObject)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_GET_OBJECT(UObject,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetObject(Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UFuzzyObservationStore Function SetObject **********************************

// ********** Begin Class UFuzzyObservationStore Function SetResult ********************************
struct Z_Construct_UFunction_UFuzzyObservationStore_SetResult_Statics
{
	struct FuzzyObservationStore_eventSetResult_Parms
	{
		FName Key;
		FFuzzyAIObservationResult Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation Store" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservationStore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetResult constinit property declarations *****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetResult constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetResult Property Definitions ****************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFuzzyObservationStore_SetResult_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservationStore_eventSetResult_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_SetResult_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservationStore_eventSetResult_Parms, Value), Z_Construct_UScriptStruct_FFuzzyAIObservationResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 1088075548
void Z_Construct_UFunction_UFuzzyObservationStore_SetResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FuzzyObservationStore_eventSetResult_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_SetResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyObservationStore_eventSetResult_Parms), &Z_Construct_UFunction_UFuzzyObservationStore_SetResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyObservationStore_SetResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_SetResult_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_SetResult_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_SetResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_SetResult_Statics::PropPointers) < 2048);
// ********** End Function SetResult Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyObservationStore_SetResult_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyObservationStore, nullptr, "SetResult", 	Z_Construct_UFunction_UFuzzyObservationStore_SetResult_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_SetResult_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyObservationStore_SetResult_Statics::FuzzyObservationStore_eventSetResult_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_SetResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyObservationStore_SetResult_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyObservationStore_SetResult_Statics::FuzzyObservationStore_eventSetResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyObservationStore_SetResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyObservationStore_SetResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyObservationStore::execSetResult)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_GET_STRUCT_REF(FFuzzyAIObservationResult,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetResult(Z_Param_Key,Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class UFuzzyObservationStore Function SetResult **********************************

// ********** Begin Class UFuzzyObservationStore Function SetVector ********************************
struct Z_Construct_UFunction_UFuzzyObservationStore_SetVector_Statics
{
	struct FuzzyObservationStore_eventSetVector_Parms
	{
		FName Key;
		FVector Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation Store" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservationStore.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function SetVector constinit property declarations *****************************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function SetVector constinit property declarations *******************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function SetVector Property Definitions ****************************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFuzzyObservationStore_SetVector_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservationStore_eventSetVector_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_SetVector_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservationStore_eventSetVector_Parms, Value), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UFuzzyObservationStore_SetVector_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FuzzyObservationStore_eventSetVector_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_SetVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyObservationStore_eventSetVector_Parms), &Z_Construct_UFunction_UFuzzyObservationStore_SetVector_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyObservationStore_SetVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_SetVector_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_SetVector_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_SetVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_SetVector_Statics::PropPointers) < 2048);
// ********** End Function SetVector Property Definitions ******************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyObservationStore_SetVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyObservationStore, nullptr, "SetVector", 	Z_Construct_UFunction_UFuzzyObservationStore_SetVector_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_SetVector_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyObservationStore_SetVector_Statics::FuzzyObservationStore_eventSetVector_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_SetVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyObservationStore_SetVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyObservationStore_SetVector_Statics::FuzzyObservationStore_eventSetVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyObservationStore_SetVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyObservationStore_SetVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyObservationStore::execSetVector)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_GET_STRUCT(FVector,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetVector(Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UFuzzyObservationStore Function SetVector **********************************

// ********** Begin Class UFuzzyObservationStore Function TryGetObservation ************************
struct Z_Construct_UFunction_UFuzzyObservationStore_TryGetObservation_Statics
{
	struct FuzzyObservationStore_eventTryGetObservation_Parms
	{
		FName Key;
		FFuzzyAIObservationRecord OutRecord;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Fuzzy AI|Observation Store" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservationStore.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function TryGetObservation constinit property declarations *********************
	static const UECodeGen_Private::FNamePropertyParams NewProp_Key;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutRecord;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function TryGetObservation constinit property declarations ***********************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function TryGetObservation Property Definitions ********************************
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UFuzzyObservationStore_TryGetObservation_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservationStore_eventTryGetObservation_Parms, Key), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_TryGetObservation_Statics::NewProp_OutRecord = { "OutRecord", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FuzzyObservationStore_eventTryGetObservation_Parms, OutRecord), Z_Construct_UScriptStruct_FFuzzyAIObservationRecord, METADATA_PARAMS(0, nullptr) }; // 3864767520
void Z_Construct_UFunction_UFuzzyObservationStore_TryGetObservation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((FuzzyObservationStore_eventTryGetObservation_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UFuzzyObservationStore_TryGetObservation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FuzzyObservationStore_eventTryGetObservation_Parms), &Z_Construct_UFunction_UFuzzyObservationStore_TryGetObservation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UFuzzyObservationStore_TryGetObservation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_TryGetObservation_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_TryGetObservation_Statics::NewProp_OutRecord,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UFuzzyObservationStore_TryGetObservation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_TryGetObservation_Statics::PropPointers) < 2048);
// ********** End Function TryGetObservation Property Definitions **********************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UFuzzyObservationStore_TryGetObservation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UFuzzyObservationStore, nullptr, "TryGetObservation", 	Z_Construct_UFunction_UFuzzyObservationStore_TryGetObservation_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_TryGetObservation_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UFuzzyObservationStore_TryGetObservation_Statics::FuzzyObservationStore_eventTryGetObservation_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UFuzzyObservationStore_TryGetObservation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UFuzzyObservationStore_TryGetObservation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UFuzzyObservationStore_TryGetObservation_Statics::FuzzyObservationStore_eventTryGetObservation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UFuzzyObservationStore_TryGetObservation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UFuzzyObservationStore_TryGetObservation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UFuzzyObservationStore::execTryGetObservation)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_Key);
	P_GET_STRUCT_REF(FFuzzyAIObservationRecord,Z_Param_Out_OutRecord);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->TryGetObservation(Z_Param_Key,Z_Param_Out_OutRecord);
	P_NATIVE_END;
}
// ********** End Class UFuzzyObservationStore Function TryGetObservation **************************

// ********** Begin Class UFuzzyObservationStore ***************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UFuzzyObservationStore;
UClass* UFuzzyObservationStore::GetPrivateStaticClass()
{
	using TClass = UFuzzyObservationStore;
	if (!Z_Registration_Info_UClass_UFuzzyObservationStore.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("FuzzyObservationStore"),
			Z_Registration_Info_UClass_UFuzzyObservationStore.InnerSingleton,
			StaticRegisterNativesUFuzzyObservationStore,
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
	return Z_Registration_Info_UClass_UFuzzyObservationStore.InnerSingleton;
}
UClass* Z_Construct_UClass_UFuzzyObservationStore_NoRegister()
{
	return UFuzzyObservationStore::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UFuzzyObservationStore_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Typed blackboard. Writes are accepted only inside a sensor's Sample transaction. */" },
#endif
		{ "IncludePath", "Observation/FuzzyObservationStore.h" },
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservationStore.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Typed blackboard. Writes are accepted only inside a sensor's Sample transaction." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Records_MetaData[] = {
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservationStore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastNotified_MetaData[] = {
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservationStore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Pending_MetaData[] = {
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservationStore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsByKey_MetaData[] = {
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservationStore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Writers_MetaData[] = {
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservationStore.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WriteErrors_MetaData[] = {
		{ "ModuleRelativePath", "Public/Observation/FuzzyObservationStore.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UFuzzyObservationStore constinit property declarations *******************
	static const UECodeGen_Private::FStructPropertyParams NewProp_Records_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Records_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Records;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LastNotified_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_LastNotified_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_LastNotified;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Pending_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Pending_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Pending;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SettingsByKey_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_SettingsByKey_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SettingsByKey;
	static const UECodeGen_Private::FWeakObjectPropertyParams NewProp_Writers_ValueProp;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Writers_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Writers;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WriteErrors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_WriteErrors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UFuzzyObservationStore constinit property declarations *********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("GetBoolean"), .Pointer = &UFuzzyObservationStore::execGetBoolean },
		{ .NameUTF8 = UTF8TEXT("GetFloat"), .Pointer = &UFuzzyObservationStore::execGetFloat },
		{ .NameUTF8 = UTF8TEXT("GetGameplayTag"), .Pointer = &UFuzzyObservationStore::execGetGameplayTag },
		{ .NameUTF8 = UTF8TEXT("GetInteger"), .Pointer = &UFuzzyObservationStore::execGetInteger },
		{ .NameUTF8 = UTF8TEXT("GetObject"), .Pointer = &UFuzzyObservationStore::execGetObject },
		{ .NameUTF8 = UTF8TEXT("GetSnapshot"), .Pointer = &UFuzzyObservationStore::execGetSnapshot },
		{ .NameUTF8 = UTF8TEXT("GetVector"), .Pointer = &UFuzzyObservationStore::execGetVector },
		{ .NameUTF8 = UTF8TEXT("GetWriteErrors"), .Pointer = &UFuzzyObservationStore::execGetWriteErrors },
		{ .NameUTF8 = UTF8TEXT("Invalidate"), .Pointer = &UFuzzyObservationStore::execInvalidate },
		{ .NameUTF8 = UTF8TEXT("SetBoolean"), .Pointer = &UFuzzyObservationStore::execSetBoolean },
		{ .NameUTF8 = UTF8TEXT("SetFloat"), .Pointer = &UFuzzyObservationStore::execSetFloat },
		{ .NameUTF8 = UTF8TEXT("SetGameplayTag"), .Pointer = &UFuzzyObservationStore::execSetGameplayTag },
		{ .NameUTF8 = UTF8TEXT("SetInteger"), .Pointer = &UFuzzyObservationStore::execSetInteger },
		{ .NameUTF8 = UTF8TEXT("SetObject"), .Pointer = &UFuzzyObservationStore::execSetObject },
		{ .NameUTF8 = UTF8TEXT("SetResult"), .Pointer = &UFuzzyObservationStore::execSetResult },
		{ .NameUTF8 = UTF8TEXT("SetVector"), .Pointer = &UFuzzyObservationStore::execSetVector },
		{ .NameUTF8 = UTF8TEXT("TryGetObservation"), .Pointer = &UFuzzyObservationStore::execTryGetObservation },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UFuzzyObservationStore_GetBoolean, "GetBoolean" }, // 496683200
		{ &Z_Construct_UFunction_UFuzzyObservationStore_GetFloat, "GetFloat" }, // 3179646095
		{ &Z_Construct_UFunction_UFuzzyObservationStore_GetGameplayTag, "GetGameplayTag" }, // 1937305156
		{ &Z_Construct_UFunction_UFuzzyObservationStore_GetInteger, "GetInteger" }, // 2819427605
		{ &Z_Construct_UFunction_UFuzzyObservationStore_GetObject, "GetObject" }, // 261706682
		{ &Z_Construct_UFunction_UFuzzyObservationStore_GetSnapshot, "GetSnapshot" }, // 236367478
		{ &Z_Construct_UFunction_UFuzzyObservationStore_GetVector, "GetVector" }, // 3493018301
		{ &Z_Construct_UFunction_UFuzzyObservationStore_GetWriteErrors, "GetWriteErrors" }, // 3669295314
		{ &Z_Construct_UFunction_UFuzzyObservationStore_Invalidate, "Invalidate" }, // 2772267796
		{ &Z_Construct_UFunction_UFuzzyObservationStore_SetBoolean, "SetBoolean" }, // 35062436
		{ &Z_Construct_UFunction_UFuzzyObservationStore_SetFloat, "SetFloat" }, // 1076446952
		{ &Z_Construct_UFunction_UFuzzyObservationStore_SetGameplayTag, "SetGameplayTag" }, // 1709972410
		{ &Z_Construct_UFunction_UFuzzyObservationStore_SetInteger, "SetInteger" }, // 2988741917
		{ &Z_Construct_UFunction_UFuzzyObservationStore_SetObject, "SetObject" }, // 1931718893
		{ &Z_Construct_UFunction_UFuzzyObservationStore_SetResult, "SetResult" }, // 600141926
		{ &Z_Construct_UFunction_UFuzzyObservationStore_SetVector, "SetVector" }, // 2323739512
		{ &Z_Construct_UFunction_UFuzzyObservationStore_TryGetObservation, "TryGetObservation" }, // 1207277862
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFuzzyObservationStore>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UFuzzyObservationStore_Statics

// ********** Begin Class UFuzzyObservationStore Property Definitions ******************************
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_Records_ValueProp = { "Records", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFuzzyAIObservationRecord, METADATA_PARAMS(0, nullptr) }; // 3864767520
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_Records_Key_KeyProp = { "Records_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_Records = { "Records", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyObservationStore, Records), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Records_MetaData), NewProp_Records_MetaData) }; // 3864767520
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_LastNotified_ValueProp = { "LastNotified", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFuzzyAIObservationRecord, METADATA_PARAMS(0, nullptr) }; // 3864767520
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_LastNotified_Key_KeyProp = { "LastNotified_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_LastNotified = { "LastNotified", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyObservationStore, LastNotified), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastNotified_MetaData), NewProp_LastNotified_MetaData) }; // 3864767520
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_Pending_ValueProp = { "Pending", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFuzzyAIObservationRecord, METADATA_PARAMS(0, nullptr) }; // 3864767520
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_Pending_Key_KeyProp = { "Pending_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_Pending = { "Pending", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyObservationStore, Pending), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Pending_MetaData), NewProp_Pending_MetaData) }; // 3864767520
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_SettingsByKey_ValueProp = { "SettingsByKey", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FFuzzyAIObservationEntry, METADATA_PARAMS(0, nullptr) }; // 3358307648
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_SettingsByKey_Key_KeyProp = { "SettingsByKey_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_SettingsByKey = { "SettingsByKey", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyObservationStore, SettingsByKey), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsByKey_MetaData), NewProp_SettingsByKey_MetaData) }; // 3358307648
const UECodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_Writers_ValueProp = { "Writers", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_Writers_Key_KeyProp = { "Writers_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_Writers = { "Writers", nullptr, (EPropertyFlags)0x0044000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyObservationStore, Writers), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Writers_MetaData), NewProp_Writers_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_WriteErrors_Inner = { "WriteErrors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_WriteErrors = { "WriteErrors", nullptr, (EPropertyFlags)0x0040000000002000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFuzzyObservationStore, WriteErrors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WriteErrors_MetaData), NewProp_WriteErrors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFuzzyObservationStore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_Records_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_Records_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_Records,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_LastNotified_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_LastNotified_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_LastNotified,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_Pending_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_Pending_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_Pending,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_SettingsByKey_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_SettingsByKey_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_SettingsByKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_Writers_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_Writers_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_Writers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_WriteErrors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFuzzyObservationStore_Statics::NewProp_WriteErrors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyObservationStore_Statics::PropPointers) < 2048);
// ********** End Class UFuzzyObservationStore Property Definitions ********************************
UObject* (*const Z_Construct_UClass_UFuzzyObservationStore_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_FuzzyAIRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyObservationStore_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UFuzzyObservationStore_Statics::ClassParams = {
	&UFuzzyObservationStore::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UFuzzyObservationStore_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyObservationStore_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFuzzyObservationStore_Statics::Class_MetaDataParams), Z_Construct_UClass_UFuzzyObservationStore_Statics::Class_MetaDataParams)
};
void UFuzzyObservationStore::StaticRegisterNativesUFuzzyObservationStore()
{
	UClass* Class = UFuzzyObservationStore::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UFuzzyObservationStore_Statics::Funcs));
}
UClass* Z_Construct_UClass_UFuzzyObservationStore()
{
	if (!Z_Registration_Info_UClass_UFuzzyObservationStore.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFuzzyObservationStore.OuterSingleton, Z_Construct_UClass_UFuzzyObservationStore_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UFuzzyObservationStore.OuterSingleton;
}
UFuzzyObservationStore::UFuzzyObservationStore(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UFuzzyObservationStore);
UFuzzyObservationStore::~UFuzzyObservationStore() {}
// ********** End Class UFuzzyObservationStore *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservationStore_h__Script_FuzzyAIRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UFuzzyObservationStore, UFuzzyObservationStore::StaticClass, TEXT("UFuzzyObservationStore"), &Z_Registration_Info_UClass_UFuzzyObservationStore, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFuzzyObservationStore), 204759871U) },
	};
}; // Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservationStore_h__Script_FuzzyAIRuntime_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservationStore_h__Script_FuzzyAIRuntime_3591444167{
	TEXT("/Script/FuzzyAIRuntime"),
	Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservationStore_h__Script_FuzzyAIRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GameAnimationSample_Plugins_FuzzyAI_Source_FuzzyAIRuntime_Public_Observation_FuzzyObservationStore_h__Script_FuzzyAIRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
