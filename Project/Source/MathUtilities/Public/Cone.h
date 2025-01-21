#pragma once

#include "CoreMinimal.h"
#include "Cone.generated.h"

USTRUCT()
struct FCone
{
	GENERATED_BODY()

public:
	MATHUTILITIES_API FCone();
};

FORCEINLINE uint32 GetTypeHash(const FCone) { return 0; }
