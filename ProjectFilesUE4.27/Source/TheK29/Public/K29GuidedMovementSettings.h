#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "K29GuidedMovementSettings.generated.h"

class ADBDPlayer;
class AActor;

USTRUCT(BlueprintType)
struct FK29GuidedMovementSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadOnly)
	ADBDPlayer* MovingActor;

	UPROPERTY(BlueprintReadOnly)
	FVector StartPosition;

	UPROPERTY(BlueprintReadOnly)
	FVector ForwardDirection;

	UPROPERTY(BlueprintReadOnly)
	float CapsuleHeight;

	UPROPERTY(BlueprintReadOnly)
	float CapsuleCenterHeightOffset;

	UPROPERTY(BlueprintReadOnly)
	float CapsuleRadius;

	UPROPERTY(BlueprintReadOnly)
	float MinimumRequiredDistance;

	UPROPERTY(BlueprintReadOnly)
	float MaximumDuration;

	UPROPERTY(BlueprintReadOnly)
	float MovementSpeedInCmPerSecond;

	UPROPERTY(BlueprintReadOnly)
	bool IsCarryingSurvivor;

	UPROPERTY(BlueprintReadOnly)
	TArray<AActor*> IgnoredActors;

public:
	THEK29_API FK29GuidedMovementSettings();
};

FORCEINLINE uint32 GetTypeHash(const FK29GuidedMovementSettings) { return 0; }
