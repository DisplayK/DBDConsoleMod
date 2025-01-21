#include "SavedSpecialEventDataV7.h"

FSavedSpecialEventDataV7::FSavedSpecialEventDataV7()
{
	this->EventId = NAME_None;
	this->SeenCinematics = TArray<int32>();
	this->EventEntryScreenOpened = false;
}
