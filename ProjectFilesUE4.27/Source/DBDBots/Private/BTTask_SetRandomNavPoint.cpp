#include "BTTask_SetRandomNavPoint.h"

UBTTask_SetRandomNavPoint::UBTTask_SetRandomNavPoint()
{
	this->MinAroundRadius = 0.000000;
	this->MaxAroundRadius = 300.000000;
	this->MaxNbAttempts = 8;
	this->FilterClass = NULL;
}
