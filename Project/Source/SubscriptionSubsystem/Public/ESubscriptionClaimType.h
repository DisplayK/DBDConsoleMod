#pragma once

#include "CoreMinimal.h"
#include "ESubscriptionClaimType.generated.h"

UENUM(BlueprintType)
enum class ESubscriptionClaimType : uint8
{
	None,
	Daily,
	Renewal,
};
