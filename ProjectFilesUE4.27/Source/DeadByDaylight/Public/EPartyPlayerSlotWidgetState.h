#pragma once

#include "CoreMinimal.h"
#include "EPartyPlayerSlotWidgetState.generated.h"

UENUM(BlueprintType)
enum class EPartyPlayerSlotWidgetState : uint8
{
	None,
	Empty,
	NotReady,
	Ready,
	Hidden,
};
