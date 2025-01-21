#pragma once

#include "CoreMinimal.h"
#include "PounceAttackMissSubstate.h"
#include "TwinJumpAttackMissSubstate.generated.h"

UCLASS()
class UTwinJumpAttackMissSubstate : public UPounceAttackMissSubstate
{
	GENERATED_BODY()

public:
	UTwinJumpAttackMissSubstate();
};

FORCEINLINE uint32 GetTypeHash(const UTwinJumpAttackMissSubstate) { return 0; }
