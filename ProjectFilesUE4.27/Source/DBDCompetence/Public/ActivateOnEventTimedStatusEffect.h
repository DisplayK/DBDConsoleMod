#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "ActivateOnEventTimedStatusEffect.generated.h"

class UActivateOnEventBaseActivationStrategy;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UActivateOnEventTimedStatusEffect : public UStatusEffect
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UActivateOnEventBaseActivationStrategy> _activationStrategyClass;

private:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTagContainer _eventsToActivateOn;

	UPROPERTY()
	UActivateOnEventBaseActivationStrategy* _activationStrategy;

public:
	UActivateOnEventTimedStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UActivateOnEventTimedStatusEffect) { return 0; }
