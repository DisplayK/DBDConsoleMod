#pragma once

#include "CoreMinimal.h"
#include "EDisplayStandActorType.generated.h"

UENUM(BlueprintType)
enum class EDisplayStandActorType : uint8
{
	None,
	Character,
	Hook,
	Charm,
};
