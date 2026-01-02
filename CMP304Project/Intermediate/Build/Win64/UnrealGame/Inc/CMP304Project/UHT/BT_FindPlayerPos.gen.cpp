// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CMP304Project/BT_FindPlayerPos.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeBT_FindPlayerPos() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
CMP304PROJECT_API UClass* Z_Construct_UClass_UBT_FindPlayerPos();
CMP304PROJECT_API UClass* Z_Construct_UClass_UBT_FindPlayerPos_NoRegister();
UPackage* Z_Construct_UPackage__Script_CMP304Project();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UBT_FindPlayerPos ********************************************************
void UBT_FindPlayerPos::StaticRegisterNativesUBT_FindPlayerPos()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UBT_FindPlayerPos;
UClass* UBT_FindPlayerPos::GetPrivateStaticClass()
{
	using TClass = UBT_FindPlayerPos;
	if (!Z_Registration_Info_UClass_UBT_FindPlayerPos.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("BT_FindPlayerPos"),
			Z_Registration_Info_UClass_UBT_FindPlayerPos.InnerSingleton,
			StaticRegisterNativesUBT_FindPlayerPos,
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
	return Z_Registration_Info_UClass_UBT_FindPlayerPos.InnerSingleton;
}
UClass* Z_Construct_UClass_UBT_FindPlayerPos_NoRegister()
{
	return UBT_FindPlayerPos::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UBT_FindPlayerPos_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BT_FindPlayerPos.h" },
		{ "ModuleRelativePath", "BT_FindPlayerPos.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBT_FindPlayerPos>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBT_FindPlayerPos_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_CMP304Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBT_FindPlayerPos_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBT_FindPlayerPos_Statics::ClassParams = {
	&UBT_FindPlayerPos::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBT_FindPlayerPos_Statics::Class_MetaDataParams), Z_Construct_UClass_UBT_FindPlayerPos_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBT_FindPlayerPos()
{
	if (!Z_Registration_Info_UClass_UBT_FindPlayerPos.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBT_FindPlayerPos.OuterSingleton, Z_Construct_UClass_UBT_FindPlayerPos_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBT_FindPlayerPos.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBT_FindPlayerPos);
UBT_FindPlayerPos::~UBT_FindPlayerPos() {}
// ********** End Class UBT_FindPlayerPos **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_BT_FindPlayerPos_h__Script_CMP304Project_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBT_FindPlayerPos, UBT_FindPlayerPos::StaticClass, TEXT("UBT_FindPlayerPos"), &Z_Registration_Info_UClass_UBT_FindPlayerPos, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBT_FindPlayerPos), 3700018435U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_BT_FindPlayerPos_h__Script_CMP304Project_1535186667(TEXT("/Script/CMP304Project"),
	Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_BT_FindPlayerPos_h__Script_CMP304Project_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_BT_FindPlayerPos_h__Script_CMP304Project_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
