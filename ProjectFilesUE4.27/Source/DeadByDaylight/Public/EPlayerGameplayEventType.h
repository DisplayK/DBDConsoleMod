#pragma once

#include "CoreMinimal.h"
#include "EPlayerGameplayEventType.generated.h"

UENUM(BlueprintType)
enum class EPlayerGameplayEventType : uint8
{
	VE_UnhookedOther,
	VE_UntrappedOther,
	VE_HealedOther,
};
