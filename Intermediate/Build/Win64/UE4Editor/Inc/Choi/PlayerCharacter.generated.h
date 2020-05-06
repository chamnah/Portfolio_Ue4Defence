// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef CHOI_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define CHOI_PlayerCharacter_generated_h

#define Choi_Source_Choi_PlayerCharacter_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDropEvent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_iBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DropEvent(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_iBodyIndex,Z_Param_bFromSweep,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Choi_Source_Choi_PlayerCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDropEvent) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_iBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DropEvent(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_iBodyIndex,Z_Param_bFromSweep,Z_Param_Out_Hit); \
		P_NATIVE_END; \
	}


#define Choi_Source_Choi_PlayerCharacter_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Choi"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define Choi_Source_Choi_PlayerCharacter_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Choi"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define Choi_Source_Choi_PlayerCharacter_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public:


#define Choi_Source_Choi_PlayerCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define Choi_Source_Choi_PlayerCharacter_h_18_PRIVATE_PROPERTY_OFFSET
#define Choi_Source_Choi_PlayerCharacter_h_15_PROLOG
#define Choi_Source_Choi_PlayerCharacter_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Choi_Source_Choi_PlayerCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	Choi_Source_Choi_PlayerCharacter_h_18_RPC_WRAPPERS \
	Choi_Source_Choi_PlayerCharacter_h_18_INCLASS \
	Choi_Source_Choi_PlayerCharacter_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Choi_Source_Choi_PlayerCharacter_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Choi_Source_Choi_PlayerCharacter_h_18_PRIVATE_PROPERTY_OFFSET \
	Choi_Source_Choi_PlayerCharacter_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Choi_Source_Choi_PlayerCharacter_h_18_INCLASS_NO_PURE_DECLS \
	Choi_Source_Choi_PlayerCharacter_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHOI_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Choi_Source_Choi_PlayerCharacter_h


#define FOREACH_ENUM_CAMERA_MODE(op) \
	op(CAMERA_MODE::CM_ACTION) \
	op(CAMERA_MODE::CM_TOP) 

enum class CAMERA_MODE : uint8;
template<> CHOI_API UEnum* StaticEnum<CAMERA_MODE>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
