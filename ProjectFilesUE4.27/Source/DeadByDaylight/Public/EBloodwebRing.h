#pragma once

#include "CoreMinimal.h"
#include "EBloodwebRing.generated.h"

UENUM(BlueprintType)
enum class EBloodwebRing : uint8
{
	CenterRing,
	InnerRing,
	MiddleRing,
	OuterRing,
	EntityRing,
	RingCount,
	Count,
};
