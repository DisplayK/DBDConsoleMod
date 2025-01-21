#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "TwinBaseKillerInstinctEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UTwinBaseKillerInstinctEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FTunableStat _lullabyRange;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _lingerDuration;

private:
	UFUNCTION()
	void Authority_OnInRangeChanged(const bool inRange);

public:
	UTwinBaseKillerInstinctEffect();
};

FORCEINLINE uint32 GetTypeHash(const UTwinBaseKillerInstinctEffect) { return 0; }
