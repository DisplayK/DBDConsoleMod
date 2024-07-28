#pragma once

#include "CoreMinimal.h"
#include "EBasementType.generated.h"

UENUM(BlueprintType)
enum class EBasementType : uint8
{
	None,
	Basic,
	MainBuilding,
	Shack,
	Count,
};
