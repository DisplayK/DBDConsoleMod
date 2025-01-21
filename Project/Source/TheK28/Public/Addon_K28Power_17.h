#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_K28Power_17.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K28Power_17 : public UOnEventBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _survivorImposedEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _statusEffectDuration;

private:
	UFUNCTION()
	void Authority_OnIntroComplete();

public:
	UAddon_K28Power_17();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K28Power_17) { return 0; }
