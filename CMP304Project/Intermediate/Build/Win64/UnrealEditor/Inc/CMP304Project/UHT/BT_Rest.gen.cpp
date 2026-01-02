// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CMP304Project/BT_Rest.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBT_Rest() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
CMP304PROJECT_API UClass* Z_Construct_UClass_UBT_Rest();
CMP304PROJECT_API UClass* Z_Construct_UClass_UBT_Rest_NoRegister();
UPackage* Z_Construct_UPackage__Script_CMP304Project();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBT_Rest *****************************************************************
void UBT_Rest::StaticRegisterNativesUBT_Rest()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBT_Rest;
UClass* UBT_Rest::GetPrivateStaticClass()
{
	using TClass = UBT_Rest;
	if (!Z_Registration_Info_UClass_UBT_Rest.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BT_Rest"),
			Z_Registration_Info_UClass_UBT_Rest.InnerSingleton,
			StaticRegisterNativesUBT_Rest,
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
	return Z_Registration_Info_UClass_UBT_Rest.InnerSingleton;
}
UClass* Z_Construct_UClass_UBT_Rest_NoRegister()
{
	return UBT_Rest::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBT_Rest_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BT_Rest.h" },
		{ "ModuleRelativePath", "BT_Rest.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBT_Rest>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBT_Rest_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_CMP304Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBT_Rest_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBT_Rest_Statics::ClassParams = {
	&UBT_Rest::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBT_Rest_Statics::Class_MetaDataParams), Z_Construct_UClass_UBT_Rest_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBT_Rest()
{
	if (!Z_Registration_Info_UClass_UBT_Rest.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBT_Rest.OuterSingleton, Z_Construct_UClass_UBT_Rest_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBT_Rest.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBT_Rest);
UBT_Rest::~UBT_Rest() {}
// ********** End Class UBT_Rest *******************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_BT_Rest_h__Script_CMP304Project_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBT_Rest, UBT_Rest::StaticClass, TEXT("UBT_Rest"), &Z_Registration_Info_UClass_UBT_Rest, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBT_Rest), 2293603847U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_BT_Rest_h__Script_CMP304Project_1283271384(TEXT("/Script/CMP304Project"),
	Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_BT_Rest_h__Script_CMP304Project_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_BT_Rest_h__Script_CMP304Project_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
