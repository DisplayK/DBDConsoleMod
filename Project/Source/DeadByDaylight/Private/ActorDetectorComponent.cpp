#include "ActorDetectorComponent.h"
#include "Engine/EngineTypes.h"

class UPrimitiveComponent;
class AActor;

void UActorDetectorComponent::SetDetectionPrimitive(UPrimitiveComponent* primitive)
{

}

void UActorDetectorComponent::OnOverlapEnter(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

}

UActorDetectorComponent::UActorDetectorComponent()
{
	this->CollectedTypes = TArray<UClass*>();
	this->_primitive = NULL;
}
