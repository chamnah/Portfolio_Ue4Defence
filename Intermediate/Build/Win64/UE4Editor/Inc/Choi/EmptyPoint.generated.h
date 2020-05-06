// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHOI_EmptyPoint_generated_h
#error "EmptyPoint.generated.h already included, missing '#pragma once' in EmptyPoint.h"
#endif
#define CHOI_EmptyPoint_generated_h

#define Choi_Source_Choi_EmptyPoint_h_12_RPC_WRAPPERS
#define Choi_Source_Choi_EmptyPoint_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Choi_Source_Choi_EmptyPoint_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEmptyPoint(); \
	friend struct Z_Construct_UClass_AEmptyPoint_Statics; \
public: \
	DECLARE_CLASS(AEmptyPoint, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Choi"), NO_API) \
	DECLARE_SERIALIZER(AEmptyPoint)


#define Choi_Source_Choi_EmptyPoint_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEmptyPoint(); \
	friend struct Z_Construct_UClass_AEmptyPoint_Statics; \
public: \
	DECLARE_CLASS(AEmptyPoint, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Choi"), NO_API) \
	DECLARE_SERIALIZER(AEmptyPoint)


#define Choi_Source_Choi_EmptyPoint_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEmptyPoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEmptyPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEmptyPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEmptyPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEmptyPoint(AEmptyPoint&&); \
	NO_API AEmptyPoint(const AEmptyPoint&); \
public:


#define Choi_Source_Choi_EmptyPoint_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEmptyPoint(AEmptyPoint&&); \
	NO_API AEmptyPoint(const AEmptyPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEmptyPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEmptyPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEmptyPoint)


#define Choi_Source_Choi_EmptyPoint_h_12_PRIVATE_PROPERTY_OFFSET
#define Choi_Source_Choi_EmptyPoint_h_9_PROLOG
#define Choi_Source_Choi_EmptyPoint_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Choi_Source_Choi_EmptyPoint_h_12_PRIVATE_PROPERTY_OFFSET \
	Choi_Source_Choi_EmptyPoint_h_12_RPC_WRAPPERS \
	Choi_Source_Choi_EmptyPoint_h_12_INCLASS \
	Choi_Source_Choi_EmptyPoint_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Choi_Source_Choi_EmptyPoint_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Choi_Source_Choi_EmptyPoint_h_12_PRIVATE_PROPERTY_OFFSET \
	Choi_Source_Choi_EmptyPoint_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Choi_Source_Choi_EmptyPoint_h_12_INCLASS_NO_PURE_DECLS \
	Choi_Source_Choi_EmptyPoint_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHOI_API UClass* StaticClass<class AEmptyPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Choi_Source_Choi_EmptyPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
