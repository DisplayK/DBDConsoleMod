#pragma once

#include "CoreMinimal.h"
#include "EAIFleeLoopStrategy.generated.h"

UENUM(BlueprintType)
enum class EAIFleeLoopStrategy : uint8
{
	LoseKiller,
	WasteTime,
};
