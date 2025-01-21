#include "Flashlight.h"

class USpotLightComponent;

USpotLightComponent* AFlashlight::GetSpotlightComponent() const
{
	return NULL;
}

AFlashlight::AFlashlight()
{
	this->_shouldUseCooldowns = true;
	this->_cooldownWhileOnDuration = 0.300000;
	this->_cooldownWhileOffDuration = 0.100000;
}
