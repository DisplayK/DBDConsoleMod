#pragma once

#include "CoreMinimal.h"
#include "HexPerk.h"
#include "Templates/SubclassOf.h"
#include "DBDPlayerTotemPair.h"
#include "K25P02.generated.h"

class ATotem;
class ADBDPlayer;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK25P02 : public UHexPerk
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _totemAuraRevealRadius;

	UPROPERTY(EditDefaultsOnly)
	bool _totemBlockerHasLifetime;

	UPROPERTY(EditDefaultsOnly)
	float _totemBlockerDuration;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _obliviousStatusEffectClass;

private:
	UPROPERTY(ReplicatedUsing=OnRep_CursedSurvivors, Transient)
	TArray<FDBDPlayerTotemPair> _cursedSurvivors;

	UPROPERTY(Transient)
	TArray<ADBDPlayer*> _hookedSurvivors;

	UPROPERTY(Transient)
	TArray<ATotem*> _previouslyBoundTotems;

	UPROPERTY(Transient)
	FDBDPlayerTotemPair _lastPlayerTotemPair;

private:
	UFUNCTION()
	void OnRep_CursedSurvivors();

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UK25P02();
};

FORCEINLINE uint32 GetTypeHash(const UK25P02) { return 0; }
