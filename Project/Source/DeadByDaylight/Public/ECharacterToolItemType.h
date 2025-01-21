#pragma once

#include "CoreMinimal.h"
#include "ECharacterToolItemType.generated.h"

UENUM(BlueprintType)
enum class ECharacterToolItemType : uint8
{
	None,
	Outfit,
	OutfitPiece,
	Charm,
};
