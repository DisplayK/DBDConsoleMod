#pragma once

#include "CoreMinimal.h"
#include "PounceAttackSuccessSubstate.h"
#include "HillbillyChainsawAttackSuccessSubstate.generated.h"

UCLASS()
class THEHILLBILLY_API UHillbillyChainsawAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
	GENERATED_BODY()

public:
	UHillbillyChainsawAttackSuccessSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UHillbillyChainsawAttackSuccessSubstate) { return 0; }
