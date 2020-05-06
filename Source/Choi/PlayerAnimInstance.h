// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Global.h"
#include "Animation/AnimInstance.h"
#include "PlayerAnimInstance.generated.h"

UCLASS()
class CHOI_API UPlayerAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	UPlayerAnimInstance();
	virtual void NativeUpdateAnimation(float DeltaSeconds);

protected:
	UPROPERTY(BlueprintReadOnly,Category = "Animation")
	int32   m_iAnimType;
	UPROPERTY(BlueprintReadOnly, Category = "Animation")
	int32   m_iMoveDir;

	UPROPERTY(BlueprintReadOnly, Category = "Animation")
	bool    m_bLand;

	UPROPERTY(BlueprintReadOnly, Category = "Animation")
	bool    m_bAttack;

public:
	void SetMoveDir(MOVE_DIR _eDir) { m_iMoveDir = _eDir; }
	void Jump();
	void Attack();
	void Death();

public:
	UFUNCTION()
	void AnimNotify_AttackStart();
	UFUNCTION()
	void AnimNotify_Attack2Start();
	UFUNCTION()
	void AnimNotify_AttackEnd();
	UFUNCTION()
	void AnimNotify_ComboEnd();
	UFUNCTION()
	void AnimNotify_JumpApex();
	UFUNCTION()
	void AnimNotify_Land();
	UFUNCTION()
	void AnimNotify_AttackCollision();
	UFUNCTION()
	void AnimNotify_Death();

public:
	int32 GetAnimType() { return m_iAnimType; }

private:
	bool bAnimReturn;
	bool bJumpAttack;
	bool bComboAttack;
};