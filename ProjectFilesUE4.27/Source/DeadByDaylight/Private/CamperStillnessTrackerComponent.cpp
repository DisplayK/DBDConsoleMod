#include "CamperStillnessTrackerComponent.h"
#include "Engine/EngineTypes.h"

class UPrimitiveComponent;
class AActor;
class UExposerInteriorZoneComponent;

void UCamperStillnessTrackerComponent::OnOverlapExit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

}

void UCamperStillnessTrackerComponent::OnOverlapEnter(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

}

void UCamperStillnessTrackerComponent::OnLevelReadyToPlay()
{

}

void UCamperStillnessTrackerComponent::ExitInteriorZone(UExposerInteriorZoneComponent* zone)
{

}

void UCamperStillnessTrackerComponent::EnterInteriorZone(UExposerInteriorZoneComponent* zone)
{

}

UCamperStillnessTrackerComponent::UCamperStillnessTrackerComponent()
{
	this->ChickenShitModifier = 0.000000;
	this->LoudNoiseTime = 0.000000;
	this->ExposerSpawnTimes = TArray<float>();
	this->ExposerDespawnTimes = TArray<float>();
	this->_exposerInstanceToSpawn = NULL;
	this->_exposerInstances = TArray<ACamperExposerInstance*>();
	this->_interiorZone = NULL;
}
