#pragma once

#include "CoreMinimal.h"
#include "SimpleStateMachineBaseState.h"
#include "BlastMineState_Hidden.generated.h"

UCLASS()
class UBlastMineState_Hidden : public USimpleStateMachineBaseState
{
	GENERATED_BODY()

public:
	UBlastMineState_Hidden();
};

FORCEINLINE uint32 GetTypeHash(const UBlastMineState_Hidden) { return 0; }
