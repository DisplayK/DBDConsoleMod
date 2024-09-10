#include "GuardFlag.h"
#include "Net/UnrealNetwork.h"
#include "Engine/EngineTypes.h"

class UPrimitiveComponent;
class ADBDPlayer;
class AActor;

void AGuardFlag::OnRep_HuntedSurvivor()
{

}

void AGuardFlag::Multicast_OnCamperCapturedFlag_Implementation(ADBDPlayer* huntedSurvivor)
{

}

ADBDPlayer* AGuardFlag::GetHuntedSurvivor() const
{
	return NULL;
}

float AGuardFlag::GetActivationTimeLeft() const
{
	return 0.0f;
}

void AGuardFlag::Authority_OnBeginOverlap(UPrimitiveComponent* overlappedComponent, AActor* other, UPrimitiveComponent* otherComp, int32 otherBodyIndex, bool bFromSweep, const FHitResult& hitResult)
{

}

void AGuardFlag::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AGuardFlag, _owningGuard);
	DOREPLIFETIME(AGuardFlag, _huntedSurvivor);
}

AGuardFlag::AGuardFlag()
{
	this->_flagPickupHitbox = NULL;
	this->_owningGuard = NULL;
	this->_huntedSurvivor = NULL;
	this->_flagPickupEnduranceEffectClass = NULL;
	this->_flagPickupHasteEffectClass = NULL;
	this->_clientHuntedSurvivor = NULL;
}
