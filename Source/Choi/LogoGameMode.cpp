// Fill out your copyright notice in the Description page of Project Settings.


#include "LogoGameMode.h"
#include "Blueprint/UserWidget.h"

ALogoGameMode::ALogoGameMode()
{
	ConstructorHelpers::FClassFinder<UUserWidget> UIAssetClass(TEXT("WidgetBlueprint'/Game/UI/StartUI.StartUI_C'"));

	if (UIAssetClass.Succeeded())
	{
		WidgetClass = UIAssetClass.Class;
	}
}

void ALogoGameMode::BeginPlay()
{
	Super::BeginPlay();

	if (WidgetClass)
	{
		pWidget = CreateWidget(GetWorld(), WidgetClass);
		if (pWidget)
			pWidget->AddToViewport();
	}
}