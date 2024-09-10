#pragma once

#include "CoreMinimal.h"
#include "EmblemThreshold.generated.h"

USTRUCT()
struct FEmblemThreshold
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<int32> Thresholds;

public:
	S3COMMAND_API FEmblemThreshold();
};

FORCEINLINE uint32 GetTypeHash(const FEmblemThreshold) { return 0; }
