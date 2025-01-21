#include "AkSurfaceReflectorSetComponent.h"

void UAkSurfaceReflectorSetComponent::UpdateSurfaceReflectorSet()
{

}

void UAkSurfaceReflectorSetComponent::SendSurfaceReflectorSet()
{

}

void UAkSurfaceReflectorSetComponent::RemoveSurfaceReflectorSet()
{

}

UAkSurfaceReflectorSetComponent::UAkSurfaceReflectorSetComponent()
{
	this->bEnableSurfaceReflectors = true;
	this->AcousticPolys = TArray<FAkSurfacePoly>();
	this->bEnableDiffraction = true;
	this->bEnableDiffractionOnBoundaryEdges = false;
	this->AssociatedRoom = NULL;
}
