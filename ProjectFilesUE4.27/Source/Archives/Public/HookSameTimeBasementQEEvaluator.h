#pragma once

#include "CoreMinimal.h"
#include "SurvivorHookSameTimeQEEvaluator.h"
#include "HookSameTimeBasementQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API UHookSameTimeBasementQEEvaluator : public USurvivorHookSameTimeQEEvaluator
{
	GENERATED_BODY()

public:
	UHookSameTimeBasementQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UHookSameTimeBasementQEEvaluator) { return 0; }
