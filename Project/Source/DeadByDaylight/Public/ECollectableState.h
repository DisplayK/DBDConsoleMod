#pragma once

#include "CoreMinimal.h"
#include "ECollectableState.generated.h"

UENUM(BlueprintType)
enum class ECollectableState : uint8
{
	OnGround,
	Stored,
	Equipped,
	ToBeDropped,
	InSearchable,
};
