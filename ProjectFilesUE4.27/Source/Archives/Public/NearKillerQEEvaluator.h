#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "NearKillerQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UNearKillerQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

protected:
	UFUNCTION()
	void OnRangeChanged(const bool inRange);

public:
	UNearKillerQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UNearKillerQEEvaluator) { return 0; }
