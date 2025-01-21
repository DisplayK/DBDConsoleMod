#include "GuardPalletSlowingZone.h"
#include "Net/UnrealNetwork.h"

void AGuardPalletSlowingZone::OnRep_LinkedPallet()
{

}

void AGuardPalletSlowingZone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AGuardPalletSlowingZone, _linkedPallet);
}

AGuardPalletSlowingZone::AGuardPalletSlowingZone()
{
	this->_linkedPallet = NULL;
}
