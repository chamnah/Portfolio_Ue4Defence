// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Choi/MonsterController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterController() {}
// Cross Module References
	CHOI_API UClass* Z_Construct_UClass_AMonsterController_NoRegister();
	CHOI_API UClass* Z_Construct_UClass_AMonsterController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Choi();
// End Cross Module References
	void AMonsterController::StaticRegisterNativesAMonsterController()
	{
	}
	UClass* Z_Construct_UClass_AMonsterController_NoRegister()
	{
		return AMonsterController::StaticClass();
	}
	struct Z_Construct_UClass_AMonsterController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonsterController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Choi,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterController_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MonsterController.h" },
		{ "ModuleRelativePath", "MonsterController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonsterController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonsterController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMonsterController_Statics::ClassParams = {
		&AMonsterController::StaticClass,
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
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMonsterController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMonsterController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonsterController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMonsterController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMonsterController, 2797171861);
	template<> CHOI_API UClass* StaticClass<AMonsterController>()
	{
		return AMonsterController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMonsterController(Z_Construct_UClass_AMonsterController, &AMonsterController::StaticClass, TEXT("/Script/Choi"), TEXT("AMonsterController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonsterController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
