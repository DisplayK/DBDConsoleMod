#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BTTask_SetIsChased.generated.h"

UCLASS()
class DBDBOTS_API UBTTask_SetIsChased : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	bool ToSetValue;

public:
	UBTTask_SetIsChased();
};

FORCEINLINE uint32 GetTypeHash(const UBTTask_SetIsChased) { return 0; }
