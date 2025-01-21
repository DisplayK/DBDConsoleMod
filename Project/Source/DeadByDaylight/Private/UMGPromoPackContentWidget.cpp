#include "UMGPromoPackContentWidget.h"

UUMGPromoPackContentWidget::UUMGPromoPackContentWidget()
{
	this->Content = NULL;
	this->WidgetPerContentType = NULL;
	this->ScrollBox = NULL;
	this->_itemsContainer = TArray<TWeakObjectPtr<UVerticalBox>>();
}
