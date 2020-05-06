// Fill out your copyright notice in the Description page of Project Settings.


#include "InvenSlotWidget.h"
#include "Components/Image.h"
#include "DragDropOperation.h"
#include "MouseMgr.h"

void UInvenSlotWidget::NativeOnDragDetected(const FGeometry & InGeometry, const FPointerEvent & InMouseEvent, UDragDropOperation *& OutOperation)
{
	Super::NativeOnDragDetected(InGeometry, InMouseEvent, OutOperation);
	/*pDragWidget = Cast<UUserWidget>(CreateWidget(GetWorld(), WidgetClass));
	pDragWidget->AddToViewport();
	bDrag = true;
	MouseMgr::GetInst()->SetDrag(true);

	FVector2D vPos;
	GetWorld()->GetGameViewport()->GetMousePosition(vPos);
	vPos.X -= GetDesiredSize().X * 0.25f;
	vPos.Y -= GetDesiredSize().Y * 0.25f;
	pDragWidget->SetPositionInViewport(vPos);*/

	//PrintViewport(2.f,TEXT("Drag"),VIEWPORT_MSG_TYPE::VT_NORMAL);
	//pDragWidget = CreateWidget(GetWorld(), WidgetClass);

	/*if (pDragWidget)
	{
		pDragWidget->AddToViewport();
	}*/

	/*pImage->SetBrushFromTexture(pTex);
	bDrag = true;

	pDragWidget = CreateWidget(GetWorld(), WidgetClass);

	if (pDragWidget)
	{
		pDragWidget->AddToViewport();
	}*/

}

bool UInvenSlotWidget::NativeOnDragOver(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	bool bResult = Super::NativeOnDragOver(InGeometry, InDragDropEvent, InOperation);
	
	PrintViewport(2.f, TEXT("Drop"), VIEWPORT_MSG_TYPE::VT_NORMAL);
	return bResult;
}

bool UInvenSlotWidget::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	bool bResult = Super::NativeOnDrop(InGeometry, InDragDropEvent, InOperation);

	PrintViewport(2.f, TEXT("Drop"), VIEWPORT_MSG_TYPE::VT_NORMAL);
	return bResult;
}

void UInvenSlotWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	/*if (bDrag)
	{
		FVector2D vPos;
		GetWorld()->GetGameViewport()->GetMousePosition(vPos);
		LOG(Warning, TEXT("Mouse Position : %s"), *vPos.ToString());
		vPos.X -= GetDesiredSize().X * 0.25f;
		vPos.Y -= GetDesiredSize().Y * 0.25f;
		pDragWidget->SetPositionInViewport(vPos);
	}*/


}

void UInvenSlotWidget::NativeConstruct()
{
	Super::NativeConstruct();
	//pImage = Cast<UImage>(GetWidgetFromName(TEXT("InvenSlot")));
}

UInvenSlotWidget::UInvenSlotWidget(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
	, bDrag(false)
	, bColl(false)
{
	/*static ConstructorHelpers::FObjectFinder<UTexture2D> Texture(TEXT("Texture2D'/Game/CraftResourcesIcons/Textures/Tex_container_07.Tex_container_07'"));

	if (Texture.Succeeded())
	{
		pTex = Texture.Object;
	}

	static ConstructorHelpers::FClassFinder<UUserWidget> InvenWidgetClass(TEXT("WidgetBlueprint'/Game/UI/InventorySlot.InventorySlot_C'"));
	if (InvenWidgetClass.Succeeded())
		WidgetClass = InvenWidgetClass.Class;*/
}

//void UInvenSlotWidget::OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, UDragDropOperation*& Operation)
//{
//	Super::OnDragDetected(MyGeometry, PointerEvent, Operation);
//
//	pImage->SetBrushFromTexture(pTex);
//}
//
//void UInvenSlotWidget::MouseDown()
//{
//}

void UInvenSlotWidget::MouseUp()
{
	/*bDrag = false;
	PrintViewport(2.f, TEXT("Drop"), VIEWPORT_MSG_TYPE::VT_NORMAL);*/
	//pDragWidget->RemoveFromViewport();
}

void UInvenSlotWidget::MouseEnter()
{
	bColl = true;
}

void UInvenSlotWidget::MouseLeave()
{
	bColl = false;
}