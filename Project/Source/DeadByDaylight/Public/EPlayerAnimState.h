#pragma once

#include "CoreMinimal.h"
#include "EPlayerAnimState.generated.h"

UENUM(BlueprintType)
enum class EPlayerAnimState : uint8
{
	VE_Default,
	VE_Injured,
	VE_InjuredCrouch,
	VE_Crouch,
};
