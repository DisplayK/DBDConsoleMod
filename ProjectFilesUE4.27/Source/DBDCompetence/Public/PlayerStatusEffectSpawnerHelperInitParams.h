#pragma once

#include "CoreMinimal.h"
#include "StatusEffectSpawnData.h"
#include "PlayerStatusEffectSpawnerHelperInitParams.generated.h"

class ADBDPlayer;
class UObject;
class UGameplayModifierContainer;

USTRUCT(BlueprintType)
struct FPlayerStatusEffectSpawnerHelperInitParams
{
	GENERATED_BODY()

public:
	UPROPERTY()
	UObject* WorldContextObject;

	UPROPERTY()
	ADBDPlayer* OriginatingPlayer;

	UPROPERTY(Export)
	UGameplayModifierContainer* OriginatingEffect;

	UPROPERTY()
	TArray<FStatusEffectSpawnData> EffectsToSpawn;

public:
	DBDCOMPETENCE_API FPlayerStatusEffectSpawnerHelperInitParams();
};

FORCEINLINE uint32 GetTypeHash(const FPlayerStatusEffectSpawnerHelperInitParams) { return 0; }
