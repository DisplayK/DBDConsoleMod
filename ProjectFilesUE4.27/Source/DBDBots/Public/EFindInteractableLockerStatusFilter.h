#pragma once

#include "CoreMinimal.h"
#include "EFindInteractableLockerStatusFilter.generated.h"

UENUM(BlueprintType)
enum class EFindInteractableLockerStatusFilter : uint8
{
	Empty,
	Occupied,
	Both,
};
