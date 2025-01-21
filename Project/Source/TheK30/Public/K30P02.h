#pragma once

#include "CoreMinimal.h"
#include "HexPerk.h"
#include "ETotemState.h"
#include "Templates/SubclassOf.h"
#include "K30P02.generated.h"

class ADBDPlayer;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK30_API UK30P02 : public UHexPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	ADBDPlayer* _cursedPlayer;

	UPROPERTY(Transient, Export)
	TArray<UStatusEffect*> _activeStatusEffects;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _screamEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _screamLoudNoiseDuration;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _screamRevealAuraToKillerEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _screamRevealAuraToKillerDuration;

	UPROPERTY(EditDefaultsOnly)
	float _screamInterval;

public:
	UFUNCTION(BlueprintPure)
	float GetScreamInterval() const;

private:
	UFUNCTION()
	void Authority_UncursePlayer();

public:
	UFUNCTION()
	void Authority_OnTotemStateChanged(const ETotemState oldState, const ETotemState newState);

	UFUNCTION()
	void Authority_OnSurvivorFirstScream(ADBDPlayer* player);

public:
	UK30P02();
};

FORCEINLINE uint32 GetTypeHash(const UK30P02) { return 0; }
