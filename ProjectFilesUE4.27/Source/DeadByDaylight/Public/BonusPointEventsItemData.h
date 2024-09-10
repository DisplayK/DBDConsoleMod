#pragma once

#include "CoreMinimal.h"
#include "BonusPointEventsItemData.generated.h"

USTRUCT()
struct FBonusPointEventsItemData
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	FString EventTitle;

	UPROPERTY()
	FString EventDescription;

	UPROPERTY(SkipSerialization)
	bool EventDescription_IsSet;

	UPROPERTY()
	uint32 EventType;

	UPROPERTY()
	double Multiplier;

	UPROPERTY()
	FString StartTime;

	UPROPERTY()
	FString EndTime;

public:
	DEADBYDAYLIGHT_API FBonusPointEventsItemData();
};

FORCEINLINE uint32 GetTypeHash(const FBonusPointEventsItemData) { return 0; }
