#pragma once

#include "CoreMinimal.h"
#include "EQuadrant.generated.h"

UENUM(BlueprintType)
enum class EQuadrant : uint8
{
	BottomRight,
	BottomLeft,
	TopLeft,
	TopRight,
	Count,
};
