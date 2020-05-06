// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Global.h"
#include "Blueprint/UserWidget.h"
#include "InvenWidget.generated.h"

/**
 * 
 */
UCLASS()
class CHOI_API UInvenWidget : public UUserWidget
{
	GENERATED_BODY()
	
private:
	TSubclassOf<UUserWidget> SlotClass;
	class UButton* pClose;

public:
	UInvenWidget(const FObjectInitializer& ObjectInitializer);
	virtual void NativeConstruct();
	UFUNCTION(BlueprintCallable)
	void CloseButton();
};