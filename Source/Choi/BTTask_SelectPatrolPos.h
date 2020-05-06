// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Global.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SelectPatrolPos.generated.h"

/**
 * 
 */
UCLASS()
class CHOI_API UBTTask_SelectPatrolPos : public UBTTaskNode
{
	GENERATED_BODY()
	

public:
	UBTTask_SelectPatrolPos();
	virtual void OnGameplayTaskActivated(UGameplayTask& Task);
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory);
};