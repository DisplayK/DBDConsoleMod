#pragma once

#include "CoreMinimal.h"
#include "EBlastMineRemovedReason.generated.h"

UENUM(BlueprintType)
enum class EBlastMineRemovedReason : uint8
{
	Exploded,
	LifetimeExpired,
	BlastMineEndPlay,
};
