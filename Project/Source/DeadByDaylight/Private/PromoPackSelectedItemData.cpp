#include "PromoPackSelectedItemData.h"

FPromoPackSelectedItemData::FPromoPackSelectedItemData()
{
	this->ItemTypeIcon = NULL;
	this->ItemName = FText::GetEmpty();
	this->ItemSubTitle = FText::GetEmpty();
	this->ItemDescription = FText::GetEmpty();
	this->Widget = NULL;
}
