#pragma once

#include "CoreMinimal.h"
#include "PounceAttackMissSubstate.h"
#include "K24WhipAttackMissSubstate.generated.h"

UCLASS()
class THEK24_API UK24WhipAttackMissSubstate : public UPounceAttackMissSubstate
{
	GENERATED_BODY()

public:
	UK24WhipAttackMissSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UK24WhipAttackMissSubstate) { return 0; }
