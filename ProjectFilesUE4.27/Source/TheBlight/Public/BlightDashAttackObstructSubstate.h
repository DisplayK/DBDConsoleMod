#pragma once

#include "CoreMinimal.h"
#include "PounceAttackObstructSubstate.h"
#include "BlightDashAttackObstructSubstate.generated.h"

UCLASS()
class THEBLIGHT_API UBlightDashAttackObstructSubstate : public UPounceAttackObstructSubstate
{
	GENERATED_BODY()

public:
	UBlightDashAttackObstructSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UBlightDashAttackObstructSubstate) { return 0; }
