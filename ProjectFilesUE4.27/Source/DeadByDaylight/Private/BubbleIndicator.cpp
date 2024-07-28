#include "BubbleIndicator.h"

void ABubbleIndicator::DeactivateBubble()
{

}

ABubbleIndicator::ABubbleIndicator()
{
	this->_lifeTime = 0.000000;
	this->_displayToLocallyObserved = false;
	this->_isInRange = false;
	this->_isPreSpawned = false;
}
