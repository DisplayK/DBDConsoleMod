#pragma once

#include "CoreMinimal.h"
#include "PounceAttackSuccessSubstate.h"
#include "BlightDashAttackSuccessSubstate.generated.h"

UCLASS()
class THEBLIGHT_API UBlightDashAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
	GENERATED_BODY()

public:
	UBlightDashAttackSuccessSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UBlightDashAttackSuccessSubstate) { return 0; }
