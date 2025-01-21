#include "K28AnimInstance.h"

void UK28AnimInstance::OnCustomizationChanged()
{

}

TArray<FName> UK28AnimInstance::GetCustomAnimationTags() const
{
	return TArray<FName>();
}

int32 UK28AnimInstance::GetAnimationMappingIndex() const
{
	return 0;
}

UK28AnimInstance::UK28AnimInstance()
{
	this->_isInLocker = false;
	this->_isInChase = false;
	this->_isChargingTeleportation = false;
	this->_hasTeleportationPowerCharged = false;
	this->_hasTeleportationBeenCancelled = false;
	this->_hideHandsInFPV = false;
	this->_customizationAnimationSelectorClass = NULL;
	this->_customizationAnimationSelector = NULL;
}
