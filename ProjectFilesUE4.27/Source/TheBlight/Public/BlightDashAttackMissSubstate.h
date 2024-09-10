#pragma once

#include "CoreMinimal.h"
#include "PounceAttackMissSubstate.h"
#include "BlightDashAttackMissSubstate.generated.h"

UCLASS()
class THEBLIGHT_API UBlightDashAttackMissSubstate : public UPounceAttackMissSubstate
{
	GENERATED_BODY()

public:
	UBlightDashAttackMissSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UBlightDashAttackMissSubstate) { return 0; }
