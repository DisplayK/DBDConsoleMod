#pragma once

#include "CoreMinimal.h"
#include "HexPerk.h"
#include "FastTimer.h"
#include "HexRuin.generated.h"

class AGenerator;

UCLASS(meta=(BlueprintSpawnableComponent))
class UHexRuin : public UHexPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	TMap<AGenerator*, FFastTimer> _curseActivationTimers;

	UPROPERTY(EditDefaultsOnly)
	float _regressionModifier;

	UPROPERTY(Transient)
	TMap<AGenerator*, uint64> _gameplayModifierHandles;

private:
	UFUNCTION(BlueprintPure)
	float GetRegressionModifierByLevel(int32 perkLevel) const;

	UFUNCTION()
	void Authority_SetupCurseOnAllGenerators();

public:
	UHexRuin();
};

FORCEINLINE uint32 GetTypeHash(const UHexRuin) { return 0; }
