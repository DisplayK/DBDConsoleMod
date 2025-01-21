#pragma once

#include "CoreMinimal.h"
#include "EPresenterPhase.generated.h"

UENUM(BlueprintType)
enum class EPresenterPhase : uint8
{
	Initialization,
	StartPresenting,
};
