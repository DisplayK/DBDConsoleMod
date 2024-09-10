#pragma once

#include "CoreMinimal.h"
#include "ESnowmanState.generated.h"

UENUM(BlueprintType)
enum class ESnowmanState : uint8
{
	Idle,
	BeingEntered,
	Controlled,
	Destroyed,
};
