#pragma once

#include "CoreMinimal.h"
#include "EK28RemnantState.generated.h"

UENUM(BlueprintType)
enum class EK28RemnantState : uint8
{
	Inactive,
	Active,
	Deactivating,
	IsKillerTarget,
};
