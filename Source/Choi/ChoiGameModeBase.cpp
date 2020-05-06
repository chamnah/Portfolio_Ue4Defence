// Fill out your copyright notice in the Description page of Project Settings.


#include "ChoiGameModeBase.h"
#include "PlayerCharacter.h"
#include "TestPlayerController.h"

AChoiGameModeBase::AChoiGameModeBase()
{
	DefaultPawnClass = APlayerCharacter::StaticClass();
	PlayerControllerClass = ATestPlayerController::StaticClass();
}

void AChoiGameModeBase::BeginPlay()
{
	
}