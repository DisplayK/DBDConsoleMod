#include "ThrillingTremors.h"
#include "Net/UnrealNetwork.h"

void UThrillingTremors::OnRep_BlockedGenerators()
{

}

void UThrillingTremors::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UThrillingTremors, _blockedGenerators);
}

UThrillingTremors::UThrillingTremors()
{
	this->_cooldownByLevel = 0;
	this->_durationByLevel = 0.000000;
	this->_disableWhenSurvivorPutDownOrUnhooked = true;
	this->_blockedGenerators = TArray<AGenerator*>();
	this->_revealedGenerators = TArray<AGenerator*>();
}
