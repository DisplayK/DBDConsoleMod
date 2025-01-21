#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "K29GuidedMovementInstance.generated.h"

USTRUCT(BlueprintType)
struct FK29GuidedMovementInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	float MovementDuration;

	UPROPERTY(BlueprintReadOnly)
	FVector StartingPosition;

	UPROPERTY(BlueprintReadOnly)
	FVector EndingPosition;

	UPROPERTY(BlueprintReadOnly)
	FVector ForwardDirection;

	UPROPERTY(BlueprintReadOnly)
	FVector XYForwardDirection;

	UPROPERTY(BlueprintReadOnly)
	bool EndInImpact;

	UPROPERTY(BlueprintReadOnly)
	bool EndAtLedge;

	UPROPERTY(BlueprintReadOnly)
	float StartingTime;

	UPROPERTY(BlueprintReadOnly)
	float EndingTime;

	UPROPERTY(BlueprintReadOnly)
	TArray<FVector> MovementCurve;

public:
	THEK29_API FK29GuidedMovementInstance();
};

FORCEINLINE uint32 GetTypeHash(const FK29GuidedMovementInstance) { return 0; }
