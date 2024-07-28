#include "GameEventForwarderInfo.h"

FGameEventForwarderInfo::FGameEventForwarderInfo()
{
	this->GameEventsToRegister = TArray<FGameplayTag>();
	this->ForwardedEvent = FGameplayTag{};
}
