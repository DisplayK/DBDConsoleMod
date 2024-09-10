#pragma once

#include "CoreMinimal.h"
#include "ERefundSource.generated.h"

UENUM(BlueprintType)
enum class ERefundSource : uint8
{
	None,
	BloodMarket,
	DailyCalendar,
	PromoPack,
	Count,
};
