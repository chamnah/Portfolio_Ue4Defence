// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Choi/InvenSlotWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInvenSlotWidget() {}
// Cross Module References
	CHOI_API UClass* Z_Construct_UClass_UInvenSlotWidget_NoRegister();
	CHOI_API UClass* Z_Construct_UClass_UInvenSlotWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Choi();
	CHOI_API UFunction* Z_Construct_UFunction_UInvenSlotWidget_MouseEnter();
	CHOI_API UFunction* Z_Construct_UFunction_UInvenSlotWidget_MouseLeave();
	CHOI_API UFunction* Z_Construct_UFunction_UInvenSlotWidget_MouseUp();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	void UInvenSlotWidget::StaticRegisterNativesUInvenSlotWidget()
	{
		UClass* Class = UInvenSlotWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MouseEnter", &UInvenSlotWidget::execMouseEnter },
			{ "MouseLeave", &UInvenSlotWidget::execMouseLeave },
			{ "MouseUp", &UInvenSlotWidget::execMouseUp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInvenSlotWidget_MouseEnter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInvenSlotWidget_MouseEnter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InvenSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInvenSlotWidget_MouseEnter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInvenSlotWidget, nullptr, "MouseEnter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInvenSlotWidget_MouseEnter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInvenSlotWidget_MouseEnter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInvenSlotWidget_MouseEnter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInvenSlotWidget_MouseEnter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInvenSlotWidget_MouseLeave_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInvenSlotWidget_MouseLeave_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InvenSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInvenSlotWidget_MouseLeave_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInvenSlotWidget, nullptr, "MouseLeave", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInvenSlotWidget_MouseLeave_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInvenSlotWidget_MouseLeave_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInvenSlotWidget_MouseLeave()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInvenSlotWidget_MouseLeave_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInvenSlotWidget_MouseUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInvenSlotWidget_MouseUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InvenSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInvenSlotWidget_MouseUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInvenSlotWidget, nullptr, "MouseUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInvenSlotWidget_MouseUp_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInvenSlotWidget_MouseUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInvenSlotWidget_MouseUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInvenSlotWidget_MouseUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInvenSlotWidget_NoRegister()
	{
		return UInvenSlotWidget::StaticClass();
	}
	struct Z_Construct_UClass_UInvenSlotWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pTex_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pTex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInvenSlotWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Choi,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInvenSlotWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInvenSlotWidget_MouseEnter, "MouseEnter" }, // 1756587900
		{ &Z_Construct_UFunction_UInvenSlotWidget_MouseLeave, "MouseLeave" }, // 3286788359
		{ &Z_Construct_UFunction_UInvenSlotWidget_MouseUp, "MouseUp" }, // 520071047
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInvenSlotWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "InvenSlotWidget.h" },
		{ "ModuleRelativePath", "InvenSlotWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInvenSlotWidget_Statics::NewProp_pTex_MetaData[] = {
		{ "ModuleRelativePath", "InvenSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInvenSlotWidget_Statics::NewProp_pTex = { "pTex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInvenSlotWidget, pTex), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInvenSlotWidget_Statics::NewProp_pTex_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInvenSlotWidget_Statics::NewProp_pTex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInvenSlotWidget_Statics::NewProp_pImage_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InvenSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInvenSlotWidget_Statics::NewProp_pImage = { "pImage", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInvenSlotWidget, pImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInvenSlotWidget_Statics::NewProp_pImage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInvenSlotWidget_Statics::NewProp_pImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInvenSlotWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInvenSlotWidget_Statics::NewProp_pTex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInvenSlotWidget_Statics::NewProp_pImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInvenSlotWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInvenSlotWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInvenSlotWidget_Statics::ClassParams = {
		&UInvenSlotWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInvenSlotWidget_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UInvenSlotWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInvenSlotWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInvenSlotWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInvenSlotWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInvenSlotWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInvenSlotWidget, 1225407756);
	template<> CHOI_API UClass* StaticClass<UInvenSlotWidget>()
	{
		return UInvenSlotWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInvenSlotWidget(Z_Construct_UClass_UInvenSlotWidget, &UInvenSlotWidget::StaticClass, TEXT("/Script/Choi"), TEXT("UInvenSlotWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInvenSlotWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
