#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EConditionSubject.h"
#include "EventOccurrenceConditionData.generated.h"

USTRUCT()
struct FEventOccurrenceConditionData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FGameplayTag GameEventTag;

	UPROPERTY(EditAnywhere)
	EConditionSubject PreviousConditionSubject;

	UPROPERTY(EditAnywhere)
	EConditionSubject CurrentConditionSubject;

public:
	ARCHIVES_API FEventOccurrenceConditionData();
};

FORCEINLINE uint32 GetTypeHash(const FEventOccurrenceConditionData) { return 0; }
