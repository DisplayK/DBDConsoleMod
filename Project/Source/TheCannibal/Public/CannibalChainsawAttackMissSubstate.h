#pragma once

#include "CoreMinimal.h"
#include "HillbillyChainsawAttackMissSubstate.h"
#include "CannibalChainsawAttackMissSubstate.generated.h"

UCLASS()
class THECANNIBAL_API UCannibalChainsawAttackMissSubstate : public UHillbillyChainsawAttackMissSubstate
{
	GENERATED_BODY()

public:
	UCannibalChainsawAttackMissSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UCannibalChainsawAttackMissSubstate) { return 0; }
