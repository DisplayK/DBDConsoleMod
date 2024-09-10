#pragma once

#include "CoreMinimal.h"
#include "PounceAttackMissSubstate.h"
#include "HillbillyChainsawAttackMissSubstate.generated.h"

UCLASS()
class THEHILLBILLY_API UHillbillyChainsawAttackMissSubstate : public UPounceAttackMissSubstate
{
	GENERATED_BODY()

public:
	UHillbillyChainsawAttackMissSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UHillbillyChainsawAttackMissSubstate) { return 0; }
