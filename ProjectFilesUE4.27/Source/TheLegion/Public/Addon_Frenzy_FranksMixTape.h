#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "BaseFrenzyMixtapeAddon.h"
#include "Addon_Frenzy_FranksMixTape.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class THELEGION_API UAddon_Frenzy_FranksMixTape : public UBaseFrenzyMixtapeAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _statusEffectFranksWalls;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _statusEffectFranksGenerators;

public:
	UAddon_Frenzy_FranksMixTape();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_Frenzy_FranksMixTape) { return 0; }
