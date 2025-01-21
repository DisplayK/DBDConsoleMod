#include "SavedDailyRitualContainerV7.h"

FSavedDailyRitualContainerV7::FSavedDailyRitualContainerV7()
{
	this->LastRitualReceivedDate = TEXT("");
	this->LastRitualPopupDate = TEXT("");
	this->LastRitualDismissedDate = TEXT("");
	this->Rituals = TArray<FLegacySavedDailyRitualInstance>();
}
