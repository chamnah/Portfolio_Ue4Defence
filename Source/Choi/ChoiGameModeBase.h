// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Global.h"
#include "GameFramework/GameModeBase.h"
#include "ChoiGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class CHOI_API AChoiGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	
public:
	AChoiGameModeBase();
	void BeginPlay();

private:
	
};
