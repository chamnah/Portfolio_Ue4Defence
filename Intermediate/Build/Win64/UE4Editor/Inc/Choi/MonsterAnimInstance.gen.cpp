// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Choi/MonsterAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMonsterAnimInstance() {}
// Cross Module References
	CHOI_API UClass* Z_Construct_UClass_UMonsterAnimInstance_NoRegister();
	CHOI_API UClass* Z_Construct_UClass_UMonsterAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
	UPackage* Z_Construct_UPackage__Script_Choi();
	CHOI_API UFunction* Z_Construct_UFunction_UMonsterAnimInstance_AnimNotify_DeathEnd();
	CHOI_API UFunction* Z_Construct_UFunction_UMonsterAnimInstance_AnimNotify_HitEnd();
// End Cross Module References
	void UMonsterAnimInstance::StaticRegisterNativesUMonsterAnimInstance()
	{
		UClass* Class = UMonsterAnimInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AnimNotify_DeathEnd", &UMonsterAnimInstance::execAnimNotify_DeathEnd },
			{ "AnimNotify_HitEnd", &UMonsterAnimInstance::execAnimNotify_HitEnd },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMonsterAnimInstance_AnimNotify_DeathEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMonsterAnimInstance_AnimNotify_DeathEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MonsterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMonsterAnimInstance_AnimNotify_DeathEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMonsterAnimInstance, nullptr, "AnimNotify_DeathEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMonsterAnimInstance_AnimNotify_DeathEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMonsterAnimInstance_AnimNotify_DeathEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMonsterAnimInstance_AnimNotify_DeathEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMonsterAnimInstance_AnimNotify_DeathEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMonsterAnimInstance_AnimNotify_HitEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMonsterAnimInstance_AnimNotify_HitEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MonsterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMonsterAnimInstance_AnimNotify_HitEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMonsterAnimInstance, nullptr, "AnimNotify_HitEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMonsterAnimInstance_AnimNotify_HitEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMonsterAnimInstance_AnimNotify_HitEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMonsterAnimInstance_AnimNotify_HitEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMonsterAnimInstance_AnimNotify_HitEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMonsterAnimInstance_NoRegister()
	{
		return UMonsterAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMonsterAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_iAnimType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_iAnimType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMonsterAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Choi,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMonsterAnimInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMonsterAnimInstance_AnimNotify_DeathEnd, "AnimNotify_DeathEnd" }, // 3694729985
		{ &Z_Construct_UFunction_UMonsterAnimInstance_AnimNotify_HitEnd, "AnimNotify_HitEnd" }, // 1762689767
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonsterAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "MonsterAnimInstance.h" },
		{ "ModuleRelativePath", "MonsterAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMonsterAnimInstance_Statics::NewProp_iAnimType_MetaData[] = {
		{ "Category", "MonsterAnimInstance" },
		{ "ModuleRelativePath", "MonsterAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMonsterAnimInstance_Statics::NewProp_iAnimType = { "iAnimType", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMonsterAnimInstance, iAnimType), METADATA_PARAMS(Z_Construct_UClass_UMonsterAnimInstance_Statics::NewProp_iAnimType_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMonsterAnimInstance_Statics::NewProp_iAnimType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMonsterAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMonsterAnimInstance_Statics::NewProp_iAnimType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMonsterAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMonsterAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMonsterAnimInstance_Statics::ClassParams = {
		&UMonsterAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMonsterAnimInstance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UMonsterAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMonsterAnimInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMonsterAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMonsterAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMonsterAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMonsterAnimInstance, 384948210);
	template<> CHOI_API UClass* StaticClass<UMonsterAnimInstance>()
	{
		return UMonsterAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMonsterAnimInstance(Z_Construct_UClass_UMonsterAnimInstance, &UMonsterAnimInstance::StaticClass, TEXT("/Script/Choi"), TEXT("UMonsterAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMonsterAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
