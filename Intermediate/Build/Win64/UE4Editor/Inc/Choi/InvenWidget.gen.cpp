// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Choi/InvenWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInvenWidget() {}
// Cross Module References
	CHOI_API UClass* Z_Construct_UClass_UInvenWidget_NoRegister();
	CHOI_API UClass* Z_Construct_UClass_UInvenWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Choi();
	CHOI_API UFunction* Z_Construct_UFunction_UInvenWidget_CloseButton();
// End Cross Module References
	void UInvenWidget::StaticRegisterNativesUInvenWidget()
	{
		UClass* Class = UInvenWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CloseButton", &UInvenWidget::execCloseButton },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInvenWidget_CloseButton_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInvenWidget_CloseButton_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "InvenWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInvenWidget_CloseButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInvenWidget, nullptr, "CloseButton", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInvenWidget_CloseButton_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInvenWidget_CloseButton_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInvenWidget_CloseButton()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInvenWidget_CloseButton_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInvenWidget_NoRegister()
	{
		return UInvenWidget::StaticClass();
	}
	struct Z_Construct_UClass_UInvenWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInvenWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Choi,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInvenWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInvenWidget_CloseButton, "CloseButton" }, // 3899445497
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInvenWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "InvenWidget.h" },
		{ "ModuleRelativePath", "InvenWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInvenWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInvenWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInvenWidget_Statics::ClassParams = {
		&UInvenWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UInvenWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInvenWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInvenWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInvenWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInvenWidget, 2843524595);
	template<> CHOI_API UClass* StaticClass<UInvenWidget>()
	{
		return UInvenWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInvenWidget(Z_Construct_UClass_UInvenWidget, &UInvenWidget::StaticClass, TEXT("/Script/Choi"), TEXT("UInvenWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInvenWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
