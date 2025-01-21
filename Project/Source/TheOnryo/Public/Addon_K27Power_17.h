#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_K27Power_17.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K27Power_17 : public UOnEventBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _survivorImposedEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _survivorInRangeDistance;

	UPROPERTY(EditDefaultsOnly)
	float _hinderedSeconds;

public:
	UAddon_K27Power_17();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K27Power_17) { return 0; }
