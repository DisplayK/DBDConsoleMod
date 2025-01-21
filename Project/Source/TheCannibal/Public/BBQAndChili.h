#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "BBQAndChili.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UBBQAndChili : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _auraRevealDuration;

	UPROPERTY(EditDefaultsOnly, EditFixedSize)
	float _minDistanceToHookedPlayerByLevel;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _survivorImposedEffectClass;

public:
	UFUNCTION(BlueprintCallable)
	float GetMinDistanceToKillerByLevel(int32 level);

public:
	UBBQAndChili();
};

FORCEINLINE uint32 GetTypeHash(const UBBQAndChili) { return 0; }
