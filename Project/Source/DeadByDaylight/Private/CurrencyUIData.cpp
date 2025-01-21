#include "CurrencyUIData.h"

FCurrencyUIData::FCurrencyUIData()
{
	this->CurrencyType = ECurrencyType::None;
	this->Description = FText::GetEmpty();
	this->DisplayName = FText::GetEmpty();
	this->IconPath = TEXT("");
	this->CurrencyColorTheme = FSlateColor{};
}
