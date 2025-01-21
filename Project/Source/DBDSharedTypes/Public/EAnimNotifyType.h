#pragma once

#include "CoreMinimal.h"
#include "EAnimNotifyType.generated.h"

UENUM(BlueprintType)
enum class EAnimNotifyType : uint8
{
	VE_None,
	VE_Pickup,
	VE_Release,
};
