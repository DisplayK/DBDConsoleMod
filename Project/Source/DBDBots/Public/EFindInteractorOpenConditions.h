#pragma once

#include "CoreMinimal.h"
#include "EFindInteractorOpenConditions.generated.h"

UENUM(BlueprintType)
enum class EFindInteractorOpenConditions : uint8
{
	AllGate_OpenedHatch,
	All,
	ClosedOnly,
	OpenedOnly,
};
