#include "BonusPointEventsItemData.h"

FBonusPointEventsItemData::FBonusPointEventsItemData()
{
	this->EventTitle = TEXT("");
	this->EventDescription = TEXT("");
	this->EventDescription_IsSet = false;
	this->EventType = 0;
	this->Multiplier = 0.0;
	this->StartTime = TEXT("");
	this->EndTime = TEXT("");
}
