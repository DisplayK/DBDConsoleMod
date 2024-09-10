#include "PositionLagCompensationComponent.h"

UPositionLagCompensationComponent::UPositionLagCompensationComponent()
{
	this->_maxExtrapolationDurationInSeconds = 0.000000;
	this->_maxInterpolationToServerMoveInSeconds = 2.000000;
}
