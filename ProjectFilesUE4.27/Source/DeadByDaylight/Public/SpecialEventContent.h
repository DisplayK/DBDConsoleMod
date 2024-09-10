#pragma once

#include "CoreMinimal.h"
#include "SpecialEventsContentData.h"
#include "SpecialEventsData.h"
#include "SpecialEventContent.generated.h"

USTRUCT()
struct FSpecialEventContent
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FSpecialEventsContentData> SpecialEvents;

	UPROPERTY()
	TArray<FSpecialEventsData> SpecialEventsData;

	UPROPERTY(SkipSerialization)
	bool SpecialEventsData_IsSet;

public:
	DEADBYDAYLIGHT_API FSpecialEventContent();
};

FORCEINLINE uint32 GetTypeHash(const FSpecialEventContent) { return 0; }
