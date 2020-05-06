// Fill out your copyright notice in the Description page of Project Settings.


#include "DragWidget.h"

UDragWidget::UDragWidget(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
	,bDrag(false)
{
}

void UDragWidget::MouseUp()
{
	bDrag = false;
	//RemoveFromViewport();
}