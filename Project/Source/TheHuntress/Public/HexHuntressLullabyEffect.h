#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "HexHuntressLullabyEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UHexHuntressLullabyEffect : public UStatusEffect
{
	GENERATED_BODY()

public:
	UHexHuntressLullabyEffect();
};

FORCEINLINE uint32 GetTypeHash(const UHexHuntressLullabyEffect) { return 0; }
