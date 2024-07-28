#pragma once

#include "CoreMinimal.h"
#include "EPawnType.generated.h"

UENUM(BlueprintType)
enum class EPawnType : uint8
{
	VE_None,
	VE_Killer,
	VE_Survivor,
	VE_Sidekick,
};
