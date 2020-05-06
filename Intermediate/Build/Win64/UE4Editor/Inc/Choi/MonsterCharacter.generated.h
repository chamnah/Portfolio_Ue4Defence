// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHOI_MonsterCharacter_generated_h
#error "MonsterCharacter.generated.h already included, missing '#pragma once' in MonsterCharacter.h"
#endif
#define CHOI_MonsterCharacter_generated_h

#define Choi_Source_Choi_MonsterCharacter_h_12_RPC_WRAPPERS
#define Choi_Source_Choi_MonsterCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Choi_Source_Choi_MonsterCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMonsterCharacter(); \
	friend struct Z_Construct_UClass_AMonsterCharacter_Statics; \
public: \
	DECLARE_CLASS(AMonsterCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Choi"), NO_API) \
	DECLARE_SERIALIZER(AMonsterCharacter)


#define Choi_Source_Choi_MonsterCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMonsterCharacter(); \
	friend struct Z_Construct_UClass_AMonsterCharacter_Statics; \
public: \
	DECLARE_CLASS(AMonsterCharacter, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Choi"), NO_API) \
	DECLARE_SERIALIZER(AMonsterCharacter)


#define Choi_Source_Choi_MonsterCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMonsterCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMonsterCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonsterCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonsterCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonsterCharacter(AMonsterCharacter&&); \
	NO_API AMonsterCharacter(const AMonsterCharacter&); \
public:


#define Choi_Source_Choi_MonsterCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMonsterCharacter(AMonsterCharacter&&); \
	NO_API AMonsterCharacter(const AMonsterCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMonsterCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMonsterCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMonsterCharacter)


#define Choi_Source_Choi_MonsterCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__fTraceRange() { return STRUCT_OFFSET(AMonsterCharacter, fTraceRange); } \
	FORCEINLINE static uint32 __PPO__fAttackRange() { return STRUCT_OFFSET(AMonsterCharacter, fAttackRange); } \
	FORCEINLINE static uint32 __PPO__iLevel() { return STRUCT_OFFSET(AMonsterCharacter, iLevel); } \
	FORCEINLINE static uint32 __PPO__iExp() { return STRUCT_OFFSET(AMonsterCharacter, iExp); } \
	FORCEINLINE static uint32 __PPO__iGold() { return STRUCT_OFFSET(AMonsterCharacter, iGold); } \
	FORCEINLINE static uint32 __PPO__iAttack() { return STRUCT_OFFSET(AMonsterCharacter, iAttack); } \
	FORCEINLINE static uint32 __PPO__iArmor() { return STRUCT_OFFSET(AMonsterCharacter, iArmor); } \
	FORCEINLINE static uint32 __PPO__iHP() { return STRUCT_OFFSET(AMonsterCharacter, iHP); } \
	FORCEINLINE static uint32 __PPO__iHPMax() { return STRUCT_OFFSET(AMonsterCharacter, iHPMax); } \
	FORCEINLINE static uint32 __PPO__iPatrolIndex() { return STRUCT_OFFSET(AMonsterCharacter, iPatrolIndex); } \
	FORCEINLINE static uint32 __PPO__pPatrolList() { return STRUCT_OFFSET(AMonsterCharacter, pPatrolList); } \
	FORCEINLINE static uint32 __PPO__fWaitMax() { return STRUCT_OFFSET(AMonsterCharacter, fWaitMax); } \
	FORCEINLINE static uint32 __PPO__fTraceMax() { return STRUCT_OFFSET(AMonsterCharacter, fTraceMax); }


#define Choi_Source_Choi_MonsterCharacter_h_9_PROLOG
#define Choi_Source_Choi_MonsterCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Choi_Source_Choi_MonsterCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Choi_Source_Choi_MonsterCharacter_h_12_RPC_WRAPPERS \
	Choi_Source_Choi_MonsterCharacter_h_12_INCLASS \
	Choi_Source_Choi_MonsterCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Choi_Source_Choi_MonsterCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Choi_Source_Choi_MonsterCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Choi_Source_Choi_MonsterCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Choi_Source_Choi_MonsterCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Choi_Source_Choi_MonsterCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHOI_API UClass* StaticClass<class AMonsterCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Choi_Source_Choi_MonsterCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
