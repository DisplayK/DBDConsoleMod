#pragma once

#include "CoreMinimal.h"
#include "EAIThrowProjectileModes.generated.h"

UENUM(BlueprintType)
enum class EAIThrowProjectileModes : uint8
{
	OneShot,
	Continuous,
};
