#pragma once

#include "CoreMinimal.h"
#include "EOpacityChannelComponent.generated.h"

UENUM(BlueprintType)
enum class EOpacityChannelComponent : uint8
{
	Red,
	Green,
	Blue,
	Alpha,
};
