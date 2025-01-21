#pragma once

#include "CoreMinimal.h"
#include "ERequestState.generated.h"

UENUM(BlueprintType)
enum class ERequestState : uint8
{
	VE_None,
	VE_Pending,
	VE_Success,
	VE_Fail,
};
