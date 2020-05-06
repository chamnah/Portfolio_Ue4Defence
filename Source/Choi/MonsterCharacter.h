// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EmptyPointList.h"
#include "GameFramework/Character.h"
#include "MonsterCharacter.generated.h"

UCLASS()
class CHOI_API AMonsterCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AMonsterCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual float TakeDamage(float Damage, struct FDamageEvent const& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;
protected:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	fTraceRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float	fAttackRange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32	iLevel;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32	iExp;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32	iGold;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32	iAttack;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32	iArmor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32	iHP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int32	iHPMax;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		int32 iPatrolIndex;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
		AEmptyPointList* pPatrolList;
private:
	class UMonsterAnimInstance* pAnimInst;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float fWaitMax;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	float fTraceMax;
	float fTraceTime;
	bool bWait;
	float fWaitTime;
public:
	FVector GetPatrolNextPos();
	float   GetTraceRange() { return fTraceRange; }
};