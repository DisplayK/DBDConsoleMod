#include "UMGCharacterInfoScreen.h"
#include "TeachableData.h"
#include "UObject/NoExportTypes.h"
#include "InventorySlotData.h"

void UUMGCharacterInfoScreen::HandleTeachablePerkTooltipLongPressedEvent(const FTeachableData& teachableData, const FVector2D& position)
{

}

void UUMGCharacterInfoScreen::HandleProgressionButtonClickEvent()
{

}

void UUMGCharacterInfoScreen::HandlePowerItemTooltipLongPressedEvent(const FInventorySlotData& slotData, FVector2D position)
{

}

UUMGCharacterInfoScreen::UUMGCharacterInfoScreen()
{
	this->ContentPanel = NULL;
	this->SurvivorInfoWidgetClass = NULL;
	this->KillerInfoWidgetClass = NULL;
	this->ProgressionButton = NULL;
}
