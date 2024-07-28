#pragma once

#include "CoreMinimal.h"
#include "ETrapRemovedReason.generated.h"

UENUM(BlueprintType)
enum class ETrapRemovedReason : uint8
{
	KillerInteraction,
	LifetimeExpired,
	EndPlay,
	GeneratorRepaired,
	OwnerLeft,
};
