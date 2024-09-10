#pragma once

#include "CoreMinimal.h"
#include "EActivationStrategy.generated.h"

UENUM(BlueprintType)
enum class EActivationStrategy : uint8
{
	ActivateIfAnyTagMatches,
	ActivateIfAllTagMatches,
	DeactivateIfAnyTagMatches,
	DeactivateIfAllTagMatches,
	DeactivateWhenDependenciesAreDeactivated,
};
