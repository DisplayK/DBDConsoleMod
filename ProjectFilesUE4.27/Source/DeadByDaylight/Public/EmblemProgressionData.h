#pragma once

#include "CoreMinimal.h"
#include "EmblemProgressionData.generated.h"

USTRUCT(BlueprintType)
struct FEmblemProgressionData
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly, Transient)
	FString ProgressionText;

	UPROPERTY(BlueprintReadOnly, Transient)
	float ProgressionPercent;

public:
	DEADBYDAYLIGHT_API FEmblemProgressionData();
};

FORCEINLINE uint32 GetTypeHash(const FEmblemProgressionData) { return 0; }
