#pragma once

#include "CoreMinimal.h"
#include "EGameState.generated.h"

UENUM(BlueprintType)
enum class EGameState : uint8
{
	VE_Active,
	VE_Killed,
	VE_Escaped,
	VE_EscapedInjured,
	VE_Sacrificed,
	VE_None,
	VE_Disconnected,
	VE_ManuallyLeftMatch,
	VE_BledOut,
};
