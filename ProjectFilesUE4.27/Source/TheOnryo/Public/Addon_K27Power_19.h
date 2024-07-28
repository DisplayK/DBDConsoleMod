#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_K27Power_19.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K27Power_19 : public UOnEventBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _distanceFromSurvivorToTVToRevealAura;

	UPROPERTY(EditDefaultsOnly)
	float _heightOffsetLowerBoundToRevealAura;

	UPROPERTY(EditDefaultsOnly)
	float _heightOffsetUpperBoundToRevealAura;

	UPROPERTY(EditDefaultsOnly)
	float _survivorAuraRevealDuration;

	UPROPERTY(EditDefaultsOnly)
	bool _revealSurvivorsAroundPoweredTVs;

	UPROPERTY(EditDefaultsOnly)
	bool _revealSurvivorsAroundTurnedOffTVs;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _timedRevealToKillerEffect;

public:
	UAddon_K27Power_19();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K27Power_19) { return 0; }
