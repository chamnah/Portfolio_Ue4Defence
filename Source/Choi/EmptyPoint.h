// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Global.h"
#include "GameFramework/Actor.h"
#include "EmptyPoint.generated.h"

UCLASS()
class CHOI_API AEmptyPoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEmptyPoint();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
