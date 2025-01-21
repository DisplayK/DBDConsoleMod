#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "KavanaghsLastBreathAddon.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UKavanaghsLastBreathAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _blindnessEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _maxBlindnessRange;

	UPROPERTY(EditDefaultsOnly)
	float _blindedEffectDuration;

public:
	UKavanaghsLastBreathAddon();
};

FORCEINLINE uint32 GetTypeHash(const UKavanaghsLastBreathAddon) { return 0; }
