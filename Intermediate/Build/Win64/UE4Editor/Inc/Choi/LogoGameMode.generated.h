// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHOI_LogoGameMode_generated_h
#error "LogoGameMode.generated.h already included, missing '#pragma once' in LogoGameMode.h"
#endif
#define CHOI_LogoGameMode_generated_h

#define Choi_Source_Choi_LogoGameMode_h_14_RPC_WRAPPERS
#define Choi_Source_Choi_LogoGameMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Choi_Source_Choi_LogoGameMode_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALogoGameMode(); \
	friend struct Z_Construct_UClass_ALogoGameMode_Statics; \
public: \
	DECLARE_CLASS(ALogoGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Choi"), NO_API) \
	DECLARE_SERIALIZER(ALogoGameMode)


#define Choi_Source_Choi_LogoGameMode_h_14_INCLASS \
private: \
	static void StaticRegisterNativesALogoGameMode(); \
	friend struct Z_Construct_UClass_ALogoGameMode_Statics; \
public: \
	DECLARE_CLASS(ALogoGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Choi"), NO_API) \
	DECLARE_SERIALIZER(ALogoGameMode)


#define Choi_Source_Choi_LogoGameMode_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ALogoGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ALogoGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALogoGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALogoGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALogoGameMode(ALogoGameMode&&); \
	NO_API ALogoGameMode(const ALogoGameMode&); \
public:


#define Choi_Source_Choi_LogoGameMode_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALogoGameMode(ALogoGameMode&&); \
	NO_API ALogoGameMode(const ALogoGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALogoGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALogoGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALogoGameMode)


#define Choi_Source_Choi_LogoGameMode_h_14_PRIVATE_PROPERTY_OFFSET
#define Choi_Source_Choi_LogoGameMode_h_11_PROLOG
#define Choi_Source_Choi_LogoGameMode_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Choi_Source_Choi_LogoGameMode_h_14_PRIVATE_PROPERTY_OFFSET \
	Choi_Source_Choi_LogoGameMode_h_14_RPC_WRAPPERS \
	Choi_Source_Choi_LogoGameMode_h_14_INCLASS \
	Choi_Source_Choi_LogoGameMode_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Choi_Source_Choi_LogoGameMode_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Choi_Source_Choi_LogoGameMode_h_14_PRIVATE_PROPERTY_OFFSET \
	Choi_Source_Choi_LogoGameMode_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Choi_Source_Choi_LogoGameMode_h_14_INCLASS_NO_PURE_DECLS \
	Choi_Source_Choi_LogoGameMode_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHOI_API UClass* StaticClass<class ALogoGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Choi_Source_Choi_LogoGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
