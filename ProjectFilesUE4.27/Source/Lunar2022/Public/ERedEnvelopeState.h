#pragma once

#include "CoreMinimal.h"
#include "ERedEnvelopeState.generated.h"

UENUM(BlueprintType)
enum class ERedEnvelopeState : uint8
{
	AuraVisibleToOwner,
	AuraVisibleToNonOwners,
	Disappeared,
};
