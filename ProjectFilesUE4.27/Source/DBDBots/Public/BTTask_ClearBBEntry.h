#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_ClearBBEntry.generated.h"

UCLASS()
class DBDBOTS_API UBTTask_ClearBBEntry : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBToResetKey;

public:
	UBTTask_ClearBBEntry();
};

FORCEINLINE uint32 GetTypeHash(const UBTTask_ClearBBEntry) { return 0; }
