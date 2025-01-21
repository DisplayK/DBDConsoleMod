#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BlinkParams.generated.h"

USTRUCT()
struct FBlinkParams
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FTransform TargetTransform;

	UPROPERTY()
	float Duration;

public:
	THENURSE_API FBlinkParams();
};

FORCEINLINE uint32 GetTypeHash(const FBlinkParams) { return 0; }
