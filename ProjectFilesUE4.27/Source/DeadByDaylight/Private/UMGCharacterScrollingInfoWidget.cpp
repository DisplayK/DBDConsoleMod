#include "UMGCharacterScrollingInfoWidget.h"
#include "InventorySlotData.h"
#include "UObject/NoExportTypes.h"
#include "TeachableData.h"

void UUMGCharacterScrollingInfoWidget::HandleTooltipLongPressedKillerPowerEvent(const FInventorySlotData& itemData, FVector2D position)
{

}

void UUMGCharacterScrollingInfoWidget::HandleTooltipLongPressedEvent(const FTeachableData& teachableData, const FVector2D& position)
{

}

UUMGCharacterScrollingInfoWidget::UUMGCharacterScrollingInfoWidget()
{
	this->FirstTeachablePerk = NULL;
	this->SecondTeachablePerk = NULL;
	this->ThirdTeachablePerk = NULL;
	this->KillerInfoPanel = NULL;
	this->KillerPower = NULL;
	this->CharacterBackstoryBox = NULL;
	this->_killerPowerName = FText::GetEmpty();
	this->_killerSpeedText = FText::GetEmpty();
	this->_killerTerrorRadiusText = FText::GetEmpty();
	this->_killerHeightText = FText::GetEmpty();
	this->_perksTitle = FText::GetEmpty();
	this->_teachablesTitle = FText::GetEmpty();
	this->_powerTitle = FText::GetEmpty();
	this->_attributesTitle = FText::GetEmpty();
	this->FirstTeachablePerkText = NULL;
	this->SecondTeachablePerkText = NULL;
	this->ThirdTeachablePerkText = NULL;
	this->_backStoryTitle = FText::GetEmpty();
	this->_teachablePerkArray = TArray<UUMGTeachablePerkButton*>();
	this->_teachablePerkNameArray = TArray<UTextBlock*>();
}
