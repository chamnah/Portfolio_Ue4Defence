// Fill out your copyright notice in the Description page of Project Settings.


#include "MinionCharacter.h"
#include "MonsterController.h"

AMinionCharacter::AMinionCharacter()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ConstructorHelpers::FObjectFinder<USkeletalMesh> MeshAsset(TEXT("SkeletalMesh'/Game/ParagonMinions/Characters/Minions/Dusk_Minions/Meshes/Minion_Lane_Melee_Dusk.Minion_Lane_Melee_Dusk'"));

	if (MeshAsset.Succeeded())
		GetMesh()->SetSkeletalMesh(MeshAsset.Object);

	ConstructorHelpers::FClassFinder<UAnimInstance> AnimAsset(TEXT("AnimBlueprint'/Game/Animation/MinionAnim.MinionAnim_C'"));

	if (AnimAsset.Succeeded())
		GetMesh()->SetAnimInstanceClass(AnimAsset.Class);

	GetMesh()->RelativeLocation.Z = -88.f;
	GetMesh()->RelativeRotation.Yaw = -90.f;

	AutoPossessAI = EAutoPossessAI::PlacedInWorldOrSpawned;
	AIControllerClass = AMonsterController::StaticClass();
}

// Called when the game starts or when spawned
void AMinionCharacter::BeginPlay()
{
	Super::BeginPlay();

	fTraceRange = 500.f;
	fAttackRange = 200.f;
	iLevel = 10;
	iExp = 1000;
	iGold = 20000;
	iAttack = 150;
	iArmor = 80;
	iHP = 100;
	iHPMax = 100;

	pController = Cast<AMonsterController>(GetController());
	FVector vPos = pPatrolList->GetPatrollPos(iPatrolIndex);
	if (pController)
	{
		pController->SetBlackboardDataAsVector(TEXT("PatrollPos"),vPos);
		pController->SetBlackboardDataAsFloat(TEXT("TraceRange"), fTraceRange);
		pController->SetBlackboardDataAsFloat(TEXT("AttackRange"), fAttackRange);

		LOG(Warning, TEXT("AA"));
	}
}

// Called every frame
void AMinionCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}