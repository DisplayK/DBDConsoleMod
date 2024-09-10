#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "ZombiesInterestEventManager.generated.h"

class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class UZombiesInterestEventManager : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _zombieInterestEvents;

private:
	UFUNCTION()
	void Authority_OnLoudNoiseTriggered(AActor* originator, AActor* instigatingActor, FVector location, bool shouldTrack, float& audibleRange, bool isQuickAction, bool isDeceivingNoise);

public:
	UZombiesInterestEventManager();
};

FORCEINLINE uint32 GetTypeHash(const UZombiesInterestEventManager) { return 0; }
