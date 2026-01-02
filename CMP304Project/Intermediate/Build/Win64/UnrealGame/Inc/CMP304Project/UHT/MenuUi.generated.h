// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MenuUi.h"

#ifdef CMP304PROJECT_MenuUi_generated_h
#error "MenuUi.generated.h already included, missing '#pragma once' in MenuUi.h"
#endif
#define CMP304PROJECT_MenuUi_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UMenuUi ******************************************************************
#define FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_MenuUi_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnButtonHit); \
	DECLARE_FUNCTION(execOnAIValueChange); \
	DECLARE_FUNCTION(execOnPlayerValueChange);


CMP304PROJECT_API UClass* Z_Construct_UClass_UMenuUi_NoRegister();

#define FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_MenuUi_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMenuUi(); \
	friend struct Z_Construct_UClass_UMenuUi_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CMP304PROJECT_API UClass* Z_Construct_UClass_UMenuUi_NoRegister(); \
public: \
	DECLARE_CLASS2(UMenuUi, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/CMP304Project"), Z_Construct_UClass_UMenuUi_NoRegister) \
	DECLARE_SERIALIZER(UMenuUi)


#define FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_MenuUi_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMenuUi(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UMenuUi(UMenuUi&&) = delete; \
	UMenuUi(const UMenuUi&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMenuUi); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMenuUi); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMenuUi) \
	NO_API virtual ~UMenuUi();


#define FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_MenuUi_h_16_PROLOG
#define FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_MenuUi_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_MenuUi_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_MenuUi_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_MenuUi_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UMenuUi;

// ********** End Class UMenuUi ********************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_MenuUi_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
