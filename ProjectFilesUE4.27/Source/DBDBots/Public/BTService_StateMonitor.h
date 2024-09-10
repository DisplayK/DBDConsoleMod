#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTService.h"
#include "BTService_StateMonitor.generated.h"

UCLASS()
class DBDBOTS_API UBTService_StateMonitor : public UBTService
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBIsIntroCompleted;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBDifficultyLevel;

public:
	UBTService_StateMonitor();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_StateMonitor) { return 0; }
