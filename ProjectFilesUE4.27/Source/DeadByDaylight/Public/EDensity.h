#pragma once

#include "CoreMinimal.h"
#include "EDensity.generated.h"

UENUM(BlueprintType)
enum class EDensity : uint8
{
	Unspecified,
	Light,
	Moderate,
	Heavy,
	Empty,
};
