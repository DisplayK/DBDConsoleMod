#pragma once

#include "CoreMinimal.h"
#include "EArchiveTomeType.generated.h"

UENUM(BlueprintType)
enum class EArchiveTomeType : uint8
{
	CurrentTome,
	PastTome,
	EventTome,
};
