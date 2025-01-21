#pragma once

#include "CoreMinimal.h"
#include "EK29SurvivorInteractionBlockReason.generated.h"

UENUM(BlueprintType)
enum class EK29SurvivorInteractionBlockReason : uint8
{
	BeingRushed,
	BeingThrown,
	BeingSmashed,
};
