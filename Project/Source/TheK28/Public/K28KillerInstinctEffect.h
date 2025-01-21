#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "Templates/SubclassOf.h"
#include "DBDTunableRowHandle.h"
#include "TunableStat.h"
#include "K28KillerInstinctEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UK28KillerInstinctEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FTunableStat _secondsToLinger;

	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _maxDistanceToApplyRemnantTeleportKillerInstinct;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _lingeringEffectClass;

	UPROPERTY(Export)
	UStatusEffect* _lingeringEffect;

private:
	UFUNCTION()
	void Authority_OnLevelReadyToPlay();

	UFUNCTION()
	void Authority_OnKillerInstinctApplicableChanged(bool active);

public:
	UK28KillerInstinctEffect();
};

FORCEINLINE uint32 GetTypeHash(const UK28KillerInstinctEffect) { return 0; }
