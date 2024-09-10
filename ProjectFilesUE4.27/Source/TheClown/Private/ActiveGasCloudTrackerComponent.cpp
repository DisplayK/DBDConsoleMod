#include "ActiveGasCloudTrackerComponent.h"

UActiveGasCloudTrackerComponent::UActiveGasCloudTrackerComponent()
{
	this->_activeToxinClouds = TArray<ABaseGasCloudProjectile*>();
	this->_activeAntidoteClouds = TArray<ABaseGasCloudProjectile*>();
}
