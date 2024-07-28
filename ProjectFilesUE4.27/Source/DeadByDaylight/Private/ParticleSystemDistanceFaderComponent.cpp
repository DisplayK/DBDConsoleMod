#include "ParticleSystemDistanceFaderComponent.h"

UParticleSystemDistanceFaderComponent::UParticleSystemDistanceFaderComponent()
{
	this->ParticleSystemComponent = NULL;
	this->OpacityParameterName = NAME_None;
	this->StartFadeDistance = 1900.000000;
	this->EndFadeDistance = 2500.000000;
}
