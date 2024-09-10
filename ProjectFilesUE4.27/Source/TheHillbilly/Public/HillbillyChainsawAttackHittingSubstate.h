#pragma once

#include "CoreMinimal.h"
#include "PounceAttackHittingSubstate.h"
#include "HillbillyChainsawAttackHittingSubstate.generated.h"

UCLASS()
class THEHILLBILLY_API UHillbillyChainsawAttackHittingSubstate : public UPounceAttackHittingSubstate
{
	GENERATED_BODY()

public:
	UHillbillyChainsawAttackHittingSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UHillbillyChainsawAttackHittingSubstate) { return 0; }
