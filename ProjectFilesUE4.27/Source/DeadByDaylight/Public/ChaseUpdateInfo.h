#pragma once

#include "CoreMinimal.h"
#include "TargetFocusTimer.h"
#include "ECamperDamageState.h"
#include "ChaseUpdateInfo.generated.h"

USTRUCT()
struct FChaseUpdateInfo
{
	GENERATED_BODY()

public:
	UPROPERTY()
	FTargetFocusTimer ChaseTimer;

	UPROPERTY()
	float SurvivorTravelDistance;

	UPROPERTY()
	float KillerTravelDistance;

	UPROPERTY()
	ECamperDamageState ChaseStartHealthStatus;

public:
	DEADBYDAYLIGHT_API FChaseUpdateInfo();
};

FORCEINLINE uint32 GetTypeHash(const FChaseUpdateInfo) { return 0; }
