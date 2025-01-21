#pragma once

#include "CoreMinimal.h"
#include "EKillerMatchResult.generated.h"

UENUM(BlueprintType)
enum class EKillerMatchResult : uint8
{
	EntityDispleased,
	BrutalKiller,
	RuthlessKiller,
	MercilessKiller,
};
