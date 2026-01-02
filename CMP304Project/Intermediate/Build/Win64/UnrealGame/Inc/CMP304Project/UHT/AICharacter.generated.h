// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "AICharacter.h"

#ifdef CMP304PROJECT_AICharacter_generated_h
#error "AICharacter.generated.h already included, missing '#pragma once' in AICharacter.h"
#endif
#define CMP304PROJECT_AICharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UPrimitiveComponent;
struct FHitResult;

// ********** Begin Class AAICharacter *************************************************************
#define FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_AICharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnCompHit);


CMP304PROJECT_API UClass* Z_Construct_UClass_AAICharacter_NoRegister();

#define FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_AICharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAICharacter(); \
	friend struct Z_Construct_UClass_AAICharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CMP304PROJECT_API UClass* Z_Construct_UClass_AAICharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AAICharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CMP304Project"), Z_Construct_UClass_AAICharacter_NoRegister) \
	DECLARE_SERIALIZER(AAICharacter)


#define FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_AICharacter_h_18_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AAICharacter(AAICharacter&&) = delete; \
	AAICharacter(const AAICharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAICharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAICharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAICharacter) \
	NO_API virtual ~AAICharacter();


#define FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_AICharacter_h_15_PROLOG
#define FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_AICharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_AICharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_AICharacter_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_AICharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AAICharacter;

// ********** End Class AAICharacter ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_Owner_Documents_Unreal_Projects_CMP304Project_Source_CMP304Project_AICharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
