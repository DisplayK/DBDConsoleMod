#pragma once

#include "CoreMinimal.h"
#include "BlightPowerState.h"
#include "BlightPowerStateCooldown.generated.h"

UCLASS()
class UBlightPowerStateCooldown : public UBlightPowerState
{
	GENERATED_BODY()

public:
	UBlightPowerStateCooldown();
};

FORCEINLINE uint32 GetTypeHash(const UBlightPowerStateCooldown) { return 0; }
