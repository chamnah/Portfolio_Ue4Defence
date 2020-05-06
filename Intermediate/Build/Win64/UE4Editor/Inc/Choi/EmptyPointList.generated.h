// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHOI_EmptyPointList_generated_h
#error "EmptyPointList.generated.h already included, missing '#pragma once' in EmptyPointList.h"
#endif
#define CHOI_EmptyPointList_generated_h

#define Choi_Source_Choi_EmptyPointList_h_12_RPC_WRAPPERS
#define Choi_Source_Choi_EmptyPointList_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Choi_Source_Choi_EmptyPointList_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEmptyPointList(); \
	friend struct Z_Construct_UClass_AEmptyPointList_Statics; \
public: \
	DECLARE_CLASS(AEmptyPointList, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Choi"), NO_API) \
	DECLARE_SERIALIZER(AEmptyPointList)


#define Choi_Source_Choi_EmptyPointList_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEmptyPointList(); \
	friend struct Z_Construct_UClass_AEmptyPointList_Statics; \
public: \
	DECLARE_CLASS(AEmptyPointList, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Choi"), NO_API) \
	DECLARE_SERIALIZER(AEmptyPointList)


#define Choi_Source_Choi_EmptyPointList_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEmptyPointList(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEmptyPointList) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEmptyPointList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEmptyPointList); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEmptyPointList(AEmptyPointList&&); \
	NO_API AEmptyPointList(const AEmptyPointList&); \
public:


#define Choi_Source_Choi_EmptyPointList_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEmptyPointList(AEmptyPointList&&); \
	NO_API AEmptyPointList(const AEmptyPointList&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEmptyPointList); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEmptyPointList); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEmptyPointList)


#define Choi_Source_Choi_EmptyPointList_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__arrPoint() { return STRUCT_OFFSET(AEmptyPointList, arrPoint); }


#define Choi_Source_Choi_EmptyPointList_h_9_PROLOG
#define Choi_Source_Choi_EmptyPointList_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Choi_Source_Choi_EmptyPointList_h_12_PRIVATE_PROPERTY_OFFSET \
	Choi_Source_Choi_EmptyPointList_h_12_RPC_WRAPPERS \
	Choi_Source_Choi_EmptyPointList_h_12_INCLASS \
	Choi_Source_Choi_EmptyPointList_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Choi_Source_Choi_EmptyPointList_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Choi_Source_Choi_EmptyPointList_h_12_PRIVATE_PROPERTY_OFFSET \
	Choi_Source_Choi_EmptyPointList_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Choi_Source_Choi_EmptyPointList_h_12_INCLASS_NO_PURE_DECLS \
	Choi_Source_Choi_EmptyPointList_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHOI_API UClass* StaticClass<class AEmptyPointList>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Choi_Source_Choi_EmptyPointList_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
