#include "ArmIKSurvivorSubAnimInstance.h"
#include "EArmIkMode.h"

void UArmIKSurvivorSubAnimInstance::ChangeMode(const EArmIkMode newMode)
{

}

UArmIKSurvivorSubAnimInstance::UArmIKSurvivorSubAnimInstance()
{
	this->_armInterpolationSpeed = 10.000000;
	this->_handInterpolationSpeed = 10.000000;
	this->_alphaLerpTime = 0.350000;
	this->_reachPadding = 2.000000;
	this->_rightArmIKAlpha = 0.000000;
	this->_leftArmIKAlpha = 0.000000;
	this->_armIkMode = EArmIkMode::None;
	this->_rightDetectionFan = NULL;
	this->_leftDetectionFan = NULL;
	this->_meshComponent = NULL;
}
