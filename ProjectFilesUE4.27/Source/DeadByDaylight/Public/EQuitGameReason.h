#pragma once

#include "CoreMinimal.h"
#include "EQuitGameReason.generated.h"

UENUM(BlueprintType)
enum class EQuitGameReason : uint8
{
	None,
	Logout,
	Suspend,
	Shutdown,
	Count,
};
