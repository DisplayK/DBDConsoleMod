#include "FlashlightableComponent.h"

bool UFlashlightableComponent::IsLit() const
{
	return false;
}

UFlashlightableComponent::UFlashlightableComponent()
{
	this->_lightingStrategy = NULL;
	this->_flashlights = TSet<UFlashlightComponent*>();
}
