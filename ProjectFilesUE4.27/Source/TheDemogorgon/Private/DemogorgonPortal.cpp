#include "DemogorgonPortal.h"
#include "Engine/EngineTypes.h"
#include "Perception/AIPerceptionStimuliSourceComponent.h"

class UChargeableComponent;
class UPrimitiveComponent;
class ADBDPlayer;
class AActor;

void ADemogorgonPortal::OnPortalDestroyed(ADBDPlayer* player)
{

}

void ADemogorgonPortal::OnEndOverlapPortalArea(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex)
{

}

void ADemogorgonPortal::OnBeginOverlapPortalArea(UPrimitiveComponent* overlappedComponent, AActor* otherActor, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& sweepResult)
{

}

bool ADemogorgonPortal::IsTargeted() const
{
	return false;
}

void ADemogorgonPortal::Authority_StopDestroyingPlayers()
{

}

void ADemogorgonPortal::Authority_OnTeleportChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete)
{

}

void ADemogorgonPortal::Authority_OnDestroyChargePercentChanged(UChargeableComponent* chargeableComponent, float percentCompletionChange, float totalPercentComplete)
{

}

ADemogorgonPortal::ADemogorgonPortal()
{
	this->_portalAreaCollider = NULL;
	this->_destroyChargeable = NULL;
	this->_teleportChargeable = NULL;
	this->_portalState = EDemogorgonPortalState::Hidden;
	this->_portalIdleSound = NULL;
	this->_portalDestroyingStart = NULL;
	this->_portalTeleportingSound = NULL;
	this->_destroyParticleSystem = NULL;
	this->_destroyDuration = 0.000000;
	this->_destroyingPlayers = TArray<ADBDPlayer*>();
	this->_perceptionStimuliComponent = CreateDefaultSubobject<UAIPerceptionStimuliSourceComponent>(TEXT("AIPerceptionStimuliSourceComponent"));
}
