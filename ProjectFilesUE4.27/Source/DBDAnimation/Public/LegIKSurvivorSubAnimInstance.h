#pragma once

#include "CoreMinimal.h"
#include "BaseSurvivorAnimInstance.h"
#include "UObject/NoExportTypes.h"
#include "LegIKSurvivorSubAnimInstance.generated.h"

class ULocomotionPredictor;
class UAnimCollection;
class UBaseGroundDetectorComponent;

UCLASS(NonTransient)
class DBDANIMATION_API ULegIKSurvivorSubAnimInstance : public UBaseSurvivorAnimInstance
{
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadOnly, Transient)
	FVector _leftFootOffset;

	UPROPERTY(BlueprintReadOnly, Transient)
	FVector _rightFootOffset;

	UPROPERTY(BlueprintReadOnly, Transient)
	FVector _pelvisOffset;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isIdle;

	UPROPERTY(BlueprintReadOnly, Transient)
	bool _isCrouched;

	UPROPERTY(BlueprintReadOnly, Transient)
	FRotator _rightFootDeltaRotator;

	UPROPERTY(BlueprintReadOnly, Transient)
	FRotator _leftFootDeltaRotator;

private:
	UPROPERTY(EditAnywhere)
	UAnimCollection* AnimCollection;

	UPROPERTY(EditAnywhere)
	FName _floorJoint;

	UPROPERTY(EditAnywhere)
	float _pelvisOffsetTreshold;

	UPROPERTY(EditAnywhere)
	FFloatRange _pelvisOffsetRange;

	UPROPERTY(EditAnywhere)
	FFloatRange _pelvisOffsetRangeCrouched;

	UPROPERTY(EditAnywhere)
	float _pelvisOffsetInterpolationSpeed;

	UPROPERTY(EditAnywhere)
	FFloatRange _footOffsetRange;

	UPROPERTY(EditAnywhere)
	FFloatRange _footOffsetRangeCrouched;

	UPROPERTY(EditAnywhere)
	float _footOffsetInterpolationSpeed;

	UPROPERTY(EditAnywhere)
	FFloatRange _footPitchDeltaRange;

	UPROPERTY(Transient, Export)
	UBaseGroundDetectorComponent* _leftFootGroundDetector;

	UPROPERTY(Transient, Export)
	UBaseGroundDetectorComponent* _rightFootGroundDetector;

	UPROPERTY(EditAnywhere)
	float maxLocalHeightForPlanting;

	UPROPERTY(Transient)
	ULocomotionPredictor* _locomotionPredictor;

public:
	ULegIKSurvivorSubAnimInstance();
};

FORCEINLINE uint32 GetTypeHash(const ULegIKSurvivorSubAnimInstance) { return 0; }
