#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/BTService.h"
#include "AITunableParameter.h"
#include "UObject/NoExportTypes.h"
#include "BTService_StimuliMonitor.generated.h"

UCLASS()
class DBDBOTS_API UBTService_StimuliMonitor : public UBTService
{
	GENERATED_BODY()

public:
	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBStimulusOriginLocation;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBStimulusNavLocation;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBStimulusActor;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBStimulusInSight;

	UPROPERTY(EditInstanceOnly)
	FBlackboardKeySelector BBStimulusWasInSight;

	UPROPERTY(EditInstanceOnly)
	float StimulusWasInSightDuration;

	UPROPERTY(EditInstanceOnly)
	FAITunableParameter StimuliRefreshInterval;

	UPROPERTY(EditInstanceOnly)
	float ExtrapolateLoseSightDuration;

	UPROPERTY(EditInstanceOnly)
	FVector NavMeshFindLocationExtents;

public:
	UBTService_StimuliMonitor();
};

FORCEINLINE uint32 GetTypeHash(const UBTService_StimuliMonitor) { return 0; }
