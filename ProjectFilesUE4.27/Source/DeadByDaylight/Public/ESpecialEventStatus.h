#pragma once

#include "CoreMinimal.h"
#include "ESpecialEventStatus.generated.h"

UENUM(BlueprintType)
enum class ESpecialEventStatus : uint8
{
	Inactive,
	ActiveMain,
	ActivePost,
};
