#pragma once

#include "CoreMinimal.h"
#include "LegacySavedDailyRitualInstance.h"
#include "SavedDailyRitualContainerV7.generated.h"

USTRUCT()
struct FSavedDailyRitualContainerV7
{
	GENERATED_BODY()

public:
	UPROPERTY(SaveGame)
	FString LastRitualReceivedDate;

	UPROPERTY(SaveGame)
	FString LastRitualPopupDate;

	UPROPERTY(SaveGame)
	FString LastRitualDismissedDate;

	UPROPERTY(SaveGame)
	TArray<FLegacySavedDailyRitualInstance> Rituals;

public:
	DEADBYDAYLIGHT_API FSavedDailyRitualContainerV7();
};

FORCEINLINE uint32 GetTypeHash(const FSavedDailyRitualContainerV7) { return 0; }
