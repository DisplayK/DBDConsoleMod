#include "K28StatusData.h"

UK28StatusData::UK28StatusData()
{
	this->DayNightCycleProgressPercentage = 0.000000;
	this->IsDaytime = true;
	this->IsTransitioningToNighttime = true;
	this->IsNighttime = true;
	this->IsTransitioningToDaytime = true;
}
