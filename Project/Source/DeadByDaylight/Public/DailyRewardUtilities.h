#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DailyRewardUtilities.generated.h"

UCLASS()
class UDailyRewardUtilities : public UObject
{
	GENERATED_BODY()

public:
	UDailyRewardUtilities();
};

FORCEINLINE uint32 GetTypeHash(const UDailyRewardUtilities) { return 0; }
