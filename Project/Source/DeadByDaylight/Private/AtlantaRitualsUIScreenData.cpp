#include "AtlantaRitualsUIScreenData.h"

FAtlantaRitualsUIScreenData::FAtlantaRitualsUIScreenData()
{
	this->DailyRefreshTime = FDateTime{};
	this->WeeklyRefreshTime = FDateTime{};
	this->DailyRituals = TArray<FAtlantaRitualUIData>();
	this->WeeklyRituals = TArray<FAtlantaRitualUIData>();
}
