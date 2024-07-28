#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DailyRitualInstance.h"
#include "Components/ActorComponent.h"
#include "GameEventData.h"
#include "EDBDScoreTypes.h"
#include "AtlantaRitualSet.h"
#include "DedicatedServerHandlerComponent.generated.h"

class AActor;

UCLASS(meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UDedicatedServerHandlerComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY()
	FAtlantaRitualSet _atlantaRituals;

	UPROPERTY()
	TArray<FDailyRitualInstance> _coreRituals;

public:
	UFUNCTION()
	void ReceiveGameEvent(EDBDScoreTypes scoreType, float amount, AActor* instigator, AActor* target);

	UFUNCTION()
	void OnGameEvent(FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	UDedicatedServerHandlerComponent();
};

FORCEINLINE uint32 GetTypeHash(const UDedicatedServerHandlerComponent) { return 0; }
