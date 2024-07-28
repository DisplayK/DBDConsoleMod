#pragma once

#include "CoreMinimal.h"
#include "AccessNode.generated.h"

USTRUCT()
struct FAccessNode
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Id;

	UPROPERTY()
	int32 AccessCost;

public:
	DEADBYDAYLIGHT_API FAccessNode();
};

FORCEINLINE uint32 GetTypeHash(const FAccessNode) { return 0; }
