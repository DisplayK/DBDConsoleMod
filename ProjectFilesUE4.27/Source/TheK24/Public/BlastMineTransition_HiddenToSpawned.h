#pragma once

#include "CoreMinimal.h"
#include "SimpleStateMachineBaseTransition.h"
#include "BlastMineTransition_HiddenToSpawned.generated.h"

UCLASS()
class UBlastMineTransition_HiddenToSpawned : public USimpleStateMachineBaseTransition
{
	GENERATED_BODY()

public:
	UBlastMineTransition_HiddenToSpawned();
};

FORCEINLINE uint32 GetTypeHash(const UBlastMineTransition_HiddenToSpawned) { return 0; }
