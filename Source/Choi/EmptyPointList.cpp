// Fill out your copyright notice in the Description page of Project Settings.


#include "EmptyPointList.h"

// Sets default values
AEmptyPointList::AEmptyPointList()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AEmptyPointList::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AEmptyPointList::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

