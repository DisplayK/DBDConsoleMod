#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Templates/SubclassOf.h"
#include "FragileWheezeAddon.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UFragileWheezeAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UStatusEffect> _mangledEffectClass;

public:
	UFragileWheezeAddon();
};

FORCEINLINE uint32 GetTypeHash(const UFragileWheezeAddon) { return 0; }
