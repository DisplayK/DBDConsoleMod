#pragma once

#include "CoreMinimal.h"
#include "EGameState.h"
#include "EKillerMatchResult.h"
#include "MatchResultViewData.generated.h"

USTRUCT(BlueprintType)
struct FMatchResultViewData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool IsSlasher;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EGameState SurvivorResult;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EKillerMatchResult KillerResult;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float Duration;

public:
	DBDUIVIEWINTERFACES_API FMatchResultViewData();
};

FORCEINLINE uint32 GetTypeHash(const FMatchResultViewData) { return 0; }
