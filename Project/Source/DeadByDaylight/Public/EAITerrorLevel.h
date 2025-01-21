#pragma once

#include "CoreMinimal.h"
#include "EAITerrorLevel.generated.h"

UENUM(BlueprintType)
enum class EAITerrorLevel : uint8
{
	None,
	Low,
	Min = 1,
	Medium,
	High,
	VeryHigh,
	Max = 4,
};
