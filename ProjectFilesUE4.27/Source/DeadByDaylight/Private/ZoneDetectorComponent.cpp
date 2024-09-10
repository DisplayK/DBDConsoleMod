#include "ZoneDetectorComponent.h"
#include "Engine/EngineTypes.h"

class UPrimitiveComponent;
class AActor;

void UZoneDetectorComponent::OnOverlapExit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{

}

void UZoneDetectorComponent::OnOverlapEnter(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

}

UZoneDetectorComponent::UZoneDetectorComponent()
{
	this->_zones = TArray<UPrimitiveComponent*>();
	this->_tags = TArray<FName>();
}
