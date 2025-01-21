#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "ForcedPenance.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UForcedPenance : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _perkActivationDuration;

	UPROPERTY(EditDefaultsOnly)
	bool _applyOblivious;

	UPROPERTY(EditDefaultsOnly)
	bool _applyBroken;

	UPROPERTY(Replicated, Transient, Export)
	TArray<UStatusEffect*> _camperObliviousEffects;

	UPROPERTY(Replicated, Transient, Export)
	TArray<UStatusEffect*> _camperBrokenEffects;

public:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

public:
	UForcedPenance();
};

FORCEINLINE uint32 GetTypeHash(const UForcedPenance) { return 0; }
