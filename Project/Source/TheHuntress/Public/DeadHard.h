#pragma once

#include "CoreMinimal.h"
#include "PlayerStatusEffectSpawnerHelper.h"
#include "Perk.h"
#include "StatusEffectSpawnData.h"
#include "DeadHard.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UDeadHard : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _deadHardCooldownDuration;

	UPROPERTY(EditDefaultsOnly)
	TArray<FStatusEffectSpawnData> _effectsToSpawn;

	UPROPERTY(Transient)
	FPlayerStatusEffectSpawnerHelper _spawnerHelper;

	UPROPERTY(EditDefaultsOnly)
	float _exhaustedCooldownPerLevel;

private:
	UFUNCTION(BlueprintPure)
	float GetExhaustedDuration() const;

public:
	UDeadHard();
};

FORCEINLINE uint32 GetTypeHash(const UDeadHard) { return 0; }
