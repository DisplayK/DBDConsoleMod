#pragma once

#include "CoreMinimal.h"
#include "K28KillerExitLockerInteraction.h"
#include "AnimationMontageDescriptor.h"
#include "K28KillerExitLockerWithSurvivorInteraction.generated.h"

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UK28KillerExitLockerWithSurvivorInteraction : public UK28KillerExitLockerInteraction
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	float _waitTimeBeforeSettingIntoCarryState;

	UPROPERTY(EditDefaultsOnly)
	FAnimationMontageDescriptor _montageFromTeleportation;

	UPROPERTY(EditDefaultsOnly)
	FAnimationMontageDescriptor _montageFromAbduction;

public:
	UK28KillerExitLockerWithSurvivorInteraction();
};

FORCEINLINE uint32 GetTypeHash(const UK28KillerExitLockerWithSurvivorInteraction) { return 0; }
