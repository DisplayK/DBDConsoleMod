#pragma once

#include "CoreMinimal.h"
#include "SimpleStateMachineBaseTransition.h"
#include "BlastMineTransition_SpawnedToExplode.generated.h"

UCLASS()
class UBlastMineTransition_SpawnedToExplode : public USimpleStateMachineBaseTransition
{
	GENERATED_BODY()

public:
	UBlastMineTransition_SpawnedToExplode();
};

FORCEINLINE uint32 GetTypeHash(const UBlastMineTransition_SpawnedToExplode) { return 0; }
