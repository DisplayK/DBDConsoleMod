#pragma once

#include "CoreMinimal.h"
#include "SimpleStateMachineBaseState.h"
#include "BlastMineState_Spawned.generated.h"

UCLASS()
class UBlastMineState_Spawned : public USimpleStateMachineBaseState
{
	GENERATED_BODY()

public:
	UBlastMineState_Spawned();
};

FORCEINLINE uint32 GetTypeHash(const UBlastMineState_Spawned) { return 0; }
