#pragma once

#include "CoreMinimal.h"
#include "PounceAttackObstructSubstate.h"
#include "K24WhipAttackObstructSubstate.generated.h"

UCLASS()
class THEK24_API UK24WhipAttackObstructSubstate : public UPounceAttackObstructSubstate
{
	GENERATED_BODY()

public:
	UK24WhipAttackObstructSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UK24WhipAttackObstructSubstate) { return 0; }
