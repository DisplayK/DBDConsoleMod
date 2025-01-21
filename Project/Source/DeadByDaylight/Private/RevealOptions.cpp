#include "RevealOptions.h"

FRevealOptions::FRevealOptions()
{
	this->IsUnaffectedByBlindness = false;
	this->IsOutlineAlwaysVisible = false;
	this->IsUnaffectedByFadeout = false;
	this->Duration = 0.0f;
	this->Range = 0.0f;
	this->ActorToTestRangeFrom = NULL;
}
