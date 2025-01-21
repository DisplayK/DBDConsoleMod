#pragma once

#include "CoreMinimal.h"
#include "Offering.generated.h"

USTRUCT()
struct FOffering
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FOffering();
};

FORCEINLINE uint32 GetTypeHash(const FOffering) { return 0; }
