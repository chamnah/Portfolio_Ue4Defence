// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHOI_InvenWidget_generated_h
#error "InvenWidget.generated.h already included, missing '#pragma once' in InvenWidget.h"
#endif
#define CHOI_InvenWidget_generated_h

#define Choi_Source_Choi_InvenWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCloseButton) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CloseButton(); \
		P_NATIVE_END; \
	}


#define Choi_Source_Choi_InvenWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCloseButton) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CloseButton(); \
		P_NATIVE_END; \
	}


#define Choi_Source_Choi_InvenWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInvenWidget(); \
	friend struct Z_Construct_UClass_UInvenWidget_Statics; \
public: \
	DECLARE_CLASS(UInvenWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Choi"), NO_API) \
	DECLARE_SERIALIZER(UInvenWidget)


#define Choi_Source_Choi_InvenWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUInvenWidget(); \
	friend struct Z_Construct_UClass_UInvenWidget_Statics; \
public: \
	DECLARE_CLASS(UInvenWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Choi"), NO_API) \
	DECLARE_SERIALIZER(UInvenWidget)


#define Choi_Source_Choi_InvenWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInvenWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInvenWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInvenWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInvenWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInvenWidget(UInvenWidget&&); \
	NO_API UInvenWidget(const UInvenWidget&); \
public:


#define Choi_Source_Choi_InvenWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInvenWidget(UInvenWidget&&); \
	NO_API UInvenWidget(const UInvenWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInvenWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInvenWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInvenWidget)


#define Choi_Source_Choi_InvenWidget_h_15_PRIVATE_PROPERTY_OFFSET
#define Choi_Source_Choi_InvenWidget_h_12_PROLOG
#define Choi_Source_Choi_InvenWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Choi_Source_Choi_InvenWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Choi_Source_Choi_InvenWidget_h_15_RPC_WRAPPERS \
	Choi_Source_Choi_InvenWidget_h_15_INCLASS \
	Choi_Source_Choi_InvenWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Choi_Source_Choi_InvenWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Choi_Source_Choi_InvenWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Choi_Source_Choi_InvenWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Choi_Source_Choi_InvenWidget_h_15_INCLASS_NO_PURE_DECLS \
	Choi_Source_Choi_InvenWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHOI_API UClass* StaticClass<class UInvenWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Choi_Source_Choi_InvenWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
