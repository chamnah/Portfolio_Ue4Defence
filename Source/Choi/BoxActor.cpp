// Fill out your copyright notice in the Description page of Project Settings.


#include "BoxActor.h"

// Sets default values
ABoxActor::ABoxActor()
	:m_fRotZ(360.f)
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_pMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	RootComponent = m_pMesh;

	ConstructorHelpers::FObjectFinder<UStaticMesh> Asset(TEXT("StaticMesh'/Game/InfinityBladeGrassLands/Environments/Misc/Exo_Deco01/StaticMesh/SM_WoodenBarrel_Intact.SM_WoodenBarrel_Intact'"));

	if (Asset.Succeeded())
		m_pMesh->SetStaticMesh(Asset.Object);
}

// Called when the game starts or when spawned
void ABoxActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABoxActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float fRot = m_fRotZ * DeltaTime;
	m_pMesh->AddWorldRotation(FRotator(0.f, fRot, 0.f));
}