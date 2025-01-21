#pragma once

#include "CoreMinimal.h"
#include "EClaimType.generated.h"

UENUM(BlueprintType)
enum class EClaimType : uint8
{
	Minute,
	Hour,
	Day,
	Week,
	Month,
	Year,
};
