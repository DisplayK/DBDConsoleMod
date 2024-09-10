#pragma once

#include "CoreMinimal.h"
#include "EFindInteractableGeneratorStatusFilter.generated.h"

UENUM(BlueprintType)
enum class EFindInteractableGeneratorStatusFilter : uint8
{
	NeedRepair,
	CanBeDamaged,
};
