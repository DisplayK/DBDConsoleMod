#pragma once

#include "CoreMinimal.h"
#include "EItemDomain.generated.h"

UENUM(BlueprintType)
enum class EItemDomain : uint8
{
	Store,
	Local,
	Any,
};
