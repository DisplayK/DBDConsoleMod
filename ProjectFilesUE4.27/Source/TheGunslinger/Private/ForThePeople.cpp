#include "ForThePeople.h"
#include "Net/UnrealNetwork.h"

class ACamperPlayer;

void UForThePeople::Server_OnActionInputPressed_Implementation()
{

}

bool UForThePeople::Server_OnActionInputPressed_Validate()
{
	return true;
}

void UForThePeople::OnRep_SetIsHealStartedOnServer() const
{

}

void UForThePeople::Multicast_OnHealAbilityUsed_Implementation(ACamperPlayer* healingSurvivor, ACamperPlayer* healedSurvivor)
{

}

void UForThePeople::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UForThePeople, _isHealStartedOnServer);
}

UForThePeople::UForThePeople()
{
	this->_isHealStartedOnServer = false;
	this->_brokenEffectDurations = 0.000000;
}
