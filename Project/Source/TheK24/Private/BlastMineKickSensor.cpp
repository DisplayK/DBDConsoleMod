#include "BlastMineKickSensor.h"

class UChargeableComponent;

void UBlastMineKickSensor::Authority_OnKickChargeablePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete)
{

}

UBlastMineKickSensor::UBlastMineKickSensor()
{
	this->_kickingKiller = NULL;
	this->_kickGeneratorChargeable = NULL;
	this->_generator = NULL;
}
