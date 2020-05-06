// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Choi/DragWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDragWidget() {}
// Cross Module References
	CHOI_API UClass* Z_Construct_UClass_UDragWidget_NoRegister();
	CHOI_API UClass* Z_Construct_UClass_UDragWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Choi();
	CHOI_API UFunction* Z_Construct_UFunction_UDragWidget_MouseUp();
// End Cross Module References
	void UDragWidget::StaticRegisterNativesUDragWidget()
	{
		UClass* Class = UDragWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MouseUp", &UDragWidget::execMouseUp },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDragWidget_MouseUp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDragWidget_MouseUp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "DragWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDragWidget_MouseUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDragWidget, nullptr, "MouseUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDragWidget_MouseUp_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UDragWidget_MouseUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDragWidget_MouseUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDragWidget_MouseUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDragWidget_NoRegister()
	{
		return UDragWidget::StaticClass();
	}
	struct Z_Construct_UClass_UDragWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDragWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Choi,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDragWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDragWidget_MouseUp, "MouseUp" }, // 3820989994
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDragWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DragWidget.h" },
		{ "ModuleRelativePath", "DragWidget.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDragWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDragWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDragWidget_Statics::ClassParams = {
		&UDragWidget::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDragWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UDragWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDragWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDragWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDragWidget, 2808037287);
	template<> CHOI_API UClass* StaticClass<UDragWidget>()
	{
		return UDragWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDragWidget(Z_Construct_UClass_UDragWidget, &UDragWidget::StaticClass, TEXT("/Script/Choi"), TEXT("UDragWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDragWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
