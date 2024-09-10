#pragma once

#include "CoreMinimal.h"
#include "K30BaseStatusEffectAddon.h"
#include "K30InflictStatusOnDetectedAddon.generated.h"

class ADBDPlayer;

UCLASS(meta=(BlueprintSpawnableComponent))
class UK30InflictStatusOnDetectedAddon : public UK30BaseStatusEffectAddon
{
	GENERATED_BODY()

protected:
	UFUNCTION()
	void Authority_OnDetected(ADBDPlayer* player);

public:
	UK30InflictStatusOnDetectedAddon();
};

FORCEINLINE uint32 GetTypeHash(const UK30InflictStatusOnDetectedAddon) { return 0; }
