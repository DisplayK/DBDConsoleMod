#pragma once

#include "CoreMinimal.h"
#include "SpecialEventsContentData.generated.h"

USTRUCT()
struct FSpecialEventsContentData
{
	GENERATED_BODY()

protected:
	UPROPERTY()
	FString EventId;

	UPROPERTY()
	FString StartTime;

	UPROPERTY()
	FString MainEndTime;

	UPROPERTY()
	FString PostEndTime;

public:
	DEADBYDAYLIGHT_API FSpecialEventsContentData();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventsContentData) { return 0; }
