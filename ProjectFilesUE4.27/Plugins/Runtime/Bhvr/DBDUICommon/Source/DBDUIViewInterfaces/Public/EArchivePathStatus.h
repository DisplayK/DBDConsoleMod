#pragma once

#include "CoreMinimal.h"
#include "EArchivePathStatus.generated.h"

UENUM(BlueprintType)
enum class EArchivePathStatus : uint8
{
	Closed,
	Available,
	Completed,
};
