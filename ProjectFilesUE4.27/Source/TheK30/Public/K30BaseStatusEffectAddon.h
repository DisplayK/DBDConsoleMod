#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "K30BaseStatusEffectAddon.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK30BaseStatusEffectAddon : public UItemAddon
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<UStatusEffect>> _baseStatusEffectClasses;

	UPROPERTY(EditDefaultsOnly)
	float _lifetime;

	UPROPERTY(EditDefaultsOnly)
	float _customParam;

	UPROPERTY(EditDefaultsOnly)
	bool _shouldDisplay;

public:
	UK30BaseStatusEffectAddon();
};

FORCEINLINE uint32 GetTypeHash(const UK30BaseStatusEffectAddon) { return 0; }
