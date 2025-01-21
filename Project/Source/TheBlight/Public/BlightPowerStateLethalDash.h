#pragma once

#include "CoreMinimal.h"
#include "BlightPowerStateDash.h"
#include "SecondaryInteractionProperties.h"
#include "BlightPowerStateLethalDash.generated.h"

UCLASS()
class UBlightPowerStateLethalDash : public UBlightPowerStateDash
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	FSecondaryInteractionProperties _secondaryInteractionProperties;

	UPROPERTY(EditAnywhere)
	bool _smashBreakables;

public:
	UBlightPowerStateLethalDash();
};

FORCEINLINE uint32 GetTypeHash(const UBlightPowerStateLethalDash) { return 0; }
