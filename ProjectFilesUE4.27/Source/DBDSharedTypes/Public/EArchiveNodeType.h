#pragma once

#include "CoreMinimal.h"
#include "EArchiveNodeType.generated.h"

UENUM(BlueprintType)
enum class EArchiveNodeType : uint8
{
	Narrative,
	Task,
	Challenge,
	Contextual,
	Reward,
	None = 255,
};
