#pragma once

#include "CoreMinimal.h"
#include "EEscapeType.generated.h"

UENUM(BlueprintType)
enum class EEscapeType : uint8
{
	Escape_ExitGate,
	Escape_Hatch,
	Escape_KillerDisconnect,
};
