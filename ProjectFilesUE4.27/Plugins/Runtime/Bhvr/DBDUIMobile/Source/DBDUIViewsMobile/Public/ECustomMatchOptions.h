#pragma once

#include "CoreMinimal.h"
#include "ECustomMatchOptions.generated.h"

UENUM(BlueprintType)
enum class ECustomMatchOptions : uint8
{
	All,
	None,
	Owned,
	Random,
	Special,
	Count,
};
