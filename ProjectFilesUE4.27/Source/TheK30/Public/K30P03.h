#pragma once

#include "CoreMinimal.h"
#include "Perk.h"
#include "Templates/SubclassOf.h"
#include "K30P03.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class THEK30_API UK30P03 : public UPerk
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _exposedEffectClass;

	UPROPERTY(EditDefaultsOnly)
	float _cooldownTime;

public:
	UK30P03();
};

FORCEINLINE uint32 GetTypeHash(const UK30P03) { return 0; }
