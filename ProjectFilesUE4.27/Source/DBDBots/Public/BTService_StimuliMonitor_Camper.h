#pragma once

#include "CoreMinimal.h"
#include "BTService_StimuliMonitor.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BTService_StimuliMonitor_Camper.generated.h"

UCLASS()
class DBDBOTS_API UBTService_StimuliMonitor_Camper : public UBTService_StimuliMonitor
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBTerrorPressure;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBIsFleeing;

	UPROPERTY(EditInstanceOnly)
	float LastValidTerrorRadiusStimulusMemoryLifeTime;

public:
	UBTService_StimuliMonitor_Camper();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_StimuliMonitor_Camper) { return 0; }
