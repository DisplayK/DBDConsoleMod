#pragma once

#include "CoreMinimal.h"
#include "ELinkedVomitState.generated.h"

UENUM(BlueprintType)
enum class ELinkedVomitState : uint8
{
	Idle,
	Charging,
	Vomiting,
};
