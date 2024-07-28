#pragma once

#include "CoreMinimal.h"
#include "HillbillyChainsawAttackHittingSubstate.h"
#include "CannibalChainsawAttackHittingSubstate.generated.h"

UCLASS()
class THECANNIBAL_API UCannibalChainsawAttackHittingSubstate : public UHillbillyChainsawAttackHittingSubstate
{
	GENERATED_BODY()

public:
	UCannibalChainsawAttackHittingSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UCannibalChainsawAttackHittingSubstate) { return 0; }
