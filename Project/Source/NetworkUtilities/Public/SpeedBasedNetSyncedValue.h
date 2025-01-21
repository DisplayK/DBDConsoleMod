#pragma once

#include "CoreMinimal.h"
#include "SpeedBasedNetSyncedValue.generated.h"

USTRUCT(BlueprintType)
struct FSpeedBasedNetSyncedValue
{
	GENERATED_BODY()

private:
	UPROPERTY()
	float _replicatedValue;

	UPROPERTY()
	float _replicatedSpeed;

	UPROPERTY()
	float _replicatedLastUpdateTimestamp;

public:
	NETWORKUTILITIES_API FSpeedBasedNetSyncedValue();
};

FORCEINLINE uint32 GetTypeHash(const FSpeedBasedNetSyncedValue) { return 0; }
