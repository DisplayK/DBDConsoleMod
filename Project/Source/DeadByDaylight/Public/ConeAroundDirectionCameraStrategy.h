#pragma once

#include "CoreMinimal.h"
#include "ViewRotationStrategy.h"
#include "UObject/NoExportTypes.h"
#include "ConeAroundDirectionCameraStrategy.generated.h"

UCLASS()
class DEADBYDAYLIGHT_API UConeAroundDirectionCameraStrategy : public UObject, public IViewRotationStrategy
{
	GENERATED_BODY()

private:
	UPROPERTY(EditAnywhere)
	float _maxPitchDifference;

	UPROPERTY(EditAnywhere)
	float _maxYawDifference;

	UPROPERTY(EditAnywhere)
	float _maxRollDifference;

public:
	UConeAroundDirectionCameraStrategy();
};

FORCEINLINE uint32 GetTypeHash(const UConeAroundDirectionCameraStrategy) { return 0; }
