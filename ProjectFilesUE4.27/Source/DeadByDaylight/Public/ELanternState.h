#pragma once

#include "CoreMinimal.h"
#include "ELanternState.generated.h"

UENUM(BlueprintType)
enum class ELanternState : uint8
{
	Collectable,
	Collected,
	Destroyed,
	Destroyable,
};
