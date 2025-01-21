#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "RemoveOnOriginatingSurvivorGoneStatusEffect.generated.h"

class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class URemoveOnOriginatingSurvivorGoneStatusEffect : public UStatusEffect
{
	GENERATED_BODY()

protected:
	UFUNCTION()
	void Authority_OnSurvivorRemoved(ACamperPlayer* survivor);

public:
	URemoveOnOriginatingSurvivorGoneStatusEffect();
};

FORCEINLINE uint32 GetTypeHash(const URemoveOnOriginatingSurvivorGoneStatusEffect) { return 0; }
