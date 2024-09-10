#pragma once

#include "CoreMinimal.h"
#include "PlayerStatusEffectSpawnerHelper.h"
#include "Perk.h"
#include "StatusEffectSpawnData.h"
#include "BoilOverPerk.generated.h"

class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UBoilOverPerk : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TArray<FStatusEffectSpawnData> _effectsToSpawn;

	UPROPERTY(Transient)
	FPlayerStatusEffectSpawnerHelper _spawnerHelper;

	UPROPERTY(EditDefaultsOnly)
	float _additionnalWigglingProgressWhenFalling;

	UPROPERTY(EditDefaultsOnly)
	float _greatHeightsValue;

private:
	UFUNCTION()
	void Authority_OnWiggleEnd();

	UFUNCTION()
	void Authority_OnPlayerPickedUpEnd(ADBDPlayer* picker);

public:
	UBoilOverPerk();
};

FORCEINLINE uint32 GetTypeHash(const UBoilOverPerk) { return 0; }
