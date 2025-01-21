#pragma once

#include "CoreMinimal.h"
#include "DebugModelExtArchiveQuestEvent.generated.h"

USTRUCT()
struct FDebugModelExtArchiveQuestEvent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FString Parameters;

	UPROPERTY(EditAnywhere)
	FString QuestEventId;

	UPROPERTY(EditAnywhere)
	int32 Repetition;

public:
	DEADBYDAYLIGHT_API FDebugModelExtArchiveQuestEvent();
};

FORCEINLINE uint32 GetTypeHash(const FDebugModelExtArchiveQuestEvent) { return 0; }
