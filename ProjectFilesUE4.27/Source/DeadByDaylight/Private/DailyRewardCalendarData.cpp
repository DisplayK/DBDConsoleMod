#include "DailyRewardCalendarData.h"

FDailyRewardCalendarData::FDailyRewardCalendarData()
{
	this->DailyRewardList = TArray<FDailyRewardData>();
	this->CurrentlyActiveDailyRewardIndex = 0;
	this->CalendarStartDate = FDateTime{};
	this->CalendarExpirationDate = FDateTime{};
	this->IsSet = false;
}
