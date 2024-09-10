#pragma once

#include "CoreMinimal.h"
#include "EProgressModifier.generated.h"

UENUM(BlueprintType)
enum class EProgressModifier : uint8
{
	Default,
	Buff,
	Debuff,
};
