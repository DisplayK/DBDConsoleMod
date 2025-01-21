#include "UMGCharacterInfoWidget.h"
#include "TeachableData.h"
#include "UObject/NoExportTypes.h"
#include "InventorySlotData.h"

void UUMGCharacterInfoWidget::HandleTooltipLongPressedEvent(const FTeachableData& teachableData, const FVector2D& position)
{

}

void UUMGCharacterInfoWidget::HandlePowerItemTooltipLongPressedEvent(const FInventorySlotData& slotData, FVector2D position)
{

}

UUMGCharacterInfoWidget::UUMGCharacterInfoWidget()
{
	this->CharacterInfoScrollBox = NULL;
	this->CharacterScrollingInfoWidget = NULL;
	this->CharacterDLCPanel = NULL;
	this->CharacterBackgroundImage = NULL;
	this->CharacterName = NULL;
	this->_characterDifficultyText = FText::GetEmpty();
	this->_characterDLCText = TEXT("");
	this->_isKiller = false;
	this->_characterDLCTitle = FText::GetEmpty();
}
