#include "RepressedAlliance.h"
#include "Net/UnrealNetwork.h"

class UInteractionDefinition;
class AGenerator;

void URepressedAlliance::Server_OnActionInputPressed_Implementation(AGenerator* generator)
{

}

bool URepressedAlliance::Server_OnActionInputPressed_Validate(AGenerator* generator)
{
	return true;
}

void URepressedAlliance::OnRep_CurrentRepairInteractionWithAbility(UInteractionDefinition* oldRepairInteraction)
{

}

void URepressedAlliance::OnRep_BlockedGenerator(AGenerator* oldGenerator)
{

}

void URepressedAlliance::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(URepressedAlliance, _currentRepairInteractionWithAbility);
	DOREPLIFETIME(URepressedAlliance, _blockedGenerator);
}

URepressedAlliance::URepressedAlliance()
{
	this->_repairTimesNeededToActivate = 0.000000;
	this->_generatorBlockDuration = 0.000000;
	this->_currentRepairInteractionWithAbility = NULL;
	this->_blockedGenerator = NULL;
}
