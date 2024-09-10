#include "SpecialEventLoadingTextData.h"

FSpecialEventLoadingTextData::FSpecialEventLoadingTextData()
{
	this->EventId = NAME_None;
	this->Title = FText::GetEmpty();
	this->Description = FText::GetEmpty();
	this->IconPath = TEXT("");
}
