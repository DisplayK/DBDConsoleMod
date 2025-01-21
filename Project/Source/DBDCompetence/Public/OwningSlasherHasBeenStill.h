#pragma once

#include "CoreMinimal.h"
#include "GameplayModifierCondition.h"
#include "OwningSlasherHasBeenStill.generated.h"

UCLASS(BlueprintType, meta=(BlueprintSpawnableComponent))
class UOwningSlasherHasBeenStill : public UGameplayModifierCondition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	float _secondsOfStillnessRequired;

public:
	UFUNCTION(BlueprintCallable)
	float GetSecondsOfStillnessRequired();

public:
	UOwningSlasherHasBeenStill();
};

FORCEINLINE uint32 GetTypeHash(const UOwningSlasherHasBeenStill) { return 0; }
