#pragma once

#include "CoreMinimal.h"
#include "EAuthoritativeMovementFlag.generated.h"

UENUM(BlueprintType)
enum class EAuthoritativeMovementFlag : uint8
{
	INTERACTION,
	SLASHED,
	CHEAT,
	DROPPED,
	NOPUSH,
	INTERACTIONNOPUSH,
	DREAMWORLD_NOSLASHERCOLLISION,
	NOPUSHFORCED,
	COUNT,
};
