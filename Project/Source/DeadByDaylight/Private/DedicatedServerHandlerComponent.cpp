#include "DedicatedServerHandlerComponent.h"
#include "EDBDScoreTypes.h"
#include "GameplayTagContainer.h"
#include "GameEventData.h"

class AActor;

void UDedicatedServerHandlerComponent::ReceiveGameEvent(EDBDScoreTypes scoreType, float amount, AActor* instigator, AActor* target)
{

}

void UDedicatedServerHandlerComponent::OnGameEvent(FGameplayTag gameEventType, const FGameEventData& gameEventData)
{

}

UDedicatedServerHandlerComponent::UDedicatedServerHandlerComponent()
{
	this->_coreRituals = TArray<FDailyRitualInstance>();
}
