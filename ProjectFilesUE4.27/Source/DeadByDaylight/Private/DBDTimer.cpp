#include "DBDTimer.h"

FDBDTimer::FDBDTimer()
{
	this->_startTime = 0.0f;
	this->_startTimeDirty = false;
	this->_timeLeft = FFloat_NetQuantize8{};
	this->_replicateTimeLeft = false;
	this->_interpSpeed = 0.0f;
}
