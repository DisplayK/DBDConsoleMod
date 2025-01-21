#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LegacySavedDailyRitualInstance.h"
#include "LegacySavedDailyRitualContainer.generated.h"

USTRUCT()
struct FLegacySavedDailyRitualContainer
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	FDateTime LastRitualReceivedDate;

	UPROPERTY(SaveGame)
	TArray<FLegacySavedDailyRitualInstance> Rituals;

public:
	DEADBYDAYLIGHT_API FLegacySavedDailyRitualContainer();
};

FORCEINLINE uint32 GetTypeHash(const FLegacySavedDailyRitualContainer) { return 0; }
