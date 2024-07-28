#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "K29P03.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK29P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _brokenEffectDuration;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _effectClass;

public:
	UK29P03();
};

FORCEINLINE uint32 GetTypeHash(const UK29P03) { return 0; }
