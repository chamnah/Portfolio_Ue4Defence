// Fill out your copyright notice in the Description page of Project Settings.


#include "ParticleActor.h"

// Sets default values
AParticleActor::AParticleActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	pParticle = CreateDefaultSubobject<UParticleSystemComponent>(TEXT("Particle"));

	RootComponent = pParticle;
}

// Called when the game starts or when spawned
void AParticleActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AParticleActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void AParticleActor::LoadAsset(const FString & _strPath)
{
	UParticleSystem* pObj = LoadObject<UParticleSystem>(nullptr, *_strPath,nullptr,LOAD_None);
	if(pObj)
		pParticle->SetTemplate(pObj);
}