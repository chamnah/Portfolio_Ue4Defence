// Fill out your copyright notice in the Description page of Project Settings.


#include "BTService_Detect.h"
#include "MonsterController.h"
#include "MonsterCharacter.h"
#include "DrawDebugHelpers.h"

UBTService_Detect::UBTService_Detect()
{
	NodeName = TEXT("Detect");
	Interval = 1.f;
}

void UBTService_Detect::TickNode(UBehaviorTreeComponent & OwnerComp, uint8 * NodeMemory, float DeltaSeconds)
{
	Super::TickNode(OwnerComp, NodeMemory, DeltaSeconds);
	AMonsterController* pMContoller = Cast<AMonsterController>(OwnerComp.GetAIOwner());

	AMonsterCharacter* pMonster =  Cast<AMonsterCharacter>(pMContoller->GetPawn());
	if (!pMonster)
		return;

	TArray<FOverlapResult> arrResult;
	FCollisionQueryParams Params(NAME_None,false,pMonster);

	bool bResult = GetWorld()->OverlapMultiByChannel(arrResult,pMonster->GetActorLocation(),FQuat::Identity, ECC_GameTraceChannel5,FCollisionShape::MakeSphere(pMonster->GetTraceRange()), Params);
	
	FColor Color = bResult ? FColor::Red : FColor::Green;
	DrawDebugSphere(GetWorld(), pMonster->GetActorLocation(), pMonster->GetTraceRange(),10, Color,false,1.f);
	
	if (bResult)
	{
		pMContoller->SetBlackboardDataAsObject(TEXT("Target"), arrResult[0].GetActor());
		PrintViewport(2.f, arrResult[0].GetActor()->GetName(),VIEWPORT_MSG_TYPE::VT_NORMAL);
	}
	else
		pMContoller->SetBlackboardDataAsObject(TEXT("Target"), nullptr);
}