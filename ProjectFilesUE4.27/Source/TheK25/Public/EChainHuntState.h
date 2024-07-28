#pragma once

#include "CoreMinimal.h"
#include "EChainHuntState.generated.h"

UENUM(BlueprintType)
enum class EChainHuntState : uint8
{
	Inactive,
	Charging,
	Active,
};
