#pragma once

#include "CoreMinimal.h"
#include "EHudParentContainerType.generated.h"

UENUM(BlueprintType)
enum class EHudParentContainerType : uint8
{
	Widget,
	Outer,
	Spectate,
};
