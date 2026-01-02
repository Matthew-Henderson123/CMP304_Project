// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CMP304Project/AICharacter.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeAICharacter() {}

// ********** Begin Cross Module References ********************************************************
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
CMP304PROJECT_API UClass* Z_Construct_UClass_AAICharacter();
CMP304PROJECT_API UClass* Z_Construct_UClass_AAICharacter_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_CMP304Project();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AAICharacter Function OnCompHit ******************************************
struct Z_Construct_UFunction_AAICharacter_OnCompHit_Statics
{
	struct AICharacter_eventOnCompHit_Parms
	{
		UPrimitiveComponent* HitComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "AICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAICharacter_OnCompHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AICharacter_eventOnCompHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComp_MetaData), NewProp_HitComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAICharacter_OnCompHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AICharacter_eventOnCompHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAICharacter_OnCompHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AICharacter_eventOnCompHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAICharacter_OnCompHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AICharacter_eventOnCompHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAICharacter_OnCompHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AICharacter_eventOnCompHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAICharacter_OnCompHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacter_OnCompHit_Statics::NewProp_HitComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacter_OnCompHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacter_OnCompHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacter_OnCompHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAICharacter_OnCompHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacter_OnCompHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AAICharacter_OnCompHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AAICharacter, nullptr, "OnCompHit", Z_Construct_UFunction_AAICharacter_OnCompHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacter_OnCompHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_AAICharacter_OnCompHit_Statics::AICharacter_eventOnCompHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AAICharacter_OnCompHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_AAICharacter_OnCompHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AAICharacter_OnCompHit_Statics::AICharacter_eventOnCompHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AAICharacter_OnCompHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AAICharacter_OnCompHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AAICharacter::execOnCompHit)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnCompHit(Z_Param_HitComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_NormalImpulse,Z_Param_Out_Hit);
	P_NATIVE_END;
}
// ********** End Class AAICharacter Function OnCompHit ********************************************

// ********** Begin Class AAICharacter *************************************************************
void AAICharacter::StaticRegisterNativesAAICharacter()
{
	UClass* Class = AAICharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnCompHit", &AAICharacter::execOnCompHit },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AAICharacter;
UClass* AAICharacter::GetPrivateStaticClass()
{
	using TClass = AAICharacter;
	if (!Z_Registration_Info_UClass_AAICharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("AICharacter"),
			Z_Registration_Info_UClass_AAICharacter.InnerSingleton,
			StaticRegisterNativesAAICharacter,
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
	return Z_Registration_Info_UClass_AAICharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AAICharacter_NoRegister()
{
	return AAICharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AAICharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AICharacter.h" },
		{ "ModuleRelativePath", "AICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BT_MetaData[] = {
		{ "Category", "AICharacter" },
		{ "ModuleRelativePath", "AICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Creates the meshes to be used\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates the meshes to be used" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ConeMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "AICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Spawner" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Creates the locations and rotations for the new AI to spawn\n" },
#endif
		{ "ModuleRelativePath", "AICharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates the locations and rotations for the new AI to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnLocation2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "AICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRotation1_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "AICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpawnRotation2_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Spawner" },
		{ "ModuleRelativePath", "AICharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AIToSpawn_MetaData[] = {
		{ "Category", "Spawning" },
		{ "ModuleRelativePath", "AICharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BT;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ConeMesh;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnLocation2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnRotation1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpawnRotation2;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AIToSpawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AAICharacter_OnCompHit, "OnCompHit" }, // 636691629
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAICharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAICharacter_Statics::NewProp_BT = { "BT", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAICharacter, BT), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BT_MetaData), NewProp_BT_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAICharacter_Statics::NewProp_SphereMesh = { "SphereMesh", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAICharacter, SphereMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereMesh_MetaData), NewProp_SphereMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAICharacter_Statics::NewProp_ConeMesh = { "ConeMesh", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAICharacter, ConeMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ConeMesh_MetaData), NewProp_ConeMesh_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAICharacter_Statics::NewProp_SpawnLocation1 = { "SpawnLocation1", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAICharacter, SpawnLocation1), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLocation1_MetaData), NewProp_SpawnLocation1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAICharacter_Statics::NewProp_SpawnLocation2 = { "SpawnLocation2", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAICharacter, SpawnLocation2), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnLocation2_MetaData), NewProp_SpawnLocation2_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAICharacter_Statics::NewProp_SpawnRotation1 = { "SpawnRotation1", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAICharacter, SpawnRotation1), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnRotation1_MetaData), NewProp_SpawnRotation1_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAICharacter_Statics::NewProp_SpawnRotation2 = { "SpawnRotation2", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAICharacter, SpawnRotation2), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpawnRotation2_MetaData), NewProp_SpawnRotation2_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAICharacter_Statics::NewProp_AIToSpawn = { "AIToSpawn", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AAICharacter, AIToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AAICharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AIToSpawn_MetaData), NewProp_AIToSpawn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAICharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacter_Statics::NewProp_BT,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacter_Statics::NewProp_SphereMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacter_Statics::NewProp_ConeMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacter_Statics::NewProp_SpawnLocation1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacter_Statics::NewProp_SpawnLocation2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacter_Statics::NewProp_SpawnRotation1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacter_Statics::NewProp_SpawnRotation2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAICharacter_Statics::NewProp_AIToSpawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AAICharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_CMP304Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AAICharacter_Statics::ClassParams = {
	&AAICharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AAICharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AAICharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AAICharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AAICharacter()
{
	if (!Z_Registration_Info_UClass_AAICharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AAICharacter.OuterSingleton, Z_Construct_UClass_AAICharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AAICharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AAICharacter);
AAICharacter::~AAICharacter() {}
// ********** End Class AAICharacter ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_AICharacter_h__Script_CMP304Project_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AAICharacter, AAICharacter::StaticClass, TEXT("AAICharacter"), &Z_Registration_Info_UClass_AAICharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AAICharacter), 1329604072U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_AICharacter_h__Script_CMP304Project_3095119847(TEXT("/Script/CMP304Project"),
	Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_AICharacter_h__Script_CMP304Project_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_AICharacter_h__Script_CMP304Project_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
