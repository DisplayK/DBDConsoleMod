#include "ExposerInteriorZoneComponent.h"

class USceneComponent;

void UExposerInteriorZoneComponent::AddExposerSpawnPoint(USceneComponent* point)
{

}

UExposerInteriorZoneComponent::UExposerInteriorZoneComponent()
{
	this->ExposerSpawnPoints = TArray<USceneComponent*>();
}
