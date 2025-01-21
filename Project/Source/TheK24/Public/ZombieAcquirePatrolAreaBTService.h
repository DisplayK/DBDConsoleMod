#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlueprintBase.h"
#include "ZombieAcquirePatrolAreaBTService.generated.h"

UCLASS()
class UZombieAcquirePatrolAreaBTService : public UBTService_BlueprintBase
{
	GENERATED_BODY()

public:
	UZombieAcquirePatrolAreaBTService();
};

FORCEINLINE uint32 GetTypeHash(const UZombieAcquirePatrolAreaBTService) { return 0; }
