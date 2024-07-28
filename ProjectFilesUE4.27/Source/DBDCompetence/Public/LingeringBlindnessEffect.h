#pragma once

#include "CoreMinimal.h"
#include "AdjustableCooldownStatusEffect.h"
#include "GameplayTagContainer.h"
#include "LingeringBlindnessEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class ULingeringBlindnessEffect : public UAdjustableCooldownStatusEffect
{
	GENERATED_BODY()

public:
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag startBlindnessEventTag;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag endBlindnessEventTag;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _state;

public:
	ULingeringBlindnessEffect();
};

FORCEINLINE uint32 GetTypeHash(const ULingeringBlindnessEffect) { return 0; }
