#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Overcome.generated.h"

class UActivatableExhaustedEffect;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UOvercome : public UPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _exhaustionDuration;

private:
	UPROPERTY(EditDefaultsOnly)
	float _injuredModifiedMovementSpeedBurstDurationWindow;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UActivatableExhaustedEffect> _exhaustedEffectToImpose;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _injuredModifiedMovementSpeedBurstStatusEffectToImpose;

	UPROPERTY(Transient, Export)
	UActivatableExhaustedEffect* _exhaustedEffect;

	UPROPERTY(Transient, Export)
	UStatusEffect* _injuredModifiedMovementSpeedBurstStatusEffect;

public:
	UOvercome();
};

FORCEINLINE uint32 GetTypeHash(const UOvercome) { return 0; }
