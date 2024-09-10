#include "DarkSense.h"

void UDarkSense::Authority_OnInRangeChanged(const bool inRange)
{

}

UDarkSense::UDarkSense()
{
	this->_killerRevealDuration = 0.000000;
	this->_darkSenseRevealRange = 2400.000000;
	this->_timedRevealEffect = NULL;
}
