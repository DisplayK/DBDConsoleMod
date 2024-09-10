#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "KillerNearRedHerringGeneratorQEEvaluator.generated.h"

UCLASS()
class UKillerNearRedHerringGeneratorQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	UKillerNearRedHerringGeneratorQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const UKillerNearRedHerringGeneratorQEEvaluator) { return 0; }
