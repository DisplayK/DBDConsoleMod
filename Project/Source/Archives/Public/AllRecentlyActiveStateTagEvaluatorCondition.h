#pragma once

#include "CoreMinimal.h"
#include "RecentlyActiveStateTagEvaluatorCondition.h"
#include "AllRecentlyActiveStateTagEvaluatorCondition.generated.h"

UCLASS()
class UAllRecentlyActiveStateTagEvaluatorCondition : public URecentlyActiveStateTagEvaluatorCondition
{
	GENERATED_BODY()

public:
	UAllRecentlyActiveStateTagEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const UAllRecentlyActiveStateTagEvaluatorCondition) { return 0; }
