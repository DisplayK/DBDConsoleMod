#pragma once

#include "CoreMinimal.h"
#include "EOwnership.generated.h"

UENUM(BlueprintType)
enum class EOwnership : uint8
{
	Owned,
	NotOwned,
	Any,
};
