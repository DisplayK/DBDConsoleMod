#pragma once

#include "CoreMinimal.h"
#include "EFindInteractorExitOptions.generated.h"

UENUM(BlueprintType)
enum class EFindInteractorExitOptions : uint8
{
	All,
	HatchOnly,
	GateOnly,
};
