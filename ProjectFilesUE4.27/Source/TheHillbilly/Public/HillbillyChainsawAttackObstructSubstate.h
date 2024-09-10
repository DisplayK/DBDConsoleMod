#pragma once

#include "CoreMinimal.h"
#include "PounceAttackObstructSubstate.h"
#include "HillbillyChainsawAttackObstructSubstate.generated.h"

UCLASS()
class THEHILLBILLY_API UHillbillyChainsawAttackObstructSubstate : public UPounceAttackObstructSubstate
{
	GENERATED_BODY()

public:
	UHillbillyChainsawAttackObstructSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UHillbillyChainsawAttackObstructSubstate) { return 0; }
