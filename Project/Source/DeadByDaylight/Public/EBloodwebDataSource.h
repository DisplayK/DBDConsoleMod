#pragma once

#include "CoreMinimal.h"
#include "EBloodwebDataSource.generated.h"

UENUM(BlueprintType)
enum class EBloodwebDataSource : uint8
{
	ByLevel,
	ByRing,
};
