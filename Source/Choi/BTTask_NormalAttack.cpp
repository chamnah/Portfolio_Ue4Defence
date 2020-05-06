// Fill out your copyright notice in the Description page of Project Settings.


#include "BTTask_NormalAttack.h"
#include "MonsterController.h"

UBTTask_NormalAttack::UBTTask_NormalAttack()
{

}

EBTNodeResult::Type UBTTask_NormalAttack::ExecuteTask(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory)
{
	Super::ExecuteTask(OwnerComp, NodeMemory);
	return EBTNodeResult::Type();
}

void UBTTask_NormalAttack::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	ACharacter* pSelf = Cast<ACharacter>(OwnerComp.GetAIOwner()->GetPawn());

	pSelf->GetMesh()->GetAnimInstance();
}