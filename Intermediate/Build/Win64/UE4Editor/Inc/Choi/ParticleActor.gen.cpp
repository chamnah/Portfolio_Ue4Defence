// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Choi/ParticleActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticleActor() {}
// Cross Module References
	CHOI_API UClass* Z_Construct_UClass_AParticleActor_NoRegister();
	CHOI_API UClass* Z_Construct_UClass_AParticleActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Choi();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	void AParticleActor::StaticRegisterNativesAParticleActor()
	{
	}
	UClass* Z_Construct_UClass_AParticleActor_NoRegister()
	{
		return AParticleActor::StaticClass();
	}
	struct Z_Construct_UClass_AParticleActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pParticle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AParticleActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Choi,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticleActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ParticleActor.h" },
		{ "ModuleRelativePath", "ParticleActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticleActor_Statics::NewProp_pParticle_MetaData[] = {
		{ "Category", "ParticleActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ParticleActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParticleActor_Statics::NewProp_pParticle = { "pParticle", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParticleActor, pParticle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AParticleActor_Statics::NewProp_pParticle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticleActor_Statics::NewProp_pParticle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AParticleActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticleActor_Statics::NewProp_pParticle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AParticleActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParticleActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AParticleActor_Statics::ClassParams = {
		&AParticleActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AParticleActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AParticleActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AParticleActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AParticleActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AParticleActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AParticleActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AParticleActor, 4198048138);
	template<> CHOI_API UClass* StaticClass<AParticleActor>()
	{
		return AParticleActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AParticleActor(Z_Construct_UClass_AParticleActor, &AParticleActor::StaticClass, TEXT("/Script/Choi"), TEXT("AParticleActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParticleActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
