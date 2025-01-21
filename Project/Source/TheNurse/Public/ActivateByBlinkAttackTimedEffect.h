#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "ActivateByBlinkAttackTimedEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THENURSE_API UActivateByBlinkAttackTimedEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _activationDuration;

public:
	UActivateByBlinkAttackTimedEffect();
};

FORCEINLINE uint32 GetTypeHash(const UActivateByBlinkAttackTimedEffect) { return 0; }
