#pragma once

#include "CoreMinimal.h"
#include "GameEventData.h"
#include "QuestEventEvaluatorBase.h"
#include "GameplayTagContainer.h"
#include "DoBeforeEscapeQEEvaluator.generated.h"

UCLASS()
class UDoBeforeEscapeQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UFUNCTION()
	void OnEscaped(const FGameplayTag gameEventType, const FGameEventData& gameEventData);

public:
	UDoBeforeEscapeQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UDoBeforeEscapeQEEvaluator) { return 0; }
