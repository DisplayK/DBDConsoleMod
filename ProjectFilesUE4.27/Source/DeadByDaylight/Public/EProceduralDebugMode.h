#pragma once

#include "CoreMinimal.h"
#include "EProceduralDebugMode.generated.h"

UENUM(BlueprintType)
enum class EProceduralDebugMode : uint8
{
	None,
	NoMap,
	TilesSmall,
	TilesBig,
	Count,
};
