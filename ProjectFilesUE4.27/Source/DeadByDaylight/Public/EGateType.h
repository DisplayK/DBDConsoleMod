#pragma once

#include "CoreMinimal.h"
#include "EGateType.generated.h"

UENUM(BlueprintType)
enum class EGateType : uint8
{
	VE_AndGate,
	VE_TimerGate,
};
