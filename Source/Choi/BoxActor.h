// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Global.h"
#include "GameFramework/Actor.h"
#include "BoxActor.generated.h"

UCLASS()
class CHOI_API ABoxActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABoxActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public :
	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* m_pMesh;

	float m_fRotZ;
};