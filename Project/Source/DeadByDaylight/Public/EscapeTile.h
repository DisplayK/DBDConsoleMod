#pragma once

#include "CoreMinimal.h"
#include "Tile.h"
#include "EscapeTile.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API AEscapeTile : public ATile
{
	GENERATED_BODY()

public:
	AEscapeTile();
};

FORCEINLINE uint32 GetTypeHash(const AEscapeTile) { return 0; }
