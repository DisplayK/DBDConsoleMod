#pragma once

#include "CoreMinimal.h"
#include "EHealthStatus.generated.h"

UENUM(BlueprintType)
enum class EHealthStatus : uint8
{
	Healthy,
	Wounded,
	DeepWounded,
	Dying,
};
