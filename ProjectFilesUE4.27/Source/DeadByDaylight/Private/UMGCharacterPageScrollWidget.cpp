#include "UMGCharacterPageScrollWidget.h"

void UUMGCharacterPageScrollWidget::HandleCharacterClicked(int32 characterIndex)
{

}

UUMGCharacterPageScrollWidget::UUMGCharacterPageScrollWidget()
{
	this->_characterButtonWidgetClass = NULL;
	this->_charactersData = TArray<FCharacterSlotData>();
	this->_isKiller = false;
	this->_charactersTitleText = FText::GetEmpty();
	this->_killersTitleText = FText::GetEmpty();
	this->_survivorsTitleText = FText::GetEmpty();
}
