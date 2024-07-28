#pragma once

#include "CoreMinimal.h"
#include "ESoftBanReason.generated.h"

UENUM()
enum class ESoftBanReason : int64
{
	Invalid = -1,
	Harassment,
	Griefing,
	Exploits,
	Unsportsmanlike,
	Count,
};
