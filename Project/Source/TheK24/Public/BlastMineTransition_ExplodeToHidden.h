#pragma once

#include "CoreMinimal.h"
#include "SimpleStateMachineBaseTransition.h"
#include "BlastMineTransition_ExplodeToHidden.generated.h"

UCLASS()
class UBlastMineTransition_ExplodeToHidden : public USimpleStateMachineBaseTransition
{
	GENERATED_BODY()

public:
	UBlastMineTransition_ExplodeToHidden();
};

FORCEINLINE uint32 GetTypeHash(const UBlastMineTransition_ExplodeToHidden) { return 0; }
