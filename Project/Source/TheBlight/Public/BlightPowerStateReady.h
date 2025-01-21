#pragma once

#include "CoreMinimal.h"
#include "BlightPowerState.h"
#include "BlightPowerStateReady.generated.h"

UCLASS()
class UBlightPowerStateReady : public UBlightPowerState
{
	GENERATED_BODY()

public:
	UBlightPowerStateReady();
};

FORCEINLINE uint32 GetTypeHash(const UBlightPowerStateReady) { return 0; }
