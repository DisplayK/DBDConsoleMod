#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EConditionSubject.h"
#include "AnyEventConditionData.generated.h"

USTRUCT()
struct FAnyEventConditionData
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
	ARCHIVES_API FAnyEventConditionData();
};

FORCEINLINE uint32 GetTypeHash(const FAnyEventConditionData) { return 0; }
