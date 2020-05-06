// Fill out your copyright notice in the Description page of Project Settings.


#include "BTDecorator_InAttackRange.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "DrawDebugHelpers.h"

UBTDecorator_InAttackRange::UBTDecorator_InAttackRange()
{
	NodeName = TEXT("AttackRange");
}

bool UBTDecorator_InAttackRange::CalculateRawConditionValue(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory) const
{
	bool bResult = Super::CalculateRawConditionValue(OwnerComp, NodeMemory);
	APawn* pSelf = OwnerComp.GetAIOwner()->GetPawn();

	AActor* pTarget = Cast<AActor>(OwnerComp.GetAIOwner()->GetBlackboardComponent()->GetValueAsObject(TEXT("Target")));
	if (!pTarget)
		return false;
	FVector vStart = pSelf->GetActorLocation();
	FVector vEnd = pTarget->GetActorLocation();
	vStart.Z = 0.f;
	vEnd.Z = 0.f;

	float fDist = FVector::Distance(vStart,vEnd);
	float fRange = OwnerComp.GetBlackboardComponent()->GetValueAsFloat(TEXT("AttackRange"));

	return fDist <= fRange;
}