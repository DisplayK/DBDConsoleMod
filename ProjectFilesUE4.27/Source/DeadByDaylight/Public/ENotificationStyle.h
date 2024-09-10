#pragma once

#include "CoreMinimal.h"
#include "ENotificationStyle.generated.h"

UENUM(BlueprintType)
enum class ENotificationStyle : uint8
{
	None,
	Game,
	Tutorial,
};
