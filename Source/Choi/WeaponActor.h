// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Global.h"
#include "GameFramework/Actor.h"
#include "WeaponActor.generated.h"

UCLASS()
class CHOI_API AWeaponActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWeaponActor();

public:
	UPROPERTY(EditAnywhere)
	USceneComponent* pRoot;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* pStatic;

	UPROPERTY(EditAnywhere)
	USkeletalMeshComponent* pSkeletal;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	void LoadMesh(const FString& _strPath, bool bStatic = true);
	UStaticMeshComponent* GetStaticMesh() { return pStatic; }
	USkeletalMeshComponent* GetSkeletalMesh() { return pSkeletal; }
};