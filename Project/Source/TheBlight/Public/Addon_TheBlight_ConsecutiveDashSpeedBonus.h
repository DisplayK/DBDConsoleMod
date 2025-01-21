#pragma once

#include "CoreMinimal.h"
#include "ItemAddon.h"
#include "Addon_TheBlight_ConsecutiveDashSpeedBonus.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class UAddon_TheBlight_ConsecutiveDashSpeedBonus : public UItemAddon
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _speedIncreasePerDash;

public:
	UAddon_TheBlight_ConsecutiveDashSpeedBonus();
};

FORCEINLINE uint32 GetTypeHash(const UAddon_TheBlight_ConsecutiveDashSpeedBonus) { return 0; }
