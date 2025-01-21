#pragma once

#include "CoreMinimal.h"
#include "EAttackSuccess.generated.h"

UENUM(BlueprintType)
enum class EAttackSuccess : uint8
{
	VE_None,
	VE_Success,
	VE_Failure,
	VE_Obstructed,
};
