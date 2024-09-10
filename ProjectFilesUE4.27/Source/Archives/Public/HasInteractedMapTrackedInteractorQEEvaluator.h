#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "HasInteractedMapTrackedInteractorQEEvaluator.generated.h"

class AActor;

UCLASS()
class UHasInteractedMapTrackedInteractorQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

private:
	UFUNCTION()
	void OnLevelReadyToPlay();

	UFUNCTION()
	void OnActorTrackedByMap(AActor* newActor);

public:
	UHasInteractedMapTrackedInteractorQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UHasInteractedMapTrackedInteractorQEEvaluator) { return 0; }
