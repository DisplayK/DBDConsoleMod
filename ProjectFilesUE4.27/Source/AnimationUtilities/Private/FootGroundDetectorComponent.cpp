#include "FootGroundDetectorComponent.h"

UFootGroundDetectorComponent::UFootGroundDetectorComponent()
{
	this->_hipTransformName = NAME_None;
	this->_footLength = 25.000000;
	this->_traceRadius = 8.000000;
	this->_maxWalkableSlopeAngle = 45.000000;
	this->_movementComp = NULL;
}
