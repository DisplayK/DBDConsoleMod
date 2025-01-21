#pragma once

#include "CoreMinimal.h"
#include "ViewRotationStrategy.h"
#include "UObject/NoExportTypes.h"
#include "BaseCameraTargetingStrategy.generated.h"

class AActor;

UCLASS()
class DEADBYDAYLIGHT_API UBaseCameraTargetingStrategy : public UObject, public IViewRotationStrategy
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere)
	float _maxFreeAngle;

	UPROPERTY(EditAnywhere)
	float _maxInputRotation;

	UPROPERTY(EditAnywhere)
	float _interpolationSpeed;

	UPROPERTY(EditAnywhere)
	float _interpolationSpeedOutsideFreeMoveZone;

	UPROPERTY(Transient)
	AActor* _target;

public:
	UBaseCameraTargetingStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UBaseCameraTargetingStrategy) { return 0; }
