#pragma once

#include "CoreMinimal.h"
#include "ContentScheduleRecord.generated.h"

USTRUCT()
struct FContentScheduleRecord
{
	GENERATED_BODY()

public:
	UPROPERTY()
	int32 Priority;

	UPROPERTY()
	FString Description;

	UPROPERTY(SkipSerialization)
	bool Description_IsSet;

	UPROPERTY()
	FString LinkedEventId;

	UPROPERTY(SkipSerialization)
	bool LinkedEventId_IsSet;

	UPROPERTY()
	TMap<FString, float> MapsThemeWeight;

	UPROPERTY(SkipSerialization)
	bool MapsThemeWeight_IsSet;

	UPROPERTY()
	TMap<FString, float> MapsWeight;

	UPROPERTY(SkipSerialization)
	bool MapsWeight_IsSet;

private:
	UPROPERTY()
	FString StartDate;

	UPROPERTY(SkipSerialization)
	bool StartDate_IsSet;

	UPROPERTY()
	FString EndDate;

	UPROPERTY(SkipSerialization)
	bool EndDate_IsSet;

public:
	DEADBYDAYLIGHT_API FContentScheduleRecord();
};

FORCEINLINE uint32 GetTypeHash(const FContentScheduleRecord) { return 0; }
