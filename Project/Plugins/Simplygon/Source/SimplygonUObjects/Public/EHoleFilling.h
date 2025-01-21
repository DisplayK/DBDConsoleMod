#pragma once

#include "CoreMinimal.h"
#include "EHoleFilling.generated.h"

UENUM(BlueprintType)
enum class EHoleFilling : uint8
{
	Disabled,
	Low,
	Medium,
	High,
};
