#pragma once

#include "CoreMinimal.h"
#include "ERichPresenceUserType.generated.h"

UENUM(BlueprintType)
enum class ERichPresenceUserType : uint8
{
	Player,
	Server,
};
