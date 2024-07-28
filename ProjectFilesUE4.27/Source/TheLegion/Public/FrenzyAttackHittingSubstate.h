#pragma once

#include "CoreMinimal.h"
#include "PounceAttackHittingSubstate.h"
#include "FrenzyAttackHittingSubstate.generated.h"

UCLASS()
class THELEGION_API UFrenzyAttackHittingSubstate : public UPounceAttackHittingSubstate
{
	GENERATED_BODY()

public:
	UFrenzyAttackHittingSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UFrenzyAttackHittingSubstate) { return 0; }
