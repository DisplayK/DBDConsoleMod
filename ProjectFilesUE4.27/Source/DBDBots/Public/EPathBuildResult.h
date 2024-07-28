#pragma once

#include "CoreMinimal.h"
#include "EPathBuildResult.generated.h"

UENUM(BlueprintType)
enum class EPathBuildResult : uint8
{
	None,
	Failed,
	Succeeded,
	Partial,
	InProgress,
};
