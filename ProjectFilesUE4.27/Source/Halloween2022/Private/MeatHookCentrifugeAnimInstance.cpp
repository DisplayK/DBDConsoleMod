#include "MeatHookCentrifugeAnimInstance.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

void UMeatHookCentrifugeAnimInstance::PlayerNoLongerOnHook(const FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void UMeatHookCentrifugeAnimInstance::PlayerHooked(const FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

UMeatHookCentrifugeAnimInstance::UMeatHookCentrifugeAnimInstance()
{
	this->_animationLength = 10.000000;
}
