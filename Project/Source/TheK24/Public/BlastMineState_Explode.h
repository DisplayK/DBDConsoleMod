#pragma once

#include "CoreMinimal.h"
#include "SimpleStateMachineBaseState.h"
#include "BlastMineState_Explode.generated.h"

UCLASS()
class UBlastMineState_Explode : public USimpleStateMachineBaseState
{
	GENERATED_BODY()

public:
	UBlastMineState_Explode();
};

FORCEINLINE uint32 GetTypeHash(const UBlastMineState_Explode) { return 0; }
