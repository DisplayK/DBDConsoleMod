#pragma once

#include "CoreMinimal.h"
#include "EmblemTunableItem.h"
#include "EmblemThreshold.h"
#include "EmblemTunableData.generated.h"

USTRUCT()
struct FEmblemTunableData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	TArray<FEmblemTunableItem> EmblemValues;

	UPROPERTY()
	TMap<FString, FEmblemThreshold> EmblemThresholds;

public:
	S3COMMAND_API FEmblemTunableData();
};

FORCEINLINE uint32 GetTypeHash(const FEmblemTunableData) { return 0; }
