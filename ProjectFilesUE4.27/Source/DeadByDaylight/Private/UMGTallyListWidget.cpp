#include "UMGTallyListWidget.h"

UUMGTallyListWidget::UUMGTallyListWidget()
{
	this->TopLeftText = FText::GetEmpty();
	this->TopRightText = FText::GetEmpty();
	this->ListBGPanel = NULL;
	this->_playerRole = EPlayerRole::VE_None;
	this->_inAnimationPlayedPages = TSet<int32>();
	this->_listItemWidgets = TMap<ETallyListPageID, UUMGTallyListElementWidget*>();
}
