// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CMP304Project/MenuUi.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeMenuUi() {}

// ********** Begin Cross Module References ********************************************************
CMP304PROJECT_API UClass* Z_Construct_UClass_UMenuUi();
CMP304PROJECT_API UClass* Z_Construct_UClass_UMenuUi_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_USlider_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_CMP304Project();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UMenuUi Function OnAIValueChange *****************************************
struct Z_Construct_UFunction_UMenuUi_OnAIValueChange_Statics
{
	struct MenuUi_eventOnAIValueChange_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MenuUi.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMenuUi_OnAIValueChange_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MenuUi_eventOnAIValueChange_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuUi_OnAIValueChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuUi_OnAIValueChange_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuUi_OnAIValueChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuUi_OnAIValueChange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMenuUi, nullptr, "OnAIValueChange", Z_Construct_UFunction_UMenuUi_OnAIValueChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuUi_OnAIValueChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMenuUi_OnAIValueChange_Statics::MenuUi_eventOnAIValueChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuUi_OnAIValueChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuUi_OnAIValueChange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMenuUi_OnAIValueChange_Statics::MenuUi_eventOnAIValueChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenuUi_OnAIValueChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuUi_OnAIValueChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuUi::execOnAIValueChange)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAIValueChange(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UMenuUi Function OnAIValueChange *******************************************

// ********** Begin Class UMenuUi Function OnButtonHit *********************************************
struct Z_Construct_UFunction_UMenuUi_OnButtonHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MenuUi.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuUi_OnButtonHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMenuUi, nullptr, "OnButtonHit", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuUi_OnButtonHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuUi_OnButtonHit_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UMenuUi_OnButtonHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuUi_OnButtonHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuUi::execOnButtonHit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnButtonHit();
	P_NATIVE_END;
}
// ********** End Class UMenuUi Function OnButtonHit ***********************************************

// ********** Begin Class UMenuUi Function OnPlayerValueChange *************************************
struct Z_Construct_UFunction_UMenuUi_OnPlayerValueChange_Statics
{
	struct MenuUi_eventOnPlayerValueChange_Parms
	{
		float Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MenuUi.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMenuUi_OnPlayerValueChange_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MenuUi_eventOnPlayerValueChange_Parms, Value), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMenuUi_OnPlayerValueChange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMenuUi_OnPlayerValueChange_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuUi_OnPlayerValueChange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMenuUi_OnPlayerValueChange_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UMenuUi, nullptr, "OnPlayerValueChange", Z_Construct_UFunction_UMenuUi_OnPlayerValueChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuUi_OnPlayerValueChange_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMenuUi_OnPlayerValueChange_Statics::MenuUi_eventOnPlayerValueChange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMenuUi_OnPlayerValueChange_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMenuUi_OnPlayerValueChange_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UMenuUi_OnPlayerValueChange_Statics::MenuUi_eventOnPlayerValueChange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMenuUi_OnPlayerValueChange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMenuUi_OnPlayerValueChange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMenuUi::execOnPlayerValueChange)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPlayerValueChange(Z_Param_Value);
	P_NATIVE_END;
}
// ********** End Class UMenuUi Function OnPlayerValueChange ***************************************

// ********** Begin Class UMenuUi ******************************************************************
void UMenuUi::StaticRegisterNativesUMenuUi()
{
	UClass* Class = UMenuUi::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnAIValueChange", &UMenuUi::execOnAIValueChange },
		{ "OnButtonHit", &UMenuUi::execOnButtonHit },
		{ "OnPlayerValueChange", &UMenuUi::execOnPlayerValueChange },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UMenuUi;
UClass* UMenuUi::GetPrivateStaticClass()
{
	using TClass = UMenuUi;
	if (!Z_Registration_Info_UClass_UMenuUi.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("MenuUi"),
			Z_Registration_Info_UClass_UMenuUi.InnerSingleton,
			StaticRegisterNativesUMenuUi,
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
	return Z_Registration_Info_UClass_UMenuUi.InnerSingleton;
}
UClass* Z_Construct_UClass_UMenuUi_NoRegister()
{
	return UMenuUi::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UMenuUi_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "MenuUi.h" },
		{ "ModuleRelativePath", "MenuUi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerSpeed_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MenuUi" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuUi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AISpeed_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MenuUi" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuUi.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextLevel_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MenuUi" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MenuUi.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AISpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextLevel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMenuUi_OnAIValueChange, "OnAIValueChange" }, // 1100265439
		{ &Z_Construct_UFunction_UMenuUi_OnButtonHit, "OnButtonHit" }, // 1483536587
		{ &Z_Construct_UFunction_UMenuUi_OnPlayerValueChange, "OnPlayerValueChange" }, // 3255420205
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMenuUi>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuUi_Statics::NewProp_PlayerSpeed = { "PlayerSpeed", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuUi, PlayerSpeed), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerSpeed_MetaData), NewProp_PlayerSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuUi_Statics::NewProp_AISpeed = { "AISpeed", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuUi, AISpeed), Z_Construct_UClass_USlider_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AISpeed_MetaData), NewProp_AISpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMenuUi_Statics::NewProp_NextLevel = { "NextLevel", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMenuUi, NextLevel), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextLevel_MetaData), NewProp_NextLevel_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMenuUi_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuUi_Statics::NewProp_PlayerSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuUi_Statics::NewProp_AISpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMenuUi_Statics::NewProp_NextLevel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuUi_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMenuUi_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_CMP304Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuUi_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMenuUi_Statics::ClassParams = {
	&UMenuUi::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMenuUi_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMenuUi_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMenuUi_Statics::Class_MetaDataParams), Z_Construct_UClass_UMenuUi_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMenuUi()
{
	if (!Z_Registration_Info_UClass_UMenuUi.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMenuUi.OuterSingleton, Z_Construct_UClass_UMenuUi_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMenuUi.OuterSingleton;
}
UMenuUi::UMenuUi(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMenuUi);
UMenuUi::~UMenuUi() {}
// ********** End Class UMenuUi ********************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_MenuUi_h__Script_CMP304Project_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMenuUi, UMenuUi::StaticClass, TEXT("UMenuUi"), &Z_Registration_Info_UClass_UMenuUi, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMenuUi), 3391267972U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_MenuUi_h__Script_CMP304Project_3981714740(TEXT("/Script/CMP304Project"),
	Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_MenuUi_h__Script_CMP304Project_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_MenuUi_h__Script_CMP304Project_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
