#include "MaxEventCountQEEvaluator.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

void UMaxEventCountQEEvaluator::OnStopEventCount(const FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void UMaxEventCountQEEvaluator::OnIncrementEventCount(const FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

void UMaxEventCountQEEvaluator::OnDecrementEventCount(const FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

UMaxEventCountQEEvaluator::UMaxEventCountQEEvaluator()
{
	this->_incrementEventCount = TArray<FGameplayTag>();
	this->_decrementEventCount = TArray<FGameplayTag>();
	this->_stopEventCount = TArray<FGameplayTag>();
}
