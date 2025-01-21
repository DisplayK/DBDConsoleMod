#include "ActorClipperComponent.h"
#include "EDBDCameraSocketID.h"

class UPrimitiveCollection;

void UActorClipperComponent::SetPrimitiveCollection(const UPrimitiveCollection* clippables)
{

}

void UActorClipperComponent::OnOwnerLocallyObservedChanged(bool locallyObserved)
{

}

void UActorClipperComponent::OnCameraChanged(EDBDCameraSocketID socketId)
{

}

UActorClipperComponent::UActorClipperComponent()
{
	this->Shape = NULL;
	this->_clippedActors = TMap<AActor*, FClippedActor>();
	this->_clippables = NULL;
}
