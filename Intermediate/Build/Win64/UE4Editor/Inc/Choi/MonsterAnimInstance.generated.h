// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHOI_MonsterAnimInstance_generated_h
#error "MonsterAnimInstance.generated.h already included, missing '#pragma once' in MonsterAnimInstance.h"
#endif
#define CHOI_MonsterAnimInstance_generated_h

#define Choi_Source_Choi_MonsterAnimInstance_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAnimNotify_DeathEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnimNotify_DeathEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnimNotify_HitEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnimNotify_HitEnd(); \
		P_NATIVE_END; \
	}


#define Choi_Source_Choi_MonsterAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAnimNotify_DeathEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnimNotify_DeathEnd(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAnimNotify_HitEnd) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AnimNotify_HitEnd(); \
		P_NATIVE_END; \
	}


#define Choi_Source_Choi_MonsterAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMonsterAnimInstance(); \
	friend struct Z_Construct_UClass_UMonsterAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UMonsterAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Choi"), NO_API) \
	DECLARE_SERIALIZER(UMonsterAnimInstance)


#define Choi_Source_Choi_MonsterAnimInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMonsterAnimInstance(); \
	friend struct Z_Construct_UClass_UMonsterAnimInstance_Statics; \
public: \
	DECLARE_CLASS(UMonsterAnimInstance, UAnimInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Choi"), NO_API) \
	DECLARE_SERIALIZER(UMonsterAnimInstance)


#define Choi_Source_Choi_MonsterAnimInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMonsterAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMonsterAnimInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMonsterAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMonsterAnimInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMonsterAnimInstance(UMonsterAnimInstance&&); \
	NO_API UMonsterAnimInstance(const UMonsterAnimInstance&); \
public:


#define Choi_Source_Choi_MonsterAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMonsterAnimInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMonsterAnimInstance(UMonsterAnimInstance&&); \
	NO_API UMonsterAnimInstance(const UMonsterAnimInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMonsterAnimInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMonsterAnimInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMonsterAnimInstance)


#define Choi_Source_Choi_MonsterAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET
#define Choi_Source_Choi_MonsterAnimInstance_h_12_PROLOG
#define Choi_Source_Choi_MonsterAnimInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Choi_Source_Choi_MonsterAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	Choi_Source_Choi_MonsterAnimInstance_h_15_RPC_WRAPPERS \
	Choi_Source_Choi_MonsterAnimInstance_h_15_INCLASS \
	Choi_Source_Choi_MonsterAnimInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Choi_Source_Choi_MonsterAnimInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Choi_Source_Choi_MonsterAnimInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	Choi_Source_Choi_MonsterAnimInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Choi_Source_Choi_MonsterAnimInstance_h_15_INCLASS_NO_PURE_DECLS \
	Choi_Source_Choi_MonsterAnimInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHOI_API UClass* StaticClass<class UMonsterAnimInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Choi_Source_Choi_MonsterAnimInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
