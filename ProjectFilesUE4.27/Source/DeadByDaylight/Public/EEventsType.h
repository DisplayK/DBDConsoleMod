#pragma once

#include "CoreMinimal.h"
#include "EEventsType.generated.h"

UENUM(BlueprintType)
enum class EEventsType : uint8
{
	Generic,
	Calendar,
	BonusACEvent,
	FirstPremiumPurchase,
	MonthlyPass,
	Count,
};
