#pragma once

#include "CoreMinimal.h"
#include "ELoadingTransitionType.generated.h"

UENUM(BlueprintType)
enum class ELoadingTransitionType : uint8
{
	TravelToMainMenu,
	TravelToInGame,
	TravelToSplash,
};
