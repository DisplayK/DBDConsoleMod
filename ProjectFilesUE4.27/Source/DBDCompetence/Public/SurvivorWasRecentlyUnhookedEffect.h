#pragma once

#include "CoreMinimal.h"
#include "StatusEffect.h"
#include "DBDTunableRowHandle.h"
#include "SurvivorWasRecentlyUnhookedEffect.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class USurvivorWasRecentlyUnhookedEffect : public UStatusEffect
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _survivorWasRecentlyUnhookedDuration;

public:
	USurvivorWasRecentlyUnhookedEffect();
};

FORCEINLINE uint32 GetTypeHash(const USurvivorWasRecentlyUnhookedEffect) { return 0; }
