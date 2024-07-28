#include "Rancor.h"

float URancor::GetSurvivorRevealDuration() const
{
	return 0.0f;
}

URancor::URancor()
{
	this->_survivorRevealDuration = 0.000000;
	this->_killerRevealToObsessionDuration = 0.000000;
}
