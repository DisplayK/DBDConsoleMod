#pragma once

#include "CoreMinimal.h"
#include "DBDTimer.h"
#include "TargetFocusTimer.generated.h"

class ACamperPlayer;

USTRUCT(BlueprintType)
struct FTargetFocusTimer
{
	GENERATED_BODY()

private:
	UPROPERTY(Transient)
	ACamperPlayer* _camper;

	UPROPERTY()
	FDBDTimer _cooldownTimer;

	UPROPERTY()
	float _totalTime;

public:
	DEADBYDAYLIGHT_API FTargetFocusTimer();
};

FORCEINLINE uint32 GetTypeHash(const FTargetFocusTimer) { return 0; }
