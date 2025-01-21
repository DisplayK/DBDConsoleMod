#pragma once

#include "CoreMinimal.h"
#include "SimpleStateMachineBaseTransition.h"
#include "BlastMineTransition_SpawnedToHidden.generated.h"

UCLASS()
class UBlastMineTransition_SpawnedToHidden : public USimpleStateMachineBaseTransition
{
	GENERATED_BODY()

public:
	UBlastMineTransition_SpawnedToHidden();
};

FORCEINLINE uint32 GetTypeHash(const UBlastMineTransition_SpawnedToHidden) { return 0; }
