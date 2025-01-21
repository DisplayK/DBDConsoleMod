#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "CalmIntermittentFakeTerrorRadiusEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UCalmIntermittentFakeTerrorRadiusEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _fakeTerrorRadiusDuration;

	UPROPERTY(EditDefaultsOnly)
	float _fakeTerrorRadiusIntermittenceMin;

	UPROPERTY(EditDefaultsOnly)
	float _fakeTerrorRadiusIntermittenceMax;

public:
	UCalmIntermittentFakeTerrorRadiusEffect();
};

FORCEINLINE uint32 GetTypeHash(const UCalmIntermittentFakeTerrorRadiusEffect) { return 0; }
