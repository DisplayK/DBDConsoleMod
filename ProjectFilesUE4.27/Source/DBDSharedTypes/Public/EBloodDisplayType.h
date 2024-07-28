#pragma once

#include "CoreMinimal.h"
#include "EBloodDisplayType.generated.h"

UENUM(BlueprintType)
enum class EBloodDisplayType : uint8
{
	Hidden,
	Bottom,
	Top,
};
