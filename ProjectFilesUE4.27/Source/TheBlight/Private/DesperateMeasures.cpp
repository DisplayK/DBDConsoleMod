#include "DesperateMeasures.h"
#include "Net/UnrealNetwork.h"

void UDesperateMeasures::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UDesperateMeasures, _nbInjuredHookedOrDyingSurvivors);
}

UDesperateMeasures::UDesperateMeasures()
{
	this->_healAndUnhookMultiplier = 0.000000;
	this->_nbInjuredHookedOrDyingSurvivors = 0;
}
