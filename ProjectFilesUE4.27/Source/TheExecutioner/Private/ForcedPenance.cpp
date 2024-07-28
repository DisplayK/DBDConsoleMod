#include "ForcedPenance.h"
#include "Net/UnrealNetwork.h"

void UForcedPenance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UForcedPenance, _camperObliviousEffects);
	DOREPLIFETIME(UForcedPenance, _camperBrokenEffects);
}

UForcedPenance::UForcedPenance()
{
	this->_perkActivationDuration = 0.000000;
	this->_applyOblivious = true;
	this->_applyBroken = false;
	this->_camperObliviousEffects = TArray<UStatusEffect*>();
	this->_camperBrokenEffects = TArray<UStatusEffect*>();
}
