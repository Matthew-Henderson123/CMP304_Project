// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CMP304Project/MyGameInstance.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMyGameInstance() {}

// ********** Begin Cross Module References ********************************************************
CMP304PROJECT_API UClass* Z_Construct_UClass_UMyGameInstance();
CMP304PROJECT_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
UPackage* Z_Construct_UPackage__Script_CMP304Project();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMyGameInstance Function AddPlayerWin ************************************
struct Z_Construct_UFunction_UMyGameInstance_AddPlayerWin_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Creates all the getters and setters for the variables\n" },
#endif
		{ "ModuleRelativePath", "MyGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates all the getters and setters for the variables" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_AddPlayerWin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "AddPlayerWin", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_AddPlayerWin_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameInstance_AddPlayerWin_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMyGameInstance_AddPlayerWin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstance_AddPlayerWin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyGameInstance::execAddPlayerWin)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddPlayerWin();
	P_NATIVE_END;
}
// ********** End Class UMyGameInstance Function AddPlayerWin **************************************

// ********** Begin Class UMyGameInstance Function GetAISpeed **************************************
struct Z_Construct_UFunction_UMyGameInstance_GetAISpeed_Statics
{
	struct MyGameInstance_eventGetAISpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Data" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyGameInstance_GetAISpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameInstance_eventGetAISpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_GetAISpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_GetAISpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_GetAISpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_GetAISpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "GetAISpeed", Z_Construct_UFunction_UMyGameInstance_GetAISpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_GetAISpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyGameInstance_GetAISpeed_Statics::MyGameInstance_eventGetAISpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_GetAISpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameInstance_GetAISpeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMyGameInstance_GetAISpeed_Statics::MyGameInstance_eventGetAISpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyGameInstance_GetAISpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstance_GetAISpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyGameInstance::execGetAISpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetAISpeed();
	P_NATIVE_END;
}
// ********** End Class UMyGameInstance Function GetAISpeed ****************************************

// ********** Begin Class UMyGameInstance Function GetPlayerSpeed **********************************
struct Z_Construct_UFunction_UMyGameInstance_GetPlayerSpeed_Statics
{
	struct MyGameInstance_eventGetPlayerSpeed_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Data" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyGameInstance_GetPlayerSpeed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameInstance_eventGetPlayerSpeed_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_GetPlayerSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_GetPlayerSpeed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_GetPlayerSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_GetPlayerSpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "GetPlayerSpeed", Z_Construct_UFunction_UMyGameInstance_GetPlayerSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_GetPlayerSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyGameInstance_GetPlayerSpeed_Statics::MyGameInstance_eventGetPlayerSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_GetPlayerSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameInstance_GetPlayerSpeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMyGameInstance_GetPlayerSpeed_Statics::MyGameInstance_eventGetPlayerSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyGameInstance_GetPlayerSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstance_GetPlayerSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyGameInstance::execGetPlayerSpeed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetPlayerSpeed();
	P_NATIVE_END;
}
// ********** End Class UMyGameInstance Function GetPlayerSpeed ************************************

// ********** Begin Class UMyGameInstance Function GetPlayerWins ***********************************
struct Z_Construct_UFunction_UMyGameInstance_GetPlayerWins_Statics
{
	struct MyGameInstance_eventGetPlayerWins_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Data" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMyGameInstance_GetPlayerWins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameInstance_eventGetPlayerWins_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_GetPlayerWins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_GetPlayerWins_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_GetPlayerWins_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_GetPlayerWins_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "GetPlayerWins", Z_Construct_UFunction_UMyGameInstance_GetPlayerWins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_GetPlayerWins_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyGameInstance_GetPlayerWins_Statics::MyGameInstance_eventGetPlayerWins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_GetPlayerWins_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameInstance_GetPlayerWins_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMyGameInstance_GetPlayerWins_Statics::MyGameInstance_eventGetPlayerWins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyGameInstance_GetPlayerWins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstance_GetPlayerWins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyGameInstance::execGetPlayerWins)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetPlayerWins();
	P_NATIVE_END;
}
// ********** End Class UMyGameInstance Function GetPlayerWins *************************************

// ********** Begin Class UMyGameInstance Function SetAISpeed **************************************
struct Z_Construct_UFunction_UMyGameInstance_SetAISpeed_Statics
{
	struct MyGameInstance_eventSetAISpeed_Parms
	{
		float NewSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Data" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyGameInstance_SetAISpeed_Statics::NewProp_NewSpeed = { "NewSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameInstance_eventSetAISpeed_Parms, NewSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_SetAISpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_SetAISpeed_Statics::NewProp_NewSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SetAISpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_SetAISpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "SetAISpeed", Z_Construct_UFunction_UMyGameInstance_SetAISpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SetAISpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyGameInstance_SetAISpeed_Statics::MyGameInstance_eventSetAISpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SetAISpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameInstance_SetAISpeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMyGameInstance_SetAISpeed_Statics::MyGameInstance_eventSetAISpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyGameInstance_SetAISpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstance_SetAISpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyGameInstance::execSetAISpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAISpeed(Z_Param_NewSpeed);
	P_NATIVE_END;
}
// ********** End Class UMyGameInstance Function SetAISpeed ****************************************

// ********** Begin Class UMyGameInstance Function SetPlayerSpeed **********************************
struct Z_Construct_UFunction_UMyGameInstance_SetPlayerSpeed_Statics
{
	struct MyGameInstance_eventSetPlayerSpeed_Parms
	{
		float NewSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Data" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyGameInstance_SetPlayerSpeed_Statics::NewProp_NewSpeed = { "NewSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyGameInstance_eventSetPlayerSpeed_Parms, NewSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_SetPlayerSpeed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_SetPlayerSpeed_Statics::NewProp_NewSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SetPlayerSpeed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_SetPlayerSpeed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "SetPlayerSpeed", Z_Construct_UFunction_UMyGameInstance_SetPlayerSpeed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SetPlayerSpeed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMyGameInstance_SetPlayerSpeed_Statics::MyGameInstance_eventSetPlayerSpeed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SetPlayerSpeed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMyGameInstance_SetPlayerSpeed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMyGameInstance_SetPlayerSpeed_Statics::MyGameInstance_eventSetPlayerSpeed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMyGameInstance_SetPlayerSpeed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMyGameInstance_SetPlayerSpeed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMyGameInstance::execSetPlayerSpeed)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetPlayerSpeed(Z_Param_NewSpeed);
	P_NATIVE_END;
}
// ********** End Class UMyGameInstance Function SetPlayerSpeed ************************************

// ********** Begin Class UMyGameInstance **********************************************************
void UMyGameInstance::StaticRegisterNativesUMyGameInstance()
{
	UClass* Class = UMyGameInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddPlayerWin", &UMyGameInstance::execAddPlayerWin },
		{ "GetAISpeed", &UMyGameInstance::execGetAISpeed },
		{ "GetPlayerSpeed", &UMyGameInstance::execGetPlayerSpeed },
		{ "GetPlayerWins", &UMyGameInstance::execGetPlayerWins },
		{ "SetAISpeed", &UMyGameInstance::execSetAISpeed },
		{ "SetPlayerSpeed", &UMyGameInstance::execSetPlayerSpeed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMyGameInstance;
UClass* UMyGameInstance::GetPrivateStaticClass()
{
	using TClass = UMyGameInstance;
	if (!Z_Registration_Info_UClass_UMyGameInstance.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MyGameInstance"),
			Z_Registration_Info_UClass_UMyGameInstance.InnerSingleton,
			StaticRegisterNativesUMyGameInstance,
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
	return Z_Registration_Info_UClass_UMyGameInstance.InnerSingleton;
}
UClass* Z_Construct_UClass_UMyGameInstance_NoRegister()
{
	return UMyGameInstance::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMyGameInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MyGameInstance.h" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerWins_MetaData[] = {
		{ "Category", "Game Data" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Creates all the varibles that need to be accessed and changed throughout the levels\n" },
#endif
		{ "ModuleRelativePath", "MyGameInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates all the varibles that need to be accessed and changed throughout the levels" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerSpeed_MetaData[] = {
		{ "Category", "Game Data" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AISpeed_MetaData[] = {
		{ "Category", "Game Data" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerWins;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayerSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AISpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyGameInstance_AddPlayerWin, "AddPlayerWin" }, // 3495300966
		{ &Z_Construct_UFunction_UMyGameInstance_GetAISpeed, "GetAISpeed" }, // 4003671300
		{ &Z_Construct_UFunction_UMyGameInstance_GetPlayerSpeed, "GetPlayerSpeed" }, // 3839856627
		{ &Z_Construct_UFunction_UMyGameInstance_GetPlayerWins, "GetPlayerWins" }, // 3771576859
		{ &Z_Construct_UFunction_UMyGameInstance_SetAISpeed, "SetAISpeed" }, // 2897191323
		{ &Z_Construct_UFunction_UMyGameInstance_SetPlayerSpeed, "SetPlayerSpeed" }, // 3008417480
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGameInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PlayerWins = { "PlayerWins", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGameInstance, PlayerWins), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerWins_MetaData), NewProp_PlayerWins_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PlayerSpeed = { "PlayerSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGameInstance, PlayerSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerSpeed_MetaData), NewProp_PlayerSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_AISpeed = { "AISpeed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMyGameInstance, AISpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AISpeed_MetaData), NewProp_AISpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyGameInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PlayerWins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_PlayerSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_AISpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMyGameInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_CMP304Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMyGameInstance_Statics::ClassParams = {
	&UMyGameInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMyGameInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMyGameInstance()
{
	if (!Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton, Z_Construct_UClass_UMyGameInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMyGameInstance.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameInstance);
UMyGameInstance::~UMyGameInstance() {}
// ********** End Class UMyGameInstance ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_MyGameInstance_h__Script_CMP304Project_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMyGameInstance, UMyGameInstance::StaticClass, TEXT("UMyGameInstance"), &Z_Registration_Info_UClass_UMyGameInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMyGameInstance), 3747740995U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_MyGameInstance_h__Script_CMP304Project_1579030548(TEXT("/Script/CMP304Project"),
	Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_MyGameInstance_h__Script_CMP304Project_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_MyGameInstance_h__Script_CMP304Project_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
