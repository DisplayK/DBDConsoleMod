#pragma once

#include "CoreMinimal.h"
#include "ECamperDamageState.generated.h"

UENUM(BlueprintType)
enum class ECamperDamageState : uint8
{
	VE_Healthy,
	VE_Injured,
	VE_KO,
	VE_Dead,
};
