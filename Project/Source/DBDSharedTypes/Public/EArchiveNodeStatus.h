#pragma once

#include "CoreMinimal.h"
#include "EArchiveNodeStatus.generated.h"

UENUM(BlueprintType)
enum class EArchiveNodeStatus : uint8
{
	Closed,
	Completed,
	Open,
	Paused,
	Waiting,
	Error,
};
