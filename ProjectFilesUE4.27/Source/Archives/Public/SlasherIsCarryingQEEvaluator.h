#pragma once

#include "CoreMinimal.h"
#include "QuestEventEvaluatorBase.h"
#include "SlasherIsCarryingQEEvaluator.generated.h"

UCLASS()
class ARCHIVES_API USlasherIsCarryingQEEvaluator : public UQuestEventEvaluatorBase
{
	GENERATED_BODY()

public:
	USlasherIsCarryingQEEvaluator();
};

FORCEINLINE uint32 GetTypeHash(const USlasherIsCarryingQEEvaluator) { return 0; }
