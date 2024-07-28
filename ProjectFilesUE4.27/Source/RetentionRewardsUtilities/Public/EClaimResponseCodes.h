#pragma once

#include "CoreMinimal.h"
#include "EClaimResponseCodes.generated.h"

UENUM(BlueprintType)
enum class EClaimResponseCodes : uint8
{
	Claimed,
	CalendarNotFound,
	RewardNotAvailable,
	RewardNotSupported,
};
