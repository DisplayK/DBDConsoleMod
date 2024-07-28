#pragma once

#include "CoreMinimal.h"
#include "EAIInvestigateSteps.generated.h"

UENUM(BlueprintType)
enum class EAIInvestigateSteps : uint8
{
	None,
	ToInvestigation,
	Investigating,
};
