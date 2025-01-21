#include "CurrencyProgressionTooltipViewData.h"

FCurrencyProgressionTooltipViewData::FCurrencyProgressionTooltipViewData()
{
	this->IsCurrency = false;
	this->Title = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->TooltipHeaderMaterial = NULL;
	this->EventName = FText::GetEmpty();
	this->EventDescription = FText::GetEmpty();
	this->EventTimer = FText::GetEmpty();
	this->ExpirationData = TArray<FCurrencyExpirationLabelViewData>();
}
