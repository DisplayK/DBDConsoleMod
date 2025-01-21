#pragma once

#include "CoreMinimal.h"
#include "EPerkInteractionObjectType.generated.h"

UENUM(BlueprintType)
enum class EPerkInteractionObjectType : uint8
{
	Item,
	ChestClosed,
	ChestOpen,
};
