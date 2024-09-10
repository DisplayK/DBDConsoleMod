#pragma once

#include "CoreMinimal.h"
#include "ArchiveNodeObjectiveViewData.h"
#include "ChallengeTrackerViewData.generated.h"

USTRUCT(BlueprintType)
struct FChallengeTrackerViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FText ChallengeTitle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FArchiveNodeObjectiveViewData ProgressionData;

public:
	DBDUIVIEWINTERFACES_API FChallengeTrackerViewData();
};

FORCEINLINE uint32 GetTypeHash(const FChallengeTrackerViewData) { return 0; }
