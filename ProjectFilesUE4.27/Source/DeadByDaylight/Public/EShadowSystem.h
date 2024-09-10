#pragma once

#include "CoreMinimal.h"
#include "EShadowSystem.generated.h"

UENUM(BlueprintType)
enum class EShadowSystem : uint8
{
	CascadedShadowMap,
	AdaptiveShadowMap,
};
