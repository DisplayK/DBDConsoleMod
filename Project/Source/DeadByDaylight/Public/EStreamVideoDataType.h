#pragma once

#include "CoreMinimal.h"
#include "EStreamVideoDataType.generated.h"

UENUM(BlueprintType)
enum class EStreamVideoDataType : uint8
{
	None,
	LoreCinematic,
	SurvivorTutorial,
	KillerTutorial,
	Count,
};
