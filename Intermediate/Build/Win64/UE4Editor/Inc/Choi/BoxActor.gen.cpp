// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Choi/BoxActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBoxActor() {}
// Cross Module References
	CHOI_API UClass* Z_Construct_UClass_ABoxActor_NoRegister();
	CHOI_API UClass* Z_Construct_UClass_ABoxActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Choi();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABoxActor::StaticRegisterNativesABoxActor()
	{
	}
	UClass* Z_Construct_UClass_ABoxActor_NoRegister()
	{
		return ABoxActor::StaticClass();
	}
	struct Z_Construct_UClass_ABoxActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABoxActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Choi,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BoxActor.h" },
		{ "ModuleRelativePath", "BoxActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABoxActor_Statics::NewProp_m_pMesh_MetaData[] = {
		{ "Category", "BoxActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BoxActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABoxActor_Statics::NewProp_m_pMesh = { "m_pMesh", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABoxActor, m_pMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABoxActor_Statics::NewProp_m_pMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABoxActor_Statics::NewProp_m_pMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABoxActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABoxActor_Statics::NewProp_m_pMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABoxActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABoxActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABoxActor_Statics::ClassParams = {
		&ABoxActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABoxActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ABoxActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABoxActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABoxActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABoxActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABoxActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABoxActor, 2448560792);
	template<> CHOI_API UClass* StaticClass<ABoxActor>()
	{
		return ABoxActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABoxActor(Z_Construct_UClass_ABoxActor, &ABoxActor::StaticClass, TEXT("/Script/Choi"), TEXT("ABoxActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABoxActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
