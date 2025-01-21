#pragma once

#include "CoreMinimal.h"
#include "EPalletStunZoneSideStrategy.generated.h"

UENUM(BlueprintType)
enum class EPalletStunZoneSideStrategy : uint8
{
	OppositeSideToPlayerExecutingPulldown,
	SameSideToPlayerExecutingPulldown,
};
