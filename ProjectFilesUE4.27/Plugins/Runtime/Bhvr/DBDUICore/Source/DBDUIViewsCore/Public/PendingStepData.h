#pragma once

#include "CoreMinimal.h"
#include "PendingTutorialData.h"
#include "PendingStepData.generated.h"

USTRUCT(BlueprintType)
struct FPendingStepData
{
	GENERATED_BODY()

public:
	UPROPERTY(Transient)
	TArray<FPendingTutorialData> tutorialData;

public:
	DBDUIVIEWSCORE_API FPendingStepData();
};

FORCEINLINE uint32 GetTypeHash(const FPendingStepData) { return 0; }
