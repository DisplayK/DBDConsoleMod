#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "Addon_K28Power_20.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_K28Power_20 : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _survivorImposedEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _effectDuration;

private:
	UFUNCTION()
	void Authority_OnLevelReadyToPlay();

public:
	UAddon_K28Power_20();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_K28Power_20) { return 0; }
