// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "HUDWidget.generated.h"

/**
 * 
 */
UCLASS()
class CHOI_API UHUDWidget : public UUserWidget
{
	GENERATED_BODY()
	
private:
	UUserWidget* pInven;

public:
	virtual void NativeConstruct();
	UUserWidget* GetInven() { return pInven; }
};
