#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "IridescentCoinAddon.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UIridescentCoinAddon : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(Export)
	UStatusEffect* _exposedStatusEffect;

public:
	UIridescentCoinAddon();
};

FORCEINLINE uint32 GetTypeHash(const UIridescentCoinAddon) { return 0; }
