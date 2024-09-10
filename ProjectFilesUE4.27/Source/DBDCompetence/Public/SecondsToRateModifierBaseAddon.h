#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "GameplayTagContainer.h"
#include "TunableStat.h"
#include "SecondsToRateModifierBaseAddon.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class USecondsToRateModifierBaseAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FTunableStat _chargeRate;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _maxCharge;

	UPROPERTY(EditDefaultsOnly)
	float _secondsToAdd;

	UPROPERTY(EditDefaultsOnly)
	FGameplayTag _rateModifierTagToCompute;

public:
	USecondsToRateModifierBaseAddon();
};

FORCEINLINE uint32 GetTypeHash(const USecondsToRateModifierBaseAddon) { return 0; }
