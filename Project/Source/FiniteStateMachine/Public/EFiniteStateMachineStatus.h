#pragma once

#include "CoreMinimal.h"
#include "EFiniteStateMachineStatus.generated.h"

UENUM(BlueprintType)
enum class EFiniteStateMachineStatus : uint8
{
	Stopped,
	Running,
	Paused,
};
