#pragma once

#include "CoreMinimal.h"
#include "RateAppMessage.generated.h"

USTRUCT()
struct FRateAppMessage
{
	GENERATED_BODY()

public:
	GENERICGAMEMESSAGES_API FRateAppMessage();
};

FORCEINLINE uint32 GetTypeHash(const FRateAppMessage) { return 0; }
