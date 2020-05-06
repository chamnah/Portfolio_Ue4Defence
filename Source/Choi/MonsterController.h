// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Global.h"
#include "AIController.h"
#include "MonsterController.generated.h"

/**
 * 
 */
UCLASS()
class CHOI_API AMonsterController : public AAIController
{
	GENERATED_BODY()
	
private:
	class UBehaviorTree* pBTAsset;
	class UBlackboardData* pBBAsset;
	static FName strStartPos;
	static FName strPatrollPos;

public:
	AMonsterController();
	void SetBlackboardDataAsVector(const FName& Key, const FVector& data);
	void SetBlackboardDataAsFloat(const FName& Key, const float& data);
	void SetBlackboardDataAsObject(const FName& Key, AActor* data);
	int32 GetBlackboardDataAsInt32(const FName& Key);
	float GetBlackboardDataAsFloat(const FName& Key);
	FVector GetBlackboardDataAsVector(const FName& Key);
protected:
	virtual void OnPossess(APawn* InPawn) override;
	virtual void OnUnPossess() override;
	
};