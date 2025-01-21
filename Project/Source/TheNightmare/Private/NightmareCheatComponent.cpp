#include "NightmareCheatComponent.h"
#include "Net/UnrealNetwork.h"

void UNightmareCheatComponent::OnRep_AllowWakeUpAnyClock()
{

}

void UNightmareCheatComponent::DBD_AllowWakeUpAtAnyClock(bool allow)
{

}

void UNightmareCheatComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(UNightmareCheatComponent, _allowWakeUpAnyClock);
}

UNightmareCheatComponent::UNightmareCheatComponent()
{
	this->_allowWakeUpAnyClock = false;
}
