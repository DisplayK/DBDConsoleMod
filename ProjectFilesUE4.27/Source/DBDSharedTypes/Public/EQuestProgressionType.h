#pragma once

#include "CoreMinimal.h"
#include "EQuestProgressionType.generated.h"

UENUM(BlueprintType)
enum class EQuestProgressionType : uint8
{
	None,
	Action,
	Percentage,
	Time,
};
