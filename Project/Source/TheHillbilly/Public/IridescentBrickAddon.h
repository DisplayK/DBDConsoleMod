#pragma once

#include "CoreMinimal.h"
#include "OnEventBaseAddon.h"
#include "IridescentBrickAddon.generated.h"

class UStatusEffect;

UCLASS(meta=(BlueprintSpawnableComponent))
class UIridescentBrickAddon : public UOnEventBaseAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient, Export)
	UStatusEffect* _undetectableStatusEffect;

public:
	UIridescentBrickAddon();
};

FORCEINLINE uint32 GetTypeHash(const UIridescentBrickAddon) { return 0; }
