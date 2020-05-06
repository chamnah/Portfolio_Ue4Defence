// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Choi/MinionCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMinionCharacter() {}
// Cross Module References
	CHOI_API UClass* Z_Construct_UClass_AMinionCharacter_NoRegister();
	CHOI_API UClass* Z_Construct_UClass_AMinionCharacter();
	CHOI_API UClass* Z_Construct_UClass_AMonsterCharacter();
	UPackage* Z_Construct_UPackage__Script_Choi();
// End Cross Module References
	void AMinionCharacter::StaticRegisterNativesAMinionCharacter()
	{
	}
	UClass* Z_Construct_UClass_AMinionCharacter_NoRegister()
	{
		return AMinionCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMinionCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMinionCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMonsterCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Choi,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMinionCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MinionCharacter.h" },
		{ "ModuleRelativePath", "MinionCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMinionCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMinionCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMinionCharacter_Statics::ClassParams = {
		&AMinionCharacter::StaticClass,
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
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMinionCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMinionCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMinionCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMinionCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMinionCharacter, 622784748);
	template<> CHOI_API UClass* StaticClass<AMinionCharacter>()
	{
		return AMinionCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMinionCharacter(Z_Construct_UClass_AMinionCharacter, &AMinionCharacter::StaticClass, TEXT("/Script/Choi"), TEXT("AMinionCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMinionCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
