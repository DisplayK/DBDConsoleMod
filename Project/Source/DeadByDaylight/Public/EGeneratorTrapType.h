#pragma once

#include "CoreMinimal.h"
#include "EGeneratorTrapType.generated.h"

UENUM(BlueprintType)
enum class EGeneratorTrapType : uint8
{
	None,
	BlastMine,
	Wiretap,
};
