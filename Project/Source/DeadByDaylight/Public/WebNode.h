#pragma once

#include "CoreMinimal.h"
#include "WebNode.generated.h"

USTRUCT()
struct FWebNode
{
	GENERATED_BODY()

public:
	DEADBYDAYLIGHT_API FWebNode();
};

FORCEINLINE uint32 GetTypeHash(const FWebNode) { return 0; }
