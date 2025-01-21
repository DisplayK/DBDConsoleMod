#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EDBDScoreTypes.h"
#include "DBDRecentGameplayEvents.generated.h"

USTRUCT(BlueprintType)
struct FDBDRecentGameplayEvents
{
	GENERATED_BODY()

private:
	UPROPERTY()
	TMap<EDBDScoreTypes, FDateTime> _recentGameplayEvents;

public:
	DEADBYDAYLIGHT_API FDBDRecentGameplayEvents();
};

FORCEINLINE uint32 GetTypeHash(const FDBDRecentGameplayEvents) { return 0; }
