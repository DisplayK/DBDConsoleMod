#pragma once

#include "CoreMinimal.h"
#include "PounceAttackHittingSubstate.h"
#include "K25PounceAttackHittingSubstate.generated.h"

UCLASS()
class UK25PounceAttackHittingSubstate : public UPounceAttackHittingSubstate
{
	GENERATED_BODY()

public:
	UK25PounceAttackHittingSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UK25PounceAttackHittingSubstate) { return 0; }
