#include "StatusViewSource.h"

FStatusViewSource::FStatusViewSource()
{
	this->SourceID = NAME_None;
	this->IsActive = false;
	this->_remainingTime = 0.0f;
	this->PercentageFill = 0.0f;
	this->Level = 0;
	this->SourceType = EInventoryItemType::None;
	this->SourceIconIndex = 0;
	this->SourceLevel = 0;
}
