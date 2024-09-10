#pragma once

#include "CoreMinimal.h"
#include "EDBDScoreCategory.h"
#include "ScoreAlertViewData.generated.h"

USTRUCT(BlueprintType)
struct FScoreAlertViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EDBDScoreCategory ScoreType;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 ScoreValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Progress;

public:
	DBDUIVIEWINTERFACES_API FScoreAlertViewData();
};

FORCEINLINE uint32 GetTypeHash(const FScoreAlertViewData) { return 0; }
