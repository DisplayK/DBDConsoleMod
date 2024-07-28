#pragma once

#include "CoreMinimal.h"
#include "ESpecialEventBloodwebChestCondition.generated.h"

UENUM(BlueprintType)
enum class ESpecialEventBloodwebChestCondition : uint8
{
	Default,
	All,
	WithEventItem,
};
