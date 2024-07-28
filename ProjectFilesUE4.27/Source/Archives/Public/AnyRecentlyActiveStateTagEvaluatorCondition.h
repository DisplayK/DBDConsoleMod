#pragma once

#include "CoreMinimal.h"
#include "RecentlyActiveStateTagEvaluatorCondition.h"
#include "AnyRecentlyActiveStateTagEvaluatorCondition.generated.h"

UCLASS()
class UAnyRecentlyActiveStateTagEvaluatorCondition : public URecentlyActiveStateTagEvaluatorCondition
{
	GENERATED_BODY()

public:
	UAnyRecentlyActiveStateTagEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UAnyRecentlyActiveStateTagEvaluatorCondition) { return 0; }
