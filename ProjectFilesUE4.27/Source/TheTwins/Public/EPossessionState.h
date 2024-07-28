#pragma once

#include "CoreMinimal.h"
#include "EPossessionState.generated.h"

UENUM(BlueprintType)
enum class EPossessionState : uint8
{
	NotPossessed,
	BeingPossessed,
	Possessed,
};
