#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Lithe.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class ULithe : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _exhaustedStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _movementSpeedStatusEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _movementSpeedPercentage;

	UPROPERTY(EditDefaultsOnly)
	float _movementSpeedDuration;

public:
	ULithe();
};

FORCEINLINE uint32 GetTypeHash(const ULithe) { return 0; }
