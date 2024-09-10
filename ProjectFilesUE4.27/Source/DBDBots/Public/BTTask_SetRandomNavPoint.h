#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "Templates/SubclassOf.h"
#include "BTTask_SetRandomNavPoint.generated.h"

class UNavigationQueryFilter;

UCLASS()
class DBDBOTS_API UBTTask_SetRandomNavPoint : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBFromLocation;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBToLocation;

	UPROPERTY(EditInstanceOnly)
	float MinAroundRadius;

	UPROPERTY(EditInstanceOnly)
	float MaxAroundRadius;

	UPROPERTY(EditInstanceOnly)
	int32 MaxNbAttempts;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UNavigationQueryFilter> FilterClass;

public:
	UBTTask_SetRandomNavPoint();
};

FORCEINLINE uint32 GetTypeHash(const UBTTask_SetRandomNavPoint) { return 0; }
