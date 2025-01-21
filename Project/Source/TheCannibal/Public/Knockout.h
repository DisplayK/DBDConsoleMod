#pragma once

#include "CoreMinimal.h"
#include "ForAllSurvivorsStatusEffectImposer.h"
#include "Perk.h"
#include "Knockout.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UKnockout : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _slowAndBlindDuration;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _crawlSpeedPenalty;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _auraDisruptionRange;

	UPROPERTY(EditDefaultsOnly)
	FForAllSurvivorsStatusEffectImposer _slowAndBlindEffectImposer;

	UPROPERTY(EditDefaultsOnly)
	FForAllSurvivorsStatusEffectImposer _hideAuraEffectImposer;

public:
	UKnockout();
};

FORCEINLINE uint32 GetTypeHash(const UKnockout) { return 0; }
