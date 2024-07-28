#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Components/ActorComponent.h"
#include "GameEventData.h"
#include "LegionSurvivorAnalyticsComponent.generated.h"

class UGameEventDispatcher;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class ULegionSurvivorAnalyticsComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	void SetGameEventDispatcher(UGameEventDispatcher* gameEventDispatcher);

private:
	UFUNCTION()
	void OnGameEventDispatched(FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	ULegionSurvivorAnalyticsComponent();
};

FORCEINLINE uint32 GetTypeHash(const ULegionSurvivorAnalyticsComponent) { return 0; }
