#pragma once

#include "CoreMinimal.h"
#include "PlayerStatusEffectSpawnerHelperInitParams.h"
#include "PlayerStatusEffectSpawnerHelper.generated.h"

class UStatusEffect;

USTRUCT(BlueprintType)
struct FPlayerStatusEffectSpawnerHelper
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	FPlayerStatusEffectSpawnerHelperInitParams _initParams;

	UPROPERTY(Transient, Export)
	TSet<UStatusEffect*> _spawnedEffects;

public:
	DBDCOMPETENCE_API FPlayerStatusEffectSpawnerHelper();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerStatusEffectSpawnerHelper) { return 0; }
