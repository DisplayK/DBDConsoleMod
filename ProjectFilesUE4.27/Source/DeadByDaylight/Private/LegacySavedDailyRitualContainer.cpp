#include "LegacySavedDailyRitualContainer.h"

FLegacySavedDailyRitualContainer::FLegacySavedDailyRitualContainer()
{
	this->LastRitualReceivedDate = FDateTime{};
	this->Rituals = TArray<FLegacySavedDailyRitualInstance>();
}
