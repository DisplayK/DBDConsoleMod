#pragma once

#include "CoreMinimal.h"
#include "PounceAttackOpenSubstate.h"
#include "BlightDashAttackOpenSubstate.generated.h"

UCLASS()
class THEBLIGHT_API UBlightDashAttackOpenSubstate : public UPounceAttackOpenSubstate
{
	GENERATED_BODY()

public:
	UBlightDashAttackOpenSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UBlightDashAttackOpenSubstate) { return 0; }
