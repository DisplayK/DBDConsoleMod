#include "AIRandomByDistancePercentagesAtTime.h"

FAIRandomByDistancePercentagesAtTime::FAIRandomByDistancePercentagesAtTime()
{
	this->PercentageAtStartDistance = FAITunableParameter{};
	this->PercentageAtEndDistance = FAITunableParameter{};
	this->AtRelativeTime = FAITunableParameter{};
}
