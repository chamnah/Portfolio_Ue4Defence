// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_TargetMove.generated.h"

/**
 * 
 */
UCLASS()
class CHOI_API UBTTask_TargetMove : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UBTTask_TargetMove();
public:
	virtual void OnGameplayTaskActivated(UGameplayTask& Task) {}
};