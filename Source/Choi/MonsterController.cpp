// Fill out your copyright notice in the Description page of Project Settings.
#include "MonsterController.h"
#include "BehaviorTree/BlackboardData.h"
#include "BehaviorTree/BehaviorTree.h"
#include "BehaviorTree/BlackboardComponent.h"

FName AMonsterController::strStartPos(TEXT("StartPos")); 
FName AMonsterController::strPatrollPos(TEXT("PatrollPos"));
AMonsterController::AMonsterController()
{
	ConstructorHelpers::FObjectFinder<UBehaviorTree> TreeAsset(TEXT("BehaviorTree'/Game/AI/BTMinion.BTMinion'"));
	if (TreeAsset.Succeeded())
		pBTAsset = TreeAsset.Object;

	ConstructorHelpers::FObjectFinder<UBlackboardData> DataAsset(TEXT("BlackboardData'/Game/AI/BBMonster.BBMonster'"));
	if (DataAsset.Succeeded())
	{
		pBBAsset = DataAsset.Object;
		LOG(Warning, TEXT("Tree Failed!!"));
	}
}

void AMonsterController::SetBlackboardDataAsVector(const FName & Key, const FVector & data)
{
	Blackboard->SetValueAsVector(Key, data);
}

void AMonsterController::SetBlackboardDataAsFloat(const FName & Key, const float & data)
{
	Blackboard->SetValueAsFloat(Key, data);
}

void AMonsterController::SetBlackboardDataAsObject(const FName & Key, AActor*  data)
{
	Blackboard->SetValueAsObject(Key,data);
}

int32 AMonsterController::GetBlackboardDataAsInt32(const FName & Key)
{
	return Blackboard->GetValueAsInt(Key);
}

float AMonsterController::GetBlackboardDataAsFloat(const FName & Key)
{
	return Blackboard->GetValueAsFloat(Key);
}

FVector AMonsterController::GetBlackboardDataAsVector(const FName & Key)
{
	return Blackboard->GetValueAsVector(Key);
}


void AMonsterController::OnPossess(APawn * _pPawn)
{
	Super::OnPossess(_pPawn);

	if (UseBlackboard(pBBAsset, Blackboard))
	{
		Blackboard->SetValueAsVector(strStartPos, _pPawn->GetActorLocation());
		Blackboard->SetValueAsBool(TEXT("Attack"), true);
		if (!RunBehaviorTree(pBTAsset))
			LOG(Warning,TEXT("Tree Failed!!"));
	}
}

void AMonsterController::OnUnPossess()
{
	Super::OnUnPossess();
}
