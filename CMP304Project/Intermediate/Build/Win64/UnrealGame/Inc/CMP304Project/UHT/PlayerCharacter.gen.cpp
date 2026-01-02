// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CMP304Project/PlayerCharacter.h"
#include "Engine/HitResult.h"
#include "InputActionValue.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodePlayerCharacter() {}

// ********** Begin Cross Module References ********************************************************
CMP304PROJECT_API UClass* Z_Construct_UClass_APlayerCharacter();
CMP304PROJECT_API UClass* Z_Construct_UClass_APlayerCharacter_NoRegister();
CMP304PROJECT_API UClass* Z_Construct_UClass_UMenuUi_NoRegister();
CMP304PROJECT_API UClass* Z_Construct_UClass_UStatsUI_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
UPackage* Z_Construct_UPackage__Script_CMP304Project();
// ********** End Cross Module References **********************************************************

// ********** Begin Class APlayerCharacter Function Move *******************************************
struct Z_Construct_UFunction_APlayerCharacter_Move_Statics
{
	struct PlayerCharacter_eventMove_Parms
	{
		FInputActionValue Value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Function to move the player\n" },
#endif
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to move the player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCharacter_Move_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventMove_Parms, Value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) }; // 203218767
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_Move_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_Move_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "Move", Z_Construct_UFunction_APlayerCharacter_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_Move_Statics::PlayerCharacter_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_Move_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_Move_Statics::PlayerCharacter_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_Out_Value);
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function Move *********************************************

// ********** Begin Class APlayerCharacter Function OnCompHit **************************************
struct Z_Construct_UFunction_APlayerCharacter_OnCompHit_Statics
{
	struct PlayerCharacter_eventOnCompHit_Parms
	{
		UPrimitiveComponent* HitComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		FVector NormalImpulse;
		FHitResult Hit;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Functions that handle collisions\n" },
#endif
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Functions that handle collisions" },
#endif
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_OnCompHit_Statics::NewProp_HitComp = { "HitComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnCompHit_Parms, HitComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitComp_MetaData), NewProp_HitComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_OnCompHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnCompHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_OnCompHit_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnCompHit_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCharacter_OnCompHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnCompHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCharacter_OnCompHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnCompHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hit_MetaData), NewProp_Hit_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_OnCompHit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnCompHit_Statics::NewProp_HitComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnCompHit_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnCompHit_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnCompHit_Statics::NewProp_NormalImpulse,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnCompHit_Statics::NewProp_Hit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnCompHit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_OnCompHit_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "OnCompHit", Z_Construct_UFunction_APlayerCharacter_OnCompHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnCompHit_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_OnCompHit_Statics::PlayerCharacter_eventOnCompHit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C80401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnCompHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_OnCompHit_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_OnCompHit_Statics::PlayerCharacter_eventOnCompHit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_OnCompHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_OnCompHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execOnCompHit)
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
// ********** End Class APlayerCharacter Function OnCompHit ****************************************

// ********** Begin Class APlayerCharacter Function OnOverlapBegin *********************************
struct Z_Construct_UFunction_APlayerCharacter_OnOverlapBegin_Statics
{
	struct PlayerCharacter_eventOnOverlapBegin_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerCharacter_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((PlayerCharacter_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerCharacter_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_APlayerCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APlayerCharacter_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 267591329
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_OnOverlapBegin_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "OnOverlapBegin", Z_Construct_UFunction_APlayerCharacter_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_OnOverlapBegin_Statics::PlayerCharacter_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_OnOverlapBegin_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_OnOverlapBegin_Statics::PlayerCharacter_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function OnOverlapBegin ***********************************

// ********** Begin Class APlayerCharacter Function OnOverlapEnd ***********************************
struct Z_Construct_UFunction_APlayerCharacter_OnOverlapEnd_Statics
{
	struct PlayerCharacter_eventOnOverlapEnd_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_OnOverlapEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnOverlapEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_OnOverlapEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnOverlapEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerCharacter_OnOverlapEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnOverlapEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerCharacter_OnOverlapEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerCharacter_eventOnOverlapEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerCharacter_OnOverlapEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnOverlapEnd_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnOverlapEnd_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnOverlapEnd_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerCharacter_OnOverlapEnd_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnOverlapEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerCharacter_OnOverlapEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_APlayerCharacter, nullptr, "OnOverlapEnd", Z_Construct_UFunction_APlayerCharacter_OnOverlapEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnOverlapEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerCharacter_OnOverlapEnd_Statics::PlayerCharacter_eventOnOverlapEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerCharacter_OnOverlapEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerCharacter_OnOverlapEnd_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_APlayerCharacter_OnOverlapEnd_Statics::PlayerCharacter_eventOnOverlapEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerCharacter_OnOverlapEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerCharacter_OnOverlapEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerCharacter::execOnOverlapEnd)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// ********** End Class APlayerCharacter Function OnOverlapEnd *************************************

// ********** Begin Class APlayerCharacter *********************************************************
void APlayerCharacter::StaticRegisterNativesAPlayerCharacter()
{
	UClass* Class = APlayerCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Move", &APlayerCharacter::execMove },
		{ "OnCompHit", &APlayerCharacter::execOnCompHit },
		{ "OnOverlapBegin", &APlayerCharacter::execOnOverlapBegin },
		{ "OnOverlapEnd", &APlayerCharacter::execOnOverlapEnd },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_APlayerCharacter;
UClass* APlayerCharacter::GetPrivateStaticClass()
{
	using TClass = APlayerCharacter;
	if (!Z_Registration_Info_UClass_APlayerCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("PlayerCharacter"),
			Z_Registration_Info_UClass_APlayerCharacter.InnerSingleton,
			StaticRegisterNativesAPlayerCharacter,
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
	return Z_Registration_Info_UClass_APlayerCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_APlayerCharacter_NoRegister()
{
	return APlayerCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_APlayerCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerCharacter.h" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SphereMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Mesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//The players mesh\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The players mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Controls for the player\n" },
#endif
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls for the player" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuHudClass_MetaData[] = {
		{ "Category", "PlayerCharacter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Used for the UI at the begining and end of the game\n" },
#endif
		{ "ModuleRelativePath", "PlayerCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Used for the UI at the begining and end of the game" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsHudClass_MetaData[] = {
		{ "Category", "PlayerCharacter" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MenuHud_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StatsHud_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SphereMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MenuHudClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_StatsHudClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MenuHud;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StatsHud;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerCharacter_Move, "Move" }, // 4151451711
		{ &Z_Construct_UFunction_APlayerCharacter_OnCompHit, "OnCompHit" }, // 1564342177
		{ &Z_Construct_UFunction_APlayerCharacter_OnOverlapBegin, "OnOverlapBegin" }, // 494769812
		{ &Z_Construct_UFunction_APlayerCharacter_OnOverlapEnd, "OnOverlapEnd" }, // 1924775114
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SphereMesh = { "SphereMesh", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, SphereMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SphereMesh_MetaData), NewProp_SphereMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MoveContext = { "MoveContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, MoveContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveContext_MetaData), NewProp_MoveContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MenuHudClass = { "MenuHudClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, MenuHudClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMenuUi_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuHudClass_MetaData), NewProp_MenuHudClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_StatsHudClass = { "StatsHudClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, StatsHudClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UStatsUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsHudClass_MetaData), NewProp_StatsHudClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MenuHud = { "MenuHud", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, MenuHud), Z_Construct_UClass_UMenuUi_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MenuHud_MetaData), NewProp_MenuHud_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCharacter_Statics::NewProp_StatsHud = { "StatsHud", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCharacter, StatsHud), Z_Construct_UClass_UStatsUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StatsHud_MetaData), NewProp_StatsHud_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_SphereMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MoveContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MenuHudClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_StatsHudClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_MenuHud,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCharacter_Statics::NewProp_StatsHud,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_CMP304Project,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCharacter_Statics::ClassParams = {
	&APlayerCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlayerCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerCharacter()
{
	if (!Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton, Z_Construct_UClass_APlayerCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCharacter);
APlayerCharacter::~APlayerCharacter() {}
// ********** End Class APlayerCharacter ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_PlayerCharacter_h__Script_CMP304Project_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCharacter, APlayerCharacter::StaticClass, TEXT("APlayerCharacter"), &Z_Registration_Info_UClass_APlayerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCharacter), 2052471613U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_PlayerCharacter_h__Script_CMP304Project_913651108(TEXT("/Script/CMP304Project"),
	Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_PlayerCharacter_h__Script_CMP304Project_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_PlayerCharacter_h__Script_CMP304Project_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
