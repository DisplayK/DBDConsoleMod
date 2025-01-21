#pragma once

#include "CoreMinimal.h"
#include "AimDirection.generated.h"

USTRUCT()
struct FAimDirection
{
	GENERATED_BODY()

public:
	DBDGAMEPLAY_API FAimDirection();
};

FORCEINLINE uint32 GetTypeHash(const FAimDirection) { return 0; }
