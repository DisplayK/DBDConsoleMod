#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "K30P01.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK30_API UK30P01 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _revealRange;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _revealToKillerEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _revealDuration;

public:
	UK30P01();
};

FORCEINLINE uint32 GetTypeHash(const UK30P01) { return 0; }
