#pragma once

#include "CoreMinimal.h"
#include "K28KillerExitLockerInteraction.h"
#include "K28KillerExitLockedLockerInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK28KillerExitLockedLockerInteraction : public UK28KillerExitLockerInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _lockbarBreakTimePercentage;

	UPROPERTY(EditDefaultsOnly)
	float _minInteractionTime;

public:
	UK28KillerExitLockedLockerInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK28KillerExitLockedLockerInteraction) { return 0; }
