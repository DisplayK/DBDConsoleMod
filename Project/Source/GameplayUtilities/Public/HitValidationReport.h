#pragma once

#include "CoreMinimal.h"
#include "HitValidatorInstigatorParams.h"
#include "HitValidatorTargetParams.h"
#include "UObject/NoExportTypes.h"
#include "HitValidationReport.generated.h"

class ACharacter;

USTRUCT()
struct FHitValidationReport
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FHitValidatorInstigatorParams InstigatorParams;

	UPROPERTY()
	FHitValidatorTargetParams TargetParams;

	UPROPERTY()
	float ValidationTimestamp;

	UPROPERTY()
	FFloatRange TargetRecorderTimeRange;

	UPROPERTY()
	ACharacter* InstigatorOwningCharacter;

	UPROPERTY()
	float MaximumDistance;

	UPROPERTY()
	float CapsuleInflation;

	UPROPERTY()
	bool IsValidHit;

	UPROPERTY()
	bool IsValidDistance;

	UPROPERTY()
	bool IsValidNotStunned;

	UPROPERTY()
	FTransform InstigatorTransform;

	UPROPERTY()
	FVector RewindedTargetLocation;

	UPROPERTY()
	FVector TargetLocation;

	UPROPERTY()
	float SquareDistance;

	UPROPERTY()
	bool HasPerformCollisionCheck;

	UPROPERTY()
	bool IsValidCollision;

	UPROPERTY()
	FTransform HitPrimitiveTransform;

	UPROPERTY()
	FTransform HittablePrimitiveTransform;

public:
	GAMEPLAYUTILITIES_API FHitValidationReport();
};

FORCEINLINE uint32 GetTypeHash(const FHitValidationReport) { return 0; }
