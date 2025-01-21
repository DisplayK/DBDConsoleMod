#include "GameEventDispatcher.h"
#include "GameEventDispatcherHandleBP.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

void UGameEventDispatcher::UnregisterListener(const FGameEventDispatcherHandleBP& gameEventDispatcherHandle)
{

}

void UGameEventDispatcher::RemotelyDispatch(const FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void UGameEventDispatcher::RegisterListener(const FGameEventDispatcherHandleBP& gameEventDispatcherHandle)
{

}

void UGameEventDispatcher::LocallyDispatch(const FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void UGameEventDispatcher::Authority_RemotelyDispatch(const FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void UGameEventDispatcher::Authority_AccumulateOngoingGameEvent(const FGameplayTag gameEventType, const FGameEventData& gameEventData, float ongoingWaitTime)
{

}

UGameEventDispatcher::UGameEventDispatcher()
{
	this->_ongoingEvents = TArray<UOngoingGameEvent*>();
}
