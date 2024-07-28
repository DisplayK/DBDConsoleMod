#pragma once

#include "CoreMinimal.h"
#include "EAIDangerState.generated.h"

UENUM(BlueprintType)
enum class EAIDangerState : uint8
{
	Safe,
	Unsafe,
	Dire,
};
