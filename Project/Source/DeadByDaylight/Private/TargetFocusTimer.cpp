#include "TargetFocusTimer.h"

FTargetFocusTimer::FTargetFocusTimer()
{
	this->_camper = NULL;
	this->_cooldownTimer = FDBDTimer{};
	this->_totalTime = 0.0f;
}
