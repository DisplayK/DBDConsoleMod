#pragma once

#include "CoreMinimal.h"
#include "EToastInputType.generated.h"

UENUM(BlueprintType)
enum class EToastInputType : uint8
{
	Toast_Accept,
	Toast_Reject,
	Toast_Close,
};
