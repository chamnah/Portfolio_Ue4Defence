// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Global.h"
#include "Blueprint/UserWidget.h"
#include "InvenSlotWidget.generated.h"

/**
 * 
 */
UCLASS()
class CHOI_API UInvenSlotWidget : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UInvenSlotWidget(const FObjectInitializer& ObjectInitializer);
private:
	UPROPERTY()
	class UImage* pImage;
	UPROPERTY()
	UTexture2D* pTex;
	bool bDrag;
	bool bColl;
	FVector2D  vMousePos;
	TSubclassOf<UUserWidget> WidgetClass;
	UUserWidget* pDragWidget;

public:
	/*UFUNCTION(BlueprintCallable)
	void MouseDown();*/
	virtual void NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation);
	virtual bool NativeOnDragOver(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation);
	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation);
	virtual void NativeConstruct();
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime);
	UFUNCTION(BlueprintCallable)
		void MouseUp();

	UFUNCTION(BlueprintCallable)
		void MouseEnter();

	UFUNCTION(BlueprintCallable)
		void MouseLeave();

public:
	void SetDrag(bool _bDrag) { bDrag = _bDrag; }
	//void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, UDragDropOperation*& Operation);
};