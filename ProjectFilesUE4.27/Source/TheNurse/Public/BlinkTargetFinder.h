#pragma once

#include "CoreMinimal.h"
#include "DBDTunableRowHandle.h"
#include "Components/ActorComponent.h"
#include "TunableStat.h"
#include "BlinkTargetFinder.generated.h"

UCLASS(meta=(BlueprintSpawnableComponent))
class THENURSE_API UBlinkTargetFinder : public UActorComponent
{
	GENERATED_BODY()

private:
	UPROPERTY(EditDefaultsOnly)
	FDBDTunableRowHandle _minDistance;

	UPROPERTY(EditDefaultsOnly)
	FTunableStat _maxDistance;

	UPROPERTY(EditAnywhere)
	float _floorRaycastStartZOffset;

	UPROPERTY(EditAnywhere)
	float _floorRaycastLength;

	UPROPERTY(EditAnywhere)
	float _locationClearStepHeight;

	UPROPERTY(EditAnywhere)
	TArray<float> _horizontalSamplePercentages;

	UPROPERTY(EditAnywhere)
	float _blinkBlockerSphereCastRadius;

public:
	UBlinkTargetFinder();
};

FORCEINLINE uint32 GetTypeHash(const UBlinkTargetFinder) { return 0; }
