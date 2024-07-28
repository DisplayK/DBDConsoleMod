#pragma once

#include "CoreMinimal.h"
#include "ETheMettleOfManPhase.generated.h"

UENUM(BlueprintType)
enum class ETheMettleOfManPhase : uint8
{
	Uninitialized,
	GainingTokens,
	CancelNextAttack,
	RevealWhenHealthy,
	RevealedToKiller,
};
