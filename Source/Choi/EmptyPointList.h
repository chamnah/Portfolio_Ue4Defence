// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "EmptyPoint.h"
#include "GameFramework/Actor.h"
#include "EmptyPointList.generated.h"

UCLASS()
class CHOI_API AEmptyPointList : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AEmptyPointList();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

private:
	UPROPERTY(EditAnywhere,BlueprintReadWrite,meta = (AllowPrivateAccess = "true"))
	TArray<AEmptyPoint*>  arrPoint;

public:
	FVector GetPatrollPos(int32 _iIdx)const { return arrPoint[_iIdx]->GetActorLocation(); }
	int32 GetCount()const { return arrPoint.Num(); }
};