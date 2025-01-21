#pragma once

#include "CoreMinimal.h"
#include "BaseLingeringStatusEffect.h"
#include "TunableStat.h"
#include "TwinAOELingeringStatusEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UTwinAOELingeringStatusEffect : public UBaseLingeringStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FTunableStat _shriekingRange;

private:
	UFUNCTION()
	void Authority_OnInRangeChanged(const bool inRange);

public:
	UTwinAOELingeringStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UTwinAOELingeringStatusEffect) { return 0; }
