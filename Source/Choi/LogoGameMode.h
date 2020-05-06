// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Global.h"
#include "GameFramework/GameModeBase.h"
#include "LogoGameMode.generated.h"
/**
 * 
 */
UCLASS()
class CHOI_API ALogoGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ALogoGameMode();

private:
	TSubclassOf<UUserWidget> WidgetClass;
	UUserWidget* pWidget;

public:
	virtual void BeginPlay();
};
