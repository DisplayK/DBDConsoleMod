#include "Deathbound.h"
#include "Net/UnrealNetwork.h"

void UDeathbound::OnRep_SurvivorsToReveal()
{

}

float UDeathbound::GetRevealLocationDuration() const
{
	return 0.0f;
}

void UDeathbound::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UDeathbound, _survivorsToReveal);
}

UDeathbound::UDeathbound()
{
	this->_distanceFromRescuedSurvivorForOblivious = 0.000000;
	this->_activationDuration = 0.000000;
	this->_rescueDistanceFromKillerToActivate = 0.000000;
	this->_revealLocationDuration = 0.000000;
	this->_unhook = false;
	this->_fromDyingState = true;
	this->_obliviousStatusEffects = TArray<UStatusEffect*>();
	this->_survivorsToReveal = TArray<ADBDPlayer*>();
	this->_obliviousEffectClass = NULL;
}
