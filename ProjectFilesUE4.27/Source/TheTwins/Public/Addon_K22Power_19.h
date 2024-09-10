#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_K22Power_19.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K22Power_19 : public UOnEventBaseAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	float _undetectableDuration;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _undetectableEffectClass;

public:
	UAddon_K22Power_19();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K22Power_19) { return 0; }
