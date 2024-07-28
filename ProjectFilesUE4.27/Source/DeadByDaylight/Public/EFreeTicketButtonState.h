#pragma once

#include "CoreMinimal.h"
#include "EFreeTicketButtonState.generated.h"

UENUM(BlueprintType)
enum class EFreeTicketButtonState : uint8
{
	Disabled,
	Enabled,
	InEffect,
	None,
};
