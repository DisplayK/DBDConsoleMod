#include "DailyRitualContainer.h"

FDailyRitualContainer::FDailyRitualContainer()
{
	this->LastRitualReceivedDate = FDateTime{};
	this->LastRitualPopupDate = FDateTime{};
	this->LastRitualDismissedDate = FDateTime{};
	this->Rituals = TArray<FDailyRitualInstance>();
}
