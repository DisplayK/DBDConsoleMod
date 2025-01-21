#pragma once

#include "CoreMinimal.h"
#include "EBloodMarketRefreshMethod.generated.h"

UENUM(BlueprintType)
enum class EBloodMarketRefreshMethod : uint8
{
	Automatic,
	Manual,
};
