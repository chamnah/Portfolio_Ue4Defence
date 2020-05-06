// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHOI_BoxActor_generated_h
#error "BoxActor.generated.h already included, missing '#pragma once' in BoxActor.h"
#endif
#define CHOI_BoxActor_generated_h

#define Choi_Source_Choi_BoxActor_h_12_RPC_WRAPPERS
#define Choi_Source_Choi_BoxActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Choi_Source_Choi_BoxActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABoxActor(); \
	friend struct Z_Construct_UClass_ABoxActor_Statics; \
public: \
	DECLARE_CLASS(ABoxActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Choi"), NO_API) \
	DECLARE_SERIALIZER(ABoxActor)


#define Choi_Source_Choi_BoxActor_h_12_INCLASS \
private: \
	static void StaticRegisterNativesABoxActor(); \
	friend struct Z_Construct_UClass_ABoxActor_Statics; \
public: \
	DECLARE_CLASS(ABoxActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Choi"), NO_API) \
	DECLARE_SERIALIZER(ABoxActor)


#define Choi_Source_Choi_BoxActor_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABoxActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABoxActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoxActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoxActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoxActor(ABoxActor&&); \
	NO_API ABoxActor(const ABoxActor&); \
public:


#define Choi_Source_Choi_BoxActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABoxActor(ABoxActor&&); \
	NO_API ABoxActor(const ABoxActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABoxActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABoxActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABoxActor)


#define Choi_Source_Choi_BoxActor_h_12_PRIVATE_PROPERTY_OFFSET
#define Choi_Source_Choi_BoxActor_h_9_PROLOG
#define Choi_Source_Choi_BoxActor_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Choi_Source_Choi_BoxActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Choi_Source_Choi_BoxActor_h_12_RPC_WRAPPERS \
	Choi_Source_Choi_BoxActor_h_12_INCLASS \
	Choi_Source_Choi_BoxActor_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Choi_Source_Choi_BoxActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Choi_Source_Choi_BoxActor_h_12_PRIVATE_PROPERTY_OFFSET \
	Choi_Source_Choi_BoxActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Choi_Source_Choi_BoxActor_h_12_INCLASS_NO_PURE_DECLS \
	Choi_Source_Choi_BoxActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHOI_API UClass* StaticClass<class ABoxActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Choi_Source_Choi_BoxActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
