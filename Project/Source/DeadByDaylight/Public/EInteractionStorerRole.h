#pragma once

#include "CoreMinimal.h"
#include "EInteractionStorerRole.generated.h"

UENUM(BlueprintType)
enum class EInteractionStorerRole : uint8
{
	None,
	AuthorityAndAutonomousProxy,
	ClientAndAutonomousProxy,
	AuthorityAndSimulatedProxy,
	ClientAndSimulatedProxy,
};
