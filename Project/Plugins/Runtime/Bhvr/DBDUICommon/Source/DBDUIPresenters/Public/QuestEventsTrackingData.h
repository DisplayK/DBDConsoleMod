#pragma once

#include "CoreMinimal.h"
#include "EQuestOperationType.h"
#include "QuestEventsTrackingData.generated.h"

USTRUCT(BlueprintType)
struct FQuestEventsTrackingData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	FString QuestEventId;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 CurrentProgressionValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	int32 MaxProgressionValue;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient)
	EQuestOperationType OperationType;

public:
	DBDUIPRESENTERS_API FQuestEventsTrackingData();
};

FORCEINLINE uint32 GetTypeHash(const FQuestEventsTrackingData) { return 0; }
