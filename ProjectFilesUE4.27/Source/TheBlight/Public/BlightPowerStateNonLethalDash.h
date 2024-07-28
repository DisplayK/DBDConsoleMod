#pragma once

#include "CoreMinimal.h"
#include "BlightPowerStateDash.h"
#include "BlightPowerStateNonLethalDash.generated.h"

UCLASS()
class UBlightPowerStateNonLethalDash : public UBlightPowerStateDash
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	bool _smashBreakables;

public:
	UBlightPowerStateNonLethalDash();
};

FORCEINLINE uint32 GetTypeHash(const UBlightPowerStateNonLethalDash) { return 0; }
