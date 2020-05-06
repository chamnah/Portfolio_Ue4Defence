// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Choi/LogoGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLogoGameMode() {}
// Cross Module References
	CHOI_API UClass* Z_Construct_UClass_ALogoGameMode_NoRegister();
	CHOI_API UClass* Z_Construct_UClass_ALogoGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Choi();
// End Cross Module References
	void ALogoGameMode::StaticRegisterNativesALogoGameMode()
	{
	}
	UClass* Z_Construct_UClass_ALogoGameMode_NoRegister()
	{
		return ALogoGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALogoGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALogoGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Choi,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALogoGameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "LogoGameMode.h" },
		{ "ModuleRelativePath", "LogoGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALogoGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALogoGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALogoGameMode_Statics::ClassParams = {
		&ALogoGameMode::StaticClass,
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
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ALogoGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALogoGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALogoGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALogoGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALogoGameMode, 2976793574);
	template<> CHOI_API UClass* StaticClass<ALogoGameMode>()
	{
		return ALogoGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALogoGameMode(Z_Construct_UClass_ALogoGameMode, &ALogoGameMode::StaticClass, TEXT("/Script/Choi"), TEXT("ALogoGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALogoGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
