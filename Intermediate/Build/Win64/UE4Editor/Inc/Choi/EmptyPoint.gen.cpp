// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Choi/EmptyPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmptyPoint() {}
// Cross Module References
	CHOI_API UClass* Z_Construct_UClass_AEmptyPoint_NoRegister();
	CHOI_API UClass* Z_Construct_UClass_AEmptyPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Choi();
// End Cross Module References
	void AEmptyPoint::StaticRegisterNativesAEmptyPoint()
	{
	}
	UClass* Z_Construct_UClass_AEmptyPoint_NoRegister()
	{
		return AEmptyPoint::StaticClass();
	}
	struct Z_Construct_UClass_AEmptyPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEmptyPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Choi,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEmptyPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EmptyPoint.h" },
		{ "ModuleRelativePath", "EmptyPoint.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEmptyPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEmptyPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEmptyPoint_Statics::ClassParams = {
		&AEmptyPoint::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEmptyPoint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEmptyPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEmptyPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEmptyPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEmptyPoint, 2973708479);
	template<> CHOI_API UClass* StaticClass<AEmptyPoint>()
	{
		return AEmptyPoint::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEmptyPoint(Z_Construct_UClass_AEmptyPoint, &AEmptyPoint::StaticClass, TEXT("/Script/Choi"), TEXT("AEmptyPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEmptyPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
