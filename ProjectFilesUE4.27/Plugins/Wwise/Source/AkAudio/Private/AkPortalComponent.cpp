#include "AkPortalComponent.h"
#include "AkAcousticPortalState.h"

class UPrimitiveComponent;

bool UAkPortalComponent::PortalPlacementValid() const
{
	return false;
}

void UAkPortalComponent::OpenPortal()
{

}

UPrimitiveComponent* UAkPortalComponent::GetPrimitiveParent() const
{
	return NULL;
}

AkAcousticPortalState UAkPortalComponent::GetCurrentState() const
{
	return AkAcousticPortalState::Closed;
}

void UAkPortalComponent::ClosePortal()
{

}

UAkPortalComponent::UAkPortalComponent()
{
	this->bDynamic = false;
	this->InitialState = AkAcousticPortalState::Closed;
	this->ObstructionRefreshInterval = 0.000000;
	this->ObstructionCollisionChannel = ECC_Visibility;
}
