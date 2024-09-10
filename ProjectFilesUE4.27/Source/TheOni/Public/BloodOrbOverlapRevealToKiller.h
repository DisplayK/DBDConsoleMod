#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "BloodOrbOverlapRevealToKiller.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UBloodOrbOverlapRevealToKiller : public UStatusEffect
{
	GENERATED_BODY()

public:
	UBloodOrbOverlapRevealToKiller();
};

FORCEINLINE uint32 GetTypeHash(const UBloodOrbOverlapRevealToKiller) { return 0; }
