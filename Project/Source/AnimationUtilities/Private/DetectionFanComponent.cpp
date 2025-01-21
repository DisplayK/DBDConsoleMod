#include "DetectionFanComponent.h"

UDetectionFanComponent::UDetectionFanComponent()
{
	this->_numberOfSpots = 5;
	this->_defaultRingRadius = 50.000000;
	this->_collisionChannel = ECC_Pawn;
	this->_meshComponent = NULL;
}
