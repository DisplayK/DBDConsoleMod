#pragma once

#include "CoreMinimal.h"
#include "AIDetectedStimulus.h"
#include "TargetMoveAwayToFastInfo.generated.h"

USTRUCT()
struct FTargetMoveAwayToFastInfo
{
	GENERATED_BODY()

public:
	UPROPERTY()
	float AccumulatedTime;

	UPROPERTY()
	float CooldownUntilTime;

	UPROPERTY()
	FAIDetectedStimulus Stimulus;

public:
	DBDBOTS_API FTargetMoveAwayToFastInfo();
};

FORCEINLINE uint32 GetTypeHash(const FTargetMoveAwayToFastInfo) { return 0; }
