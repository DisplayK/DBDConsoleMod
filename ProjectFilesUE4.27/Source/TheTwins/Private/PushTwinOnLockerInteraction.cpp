#include "PushTwinOnLockerInteraction.h"
#include "Net/UnrealNetwork.h"

class ADBDPlayer;
class AConjoinedTwin;

void UPushTwinOnLockerInteraction::OnTwinSet(AConjoinedTwin* twin)
{

}

void UPushTwinOnLockerInteraction::OnRep_PushTwinOnLockerChargeable()
{

}

void UPushTwinOnLockerInteraction::Authority_OnPlayerInLockerChanged(ADBDPlayer* previousPlayerInLocker, ADBDPlayer* newPlayerInLocker)
{

}

void UPushTwinOnLockerInteraction::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UPushTwinOnLockerInteraction, _pushTwinOnLockerChargeable);
}

UPushTwinOnLockerInteraction::UPushTwinOnLockerInteraction()
{
	this->_pushTwinOnLockerChargeable = NULL;
}
