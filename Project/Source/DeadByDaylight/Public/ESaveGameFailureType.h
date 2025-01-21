#pragma once

#include "CoreMinimal.h"
#include "ESaveGameFailureType.generated.h"

UENUM(BlueprintType)
enum class ESaveGameFailureType : uint8
{
	None,
	PlayerID,
	InvalidGameInstance,
};
