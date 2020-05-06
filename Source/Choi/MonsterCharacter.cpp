// Fill out your copyright notice in the Description page of Project Settings.


#include "MonsterCharacter.h"
#include "MonsterAnimInstance.h"
#include "EmptyPointList.h"
#include "DrawDebugHelpers.h"

// Sets default values
AMonsterCharacter::AMonsterCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	pPatrolList = nullptr;
	iPatrolIndex = 0;
	fWaitMax = 2.f;
	bWait = false;
	fWaitTime = 0.f;
	fTraceMax = 2.f;
	fTraceTime = 0.f;
}

// Called when the game starts or when spawned
void AMonsterCharacter::BeginPlay()
{
	Super::BeginPlay();
	pAnimInst = Cast<UMonsterAnimInstance>(GetMesh()->GetAnimInstance());

	GetCapsuleComponent()->SetCollisionProfileName(TEXT("Monster"));
}

// Called every frame
void AMonsterCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	return;
	if (!bWait)
	{
		if (pPatrolList)
		{
			FVector vStart = GetActorLocation();
			FVector vEnd = pPatrolList->GetPatrollPos(iPatrolIndex);
			vStart.Z = 0;
			vEnd.Z = 0;
			float fDist = FVector::Distance(vStart, vEnd);

			FVector vDir = vEnd - vStart;
			vDir.Normalize();

			if (fDist <= 5.f)
			{
				bWait = true;
				iPatrolIndex = ++iPatrolIndex % pPatrolList->GetCount();
			}
			else
			{
				/*FVector	vForward = GetActorForwardVector();
				vForward.Z = 0.f;
				vForward.Normalize();

				FVector	vAxis = FVector::CrossProduct(vForward, vDir);

				float	fAngle = FVector::DotProduct(vDir, vForward);
				fAngle = FMath::Acos(fAngle);

				fAngle = FMath::RadiansToDegrees(fAngle);

				if (vAxis.Z < 0.f)
					fAngle *= -1.f;

				FRotator	rot = GetActorRotation();
				rot.Yaw += fAngle;

				SetActorRotation(rot);*/
				SetActorRelativeRotation(vDir.Rotation());
				AddMovementInput(vDir, 1.f);
			}
			
		}
	}
	else
	{
		fWaitTime += DeltaTime;
		if (fWaitTime >= fWaitMax)
		{
			fWaitTime = 0.f;
			bWait = false;
		}
	}

	fTraceTime += DeltaTime;
	if (fTraceTime > fTraceMax)
	{
		fTraceTime = 0.f;
		TArray<FOverlapResult> arrResult;
		FCollisionQueryParams param(NAME_None, false, this);

		bool bResult = GetWorld()->OverlapMultiByChannel(arrResult, GetActorLocation(), FQuat::Identity,
			ECollisionChannel::ECC_GameTraceChannel5, FCollisionShape::MakeSphere(300.f), param);

#if	ENABLE_DRAW_DEBUG
		FVector vCenter = GetActorLocation();
		FColor DrawColor = bResult ? FColor::Red : FColor::Black;
		DrawDebugSphere(GetWorld(), vCenter, 300.f, 10, DrawColor, false, 2.f);
#endif
	}
}

// Called to bind functionality to input
void AMonsterCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

float AMonsterCharacter::TakeDamage(float Damage, FDamageEvent const & DamageEvent, AController * EventInstigator, AActor * DamageCauser)
{
	float fDmg = Super::TakeDamage(Damage,DamageEvent,EventInstigator,DamageCauser);

	iHP -= fDmg;

	if (iHP <= 0)
	{
		pAnimInst->iAnimType = MAT_DEATH;
		GetCapsuleComponent()->SetCollisionProfileName(TEXT("Trigger"));
	}
	else
	{
		PrintViewport(2.f, TEXT("HIT"), VT_WARNING);
		pAnimInst->iAnimType = MAT_HIT;
	}
	return 0.0f;
}

FVector AMonsterCharacter::GetPatrolNextPos()
{
	FVector vPos = pPatrolList->GetPatrollPos(iPatrolIndex);
	iPatrolIndex = ++iPatrolIndex % pPatrolList->GetCount();
	return vPos;
}