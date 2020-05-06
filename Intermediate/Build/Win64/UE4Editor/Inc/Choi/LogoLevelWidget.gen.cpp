// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Choi/LogoLevelWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLogoLevelWidget() {}
// Cross Module References
	CHOI_API UClass* Z_Construct_UClass_ULogoLevelWidget_NoRegister();
	CHOI_API UClass* Z_Construct_UClass_ULogoLevelWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Choi();
// End Cross Module References
	void ULogoLevelWidget::StaticRegisterNativesULogoLevelWidget()
	{
	}
	UClass* Z_Construct_UClass_ULogoLevelWidget_NoRegister()
	{
		return ULogoLevelWidget::StaticClass();
	}
	struct Z_Construct_UClass_ULogoLevelWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULogoLevelWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Choi,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULogoLevelWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LogoLevelWidget.h" },
		{ "ModuleRelativePath", "LogoLevelWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULogoLevelWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULogoLevelWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULogoLevelWidget_Statics::ClassParams = {
		&ULogoLevelWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULogoLevelWidget_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULogoLevelWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULogoLevelWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULogoLevelWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULogoLevelWidget, 3831224518);
	template<> CHOI_API UClass* StaticClass<ULogoLevelWidget>()
	{
		return ULogoLevelWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULogoLevelWidget(Z_Construct_UClass_ULogoLevelWidget, &ULogoLevelWidget::StaticClass, TEXT("/Script/Choi"), TEXT("ULogoLevelWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULogoLevelWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
