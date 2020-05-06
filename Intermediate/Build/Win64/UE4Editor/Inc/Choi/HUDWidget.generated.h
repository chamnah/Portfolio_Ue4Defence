// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHOI_HUDWidget_generated_h
#error "HUDWidget.generated.h already included, missing '#pragma once' in HUDWidget.h"
#endif
#define CHOI_HUDWidget_generated_h

#define Choi_Source_Choi_HUDWidget_h_15_RPC_WRAPPERS
#define Choi_Source_Choi_HUDWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Choi_Source_Choi_HUDWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHUDWidget(); \
	friend struct Z_Construct_UClass_UHUDWidget_Statics; \
public: \
	DECLARE_CLASS(UHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Choi"), NO_API) \
	DECLARE_SERIALIZER(UHUDWidget)


#define Choi_Source_Choi_HUDWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHUDWidget(); \
	friend struct Z_Construct_UClass_UHUDWidget_Statics; \
public: \
	DECLARE_CLASS(UHUDWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Choi"), NO_API) \
	DECLARE_SERIALIZER(UHUDWidget)


#define Choi_Source_Choi_HUDWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHUDWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHUDWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHUDWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHUDWidget(UHUDWidget&&); \
	NO_API UHUDWidget(const UHUDWidget&); \
public:


#define Choi_Source_Choi_HUDWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHUDWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHUDWidget(UHUDWidget&&); \
	NO_API UHUDWidget(const UHUDWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHUDWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHUDWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHUDWidget)


#define Choi_Source_Choi_HUDWidget_h_15_PRIVATE_PROPERTY_OFFSET
#define Choi_Source_Choi_HUDWidget_h_12_PROLOG
#define Choi_Source_Choi_HUDWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Choi_Source_Choi_HUDWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Choi_Source_Choi_HUDWidget_h_15_RPC_WRAPPERS \
	Choi_Source_Choi_HUDWidget_h_15_INCLASS \
	Choi_Source_Choi_HUDWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Choi_Source_Choi_HUDWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Choi_Source_Choi_HUDWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Choi_Source_Choi_HUDWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Choi_Source_Choi_HUDWidget_h_15_INCLASS_NO_PURE_DECLS \
	Choi_Source_Choi_HUDWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHOI_API UClass* StaticClass<class UHUDWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Choi_Source_Choi_HUDWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
