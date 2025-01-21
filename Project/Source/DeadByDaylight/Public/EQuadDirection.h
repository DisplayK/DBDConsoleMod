#pragma once

#include "CoreMinimal.h"
#include "EQuadDirection.generated.h"

UENUM(BlueprintType)
enum class EQuadDirection : uint8
{
	None,
	Up,
	Down,
	Left,
	Right,
	Empty,
};
