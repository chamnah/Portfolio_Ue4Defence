// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DragWidget.generated.h"

/**
 * 
 */
UCLASS()
class CHOI_API UDragWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UDragWidget(const FObjectInitializer& ObjectInitializer);

private:
	bool bDrag;

public:
	UFUNCTION(BlueprintCallable)
	void MouseUp();
};