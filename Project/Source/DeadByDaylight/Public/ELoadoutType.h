#pragma once

#include "CoreMinimal.h"
#include "ELoadoutType.generated.h"

UENUM(BlueprintType)
enum class ELoadoutType : uint8
{
	Item,
	Perk,
	Offering,
};
