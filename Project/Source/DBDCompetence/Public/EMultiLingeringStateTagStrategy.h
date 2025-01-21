#pragma once

#include "CoreMinimal.h"
#include "EMultiLingeringStateTagStrategy.generated.h"

UENUM(BlueprintType)
enum class EMultiLingeringStateTagStrategy : uint8
{
	And,
	Or,
};
