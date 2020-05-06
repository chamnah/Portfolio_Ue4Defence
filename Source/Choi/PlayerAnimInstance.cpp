// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerAnimInstance.h"
#include "PlayerCharacter.h"

UPlayerAnimInstance::UPlayerAnimInstance()
{
	m_iAnimType = IDLE;
	m_iMoveDir = MD_NONE;
	m_bLand = true;
	m_bAttack = false;
	bAnimReturn = false;
	bJumpAttack = false;
	bComboAttack = false;
}

void UPlayerAnimInstance::NativeUpdateAnimation(float DeltaSeconds)
{
	Super::NativeUpdateAnimation(DeltaSeconds);
	if (m_iAnimType == DEATH)
		return;
	
	APlayerCharacter* Player = Cast<APlayerCharacter>(TryGetPawnOwner());

	if (Player)
	{
		UCharacterMovementComponent* Movement = Player->GetCharacterMovement();

		if (Movement)
		{
			if (Movement->IsMovingOnGround())
			{
				m_bLand = true;
				if (m_iAnimType < PAT_ATTACK && m_iAnimType != JUMP)
				{
					if (Movement->Velocity.Size() > 0.f)
					{
						m_iAnimType = RUN;
					}
					else
					{
						m_iAnimType = IDLE;
					}
				}
			}
			else
			{
				m_bLand = false;
			}
		}
	}


}

void UPlayerAnimInstance::Jump()
{
	m_iAnimType = JUMP;
}

void UPlayerAnimInstance::Attack()
{
	if (!(m_bLand || bJumpAttack))
		return;

	if (bComboAttack)
	{
		PrintViewport(2.f, FString::FromInt(m_iAnimType), VT_NORMAL);
		switch (m_iAnimType)
		{
		case PAT_ATTACK:
			m_iAnimType = PAT_ATTACK2;
			break;
		case PAT_ATTACK2:
			m_iAnimType = PAT_ATTACK3;
			break;
		case PAT_ATTACK3:
			m_iAnimType = PAT_ATTACK4;
			break;
		default:
			m_iAnimType = PAT_ATTACK;
			break;
		}

		bComboAttack = false;
	}
	else if(m_iAnimType < PAT_ATTACK)
		m_iAnimType = PAT_ATTACK;

	m_bAttack = true;
	bJumpAttack = false;
}

void UPlayerAnimInstance::Death()
{
	m_iAnimType = DEATH;
}

void UPlayerAnimInstance::AnimNotify_AttackStart()
{
	if (m_bAttack)
		m_bAttack = false;
}

void UPlayerAnimInstance::AnimNotify_Attack2Start()
{
	bComboAttack = true;
}

void UPlayerAnimInstance::AnimNotify_AttackEnd()
{
	if(bComboAttack)
		m_iAnimType = ATTACK_END;
	bComboAttack = false;
	m_bAttack = false;
}

void UPlayerAnimInstance::AnimNotify_ComboEnd()
{
	m_iAnimType = IDLE;
	bComboAttack = false;
	m_bAttack = false;
}

void UPlayerAnimInstance::AnimNotify_JumpApex()
{
	bJumpAttack = true;
	m_bAttack = false;
}

void UPlayerAnimInstance::AnimNotify_Land()
{
	bJumpAttack = false;
	m_bAttack = false;
	m_iAnimType = RUN;
}

void UPlayerAnimInstance::AnimNotify_AttackCollision()
{
	APlayerCharacter* Player = Cast<APlayerCharacter>(TryGetPawnOwner());
	if (Player)
		Player->Attack();
}

void UPlayerAnimInstance::AnimNotify_Death()
{
	APlayerCharacter* Player = Cast<APlayerCharacter>(TryGetPawnOwner());
	if (Player)
		Player->SetLifeSpan(1.f);


}