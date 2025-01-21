#pragma once

#include "CoreMinimal.h"
#include "ESingleHookState.generated.h"

UENUM(BlueprintType)
enum class ESingleHookState : uint8
{
	EMPTY,
	UNHOOKED,
	HOOKED,
	DISCONNECTED,
};
