#pragma once

#include "CoreMinimal.h"
#include "EProtagonist.generated.h"

UENUM(BlueprintType)
enum class EProtagonist : uint8
{
	Instigator,
	Target,
};
