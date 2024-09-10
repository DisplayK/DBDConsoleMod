#include "UMGTallyBloodpointsWidget.h"

UUMGTallyBloodpointsWidget::UUMGTallyBloodpointsWidget()
{
	this->_itemBoxVisibility = ESlateVisibility::Visible;
	this->_labelTotalScore = FText::GetEmpty();
	this->_labelItemTitle = FText::GetEmpty();
	this->_labelItemAddOnTitle = FText::GetEmpty();
	this->BoxScoreCategory = NULL;
	this->_scoreCategoryExtraDataMap = TMap<EDBDScoreCategory, FScoreCategoryUIExtraData>();
}
