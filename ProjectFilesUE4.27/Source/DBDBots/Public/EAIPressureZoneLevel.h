#pragma once

#include "CoreMinimal.h"
#include "EAIPressureZoneLevel.generated.h"

UENUM(BlueprintType)
enum class EAIPressureZoneLevel : uint8
{
	LMin,
	L01,
	L02,
	LMax,
};
