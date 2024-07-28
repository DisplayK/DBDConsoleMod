#pragma once

#include "CoreMinimal.h"
#include "ERewardItemType.generated.h"

UENUM(BlueprintType)
enum class ERewardItemType : uint8
{
	None,
	Currency,
	Inventory,
};
