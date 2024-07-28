#pragma once

#include "CoreMinimal.h"
#include "EConditionSubject.generated.h"

UENUM(BlueprintType)
enum class EConditionSubject : uint8
{
	Instigator,
	Target,
};
