#pragma once

#include "CoreMinimal.h"
#include "HillbillyChainsawAttackSuccessSubstate.h"
#include "CannibalChainsawAttackSuccessSubstate.generated.h"

UCLASS()
class THECANNIBAL_API UCannibalChainsawAttackSuccessSubstate : public UHillbillyChainsawAttackSuccessSubstate
{
	GENERATED_BODY()

public:
	UCannibalChainsawAttackSuccessSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UCannibalChainsawAttackSuccessSubstate) { return 0; }
