#include "K28KillerEnterLockerInteraction.h"

class ADBDPlayer;

bool UK28KillerEnterLockerInteraction::IsKillerAllowedToEnterLocker(const ADBDPlayer* player) const
{
	return false;
}

UK28KillerEnterLockerInteraction::UK28KillerEnterLockerInteraction()
{
	this->_hideKillerTimePercentage = 0.900000;
}
