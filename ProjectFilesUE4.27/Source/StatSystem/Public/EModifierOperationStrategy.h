#pragma once

#include "CoreMinimal.h"
#include "EModifierOperationStrategy.generated.h"

UENUM(BlueprintType)
enum class EModifierOperationStrategy : uint8
{
	Add,
	Subs,
	Mult,
	Div,
};
