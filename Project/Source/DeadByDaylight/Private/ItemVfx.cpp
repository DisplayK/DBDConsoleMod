#include "ItemVfx.h"

class UParticleSystemComponent;

void AItemVfx::ClearParticleSystems()
{

}

void AItemVfx::AddParticleSystemComponent(UParticleSystemComponent* particleSystemComponent)
{

}

AItemVfx::AItemVfx()
{
	this->_particleSystems = TArray<UParticleSystemComponent*>();
}
