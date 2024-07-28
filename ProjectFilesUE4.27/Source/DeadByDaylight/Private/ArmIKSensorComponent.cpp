#include "ArmIKSensorComponent.h"

UArmIKSensorComponent::UArmIKSensorComponent()
{
	this->_mesh = NULL;
	this->_arms = TMap<EArm, FArmIKSensorDatum>();
	this->_capsuleRadius = 10.000000;
	this->_capsuleHalfHeight = 10.000000;
	this->_traceLength = 200.000000;
	this->_owningCamera = NULL;
}
