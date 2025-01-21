#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ProtectionHitComponent.generated.h"

class ACamperPlayer;

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class DEADBYDAYLIGHT_API UProtectionHitComponent : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TArray<ACamperPlayer*> _nearbyInjuredSurvivors;

public:
	UFUNCTION(BlueprintCallable)
	void Authority_HandleProtectionScoringEvents();

public:
	UProtectionHitComponent();
};

FORCEINLINE uint32 GetTypeHash(const UProtectionHitComponent) { return 0; }
