#include "NearPoweredTelevisionWithLingerTime.h"

void UNearPoweredTelevisionWithLingerTime::OnLevelReadyToPlay()
{

}

float UNearPoweredTelevisionWithLingerTime::GetPercentRemainingDuration() const
{
	return 0.0f;
}

UNearPoweredTelevisionWithLingerTime::UNearPoweredTelevisionWithLingerTime()
{
	this->_distanceFromTelevision = -1.000000;
	this->_lingerDuration = -1.000000;
}
