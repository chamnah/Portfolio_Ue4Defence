// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHOI_MinionCharacter_generated_h
#error "MinionCharacter.generated.h already included, missing '#pragma once' in MinionCharacter.h"
#endif
#define CHOI_MinionCharacter_generated_h

#define Choi_Source_Choi_MinionCharacter_h_15_RPC_WRAPPERS
#define Choi_Source_Choi_MinionCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Choi_Source_Choi_MinionCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMinionCharacter(); \
	friend struct Z_Construct_UClass_AMinionCharacter_Statics; \
public: \
	DECLARE_CLASS(AMinionCharacter, AMonsterCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Choi"), NO_API) \
	DECLARE_SERIALIZER(AMinionCharacter)


#define Choi_Source_Choi_MinionCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMinionCharacter(); \
	friend struct Z_Construct_UClass_AMinionCharacter_Statics; \
public: \
	DECLARE_CLASS(AMinionCharacter, AMonsterCharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Choi"), NO_API) \
	DECLARE_SERIALIZER(AMinionCharacter)


#define Choi_Source_Choi_MinionCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMinionCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMinionCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMinionCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMinionCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMinionCharacter(AMinionCharacter&&); \
	NO_API AMinionCharacter(const AMinionCharacter&); \
public:


#define Choi_Source_Choi_MinionCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMinionCharacter(AMinionCharacter&&); \
	NO_API AMinionCharacter(const AMinionCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMinionCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMinionCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMinionCharacter)


#define Choi_Source_Choi_MinionCharacter_h_15_PRIVATE_PROPERTY_OFFSET
#define Choi_Source_Choi_MinionCharacter_h_12_PROLOG
#define Choi_Source_Choi_MinionCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Choi_Source_Choi_MinionCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Choi_Source_Choi_MinionCharacter_h_15_RPC_WRAPPERS \
	Choi_Source_Choi_MinionCharacter_h_15_INCLASS \
	Choi_Source_Choi_MinionCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Choi_Source_Choi_MinionCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Choi_Source_Choi_MinionCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Choi_Source_Choi_MinionCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Choi_Source_Choi_MinionCharacter_h_15_INCLASS_NO_PURE_DECLS \
	Choi_Source_Choi_MinionCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHOI_API UClass* StaticClass<class AMinionCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Choi_Source_Choi_MinionCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
