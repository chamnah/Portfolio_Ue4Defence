// Fill out your copyright notice in the Description page of Project Settings.


#include "InvenWidget.h"
#include "UniformGridPanel.h"
#include "Components/Image.h"
#include "Components/Button.h"

UInvenWidget::UInvenWidget(const FObjectInitializer& ObjectInitializer)
	:Super(ObjectInitializer)
{
	static ConstructorHelpers::FClassFinder<UUserWidget> Asset(TEXT("WidgetBlueprint'/Game/UI/InventorySlot.InventorySlot_C'"));
	if (Asset.Succeeded())
		SlotClass = Asset.Class;
}

void UInvenWidget::NativeConstruct()
{
	Super::NativeConstruct();
	pClose = Cast<UButton>(GetWidgetFromName(TEXT("CloseButton")));
	if (pClose)
		pClose->OnClicked.AddDynamic(this, &UInvenWidget::CloseButton);


	UUniformGridPanel* pGrid = Cast<UUniformGridPanel>(GetWidgetFromName(TEXT("ItemSlotPanel")));

	if (SlotClass && pGrid)
	{
		UUserWidget* pSlot = nullptr;
		for (size_t i = 0; i < 30; i++)
		{
			for (size_t j = 0; j < 5; j++)
			{
				pSlot = CreateWidget(GetWorld(), SlotClass);
				pGrid->AddChildToUniformGrid(pSlot, i, j);
			}
		}
	}
}

void UInvenWidget::CloseButton()
{
	SetVisibility(ESlateVisibility::Hidden);
}