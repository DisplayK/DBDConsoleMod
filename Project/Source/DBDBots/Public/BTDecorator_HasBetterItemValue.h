#pragma once

#include "CoreMinimal.h"
#include "BTDecorator_TickableBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_HasBetterItemValue.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_HasBetterItemValue : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBTargetObject;

	UPROPERTY(EditInstanceOnly)
	float CollectUnderItemWeight;

	UPROPERTY(EditInstanceOnly)
	float CollectOverWeightRatioDifference;

public:
	UBTDecorator_HasBetterItemValue();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_HasBetterItemValue) { return 0; }
