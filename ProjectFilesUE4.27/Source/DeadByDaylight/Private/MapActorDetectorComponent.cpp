#include "MapActorDetectorComponent.h"
#include "Engine/EngineTypes.h"

class UPrimitiveComponent;
class AActor;

void UMapActorDetectorComponent::SetDetectionPrimitive(UPrimitiveComponent* primitive)
{

}

void UMapActorDetectorComponent::OnOverlapEnter(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

}

UMapActorDetectorComponent::UMapActorDetectorComponent()
{
	this->CollectedCategories = TArray<EMapActorCategory>();
	this->_primitive = NULL;
}
