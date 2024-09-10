#pragma once

#include "CoreMinimal.h"
#include "ActivateOnEventTimedStatusEffect.h"
#include "RestraintRevealToKillerEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class URestraintRevealToKillerEffect : public UActivateOnEventTimedStatusEffect
{
	GENERATED_BODY()

public:
	URestraintRevealToKillerEffect();
};

FORCEINLINE uint32 GetTypeHash(const URestraintRevealToKillerEffect) { return 0; }
