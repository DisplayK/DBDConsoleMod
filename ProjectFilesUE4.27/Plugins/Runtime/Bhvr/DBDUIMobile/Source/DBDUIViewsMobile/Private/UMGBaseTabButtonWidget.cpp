#include "UMGBaseTabButtonWidget.h"

UUMGBaseTabButtonWidget::UUMGBaseTabButtonWidget()
{
	this->TabText = NULL;
	this->NotificationCountText = NULL;
	this->NotificationPanel = NULL;
	this->TabButtonSelected = NULL;
	this->TabIndex = 0;
	this->TitleOfTab = FText::GetEmpty();
	this->_tabTextParameter = TEXT("0");
}
