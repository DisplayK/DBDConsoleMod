#pragma once

#include "CoreMinimal.h"
#include "EAkPanningRule.generated.h"

UENUM(BlueprintType)
enum class EAkPanningRule : uint8
{
	Speakers,
	Headphones,
};
