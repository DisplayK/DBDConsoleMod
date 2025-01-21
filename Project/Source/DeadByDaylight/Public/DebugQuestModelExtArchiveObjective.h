#pragma once

#include "CoreMinimal.h"
#include "DebugQuestModelExtArchiveCondition.h"
#include "DebugModelExtArchiveQuestEvent.h"
#include "DebugModelExtArchiveQuestSpecialBehaviours.h"
#include "DebugQuestModelExtArchiveObjective.generated.h"

USTRUCT(BlueprintType)
struct FDebugQuestModelExtArchiveObjective
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TArray<FDebugQuestModelExtArchiveCondition> Conditions;

	UPROPERTY(EditAnywhere)
	int32 NeededProgression;

	UPROPERTY(EditAnywhere)
	TArray<FDebugModelExtArchiveQuestEvent> QuestEvents;

	UPROPERTY(EditAnywhere)
	TArray<FDebugModelExtArchiveQuestSpecialBehaviours> SpecialBehaviours;

public:
	DEADBYDAYLIGHT_API FDebugQuestModelExtArchiveObjective();
};

FORCEINLINE uint32 GetTypeHash(const FDebugQuestModelExtArchiveObjective) { return 0; }
