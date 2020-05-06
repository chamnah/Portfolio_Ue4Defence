// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponActor.h"

// Sets default values
AWeaponActor::AWeaponActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	pRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	pStatic = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static"));
	pSkeletal = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Skeletal"));

	RootComponent = pRoot;
	pStatic->SetupAttachment(RootComponent);
	pSkeletal->SetupAttachment(RootComponent);
	
	pStatic->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	pStatic->SetCollisionProfileName(TEXT("Weapon"));
}

// Called when the game starts or when spawned
void AWeaponActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWeaponActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWeaponActor::LoadMesh(const FString& _strPath, bool bStatic)
{
	if (bStatic)
	{
		UStaticMesh* Obj = LoadObject<UStaticMesh>(nullptr,*_strPath);
		if(Obj)
			pStatic->SetStaticMesh(Obj);
	}
	else
	{
		USkeletalMesh* Obj = LoadObject<USkeletalMesh>(nullptr, *_strPath);
		if(Obj)
			pSkeletal->SetSkeletalMesh(Obj);
	}
}