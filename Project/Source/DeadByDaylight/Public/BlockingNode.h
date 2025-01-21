#pragma once

#include "CoreMinimal.h"
#include "BlockingNode.generated.h"

USTRUCT()
struct FBlockingNode
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FString Id;

	UPROPERTY()
	int32 BlockingCount;

public:
	DEADBYDAYLIGHT_API FBlockingNode();
};

FORCEINLINE uint32 GetTypeHash(const FBlockingNode) { return 0; }
