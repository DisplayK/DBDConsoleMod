#pragma once

#include "CoreMinimal.h"
#include "ActionPredictionKey.h"
#include "ExecuteInstantActionParams.generated.h"

USTRUCT()
struct FExecuteInstantActionParams
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FActionPredictionKey PredictionKey;

	UPROPERTY()
	float PredictionDelay;

public:
	REVERSIBLEACTIONSYSTEM_API FExecuteInstantActionParams();
};

FORCEINLINE uint32 GetTypeHash(const FExecuteInstantActionParams) { return 0; }
