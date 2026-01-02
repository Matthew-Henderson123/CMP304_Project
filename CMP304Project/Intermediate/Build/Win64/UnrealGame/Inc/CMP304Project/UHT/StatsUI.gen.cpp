// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CMP304Project/StatsUI.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeStatsUI() {}

// ********** Begin Cross Module References ********************************************************
CMP304PROJECT_API UClass* Z_Construct_UClass_UStatsUI();
CMP304PROJECT_API UClass* Z_Construct_UClass_UStatsUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_CMP304Project();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UStatsUI *****************************************************************
void UStatsUI::StaticRegisterNativesUStatsUI()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UStatsUI;
UClass* UStatsUI::GetPrivateStaticClass()
{
	using TClass = UStatsUI;
	if (!Z_Registration_Info_UClass_UStatsUI.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("StatsUI"),
			Z_Registration_Info_UClass_UStatsUI.InnerSingleton,
			StaticRegisterNativesUStatsUI,
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
	return Z_Registration_Info_UClass_UStatsUI.InnerSingleton;
}
UClass* Z_Construct_UClass_UStatsUI_NoRegister()
{
	return UStatsUI::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UStatsUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "StatsUI.h" },
		{ "ModuleRelativePath", "StatsUI.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIWins_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "StatsUI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "StatsUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_UIWins;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatsUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UStatsUI_Statics::NewProp_UIWins = { "UIWins", nullptr, (EPropertyFlags)0x0040000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UStatsUI, UIWins), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIWins_MetaData), NewProp_UIWins_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatsUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatsUI_Statics::NewProp_UIWins,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UStatsUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_CMP304Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatsUI_Statics::ClassParams = {
	&UStatsUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UStatsUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UStatsUI_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatsUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatsUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatsUI()
{
	if (!Z_Registration_Info_UClass_UStatsUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatsUI.OuterSingleton, Z_Construct_UClass_UStatsUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatsUI.OuterSingleton;
}
UStatsUI::UStatsUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatsUI);
UStatsUI::~UStatsUI() {}
// ********** End Class UStatsUI *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_StatsUI_h__Script_CMP304Project_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatsUI, UStatsUI::StaticClass, TEXT("UStatsUI"), &Z_Registration_Info_UClass_UStatsUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatsUI), 3314962819U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_StatsUI_h__Script_CMP304Project_1931129303(TEXT("/Script/CMP304Project"),
	Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_StatsUI_h__Script_CMP304Project_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_StatsUI_h__Script_CMP304Project_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
