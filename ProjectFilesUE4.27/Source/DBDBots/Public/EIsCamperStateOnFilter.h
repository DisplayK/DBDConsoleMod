#pragma once

#include "CoreMinimal.h"
#include "EIsCamperStateOnFilter.generated.h"

UENUM(BlueprintType)
enum class EIsCamperStateOnFilter : uint8
{
	OnBlackboardKey,
	OnOthersThanSelf,
};
