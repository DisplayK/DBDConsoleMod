#pragma once

#include "CoreMinimal.h"
#include "EInventoryButtonState.generated.h"

UENUM(BlueprintType)
enum class EInventoryButtonState : uint8
{
	StateDisabled,
	StateEmpty,
	StateLocked,
	StateWithItem,
	StateWithItemDisabled,
	StateWithItemLocked,
	StatePrivate,
};
