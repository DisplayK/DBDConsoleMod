#pragma once

#include "CoreMinimal.h"
#include "EFrenzyEndReason.generated.h"

UENUM(BlueprintType)
enum class EFrenzyEndReason : uint8
{
	OutOfTime,
	Manual,
	PickUpCamper,
	Stunned,
	Mori,
	Blinded,
	ChainComplete,
};
