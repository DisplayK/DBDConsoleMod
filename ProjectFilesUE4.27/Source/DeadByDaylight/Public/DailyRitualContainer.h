#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DailyRitualInstance.h"
#include "DailyRitualContainer.generated.h"

USTRUCT()
struct FDailyRitualContainer
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FDateTime LastRitualReceivedDate;

	UPROPERTY()
	FDateTime LastRitualPopupDate;

	UPROPERTY()
	FDateTime LastRitualDismissedDate;

	UPROPERTY()
	TArray<FDailyRitualInstance> Rituals;

public:
	DEADBYDAYLIGHT_API FDailyRitualContainer();
};

FORCEINLINE uint32 GetTypeHash(const FDailyRitualContainer) { return 0; }
