#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "KillerConditionalSpeedCurveEffect.generated.h"

class UCurveFloat;

UCLASS(meta=(BlueprintSpawnableComponent))
class DBDCOMPETENCE_API UKillerConditionalSpeedCurveEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* _speedCurve;

public:
	UKillerConditionalSpeedCurveEffect();
};

FORCEINLINE uint32 GetTypeHash(const UKillerConditionalSpeedCurveEffect) { return 0; }
