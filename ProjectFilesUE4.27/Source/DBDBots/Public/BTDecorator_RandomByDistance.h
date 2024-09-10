#pragma once

#include "CoreMinimal.h"
#include "AIRandomByDistancePercentagesAtTime.h"
#include "AITunableParameter.h"
#include "BTDecorator_TickableBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTDecorator_RandomByDistance.generated.h"

UCLASS()
class DBDBOTS_API UBTDecorator_RandomByDistance : public UBTDecorator_TickableBase
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBAroundLoc;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBRelativeFromTime;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBRelativeToTime;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter StartDistance;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter EndDistance;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter PercentageAtStartDistance;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter PercentageAtEndDistance;

	UPROPERTY(EditInstanceOnly)
	TArray<FAIRandomByDistancePercentagesAtTime> PercentagesAtTimes;

public:
	UBTDecorator_RandomByDistance();
};

FORCEINLINE uint32 GetTypeHash(const UBTDecorator_RandomByDistance) { return 0; }
