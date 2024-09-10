#pragma once

#include "CoreMinimal.h"
#include "EBPBonusType.generated.h"

UENUM(BlueprintType)
enum class EBPBonusType : uint8
{
	None,
	Event,
	Offerings,
	Others,
};
