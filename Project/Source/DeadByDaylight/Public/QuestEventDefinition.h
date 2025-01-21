#pragma once

#include "CoreMinimal.h"
#include "DBDTableRowBaseWithId.h"
#include "GameplayTagContainer.h"
#include "UObject/SoftObjectPtr.h"
#include "QuestEventDefinition.generated.h"

class UQuestEventEvaluatorBase;

USTRUCT(BlueprintType)
struct FQuestEventDefinition: public FDBDTableRowBaseWithId
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TArray<FGameplayTag> TrackedGameEvents;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	TSoftClassPtr<UQuestEventEvaluatorBase> QuestEventEvaluator;

public:
	DEADBYDAYLIGHT_API FQuestEventDefinition();
};

FORCEINLINE uint32 GetTypeHash(const FQuestEventDefinition) { return 0; }
