#pragma once

#include "CoreMinimal.h"
#include "EAINodeRelevancyOptions.generated.h"

UENUM(BlueprintType)
enum class EAINodeRelevancyOptions : uint8
{
	OnEnter,
	OnExit,
	OnEnterAndExit,
	OnTick,
};
