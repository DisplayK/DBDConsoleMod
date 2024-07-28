#pragma once

#include "CoreMinimal.h"
#include "K28SecondaryCameraFOVData.generated.h"

class UCurveFloat;

USTRUCT()
struct FK28SecondaryCameraFOVData
{
	GENERATED_BODY()

private:
	UPROPERTY()
	float _fovChangeDuration;

	UPROPERTY()
	float _initialFovValue;

	UPROPERTY()
	float _targetFovValue;

	UPROPERTY()
	UCurveFloat* _fovCurve;

public:
	THEK28_API FK28SecondaryCameraFOVData();
};

FORCEINLINE uint32 GetTypeHash(const FK28SecondaryCameraFOVData) { return 0; }
