// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_SelectPatrolPos.h"
#include "MonsterController.h"
#include "MonsterCharacter.h"

void UBTTask_SelectPatrolPos::OnGameplayTaskActivated(UGameplayTask& Task)
{

}

EBTNodeResult::Type UBTTask_SelectPatrolPos::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	EBTNodeResult::Type Result =  Super::ExecuteTask(OwnerComp, NodeMemory);
	
	AMonsterController* pController = Cast<AMonsterController>(OwnerComp.GetAIOwner());

	AMonsterCharacter* pMonster = Cast<AMonsterCharacter>(pController->GetPawn());

	if (pMonster)
	{
		pController->SetBlackboardDataAsVector(TEXT("PatrollPos"),pMonster->GetPatrolNextPos());
		return EBTNodeResult::Type::Succeeded;
	}

	return EBTNodeResult::Type::Failed;
}

UBTTask_SelectPatrolPos::UBTTask_SelectPatrolPos()
{
}