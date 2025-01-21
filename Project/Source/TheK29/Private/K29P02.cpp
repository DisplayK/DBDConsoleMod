#include "K29P02.h"

class ACamperPlayer;

float UK29P02::GetRevealRange()
{
	return 0.0f;
}

void UK29P02::Authority_OnInRangeChanged(const bool inRange, ACamperPlayer* survivor)
{

}

UK29P02::UK29P02()
{
	this->_revealRange = 0.000000;
	this->_effectClass = NULL;
	this->_survivorRevealedEffects = TMap<TWeakObjectPtr<ACamperPlayer>, TWeakObjectPtr<UStatusEffect>>();
}
