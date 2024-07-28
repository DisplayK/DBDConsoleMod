#pragma once

#include "CoreMinimal.h"
#include "ArchivesQuestCondition.h"
#include "ArchivesQuestEvent.h"
#include "ArchivesQuestSpecialBehaviour.h"
#include "ArchivesObjective.generated.h"

USTRUCT()
struct FArchivesObjective
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString ObjectiveId;

	UPROPERTY(SkipSerialization)
	bool ObjectiveId_IsSet;

	UPROPERTY()
	bool IncrementWithEventRepetitions;

	UPROPERTY()
	int32 NeededProgression;

	UPROPERTY()
	TArray<FArchivesQuestCondition> Conditions;

	UPROPERTY(SkipSerialization)
	bool Conditions_IsSet;

	UPROPERTY()
	TArray<FArchivesQuestEvent> QuestEvent;

	UPROPERTY(SkipSerialization)
	bool QuestEvent_IsSet;

	UPROPERTY()
	TArray<FArchivesQuestSpecialBehaviour> SpecialBehaviours;

	UPROPERTY(SkipSerialization)
	bool SpecialBehaviours_IsSet;

	UPROPERTY()
	bool IsCommunityObjective;

	UPROPERTY(SkipSerialization)
	bool IsCommunityObjective_IsSet;

public:
	DEADBYDAYLIGHT_API FArchivesObjective();
};

FORCEINLINE uint32 GetTypeHash(const FArchivesObjective) { return 0; }
