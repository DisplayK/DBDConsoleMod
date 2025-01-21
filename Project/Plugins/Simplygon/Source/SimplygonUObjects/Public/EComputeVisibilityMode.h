#pragma once

#include "CoreMinimal.h"
#include "EComputeVisibilityMode.generated.h"

UENUM(BlueprintType)
enum class EComputeVisibilityMode : uint8
{
	DirectX,
	Software,
};
