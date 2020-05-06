// Fill out your copyright notice in the Description page of Project Settings.


#include "HUDWidget.h"

void UHUDWidget::NativeConstruct()
{
	pInven = Cast<UUserWidget>(GetWidgetFromName(TEXT("Inventory")));
}