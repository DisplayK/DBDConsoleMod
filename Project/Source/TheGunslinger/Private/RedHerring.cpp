#include "RedHerring.h"
#include "Net/UnrealNetwork.h"

class AGenerator;

void URedHerring::OnRep_MarkedGenerator(AGenerator* oldMarkedGenerator)
{

}

void URedHerring::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(URedHerring, _markedGenerator);
}

URedHerring::URedHerring()
{
	this->_generatorBeingRepaired = NULL;
	this->_markedGenerator = NULL;
	this->_secondsToActivatePerk = 0.000000;
	this->_loudNoiseTriggeredNotifyTime = 0.000000;
	this->_cooldownLevels = 0.000000;
}
