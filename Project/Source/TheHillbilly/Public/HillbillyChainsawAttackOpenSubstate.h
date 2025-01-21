#pragma once

#include "CoreMinimal.h"
#include "PounceAttackOpenSubstate.h"
#include "HillbillyChainsawAttackOpenSubstate.generated.h"

UCLASS()
class THEHILLBILLY_API UHillbillyChainsawAttackOpenSubstate : public UPounceAttackOpenSubstate
{
	GENERATED_BODY()

public:
	UHillbillyChainsawAttackOpenSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UHillbillyChainsawAttackOpenSubstate) { return 0; }
