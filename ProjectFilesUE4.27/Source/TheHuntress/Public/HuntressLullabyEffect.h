#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "HuntressLullabyEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UHuntressLullabyEffect : public UStatusEffect
{
	GENERATED_BODY()

public:
	UHuntressLullabyEffect();
};

FORCEINLINE uint32 GetTypeHash(const UHuntressLullabyEffect) { return 0; }
