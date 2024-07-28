#include "EffectsLocator.h"

class AActor;

void AEffectsLocator::OnLeaveCollisionArea(AActor* OverlappedActor, AActor* OtherActor)
{

}

void AEffectsLocator::OnEnterCollisionArea(AActor* OverlappedActor, AActor* OtherActor)
{

}

AEffectsLocator::AEffectsLocator()
{
	this->AffectedActors = TArray<FEffectsLocatorTargets>();
	this->ActorCaptureRadius = 200.000000;
	this->_encountered = TSet<AActor*>();
}
