#include "ZombiesInterestEventManager.h"
#include "UObject/NoExportTypes.h"

class AActor;

void UZombiesInterestEventManager::Authority_OnLoudNoiseTriggered(AActor* originator, AActor* instigatingActor, FVector location, bool shouldTrack, float& audibleRange, bool isQuickAction, bool isDeceivingNoise)
{

}

UZombiesInterestEventManager::UZombiesInterestEventManager()
{
	this->_zombieInterestEvents = TArray<FGameplayTag>();
}
