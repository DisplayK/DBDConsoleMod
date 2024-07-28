#include "DemogorgonPortalTargetingComponent.h"

class ADemogorgonPortal;

void UDemogorgonPortalTargetingComponent::SetIsPorting(bool isPorting)
{

}

void UDemogorgonPortalTargetingComponent::Server_SetTargetedPortal_Implementation(ADemogorgonPortal* targetedPortal)
{

}

bool UDemogorgonPortalTargetingComponent::Server_SetTargetedPortal_Validate(ADemogorgonPortal* targetedPortal)
{
	return true;
}

void UDemogorgonPortalTargetingComponent::Multicast_SetTargetedPortal_Implementation(ADemogorgonPortal* targetedPortal)
{

}

bool UDemogorgonPortalTargetingComponent::Multicast_SetTargetedPortal_Validate(ADemogorgonPortal* targetedPortal)
{
	return true;
}

ADemogorgonPortal* UDemogorgonPortalTargetingComponent::GetTargetedPortal()
{
	return NULL;
}

UDemogorgonPortalTargetingComponent::UDemogorgonPortalTargetingComponent()
{
	this->_targetedPortal = NULL;
	this->_portalPlacerState = NULL;
}
