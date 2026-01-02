// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CMP304Project/BT_FindRandPos.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBT_FindRandPos() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
CMP304PROJECT_API UClass* Z_Construct_UClass_UBT_FindRandPos();
CMP304PROJECT_API UClass* Z_Construct_UClass_UBT_FindRandPos_NoRegister();
UPackage* Z_Construct_UPackage__Script_CMP304Project();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBT_FindRandPos **********************************************************
void UBT_FindRandPos::StaticRegisterNativesUBT_FindRandPos()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBT_FindRandPos;
UClass* UBT_FindRandPos::GetPrivateStaticClass()
{
	using TClass = UBT_FindRandPos;
	if (!Z_Registration_Info_UClass_UBT_FindRandPos.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BT_FindRandPos"),
			Z_Registration_Info_UClass_UBT_FindRandPos.InnerSingleton,
			StaticRegisterNativesUBT_FindRandPos,
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
	return Z_Registration_Info_UClass_UBT_FindRandPos.InnerSingleton;
}
UClass* Z_Construct_UClass_UBT_FindRandPos_NoRegister()
{
	return UBT_FindRandPos::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBT_FindRandPos_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BT_FindRandPos.h" },
		{ "ModuleRelativePath", "BT_FindRandPos.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "AI" },
		{ "ModuleRelativePath", "BT_FindRandPos.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBT_FindRandPos>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBT_FindRandPos_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0040000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBT_FindRandPos, Radius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Radius_MetaData), NewProp_Radius_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBT_FindRandPos_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBT_FindRandPos_Statics::NewProp_Radius,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBT_FindRandPos_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBT_FindRandPos_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_CMP304Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBT_FindRandPos_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBT_FindRandPos_Statics::ClassParams = {
	&UBT_FindRandPos::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UBT_FindRandPos_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UBT_FindRandPos_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBT_FindRandPos_Statics::Class_MetaDataParams), Z_Construct_UClass_UBT_FindRandPos_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBT_FindRandPos()
{
	if (!Z_Registration_Info_UClass_UBT_FindRandPos.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBT_FindRandPos.OuterSingleton, Z_Construct_UClass_UBT_FindRandPos_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBT_FindRandPos.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBT_FindRandPos);
UBT_FindRandPos::~UBT_FindRandPos() {}
// ********** End Class UBT_FindRandPos ************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_BT_FindRandPos_h__Script_CMP304Project_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBT_FindRandPos, UBT_FindRandPos::StaticClass, TEXT("UBT_FindRandPos"), &Z_Registration_Info_UClass_UBT_FindRandPos, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBT_FindRandPos), 1167902908U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_BT_FindRandPos_h__Script_CMP304Project_3673140303(TEXT("/Script/CMP304Project"),
	Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_BT_FindRandPos_h__Script_CMP304Project_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_BT_FindRandPos_h__Script_CMP304Project_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
