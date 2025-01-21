#pragma once

#include "CoreMinimal.h"
#include "ESpecialEventGameMode.generated.h"

UENUM(BlueprintType)
enum class ESpecialEventGameMode : uint8
{
	Progression,
	Counter,
	Collection,
};
