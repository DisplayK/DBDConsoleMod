#pragma once

#include "CoreMinimal.h"
#include "EvaluatorCondition.h"
#include "GameplayTagContainer.h"
#include "RecentlyActiveStateTagEvaluatorCondition.generated.h"

UCLASS(Abstract)
class URecentlyActiveStateTagEvaluatorCondition : public UEvaluatorCondition
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _stateTags;

public:
	URecentlyActiveStateTagEvaluatorCondition();
};

FORCEINLINE uint32 GetTypeHash(const URecentlyActiveStateTagEvaluatorCondition) { return 0; }
