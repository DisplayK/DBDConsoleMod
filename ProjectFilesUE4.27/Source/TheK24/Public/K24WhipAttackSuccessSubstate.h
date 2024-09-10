#pragma once

#include "CoreMinimal.h"
#include "PounceAttackSuccessSubstate.h"
#include "K24WhipAttackSuccessSubstate.generated.h"

UCLASS()
class THEK24_API UK24WhipAttackSuccessSubstate : public UPounceAttackSuccessSubstate
{
	GENERATED_BODY()

public:
	UK24WhipAttackSuccessSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UK24WhipAttackSuccessSubstate) { return 0; }
