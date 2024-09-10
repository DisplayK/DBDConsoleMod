#pragma once

#include "CoreMinimal.h"
#include "EEndGameReason.generated.h"

UENUM(BlueprintType)
enum class EEndGameReason : uint8
{
	None,
	Normal,
	KillerLeft,
	PlayerLeftDuringLoading,
	KillerLeftEarly,
	InvalidPlayerRoles,
	LoadingTimeout,
};
