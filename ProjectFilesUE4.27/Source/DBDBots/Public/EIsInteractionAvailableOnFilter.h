#pragma once

#include "CoreMinimal.h"
#include "EIsInteractionAvailableOnFilter.generated.h"

UENUM(BlueprintType)
enum class EIsInteractionAvailableOnFilter : uint8
{
	Self,
	AnyFriend,
};
