#include "MatchConfigOptionUIData.h"

FMatchConfigOptionUIData::FMatchConfigOptionUIData()
{
	this->Id = 0;
	this->StringId = TEXT("");
	this->OptionName = FText::GetEmpty();
	this->OptionIcon = NULL;
	this->OptionType = ECustomMatchOptions::All;
}
