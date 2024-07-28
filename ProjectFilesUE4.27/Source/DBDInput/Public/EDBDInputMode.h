#pragma once

#include "CoreMinimal.h"
#include "EDBDInputMode.generated.h"

UENUM(BlueprintType)
enum class EDBDInputMode : uint8
{
	None,
	Scaleform,
	UMG,
	Game,
};
