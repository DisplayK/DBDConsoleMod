#pragma once

#include "CoreMinimal.h"
#include "EMirrorsRequestLogLevel.generated.h"

UENUM(BlueprintType)
enum class EMirrorsRequestLogLevel : uint8
{
	None,
	NetworkError,
	HttpError,
	All,
};
