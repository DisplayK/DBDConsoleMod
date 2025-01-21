#pragma once

#include "CoreMinimal.h"
#include "OpenCurrentCalendarMessage.generated.h"

USTRUCT()
struct FOpenCurrentCalendarMessage
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	int32 RemainingDailyRewards;

public:
	GENERICGAMEMESSAGES_API FOpenCurrentCalendarMessage();
};

FORCEINLINE uint32 GetTypeHash(const FOpenCurrentCalendarMessage) { return 0; }
