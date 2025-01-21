#pragma once

#include "CoreMinimal.h"
#include "EContaminator.generated.h"

UENUM(BlueprintType)
enum class EContaminator : uint8
{
	Zombie,
	Killer,
	Mori,
};
