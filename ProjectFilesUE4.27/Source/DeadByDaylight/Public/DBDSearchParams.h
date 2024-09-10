#pragma once

#include "CoreMinimal.h"
#include "DBDSearchParams.generated.h"

USTRUCT()
struct FDBDSearchParams
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FDBDSearchParams();
};

FORCEINLINE uint32 GetTypeHash(const FDBDSearchParams) { return 0; }
