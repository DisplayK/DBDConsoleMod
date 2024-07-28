#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "AlertKillerRevealEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAlertKillerRevealEffect : public UStatusEffect
{
	GENERATED_BODY()

public:
	UAlertKillerRevealEffect();
};

FORCEINLINE uint32 GetTypeHash(const UAlertKillerRevealEffect) { return 0; }
