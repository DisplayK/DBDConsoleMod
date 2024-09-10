#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "HasStateTagNearGameObjectQEEvaluator.generated.h"

UCLASS()
class UHasStateTagNearGameObjectQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly)
	TArray<FGameplayTag> _stateTags;

public:
	UHasStateTagNearGameObjectQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UHasStateTagNearGameObjectQEEvaluator) { return 0; }
