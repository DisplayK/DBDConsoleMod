#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "K28SecondaryCameraMovementData.generated.h"

class UCurveFloat;

USTRUCT()
struct FK28SecondaryCameraMovementData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FVector InitialActorLocation;

	UPROPERTY()
	FVector TargetActorLocation;

	UPROPERTY()
	bool IsPerformingGrabRotation;

	UPROPERTY()
	FRotator InitialCameraRotation;

	UPROPERTY()
	FRotator TargetCameraRotation;

	UPROPERTY()
	UCurveFloat* TransitionCurve;

	UPROPERTY()
	float CameraMovementDuration;

public:
	THEK28_API FK28SecondaryCameraMovementData();
};

FORCEINLINE uint32 GetTypeHash(const FK28SecondaryCameraMovementData) { return 0; }
