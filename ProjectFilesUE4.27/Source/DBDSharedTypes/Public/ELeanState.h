#pragma once

#include "CoreMinimal.h"
#include "ELeanState.generated.h"

UENUM(BlueprintType)
enum class ELeanState : uint8
{
	NotLeaning,
	LeanLeft,
	LeanRight,
};
