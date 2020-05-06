// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CHOI_InvenSlotWidget_generated_h
#error "InvenSlotWidget.generated.h already included, missing '#pragma once' in InvenSlotWidget.h"
#endif
#define CHOI_InvenSlotWidget_generated_h

#define Choi_Source_Choi_InvenSlotWidget_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMouseLeave) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MouseLeave(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMouseEnter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MouseEnter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMouseUp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MouseUp(); \
		P_NATIVE_END; \
	}


#define Choi_Source_Choi_InvenSlotWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMouseLeave) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MouseLeave(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMouseEnter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MouseEnter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMouseUp) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MouseUp(); \
		P_NATIVE_END; \
	}


#define Choi_Source_Choi_InvenSlotWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInvenSlotWidget(); \
	friend struct Z_Construct_UClass_UInvenSlotWidget_Statics; \
public: \
	DECLARE_CLASS(UInvenSlotWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Choi"), NO_API) \
	DECLARE_SERIALIZER(UInvenSlotWidget)


#define Choi_Source_Choi_InvenSlotWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUInvenSlotWidget(); \
	friend struct Z_Construct_UClass_UInvenSlotWidget_Statics; \
public: \
	DECLARE_CLASS(UInvenSlotWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Choi"), NO_API) \
	DECLARE_SERIALIZER(UInvenSlotWidget)


#define Choi_Source_Choi_InvenSlotWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInvenSlotWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInvenSlotWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInvenSlotWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInvenSlotWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInvenSlotWidget(UInvenSlotWidget&&); \
	NO_API UInvenSlotWidget(const UInvenSlotWidget&); \
public:


#define Choi_Source_Choi_InvenSlotWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInvenSlotWidget(UInvenSlotWidget&&); \
	NO_API UInvenSlotWidget(const UInvenSlotWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInvenSlotWidget); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInvenSlotWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInvenSlotWidget)


#define Choi_Source_Choi_InvenSlotWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__pImage() { return STRUCT_OFFSET(UInvenSlotWidget, pImage); } \
	FORCEINLINE static uint32 __PPO__pTex() { return STRUCT_OFFSET(UInvenSlotWidget, pTex); }


#define Choi_Source_Choi_InvenSlotWidget_h_12_PROLOG
#define Choi_Source_Choi_InvenSlotWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Choi_Source_Choi_InvenSlotWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Choi_Source_Choi_InvenSlotWidget_h_15_RPC_WRAPPERS \
	Choi_Source_Choi_InvenSlotWidget_h_15_INCLASS \
	Choi_Source_Choi_InvenSlotWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Choi_Source_Choi_InvenSlotWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Choi_Source_Choi_InvenSlotWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Choi_Source_Choi_InvenSlotWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Choi_Source_Choi_InvenSlotWidget_h_15_INCLASS_NO_PURE_DECLS \
	Choi_Source_Choi_InvenSlotWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CHOI_API UClass* StaticClass<class UInvenSlotWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Choi_Source_Choi_InvenSlotWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
