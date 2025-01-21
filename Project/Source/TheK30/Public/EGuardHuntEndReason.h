#pragma once

#include "CoreMinimal.h"
#include "EGuardHuntEndReason.generated.h"

UENUM(BlueprintType)
enum class EGuardHuntEndReason : uint8
{
	TimerExpired,
	GuardHitSurvivor,
	SurvivorCapturedFlag,
	UnhookedSurvivor,
	KillerDamagedSurvivor,
	GuardPulledSurvivorOutOfLocker,
	UnexpectedError,
};
