#pragma once

#include "CoreMinimal.h"
#include "TileProperties.generated.h"

USTRUCT()
struct FTileProperties
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FTileProperties();
};

FORCEINLINE uint32 GetTypeHash(const FTileProperties) { return 0; }
