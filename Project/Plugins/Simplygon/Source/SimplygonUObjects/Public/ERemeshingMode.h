#pragma once

#include "CoreMinimal.h"
#include "ERemeshingMode.generated.h"

UENUM(BlueprintType)
enum class ERemeshingMode : uint8
{
	Outside,
	Inside,
	Manual,
};
