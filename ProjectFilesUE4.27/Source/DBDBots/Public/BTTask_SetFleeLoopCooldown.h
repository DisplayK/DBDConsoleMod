#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SetFleeLoopCooldown.generated.h"

UCLASS()
class DBDBOTS_API UBTTask_SetFleeLoopCooldown : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	float Duration;

public:
	UBTTask_SetFleeLoopCooldown();
};

FORCEINLINE uint32 GetTypeHash(const UBTTask_SetFleeLoopCooldown) { return 0; }
