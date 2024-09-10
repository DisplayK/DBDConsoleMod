#pragma once

#include "CoreMinimal.h"
#include "EMatchingStatusEffectType.generated.h"

UENUM(BlueprintType)
enum class EMatchingStatusEffectType : uint8
{
	None,
	Buff,
	Debuff,
	Any,
	Count,
};
