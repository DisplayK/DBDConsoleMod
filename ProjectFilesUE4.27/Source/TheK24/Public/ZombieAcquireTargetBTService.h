#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlueprintBase.h"
#include "ZombieAcquireTargetBTService.generated.h"

UCLASS()
class UZombieAcquireTargetBTService : public UBTService_BlueprintBase
{
	GENERATED_BODY()

public:
	UZombieAcquireTargetBTService();
};

FORCEINLINE uint32 GetTypeHash(const UZombieAcquireTargetBTService) { return 0; }
