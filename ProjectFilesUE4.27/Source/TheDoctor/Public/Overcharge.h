#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "FastTimer.h"
#include "Overcharge.generated.h"

class UCurveFloat;
class AGenerator;

UCLASS(meta=(BlueprintSpawnableComponent))
class UOvercharge : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _skillCheckFailurePenalty;

	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _regressionRateMultiplierCurve;

	UPROPERTY(Transient)
	TMap<AGenerator*, FFastTimer> _overchargedGeneratorTimers;

	UPROPERTY(Transient)
	TMap<AGenerator*, uint64> _gameplayModifierHandles;

public:
	UOvercharge();
};

FORCEINLINE uint32 GetTypeHash(const UOvercharge) { return 0; }
