#include "HeadOn.h"
#include "Engine/EngineTypes.h"

class UObject;
class ADBDPlayer;
class UPrimitiveComponent;
class AActor;

void UHeadOn::OnPawnOverlapExit(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex)
{

}

void UHeadOn::OnPawnOverlapEnter(UPrimitiveComponent* hitComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{

}

void UHeadOn::OnHeadOnAnimationComplete()
{

}

void UHeadOn::Multicast_TriggerStunOnActor_Implementation(UObject* stunnableInterfaceUObject, ADBDPlayer* stunner)
{

}

bool UHeadOn::CanApplyHeadOnInteraction() const
{
	return false;
}

void UHeadOn::Authority_ActivatePerk()
{

}

UHeadOn::UHeadOn()
{
	this->IsPerformingHeadOn = false;
	this->ExhaustOnlyOnSuccessfulStun = false;
	this->StunKillersEnteringStunZone = false;
	this->_hideDuration = 0.000000;
	this->_locker = NULL;
	this->_stunnableActorsInZone = TArray<AActor*>();
}
