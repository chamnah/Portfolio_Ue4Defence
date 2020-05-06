// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Choi/MonsterCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterCharacter() {}
// Cross Module References
	CHOI_API UClass* Z_Construct_UClass_AMonsterCharacter_NoRegister();
	CHOI_API UClass* Z_Construct_UClass_AMonsterCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Choi();
	CHOI_API UClass* Z_Construct_UClass_AEmptyPointList_NoRegister();
// End Cross Module References
	void AMonsterCharacter::StaticRegisterNativesAMonsterCharacter()
	{
	}
	UClass* Z_Construct_UClass_AMonsterCharacter_NoRegister()
	{
		return AMonsterCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AMonsterCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fTraceMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fTraceMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fWaitMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fWaitMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pPatrolList_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pPatrolList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iPatrolIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_iPatrolIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iHPMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_iHPMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_iHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iArmor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_iArmor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_iAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iGold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_iGold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iExp_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_iExp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_iLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fAttackRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fAttackRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fTraceRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fTraceRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMonsterCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Choi,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MonsterCharacter.h" },
		{ "ModuleRelativePath", "MonsterCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_fTraceMax_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MonsterCharacter" },
		{ "ModuleRelativePath", "MonsterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_fTraceMax = { "fTraceMax", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterCharacter, fTraceMax), METADATA_PARAMS(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_fTraceMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_fTraceMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_fWaitMax_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MonsterCharacter" },
		{ "ModuleRelativePath", "MonsterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_fWaitMax = { "fWaitMax", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterCharacter, fWaitMax), METADATA_PARAMS(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_fWaitMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_fWaitMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_pPatrolList_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MonsterCharacter" },
		{ "ModuleRelativePath", "MonsterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_pPatrolList = { "pPatrolList", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterCharacter, pPatrolList), Z_Construct_UClass_AEmptyPointList_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_pPatrolList_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_pPatrolList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iPatrolIndex_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "MonsterCharacter" },
		{ "ModuleRelativePath", "MonsterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iPatrolIndex = { "iPatrolIndex", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterCharacter, iPatrolIndex), METADATA_PARAMS(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iPatrolIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iPatrolIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iHPMax_MetaData[] = {
		{ "Category", "MonsterCharacter" },
		{ "ModuleRelativePath", "MonsterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iHPMax = { "iHPMax", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterCharacter, iHPMax), METADATA_PARAMS(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iHPMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iHPMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iHP_MetaData[] = {
		{ "Category", "MonsterCharacter" },
		{ "ModuleRelativePath", "MonsterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iHP = { "iHP", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterCharacter, iHP), METADATA_PARAMS(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iHP_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iArmor_MetaData[] = {
		{ "Category", "MonsterCharacter" },
		{ "ModuleRelativePath", "MonsterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iArmor = { "iArmor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterCharacter, iArmor), METADATA_PARAMS(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iArmor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iArmor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iAttack_MetaData[] = {
		{ "Category", "MonsterCharacter" },
		{ "ModuleRelativePath", "MonsterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iAttack = { "iAttack", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterCharacter, iAttack), METADATA_PARAMS(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iAttack_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iGold_MetaData[] = {
		{ "Category", "MonsterCharacter" },
		{ "ModuleRelativePath", "MonsterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iGold = { "iGold", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterCharacter, iGold), METADATA_PARAMS(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iGold_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iGold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iExp_MetaData[] = {
		{ "Category", "MonsterCharacter" },
		{ "ModuleRelativePath", "MonsterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iExp = { "iExp", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterCharacter, iExp), METADATA_PARAMS(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iExp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iExp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iLevel_MetaData[] = {
		{ "Category", "MonsterCharacter" },
		{ "ModuleRelativePath", "MonsterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iLevel = { "iLevel", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterCharacter, iLevel), METADATA_PARAMS(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iLevel_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_fAttackRange_MetaData[] = {
		{ "Category", "MonsterCharacter" },
		{ "ModuleRelativePath", "MonsterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_fAttackRange = { "fAttackRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterCharacter, fAttackRange), METADATA_PARAMS(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_fAttackRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_fAttackRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_fTraceRange_MetaData[] = {
		{ "Category", "MonsterCharacter" },
		{ "ModuleRelativePath", "MonsterCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_fTraceRange = { "fTraceRange", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AMonsterCharacter, fTraceRange), METADATA_PARAMS(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_fTraceRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_fTraceRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMonsterCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_fTraceMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_fWaitMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_pPatrolList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iPatrolIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iHPMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iArmor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iGold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iExp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_iLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_fAttackRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMonsterCharacter_Statics::NewProp_fTraceRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMonsterCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMonsterCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMonsterCharacter_Statics::ClassParams = {
		&AMonsterCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AMonsterCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AMonsterCharacter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AMonsterCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMonsterCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMonsterCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMonsterCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMonsterCharacter, 3554786754);
	template<> CHOI_API UClass* StaticClass<AMonsterCharacter>()
	{
		return AMonsterCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMonsterCharacter(Z_Construct_UClass_AMonsterCharacter, &AMonsterCharacter::StaticClass, TEXT("/Script/Choi"), TEXT("AMonsterCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMonsterCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
