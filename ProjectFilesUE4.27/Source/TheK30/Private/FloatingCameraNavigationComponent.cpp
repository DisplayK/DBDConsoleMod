#include "FloatingCameraNavigationComponent.h"

void UFloatingCameraNavigationComponent::Server_EnableWalkOffLegdes_Implementation(bool isEnabled)
{

}

void UFloatingCameraNavigationComponent::Multicast_EnableWalkOffLegdes_Implementation(bool isEnabled)
{

}

UFloatingCameraNavigationComponent::UFloatingCameraNavigationComponent()
{
	this->_ownerObjectPlacer = NULL;
	this->_playerOwner = NULL;
}
