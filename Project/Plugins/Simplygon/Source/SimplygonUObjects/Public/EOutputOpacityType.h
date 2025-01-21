#pragma once

#include "CoreMinimal.h"
#include "EOutputOpacityType.generated.h"

UENUM(BlueprintType)
enum class EOutputOpacityType : uint8
{
	Opacity,
	Transparency,
};
