#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Services/BTService_BlueprintBase.h"
#include "ZombieEvaluteEnterAttackBTService.generated.h"

UCLASS()
class UZombieEvaluteEnterAttackBTService : public UBTService_BlueprintBase
{
	GENERATED_BODY()

public:
	UZombieEvaluteEnterAttackBTService();
};

FORCEINLINE uint32 GetTypeHash(const UZombieEvaluteEnterAttackBTService) { return 0; }
