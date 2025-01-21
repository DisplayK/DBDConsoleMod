#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_K28Power_15.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K28Power_15 : public UOnEventBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<UStatusEffect>> _survivorImposedEffectClasses;

	UPROPERTY(EditDefaultsOnly)
	float _statusEffectTime;

public:
	UAddon_K28Power_15();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K28Power_15) { return 0; }
