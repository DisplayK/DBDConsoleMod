#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Starstruck.generated.h"

class ACamperPlayer;
class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UStarstruck : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _exposedEffectDuration;

	UPROPERTY(EditDefaultsOnly)
	float _perkCooldownDuration;

	UPROPERTY(Transient, Export)
	TMap<TWeakObjectPtr<ACamperPlayer>, TWeakObjectPtr<UStatusEffect>> _camperExposedEffects;

public:
	UStarstruck();
};

FORCEINLINE uint32 GetTypeHash(const UStarstruck) { return 0; }
