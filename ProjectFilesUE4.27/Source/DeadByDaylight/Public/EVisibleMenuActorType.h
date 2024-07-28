#pragma once

#include "CoreMinimal.h"
#include "EVisibleMenuActorType.generated.h"

UENUM(BlueprintType)
enum class EVisibleMenuActorType : uint8
{
	None,
	Pawn,
	Hook,
	Charm,
};
