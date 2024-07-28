#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Addon_TheBlight_13.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_TheBlight_13 : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _speedIncreasePerDash;

public:
	UAddon_TheBlight_13();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_TheBlight_13) { return 0; }
