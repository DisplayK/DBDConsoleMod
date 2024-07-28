#pragma once

#include "CoreMinimal.h"
#include "ERemainingTimeFormat.generated.h"

UENUM(BlueprintType)
enum class ERemainingTimeFormat : uint8
{
	Short,
	Long,
	EndsIn,
};
