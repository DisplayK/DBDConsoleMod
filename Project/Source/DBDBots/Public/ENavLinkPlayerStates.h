#pragma once

#include "CoreMinimal.h"
#include "ENavLinkPlayerStates.generated.h"

UENUM(BlueprintType)
enum class ENavLinkPlayerStates : uint8
{
	RequestStart,
	MoveStart,
	Using,
	MoveEnd,
	Release,
};
