// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterAnimInstance.h"
#include "MonsterCharacter.h"

void UMonsterAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);

	if (iAnimType == MAT_DEATH)
		return;

	AMonsterCharacter* pMonster = Cast<AMonsterCharacter>(TryGetPawnOwner());

	if (!pMonster)
		return;

	UCharacterMovementComponent* pMovement = pMonster->GetCharacterMovement();

	if (!pMovement)
		return;

	if (pMovement->IsMovingOnGround())
	{
		if (iAnimType > MAT_RUN)
			return;
		if (pMovement->Velocity.Size() > 0.f)
			iAnimType = MAT_RUN;
		else
			iAnimType = MAT_IDLE;
	}
}

void UMonsterAnimInstance::AnimNotify_HitEnd()
{
	iAnimType = MAT_IDLE;
}

void UMonsterAnimInstance::AnimNotify_DeathEnd()
{
	AMonsterCharacter* pMonster = Cast<AMonsterCharacter>(TryGetPawnOwner());
	//pMonster->Destroy();
}