#include "HalloweenCentrifugeAnimInstance.h"

void UHalloweenCentrifugeAnimInstance::SetDesiredBlendValue(const float blendValue)
{

}

void UHalloweenCentrifugeAnimInstance::OnEnergySpawned(int32 previousEnergy, int32 currentEnergy)
{

}

UHalloweenCentrifugeAnimInstance::UHalloweenCentrifugeAnimInstance()
{
	this->_isActive = false;
	this->_blendSpaceValue = 0.000000;
	this->_timeToChangeBlendValue = 1.000000;
}
