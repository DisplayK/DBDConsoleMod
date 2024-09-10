#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTTask_SetBBEntry.generated.h"

UCLASS()
class DBDBOTS_API UBTTask_SetBBEntry : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBToSetKey;

	UPROPERTY(EditInstanceOnly)
	FString ToSetValue;

public:
	UBTTask_SetBBEntry();
};

FORCEINLINE uint32 GetTypeHash(const UBTTask_SetBBEntry) { return 0; }
