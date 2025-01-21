#pragma once

#include "CoreMinimal.h"
#include "EFindInteractableMeatHookStatus.generated.h"

UENUM(BlueprintType)
enum class EFindInteractableMeatHookStatus : uint8
{
	HookedSurvivor,
	Available,
};
