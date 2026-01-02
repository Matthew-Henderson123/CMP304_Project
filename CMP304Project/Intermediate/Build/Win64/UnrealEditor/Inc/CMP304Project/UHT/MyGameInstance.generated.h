// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyGameInstance.h"

#ifdef CMP304PROJECT_MyGameInstance_generated_h
#error "MyGameInstance.generated.h already included, missing '#pragma once' in MyGameInstance.h"
#endif
#define CMP304PROJECT_MyGameInstance_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMyGameInstance **********************************************************
#define FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_MyGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetAISpeed); \
	DECLARE_FUNCTION(execSetAISpeed); \
	DECLARE_FUNCTION(execGetPlayerSpeed); \
	DECLARE_FUNCTION(execSetPlayerSpeed); \
	DECLARE_FUNCTION(execGetPlayerWins); \
	DECLARE_FUNCTION(execAddPlayerWin);


CMP304PROJECT_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();

#define FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_MyGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyGameInstance(); \
	friend struct Z_Construct_UClass_UMyGameInstance_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CMP304PROJECT_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister(); \
public: \
	DECLARE_CLASS2(UMyGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/CMP304Project"), Z_Construct_UClass_UMyGameInstance_NoRegister) \
	DECLARE_SERIALIZER(UMyGameInstance)


#define FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_MyGameInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMyGameInstance(UMyGameInstance&&) = delete; \
	UMyGameInstance(const UMyGameInstance&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMyGameInstance) \
	NO_API virtual ~UMyGameInstance();


#define FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_MyGameInstance_h_12_PROLOG
#define FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_MyGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_MyGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_MyGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_MyGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMyGameInstance;

// ********** End Class UMyGameInstance ************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_MyGameInstance_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
