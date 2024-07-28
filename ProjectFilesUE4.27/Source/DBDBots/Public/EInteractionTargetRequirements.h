#pragma once

#include "CoreMinimal.h"
#include "EInteractionTargetRequirements.generated.h"

UENUM(BlueprintType)
enum class EInteractionTargetRequirements : uint8
{
	BestTargetMustBeValid,
	AnyValidTarget,
	AnyTarget,
	NoTarget,
	None,
};
