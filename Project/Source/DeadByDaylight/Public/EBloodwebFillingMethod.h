#pragma once

#include "CoreMinimal.h"
#include "EBloodwebFillingMethod.generated.h"

UENUM(BlueprintType)
enum class EBloodwebFillingMethod : uint8
{
	RestrictionsBasedOnData,
	FillAll,
};
