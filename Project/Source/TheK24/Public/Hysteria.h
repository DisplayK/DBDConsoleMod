#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "Hysteria.generated.h"

class UHysteriaObliviousEffect;
class ACamperPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UHysteria : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _obliviousEffectDuration;

	UPROPERTY(EditDefaultsOnly)
	float _perkCooldownDuration;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UHysteriaObliviousEffect> _obliviousEffectClass;

	UPROPERTY(Transient, Export)
	TMap<ACamperPlayer*, UHysteriaObliviousEffect*> _obliviousEffectPerSurvivorMap;

public:
	UHysteria();
};

FORCEINLINE uint32 GetTypeHash(const UHysteria) { return 0; }
