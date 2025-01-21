#pragma once

#include "CoreMinimal.h"
#include "ECameraOffsetState.generated.h"

UENUM(BlueprintType)
enum class ECameraOffsetState : uint8
{
	None,
	Default,
	Crouching,
	Crawling,
	Carried,
};
