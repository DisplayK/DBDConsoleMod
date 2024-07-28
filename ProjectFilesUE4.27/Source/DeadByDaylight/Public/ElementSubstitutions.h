#pragma once

#include "CoreMinimal.h"
#include "ElementSubstitutions.generated.h"

USTRUCT()
struct FElementSubstitutions
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FElementSubstitutions();
};

FORCEINLINE uint32 GetTypeHash(const FElementSubstitutions) { return 0; }
