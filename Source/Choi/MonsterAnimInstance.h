// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Global.h"
#include "Animation/AnimInstance.h"
#include "MonsterAnimInstance.generated.h"

/**
 * 
 */
UCLASS()
class CHOI_API UMonsterAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
public:
	virtual void NativeUpdateAnimation(float DeltaSeconds);
public:
	UFUNCTION()
	void AnimNotify_HitEnd();
	UFUNCTION()
	void AnimNotify_DeathEnd();

public:
	UPROPERTY(BlueprintReadOnly)
	int32 iAnimType;
};
