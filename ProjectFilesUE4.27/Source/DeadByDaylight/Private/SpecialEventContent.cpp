#include "SpecialEventContent.h"

FSpecialEventContent::FSpecialEventContent()
{
	this->SpecialEvents = TArray<FSpecialEventsContentData>();
	this->SpecialEventsData = TArray<FSpecialEventsData>();
	this->SpecialEventsData_IsSet = false;
}
