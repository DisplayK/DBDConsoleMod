#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlueprintBase.h"
#include "ZombieChaseSurvivorTargetBTTask.generated.h"

UCLASS()
class UZombieChaseSurvivorTargetBTTask : public UBTTask_BlueprintBase
{
	GENERATED_BODY()

public:
	UZombieChaseSurvivorTargetBTTask();
};

FORCEINLINE uint32 GetTypeHash(const UZombieChaseSurvivorTargetBTTask) { return 0; }
