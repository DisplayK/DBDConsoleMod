#pragma once

#include "CoreMinimal.h"
#include "EDoorStatus.generated.h"

UENUM(BlueprintType)
enum class EDoorStatus : uint8
{
	Closed,
	Powered,
	Open,
};
