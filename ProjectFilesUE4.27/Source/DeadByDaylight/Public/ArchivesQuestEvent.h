#pragma once

#include "CoreMinimal.h"
#include "ArchivesQuestEvent.generated.h"

USTRUCT()
struct FArchivesQuestEvent
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString QuestEventId;

	UPROPERTY()
	int32 Repetition;

	UPROPERTY()
	FString Parameters;

	UPROPERTY()
	FString Operation;

	UPROPERTY(SkipSerialization)
	bool Parameters_IsSet;

	UPROPERTY(SkipSerialization)
	bool Operation_IsSet;

public:
	DEADBYDAYLIGHT_API FArchivesQuestEvent();
};

FORCEINLINE uint32 GetTypeHash(const FArchivesQuestEvent) { return 0; }
