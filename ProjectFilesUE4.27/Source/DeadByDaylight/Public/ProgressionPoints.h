#pragma once

#include "CoreMinimal.h"
#include "EEmblemProgressionType.h"
#include "ProgressionPoints.generated.h"

USTRUCT(BlueprintType)
struct FProgressionPoints
{
	GENERATED_BODY()

public:
	UPROPERTY()
	EEmblemProgressionType Type;

	UPROPERTY()
	float Points;

public:
	DEADBYDAYLIGHT_API FProgressionPoints();
};

FORCEINLINE uint32 GetTypeHash(const FProgressionPoints) { return 0; }
