#include "DBDAggregateParticleSystemComponent.h"

UDBDAggregateParticleSystemComponent::UDBDAggregateParticleSystemComponent()
{
	this->CullAngle = 160.000000;
	this->EndFadeDistance = 2500.000000;
	this->LocatorComponentCache = TSet<USceneComponent*>();
	this->PendingReset = false;
}
