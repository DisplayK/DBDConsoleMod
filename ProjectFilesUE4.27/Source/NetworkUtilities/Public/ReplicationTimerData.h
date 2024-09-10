#pragma once

#include "CoreMinimal.h"
#include "Float_NetQuantize8.h"
#include "ETimerState.h"
#include "ReplicationTimerData.generated.h"

USTRUCT()
struct FReplicationTimerData
{
	GENERATED_BODY()

public:
	UPROPERTY()
	float Timestamp;

	UPROPERTY()
	float Duration;

	UPROPERTY()
	FFloat_NetQuantize8 RemainingTimePercent;

	UPROPERTY()
	ETimerState State;

public:
	NETWORKUTILITIES_API FReplicationTimerData();
};

FORCEINLINE uint32 GetTypeHash(const FReplicationTimerData) { return 0; }
