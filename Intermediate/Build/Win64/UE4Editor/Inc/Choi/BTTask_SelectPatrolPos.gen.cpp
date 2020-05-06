// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Choi/BTTask_SelectPatrolPos.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_SelectPatrolPos() {}
// Cross Module References
	CHOI_API UClass* Z_Construct_UClass_UBTTask_SelectPatrolPos_NoRegister();
	CHOI_API UClass* Z_Construct_UClass_UBTTask_SelectPatrolPos();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_Choi();
// End Cross Module References
	void UBTTask_SelectPatrolPos::StaticRegisterNativesUBTTask_SelectPatrolPos()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_SelectPatrolPos_NoRegister()
	{
		return UBTTask_SelectPatrolPos::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_SelectPatrolPos_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_SelectPatrolPos_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
		(UObject* (*)())Z_Construct_UPackage__Script_Choi,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_SelectPatrolPos_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTTask_SelectPatrolPos.h" },
		{ "ModuleRelativePath", "BTTask_SelectPatrolPos.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_SelectPatrolPos_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_SelectPatrolPos>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_SelectPatrolPos_Statics::ClassParams = {
		&UBTTask_SelectPatrolPos::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_SelectPatrolPos_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTTask_SelectPatrolPos_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_SelectPatrolPos()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_SelectPatrolPos_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_SelectPatrolPos, 1833303583);
	template<> CHOI_API UClass* StaticClass<UBTTask_SelectPatrolPos>()
	{
		return UBTTask_SelectPatrolPos::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_SelectPatrolPos(Z_Construct_UClass_UBTTask_SelectPatrolPos, &UBTTask_SelectPatrolPos::StaticClass, TEXT("/Script/Choi"), TEXT("UBTTask_SelectPatrolPos"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_SelectPatrolPos);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
