#include "CurrencyProgressionTooltipWidget.h"
#include "CurrencyProgressionTooltipViewData.h"

void UCurrencyProgressionTooltipWidget::SetTooltipData(const FCurrencyProgressionTooltipViewData& currencyViewData)
{

}

UCurrencyProgressionTooltipWidget::UCurrencyProgressionTooltipWidget()
{
	this->MaxExpirationLabels = 6;
	this->CoreCurrencyExpirationLabelWidgetClass = NULL;
	this->CurrencyTB = NULL;
	this->CurrencyTitleTB = NULL;
	this->CurrencyDescriptionRTB = NULL;
	this->TitleBgIMG = NULL;
	this->EventContainer = NULL;
	this->EventNameTB = NULL;
	this->EventDescriptionTB = NULL;
	this->EventTimerTB = NULL;
	this->ExpirationPanel = NULL;
	this->ExpirationLabelContainer = NULL;
	this->ExpirationTitleTB = NULL;
	this->_currencyExpirationWidgetPool = TArray<UCoreCurrencyExpirationLabelWidget*>();
}
