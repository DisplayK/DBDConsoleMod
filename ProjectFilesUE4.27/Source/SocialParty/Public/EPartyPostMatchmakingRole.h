#pragma once

#include "CoreMinimal.h"
#include "EPartyPostMatchmakingRole.generated.h"

UENUM(BlueprintType)
enum class EPartyPostMatchmakingRole : uint8
{
	None,
	Client,
	Host,
};
