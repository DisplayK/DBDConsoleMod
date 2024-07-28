#pragma once

#include "CoreMinimal.h"
#include "ArmIKSensorDatum.generated.h"

USTRUCT()
struct FArmIKSensorDatum
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName ShoulderBoneName;

public:
	DEADBYDAYLIGHT_API FArmIKSensorDatum();
};

FORCEINLINE uint32 GetTypeHash(const FArmIKSensorDatum) { return 0; }
